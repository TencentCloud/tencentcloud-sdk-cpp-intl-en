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
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.</b>
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
                     * 获取MPS template type. Filter results by the MPS template type you want to query. Value:
<li>Transcode: Query the transcoding template list.</li>
<li>AIAnalysis: Create intelligent analysis template.</li>
<li>SmartSubtitle: Create an intelligent subtitle template.</li>
<li>SmartErase: Create an intelligent erasure template.</li>
                     * @return TemplateType MPS template type. Filter results by the MPS template type you want to query. Value:
<li>Transcode: Query the transcoding template list.</li>
<li>AIAnalysis: Create intelligent analysis template.</li>
<li>SmartSubtitle: Create an intelligent subtitle template.</li>
<li>SmartErase: Create an intelligent erasure template.</li>
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置MPS template type. Filter results by the MPS template type you want to query. Value:
<li>Transcode: Query the transcoding template list.</li>
<li>AIAnalysis: Create intelligent analysis template.</li>
<li>SmartSubtitle: Create an intelligent subtitle template.</li>
<li>SmartErase: Create an intelligent erasure template.</li>
                     * @param _templateType MPS template type. Filter results by the MPS template type you want to query. Value:
<li>Transcode: Query the transcoding template list.</li>
<li>AIAnalysis: Create intelligent analysis template.</li>
<li>SmartSubtitle: Create an intelligent subtitle template.</li>
<li>SmartErase: Create an intelligent erasure template.</li>
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
                     * 获取MPS queries template parameters. This parameter is used for passing through to the media processing service (MPS) to query the MPS template list from the VOD side. Currently only support querying templates of the following task types via this method:
