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
                     * 获取<p><b>VOD <a href="/document/product/266/14574">application</a> ID.</b></p>
                     * @return SubAppId <p><b>VOD <a href="/document/product/266/14574">application</a> ID.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>VOD <a href="/document/product/266/14574">application</a> ID.</b></p>
                     * @param _subAppId <p><b>VOD <a href="/document/product/266/14574">application</a> ID.</b></p>
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
                     * 获取<p>Type of MPS template that needs to be deleted. Parameter values:</p><li>AIAnalysis: Create an intelligent analysis template.</li><li>SmartSubtitle: Create an intelligent subtitle template.</li><li>SmartErase: Create an intelligent erasure template.</li><li>EmbedSubtitle: Subtitle suppression template.</li>
                     * @return TemplateType <p>Type of MPS template that needs to be deleted. Parameter values:</p><li>AIAnalysis: Create an intelligent analysis template.</li><li>SmartSubtitle: Create an intelligent subtitle template.</li><li>SmartErase: Create an intelligent erasure template.</li><li>EmbedSubtitle: Subtitle suppression template.</li>
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置<p>Type of MPS template that needs to be deleted. Parameter values:</p><li>AIAnalysis: Create an intelligent analysis template.</li><li>SmartSubtitle: Create an intelligent subtitle template.</li><li>SmartErase: Create an intelligent erasure template.</li><li>EmbedSubtitle: Subtitle suppression template.</li>
                     * @param _templateType <p>Type of MPS template that needs to be deleted. Parameter values:</p><li>AIAnalysis: Create an intelligent analysis template.</li><li>SmartSubtitle: Create an intelligent subtitle template.</li><li>SmartErase: Create an intelligent erasure template.</li><li>EmbedSubtitle: Subtitle suppression template.</li>
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
                     * 获取<p>Unique identifier of the MPS task template.</p>
                     * @return Definition <p>Unique identifier of the MPS task template.</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>Unique identifier of the MPS task template.</p>
                     * @param _definition <p>Unique identifier of the MPS task template.</p>
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
                     * <p><b>VOD <a href="/document/product/266/14574">application</a> ID.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Type of MPS template that needs to be deleted. Parameter values:</p><li>AIAnalysis: Create an intelligent analysis template.</li><li>SmartSubtitle: Create an intelligent subtitle template.</li><li>SmartErase: Create an intelligent erasure template.</li><li>EmbedSubtitle: Subtitle suppression template.</li>
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * <p>Unique identifier of the MPS task template.</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DELETEMPSTEMPLATEREQUEST_H_
