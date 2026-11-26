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
                     * 获取Site ID. This parameter clarifies the site to which the policy template belongs in terms of access permission.
                     * @return ZoneId Site ID. This parameter clarifies the site to which the policy template belongs in terms of access permission.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID. This parameter clarifies the site to which the policy template belongs in terms of access permission.
                     * @param _zoneId Site ID. This parameter clarifies the site to which the policy template belongs in terms of access permission.
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
                     * 获取Policy template name. It consists of Chinese characters, letters, digits, and underscores. It cannot begin with an underscore and cannot exceed 32 characters in length.
                     * @return TemplateName Policy template name. It consists of Chinese characters, letters, digits, and underscores. It cannot begin with an underscore and cannot exceed 32 characters in length.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Policy template name. It consists of Chinese characters, letters, digits, and underscores. It cannot begin with an underscore and cannot exceed 32 characters in length.
                     * @param _templateName Policy template name. It consists of Chinese characters, letters, digits, and underscores. It cannot begin with an underscore and cannot exceed 32 characters in length.
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
                     * 获取Configuration file content of the security policy template. If the field is empty, a default configuration is generated. Currently supports exception rules, custom rules, rate limiting rules, and managed rule configuration in the Web protection module. Configure the security policy through expression syntax. Bot management rule configuration is not currently supported and is under development.
                     * @return SecurityPolicy Configuration file content of the security policy template. If the field is empty, a default configuration is generated. Currently supports exception rules, custom rules, rate limiting rules, and managed rule configuration in the Web protection module. Configure the security policy through expression syntax. Bot management rule configuration is not currently supported and is under development.
                     * 
                     */
                    SecurityPolicy GetSecurityPolicy() const;

                    /**
                     * 设置Configuration file content of the security policy template. If the field is empty, a default configuration is generated. Currently supports exception rules, custom rules, rate limiting rules, and managed rule configuration in the Web protection module. Configure the security policy through expression syntax. Bot management rule configuration is not currently supported and is under development.
                     * @param _securityPolicy Configuration file content of the security policy template. If the field is empty, a default configuration is generated. Currently supports exception rules, custom rules, rate limiting rules, and managed rule configuration in the Web protection module. Configure the security policy through expression syntax. Bot management rule configuration is not currently supported and is under development.
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
                     * Site ID. This parameter clarifies the site to which the policy template belongs in terms of access permission.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Policy template name. It consists of Chinese characters, letters, digits, and underscores. It cannot begin with an underscore and cannot exceed 32 characters in length.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Configuration file content of the security policy template. If the field is empty, a default configuration is generated. Currently supports exception rules, custom rules, rate limiting rules, and managed rule configuration in the Web protection module. Configure the security policy through expression syntax. Bot management rule configuration is not currently supported and is under development.
                     */
                    SecurityPolicy m_securityPolicy;
                    bool m_securityPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEWEBSECURITYTEMPLATEREQUEST_H_