1. Audio and video enhancement: Only support filling in the content of Definitions, Type, Name, Offset, and Limit parameters in the "retrieval transcoding template list" (https://www.tencentcloud.com/document/product/862/37593?from_cn_redirect=1) interface. Currently only support configuring the above parameters in template, other parameters not required. If other parameters are included, system will automatically ignore.
2. Intelligent Analysis: Only support filling in the content of Definitions, Type, Name, Offset, and Limit parameters from the "Search Intelligent Analysis Template List" (https://www.tencentcloud.com/document/product/862/40247?from_cn_redirect=1) interface. Currently only support configuring the above parameters in the Template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.
3. Smart subtitling: Only supports filling in the content of Definitions, Type, Name, Offset, and Limit parameters from the "Get Smart Subtitling Template List" (https://www.tencentcloud.com/document/product/862/117002?from_cn_redirect=1) interface. Currently only support configuring the above parameters in template, other parameters not required. If other parameters are included, system will automatically ignore.
4. Intelligent erasure: Only supports filling in the content of Definitions, Type, Name, Offset, and Limit parameters in the "Search intelligent erasure template list" (https://www.tencentcloud.com/document/product/862/123733?from_cn_redirect=1) interface. Currently only support configuring the above parameters in template. Other parameters are not required. If other parameters are included, the system will automatically ignore.
                     * @return MPSDescribeTemplateParams MPS queries template parameters. This parameter is used for passing through to the media processing service (MPS) to query the MPS template list from the VOD side. Currently only support querying templates of the following task types via this method:
1. Audio and video enhancement: Only support filling in the content of Definitions, Type, Name, Offset, and Limit parameters in the "retrieval transcoding template list" (https://www.tencentcloud.com/document/product/862/37593?from_cn_redirect=1) interface. Currently only support configuring the above parameters in template, other parameters not required. If other parameters are included, system will automatically ignore.
2. Intelligent Analysis: Only support filling in the content of Definitions, Type, Name, Offset, and Limit parameters from the "Search Intelligent Analysis Template List" (https://www.tencentcloud.com/document/product/862/40247?from_cn_redirect=1) interface. Currently only support configuring the above parameters in the Template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.
3. Smart subtitling: Only supports filling in the content of Definitions, Type, Name, Offset, and Limit parameters from the "Get Smart Subtitling Template List" (https://www.tencentcloud.com/document/product/862/117002?from_cn_redirect=1) interface. Currently only support configuring the above parameters in template, other parameters not required. If other parameters are included, system will automatically ignore.
4. Intelligent erasure: Only supports filling in the content of Definitions, Type, Name, Offset, and Limit parameters in the "Search intelligent erasure template list" (https://www.tencentcloud.com/document/product/862/123733?from_cn_redirect=1) interface. Currently only support configuring the above parameters in template. Other parameters are not required. If other parameters are included, the system will automatically ignore.
                     * 
                     */
                    std::string GetMPSDescribeTemplateParams() const;

                    /**
                     * 设置MPS queries template parameters. This parameter is used for passing through to the media processing service (MPS) to query the MPS template list from the VOD side. Currently only support querying templates of the following task types via this method:
1. Audio and video enhancement: Only support filling in the content of Definitions, Type, Name, Offset, and Limit parameters in the "retrieval transcoding template list" (https://www.tencentcloud.com/document/product/862/37593?from_cn_redirect=1) interface. Currently only support configuring the above parameters in template, other parameters not required. If other parameters are included, system will automatically ignore.
2. Intelligent Analysis: Only support filling in the content of Definitions, Type, Name, Offset, and Limit parameters from the "Search Intelligent Analysis Template List" (https://www.tencentcloud.com/document/product/862/40247?from_cn_redirect=1) interface. Currently only support configuring the above parameters in the Template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.
3. Smart subtitling: Only supports filling in the content of Definitions, Type, Name, Offset, and Limit parameters from the "Get Smart Subtitling Template List" (https://www.tencentcloud.com/document/product/862/117002?from_cn_redirect=1) interface. Currently only support configuring the above parameters in template, other parameters not required. If other parameters are included, system will automatically ignore.
4. Intelligent erasure: Only supports filling in the content of Definitions, Type, Name, Offset, and Limit parameters in the "Search intelligent erasure template list" (https://www.tencentcloud.com/document/product/862/123733?from_cn_redirect=1) interface. Currently only support configuring the above parameters in template. Other parameters are not required. If other parameters are included, the system will automatically ignore.
                     * @param _mPSDescribeTemplateParams MPS queries template parameters. This parameter is used for passing through to the media processing service (MPS) to query the MPS template list from the VOD side. Currently only support querying templates of the following task types via this method:
1. Audio and video enhancement: Only support filling in the content of Definitions, Type, Name, Offset, and Limit parameters in the "retrieval transcoding template list" (https://www.tencentcloud.com/document/product/862/37593?from_cn_redirect=1) interface. Currently only support configuring the above parameters in template, other parameters not required. If other parameters are included, system will automatically ignore.
2. Intelligent Analysis: Only support filling in the content of Definitions, Type, Name, Offset, and Limit parameters from the "Search Intelligent Analysis Template List" (https://www.tencentcloud.com/document/product/862/40247?from_cn_redirect=1) interface. Currently only support configuring the above parameters in the Template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.
3. Smart subtitling: Only supports filling in the content of Definitions, Type, Name, Offset, and Limit parameters from the "Get Smart Subtitling Template List" (https://www.tencentcloud.com/document/product/862/117002?from_cn_redirect=1) interface. Currently only support configuring the above parameters in template, other parameters not required. If other parameters are included, system will automatically ignore.
4. Intelligent erasure: Only supports filling in the content of Definitions, Type, Name, Offset, and Limit parameters in the "Search intelligent erasure template list" (https://www.tencentcloud.com/document/product/862/123733?from_cn_redirect=1) interface. Currently only support configuring the above parameters in template. Other parameters are not required. If other parameters are included, the system will automatically ignore.
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
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * MPS template type. Filter results by the MPS template type you want to query. Value:
<li>Transcode: Query the transcoding template list.</li>
<li>AIAnalysis: Create intelligent analysis template.</li>
<li>SmartSubtitle: Create an intelligent subtitle template.</li>
<li>SmartErase: Create an intelligent erasure template.</li>
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * MPS queries template parameters. This parameter is used for passing through to the media processing service (MPS) to query the MPS template list from the VOD side. Currently only support querying templates of the following task types via this method:
1. Audio and video enhancement: Only support filling in the content of Definitions, Type, Name, Offset, and Limit parameters in the "retrieval transcoding template list" (https://www.tencentcloud.com/document/product/862/37593?from_cn_redirect=1) interface. Currently only support configuring the above parameters in template, other parameters not required. If other parameters are included, system will automatically ignore.
2. Intelligent Analysis: Only support filling in the content of Definitions, Type, Name, Offset, and Limit parameters from the "Search Intelligent Analysis Template List" (https://www.tencentcloud.com/document/product/862/40247?from_cn_redirect=1) interface. Currently only support configuring the above parameters in the Template. Other parameters are not required. If other parameters are included, the system will automatically ignore them.
3. Smart subtitling: Only supports filling in the content of Definitions, Type, Name, Offset, and Limit parameters from the "Get Smart Subtitling Template List" (https://www.tencentcloud.com/document/product/862/117002?from_cn_redirect=1) interface. Currently only support configuring the above parameters in template, other parameters not required. If other parameters are included, system will automatically ignore.
4. Intelligent erasure: Only supports filling in the content of Definitions, Type, Name, Offset, and Limit parameters in the "Search intelligent erasure template list" (https://www.tencentcloud.com/document/product/862/123733?from_cn_redirect=1) interface. Currently only support configuring the above parameters in template. Other parameters are not required. If other parameters are included, the system will automatically ignore.
                     */
                    std::string m_mPSDescribeTemplateParams;
                    bool m_mPSDescribeTemplateParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMPSTEMPLATESREQUEST_H_
