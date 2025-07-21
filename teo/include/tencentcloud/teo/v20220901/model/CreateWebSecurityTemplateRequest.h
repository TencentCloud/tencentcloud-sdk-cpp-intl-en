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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEWEBSECURITYTEMPLATEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEWEBSECURITYTEMPLATEREQUEST_H_

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
                * CreateWebSecurityTemplate request structure.
                */
                class CreateWebSecurityTemplateRequest : public AbstractModel
                {
                public:
                    CreateWebSecurityTemplateRequest();
                    ~CreateWebSecurityTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID. Explicitly identifies the zone to which the policy template belongs for access control purposes.
                     * @return ZoneId Zone ID. Explicitly identifies the zone to which the policy template belongs for access control purposes.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID. Explicitly identifies the zone to which the policy template belongs for access control purposes.
                     * @param _zoneId Zone ID. Explicitly identifies the zone to which the policy template belongs for access control purposes.
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
                     * 获取Policy template name. Composed of Chinese characters, letters, digits, and underscores. Cannot begin with an underscore and must be less than or equal to 32 characters.
                     * @return TemplateName Policy template name. Composed of Chinese characters, letters, digits, and underscores. Cannot begin with an underscore and must be less than or equal to 32 characters.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Policy template name. Composed of Chinese characters, letters, digits, and underscores. Cannot begin with an underscore and must be less than or equal to 32 characters.
                     * @param _templateName Policy template name. Composed of Chinese characters, letters, digits, and underscores. Cannot begin with an underscore and must be less than or equal to 32 characters.
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
                     * 获取Web security policy template configuration. Generates default config if empty. Supported: Exception rules, custom rules, rate limiting rules, managed rules. Not supported: Bot management rules (under development).
                     * @return SecurityPolicy Web security policy template configuration. Generates default config if empty. Supported: Exception rules, custom rules, rate limiting rules, managed rules. Not supported: Bot management rules (under development).
                     * 
                     */
                    SecurityPolicy GetSecurityPolicy() const;

                    /**
                     * 设置Web security policy template configuration. Generates default config if empty. Supported: Exception rules, custom rules, rate limiting rules, managed rules. Not supported: Bot management rules (under development).
                     * @param _securityPolicy Web security policy template configuration. Generates default config if empty. Supported: Exception rules, custom rules, rate limiting rules, managed rules. Not supported: Bot management rules (under development).
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
                     * Zone ID. Explicitly identifies the zone to which the policy template belongs for access control purposes.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Policy template name. Composed of Chinese characters, letters, digits, and underscores. Cannot begin with an underscore and must be less than or equal to 32 characters.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Web security policy template configuration. Generates default config if empty. Supported: Exception rules, custom rules, rate limiting rules, managed rules. Not supported: Bot management rules (under development).
                     */
                    SecurityPolicy m_securityPolicy;
                    bool m_securityPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEWEBSECURITYTEMPLATEREQUEST_H_
