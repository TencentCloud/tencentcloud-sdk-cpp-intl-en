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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DELETEMPSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DELETEMPSTEMPLATEREQUEST_H_

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
                * DeleteMPSTemplate request structure.
                */
                class DeleteMPSTemplateRequest : public AbstractModel
                {
                public:
                    DeleteMPSTemplateRequest();
                    ~DeleteMPSTemplateRequest() = default;
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
                     * 获取Type of the MPS Template that needs to be deleted. Value:
<li>Transcode: delete transcoding template.</li>
<li>AIAnalysis: Create intelligent analysis template.</li>
<li>SmartSubtitle: Create an intelligent subtitle template.</li>
<li>SmartErase: Create an intelligent erasure template.</li>
                     * @return TemplateType Type of the MPS Template that needs to be deleted. Value:
<li>Transcode: delete transcoding template.</li>
<li>AIAnalysis: Create intelligent analysis template.</li>
<li>SmartSubtitle: Create an intelligent subtitle template.</li>
<li>SmartErase: Create an intelligent erasure template.</li>
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置Type of the MPS Template that needs to be deleted. Value:
<li>Transcode: delete transcoding template.</li>
<li>AIAnalysis: Create intelligent analysis template.</li>
<li>SmartSubtitle: Create an intelligent subtitle template.</li>
<li>SmartErase: Create an intelligent erasure template.</li>
                     * @param _templateType Type of the MPS Template that needs to be deleted. Value:
<li>Transcode: delete transcoding template.</li>
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
                     * 获取Template Unique Identifier of the MPS task.
                     * @return Definition Template Unique Identifier of the MPS task.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Template Unique Identifier of the MPS task.
                     * @param _definition Template Unique Identifier of the MPS task.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Type of the MPS Template that needs to be deleted. Value:
<li>Transcode: delete transcoding template.</li>
<li>AIAnalysis: Create intelligent analysis template.</li>
<li>SmartSubtitle: Create an intelligent subtitle template.</li>
<li>SmartErase: Create an intelligent erasure template.</li>
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * Template Unique Identifier of the MPS task.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DELETEMPSTEMPLATEREQUEST_H_
