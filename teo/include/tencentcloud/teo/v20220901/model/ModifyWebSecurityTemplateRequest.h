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
                     * 获取Site ID. Requires the input of the site to which the target policy template belongs in terms of access privileges. You can use the DescribeWebSecurityTemplates API to query the site to which the policy template belongs.
                     * @return ZoneId Site ID. Requires the input of the site to which the target policy template belongs in terms of access privileges. You can use the DescribeWebSecurityTemplates API to query the site to which the policy template belongs.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID. Requires the input of the site to which the target policy template belongs in terms of access privileges. You can use the DescribeWebSecurityTemplates API to query the site to which the policy template belongs.
                     * @param _zoneId Site ID. Requires the input of the site to which the target policy template belongs in terms of access privileges. You can use the DescribeWebSecurityTemplates API to query the site to which the policy template belongs.
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
                     * 获取Name of the policy template after modification. It consists of Chinese characters, letters, digits, and underscores, cannot begin with an underline, and the length cannot exceed 32 characters. If the field is empty, no modification is made.
                     * @return TemplateName Name of the policy template after modification. It consists of Chinese characters, letters, digits, and underscores, cannot begin with an underline, and the length cannot exceed 32 characters. If the field is empty, no modification is made.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Name of the policy template after modification. It consists of Chinese characters, letters, digits, and underscores, cannot begin with an underline, and the length cannot exceed 32 characters. If the field is empty, no modification is made.
                     * @param _templateName Name of the policy template after modification. It consists of Chinese characters, letters, digits, and underscores, cannot begin with an underline, and the length cannot exceed 32 characters. If the field is empty, no modification is made.
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
                     * 获取Configuration content of the security policy template. If the value is empty, no modification is made. Submodule structures that are not passed in will not be modified. Currently supports exception rules, custom rules, rate limiting rules, and managed rules in the Web protection module. Configure the security policy through expression syntax. Bot management rule configuration is not currently supported and is under development.
Special note: When a submodule structure is passed in, please ensure that all rule content to be retained is carried. Rule content not passed in is deemed as deletion.
                     * @return SecurityPolicy Configuration content of the security policy template. If the value is empty, no modification is made. Submodule structures that are not passed in will not be modified. Currently supports exception rules, custom rules, rate limiting rules, and managed rules in the Web protection module. Configure the security policy through expression syntax. Bot management rule configuration is not currently supported and is under development.
Special note: When a submodule structure is passed in, please ensure that all rule content to be retained is carried. Rule content not passed in is deemed as deletion.
                     * 
                     */
                    SecurityPolicy GetSecurityPolicy() const;

                    /**
                     * 设置Configuration content of the security policy template. If the value is empty, no modification is made. Submodule structures that are not passed in will not be modified. Currently supports exception rules, custom rules, rate limiting rules, and managed rules in the Web protection module. Configure the security policy through expression syntax. Bot management rule configuration is not currently supported and is under development.
Special note: When a submodule structure is passed in, please ensure that all rule content to be retained is carried. Rule content not passed in is deemed as deletion.
                     * @param _securityPolicy Configuration content of the security policy template. If the value is empty, no modification is made. Submodule structures that are not passed in will not be modified. Currently supports exception rules, custom rules, rate limiting rules, and managed rules in the Web protection module. Configure the security policy through expression syntax. Bot management rule configuration is not currently supported and is under development.
Special note: When a submodule structure is passed in, please ensure that all rule content to be retained is carried. Rule content not passed in is deemed as deletion.
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
                     * Site ID. Requires the input of the site to which the target policy template belongs in terms of access privileges. You can use the DescribeWebSecurityTemplates API to query the site to which the policy template belongs.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Policy template ID.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Name of the policy template after modification. It consists of Chinese characters, letters, digits, and underscores, cannot begin with an underline, and the length cannot exceed 32 characters. If the field is empty, no modification is made.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Configuration content of the security policy template. If the value is empty, no modification is made. Submodule structures that are not passed in will not be modified. Currently supports exception rules, custom rules, rate limiting rules, and managed rules in the Web protection module. Configure the security policy through expression syntax. Bot management rule configuration is not currently supported and is under development.
Special note: When a submodule structure is passed in, please ensure that all rule content to be retained is carried. Rule content not passed in is deemed as deletion.
                     */
                    SecurityPolicy m_securityPolicy;
                    bool m_securityPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYWEBSECURITYTEMPLATEREQUEST_H_
