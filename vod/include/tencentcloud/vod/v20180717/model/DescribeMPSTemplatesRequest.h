/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMPSTEMPLATESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMPSTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeMPSTemplates request structure.
                */
                class DescribeMPSTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeMPSTemplatesRequest();
                    ~DescribeMPSTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>VOD <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     * @return SubAppId <p><b>VOD <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>VOD <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     * @param _subAppId <p><b>VOD <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>MPS template type. Filter results by the type of MPS template you want to query. Parameter Value:</p><li>AIAnalysis: intelligent analysis template.</li><li>SmartSubtitle: smart subtitling template.</li><li>SmartErase: intelligent erasure template.</li><li>EmbedSubtitle: subtitle suppression template.</li>
                     * @return TemplateType <p>MPS template type. Filter results by the type of MPS template you want to query. Parameter Value:</p><li>AIAnalysis: intelligent analysis template.</li><li>SmartSubtitle: smart subtitling template.</li><li>SmartErase: intelligent erasure template.</li><li>EmbedSubtitle: subtitle suppression template.</li>
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置<p>MPS template type. Filter results by the type of MPS template you want to query. Parameter Value:</p><li>AIAnalysis: intelligent analysis template.</li><li>SmartSubtitle: smart subtitling template.</li><li>SmartErase: intelligent erasure template.</li><li>EmbedSubtitle: subtitle suppression template.</li>
                     * @param _templateType <p>MPS template type. Filter results by the type of MPS template you want to query. Parameter Value:</p><li>AIAnalysis: intelligent analysis template.</li><li>SmartSubtitle: smart subtitling template.</li><li>SmartErase: intelligent erasure template.</li><li>EmbedSubtitle: subtitle suppression template.</li>
                     * 
                     */
                    void SetTemplateType(const std::string& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取<p>MPS query template parameter. This parameter is used to pass through to the media processing service (MPS) to query the MPS task template list from the VOD side. Currently, it only supports querying templates of the following task types through this method:</p><ol><li>Audio and video enhancement: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/37593?from_cn_redirect=1">Get transcoding template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>AI analysis: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/40247?from_cn_redirect=1">Get AI analysis template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Smart subtitling: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/117002?from_cn_redirect=1">Get smart subtitling template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent erasure: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/123733?from_cn_redirect=1">Get intelligent erasure template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li></ol>
                     * @return MPSDescribeTemplateParams <p>MPS query template parameter. This parameter is used to pass through to the media processing service (MPS) to query the MPS task template list from the VOD side. Currently, it only supports querying templates of the following task types through this method:</p><ol><li>Audio and video enhancement: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/37593?from_cn_redirect=1">Get transcoding template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>AI analysis: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/40247?from_cn_redirect=1">Get AI analysis template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Smart subtitling: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/117002?from_cn_redirect=1">Get smart subtitling template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent erasure: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/123733?from_cn_redirect=1">Get intelligent erasure template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li></ol>
                     * 
                     */
                    std::string GetMPSDescribeTemplateParams() const;

                    /**
                     * 设置<p>MPS query template parameter. This parameter is used to pass through to the media processing service (MPS) to query the MPS task template list from the VOD side. Currently, it only supports querying templates of the following task types through this method:</p><ol><li>Audio and video enhancement: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/37593?from_cn_redirect=1">Get transcoding template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>AI analysis: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/40247?from_cn_redirect=1">Get AI analysis template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Smart subtitling: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/117002?from_cn_redirect=1">Get smart subtitling template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent erasure: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/123733?from_cn_redirect=1">Get intelligent erasure template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li></ol>
                     * @param _mPSDescribeTemplateParams <p>MPS query template parameter. This parameter is used to pass through to the media processing service (MPS) to query the MPS task template list from the VOD side. Currently, it only supports querying templates of the following task types through this method:</p><ol><li>Audio and video enhancement: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/37593?from_cn_redirect=1">Get transcoding template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>AI analysis: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/40247?from_cn_redirect=1">Get AI analysis template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Smart subtitling: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/117002?from_cn_redirect=1">Get smart subtitling template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent erasure: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/123733?from_cn_redirect=1">Get intelligent erasure template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li></ol>
                     * 
                     */
                    void SetMPSDescribeTemplateParams(const std::string& _mPSDescribeTemplateParams);

                    /**
                     * 判断参数 MPSDescribeTemplateParams 是否已赋值
                     * @return MPSDescribeTemplateParams 是否已赋值
                     * 
                     */
                    bool MPSDescribeTemplateParamsHasBeenSet() const;

                private:

                    /**
                     * <p><b>VOD <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>MPS template type. Filter results by the type of MPS template you want to query. Parameter Value:</p><li>AIAnalysis: intelligent analysis template.</li><li>SmartSubtitle: smart subtitling template.</li><li>SmartErase: intelligent erasure template.</li><li>EmbedSubtitle: subtitle suppression template.</li>
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * <p>MPS query template parameter. This parameter is used to pass through to the media processing service (MPS) to query the MPS task template list from the VOD side. Currently, it only supports querying templates of the following task types through this method:</p><ol><li>Audio and video enhancement: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/37593?from_cn_redirect=1">Get transcoding template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>AI analysis: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/40247?from_cn_redirect=1">Get AI analysis template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Smart subtitling: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/117002?from_cn_redirect=1">Get smart subtitling template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li><li>Intelligent erasure: only supports filling in the content of the Definitions, Type, Name, Offset, and Limit parameters in the <a href="https://www.tencentcloud.com/document/product/862/123733?from_cn_redirect=1">Get intelligent erasure template list</a> API. Currently, only the above parameters can be configured in the template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.</li></ol>
                     */
                    std::string m_mPSDescribeTemplateParams;
                    bool m_mPSDescribeTemplateParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMPSTEMPLATESREQUEST_H_
