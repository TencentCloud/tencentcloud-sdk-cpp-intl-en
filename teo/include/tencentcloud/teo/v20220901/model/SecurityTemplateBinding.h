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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYTEMPLATEBINDING_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYTEMPLATEBINDING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/TemplateScope.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bindings of a security policy template
                */
                class SecurityTemplateBinding : public AbstractModel
                {
                public:
                    SecurityTemplateBinding();
                    ~SecurityTemplateBinding() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取template ID
                     * @return TemplateId template ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置template ID
                     * @param _templateId template ID
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Binding status of the template.
                     * @return TemplateScope Binding status of the template.
                     * 
                     */
                    std::vector<TemplateScope> GetTemplateScope() const;

                    /**
                     * 设置Binding status of the template.
                     * @param _templateScope Binding status of the template.
                     * 
                     */
                    void SetTemplateScope(const std::vector<TemplateScope>& _templateScope);

                    /**
                     * 判断参数 TemplateScope 是否已赋值
                     * @return TemplateScope 是否已赋值
                     * 
                     */
                    bool TemplateScopeHasBeenSet() const;

                private:

                    /**
                     * template ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Binding status of the template.
                     */
                    std::vector<TemplateScope> m_templateScope;
                    bool m_templateScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYTEMPLATEBINDING_H_
