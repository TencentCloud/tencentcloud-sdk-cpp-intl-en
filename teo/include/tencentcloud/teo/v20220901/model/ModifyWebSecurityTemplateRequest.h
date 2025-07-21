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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYWEBSECURITYTEMPLATEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYWEBSECURITYTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyWebSecurityTemplate request structure.
                */
                class ModifyWebSecurityTemplateRequest : public AbstractModel
                {
                public:
                    ModifyWebSecurityTemplateRequest();
                    ~ModifyWebSecurityTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID. The zone to which the target policy template belongs for access control. Use the DescribeWebSecurityTemplates interface to query the zone of the policy template.
                     * @return ZoneId Zone ID. The zone to which the target policy template belongs for access control. Use the DescribeWebSecurityTemplates interface to query the zone of the policy template.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID. The zone to which the target policy template belongs for access control. Use the DescribeWebSecurityTemplates interface to query the zone of the policy template.
                     * @param _zoneId Zone ID. The zone to which the target policy template belongs for access control. Use the DescribeWebSecurityTemplates interface to query the zone of the policy template.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Policy template ID.
                     * @return TemplateId Policy template ID.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Policy template ID.
                     * @param _templateId Policy template ID.
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
                     * 获取Modified policy template name. Consists of Chinese characters, letters, numbers, and underscores, cannot start with an underscore, and must not exceed 32 characters. If the field is empty, no modification will be made.
                     * @return TemplateName Modified policy template name. Consists of Chinese characters, letters, numbers, and underscores, cannot start with an underscore, and must not exceed 32 characters. If the field is empty, no modification will be made.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Modified policy template name. Consists of Chinese characters, letters, numbers, and underscores, cannot start with an underscore, and must not exceed 32 characters. If the field is empty, no modification will be made.
                     * @param _templateName Modified policy template name. Consists of Chinese characters, letters, numbers, and underscores, cannot start with an underscore, and must not exceed 32 characters. If the field is empty, no modification will be made.
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
                     * 获取Security policy template configuration content. If the value is empty, no modification will be made; submodule structures not passed in will not be modified. Currently supports exception rules, custom rules, rate limiting rules, and managed rule configurations in the Web Security module, using expression syntax for security policy configuration. Bot management rule configuration is not yet supported (under development).
Special note: When passing a submodule structure as input, ensure all rule content to be retained is included. Rule content not passed in will be treated as deleted.
                     * @return SecurityPolicy Security policy template configuration content. If the value is empty, no modification will be made; submodule structures not passed in will not be modified. Currently supports exception rules, custom rules, rate limiting rules, and managed rule configurations in the Web Security module, using expression syntax for security policy configuration. Bot management rule configuration is not yet supported (under development).
Special note: When passing a submodule structure as input, ensure all rule content to be retained is included. Rule content not passed in will be treated as deleted.
                     * 
                     */
                    SecurityPolicy GetSecurityPolicy() const;

                    /**
                     * 设置Security policy template configuration content. If the value is empty, no modification will be made; submodule structures not passed in will not be modified. Currently supports exception rules, custom rules, rate limiting rules, and managed rule configurations in the Web Security module, using expression syntax for security policy configuration. Bot management rule configuration is not yet supported (under development).
Special note: When passing a submodule structure as input, ensure all rule content to be retained is included. Rule content not passed in will be treated as deleted.
                     * @param _securityPolicy Security policy template configuration content. If the value is empty, no modification will be made; submodule structures not passed in will not be modified. Currently supports exception rules, custom rules, rate limiting rules, and managed rule configurations in the Web Security module, using expression syntax for security policy configuration. Bot management rule configuration is not yet supported (under development).
Special note: When passing a submodule structure as input, ensure all rule content to be retained is included. Rule content not passed in will be treated as deleted.
                     * 
                     */
                    void SetSecurityPolicy(const SecurityPolicy& _securityPolicy);

                    /**
                     * 判断参数 SecurityPolicy 是否已赋值
                     * @return SecurityPolicy 是否已赋值
                     * 
                     */
                    bool SecurityPolicyHasBeenSet() const;

                private:

                    /**
                     * Zone ID. The zone to which the target policy template belongs for access control. Use the DescribeWebSecurityTemplates interface to query the zone of the policy template.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Policy template ID.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Modified policy template name. Consists of Chinese characters, letters, numbers, and underscores, cannot start with an underscore, and must not exceed 32 characters. If the field is empty, no modification will be made.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Security policy template configuration content. If the value is empty, no modification will be made; submodule structures not passed in will not be modified. Currently supports exception rules, custom rules, rate limiting rules, and managed rule configurations in the Web Security module, using expression syntax for security policy configuration. Bot management rule configuration is not yet supported (under development).
Special note: When passing a submodule structure as input, ensure all rule content to be retained is included. Rule content not passed in will be treated as deleted.
                     */
                    SecurityPolicy m_securityPolicy;
                    bool m_securityPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYWEBSECURITYTEMPLATEREQUEST_H_
