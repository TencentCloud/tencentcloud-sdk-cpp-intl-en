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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_WEBSECURITYTEMPLATES_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_WEBSECURITYTEMPLATES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityPolicy.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Security configuration of the Template.
                */
                class WebSecurityTemplates : public AbstractModel
                {
                public:
                    WebSecurityTemplates();
                    ~WebSecurityTemplates() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ID of the policy template</p>
                     * @return TemplateId <p>ID of the policy template</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>ID of the policy template</p>
                     * @param _templateId <p>ID of the policy template</p>
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
                     * 获取<p>Policy template name. It consists of Chinese, English, digits, and underscores. It cannot begin with an underscore and its length cannot exceed 32 characters.</p>
                     * @return TemplateName <p>Policy template name. It consists of Chinese, English, digits, and underscores. It cannot begin with an underscore and its length cannot exceed 32 characters.</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>Policy template name. It consists of Chinese, English, digits, and underscores. It cannot begin with an underscore and its length cannot exceed 32 characters.</p>
                     * @param _templateName <p>Policy template name. It consists of Chinese, English, digits, and underscores. It cannot begin with an underscore and its length cannot exceed 32 characters.</p>
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取<p>Policy settings of a policy template apply to all domain names associated with the template.</p>
                     * @return Policy <p>Policy settings of a policy template apply to all domain names associated with the template.</p>
                     * 
                     */
                    SecurityPolicy GetPolicy() const;

                    /**
                     * 设置<p>Policy settings of a policy template apply to all domain names associated with the template.</p>
                     * @param _policy <p>Policy settings of a policy template apply to all domain names associated with the template.</p>
                     * 
                     */
                    void SetPolicy(const SecurityPolicy& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                private:

                    /**
                     * <p>ID of the policy template</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>Policy template name. It consists of Chinese, English, digits, and underscores. It cannot begin with an underscore and its length cannot exceed 32 characters.</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>Policy settings of a policy template apply to all domain names associated with the template.</p>
                     */
                    SecurityPolicy m_policy;
                    bool m_policyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WEBSECURITYTEMPLATES_H_
