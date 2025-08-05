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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityConfig.h>
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
                * ModifySecurityPolicy request structure.
                */
                class ModifySecurityPolicyRequest : public AbstractModel
                {
                public:
                    ModifySecurityPolicyRequest();
                    ~ModifySecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取Security policy configuration. <li>when ExceptionRules in the SecurityPolicy parameter is set, ExceptConfig in the SecurityConfig parameter will be ignored;</li> <li>when CustomRules in the SecurityPolicy parameter is set, AclConfig and IpTableConfig in the SecurityConfig parameter will be ignored;</li> <li>when HttpDDoSProtection and RateLimitingRules in the SecurityPolicy parameter are set, RateLimitConfig in the SecurityConfig parameter will be ignored;</li> <li>when ManagedRule in the SecurityPolicy parameter is set, WafConfig in the SecurityConfig parameter will be ignored;</li> <li>for exception rules, custom rules, rate limits, and managed rule policy, it is recommended to use the SecurityPolicy parameter for configuration.</li>.
                     * @return SecurityConfig Security policy configuration. <li>when ExceptionRules in the SecurityPolicy parameter is set, ExceptConfig in the SecurityConfig parameter will be ignored;</li> <li>when CustomRules in the SecurityPolicy parameter is set, AclConfig and IpTableConfig in the SecurityConfig parameter will be ignored;</li> <li>when HttpDDoSProtection and RateLimitingRules in the SecurityPolicy parameter are set, RateLimitConfig in the SecurityConfig parameter will be ignored;</li> <li>when ManagedRule in the SecurityPolicy parameter is set, WafConfig in the SecurityConfig parameter will be ignored;</li> <li>for exception rules, custom rules, rate limits, and managed rule policy, it is recommended to use the SecurityPolicy parameter for configuration.</li>.
                     * 
                     */
                    SecurityConfig GetSecurityConfig() const;

                    /**
                     * 设置Security policy configuration. <li>when ExceptionRules in the SecurityPolicy parameter is set, ExceptConfig in the SecurityConfig parameter will be ignored;</li> <li>when CustomRules in the SecurityPolicy parameter is set, AclConfig and IpTableConfig in the SecurityConfig parameter will be ignored;</li> <li>when HttpDDoSProtection and RateLimitingRules in the SecurityPolicy parameter are set, RateLimitConfig in the SecurityConfig parameter will be ignored;</li> <li>when ManagedRule in the SecurityPolicy parameter is set, WafConfig in the SecurityConfig parameter will be ignored;</li> <li>for exception rules, custom rules, rate limits, and managed rule policy, it is recommended to use the SecurityPolicy parameter for configuration.</li>.
                     * @param _securityConfig Security policy configuration. <li>when ExceptionRules in the SecurityPolicy parameter is set, ExceptConfig in the SecurityConfig parameter will be ignored;</li> <li>when CustomRules in the SecurityPolicy parameter is set, AclConfig and IpTableConfig in the SecurityConfig parameter will be ignored;</li> <li>when HttpDDoSProtection and RateLimitingRules in the SecurityPolicy parameter are set, RateLimitConfig in the SecurityConfig parameter will be ignored;</li> <li>when ManagedRule in the SecurityPolicy parameter is set, WafConfig in the SecurityConfig parameter will be ignored;</li> <li>for exception rules, custom rules, rate limits, and managed rule policy, it is recommended to use the SecurityPolicy parameter for configuration.</li>.
                     * 
                     */
                    void SetSecurityConfig(const SecurityConfig& _securityConfig);

                    /**
                     * 判断参数 SecurityConfig 是否已赋值
                     * @return SecurityConfig 是否已赋值
                     * 
                     */
                    bool SecurityConfigHasBeenSet() const;

                    /**
                     * 获取Security policy configuration. recommend using for Web exception rules, protection custom policies, rate rules, and managed rules. supports configuring security policies with expression grammar.
                     * @return SecurityPolicy Security policy configuration. recommend using for Web exception rules, protection custom policies, rate rules, and managed rules. supports configuring security policies with expression grammar.
                     * 
                     */
                    SecurityPolicy GetSecurityPolicy() const;

                    /**
                     * 设置Security policy configuration. recommend using for Web exception rules, protection custom policies, rate rules, and managed rules. supports configuring security policies with expression grammar.
                     * @param _securityPolicy Security policy configuration. recommend using for Web exception rules, protection custom policies, rate rules, and managed rules. supports configuring security policies with expression grammar.
                     * 
                     */
                    void SetSecurityPolicy(const SecurityPolicy& _securityPolicy);

                    /**
                     * 判断参数 SecurityPolicy 是否已赋值
                     * @return SecurityPolicy 是否已赋值
                     * 
                     */
                    bool SecurityPolicyHasBeenSet() const;

                    /**
                     * 获取`SecurityPolicy` type, the following parameter values can be used for query: <li>`ZoneDefaultPolicy`: used to specify a query for site-level policies;</li> <li>`Template`: used to specify a query for policy templates. the `TemplateId` parameter needs to be specified simultaneously;</li> <li>`Host`: used to specify a query for domain-level policies (note: when using `Host` to specify a domain name service policy, only domain name services or policy templates that have been applied domain-level policies are supported).</li>	
                     * @return Entity `SecurityPolicy` type, the following parameter values can be used for query: <li>`ZoneDefaultPolicy`: used to specify a query for site-level policies;</li> <li>`Template`: used to specify a query for policy templates. the `TemplateId` parameter needs to be specified simultaneously;</li> <li>`Host`: used to specify a query for domain-level policies (note: when using `Host` to specify a domain name service policy, only domain name services or policy templates that have been applied domain-level policies are supported).</li>	
                     * 
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置`SecurityPolicy` type, the following parameter values can be used for query: <li>`ZoneDefaultPolicy`: used to specify a query for site-level policies;</li> <li>`Template`: used to specify a query for policy templates. the `TemplateId` parameter needs to be specified simultaneously;</li> <li>`Host`: used to specify a query for domain-level policies (note: when using `Host` to specify a domain name service policy, only domain name services or policy templates that have been applied domain-level policies are supported).</li>	
                     * @param _entity `SecurityPolicy` type, the following parameter values can be used for query: <li>`ZoneDefaultPolicy`: used to specify a query for site-level policies;</li> <li>`Template`: used to specify a query for policy templates. the `TemplateId` parameter needs to be specified simultaneously;</li> <li>`Host`: used to specify a query for domain-level policies (note: when using `Host` to specify a domain name service policy, only domain name services or policy templates that have been applied domain-level policies are supported).</li>	
                     * 
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     * 
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取Specify the domain name. When the `Entity` parameter value is set to `Host`, use the domain-level policy specified by this parameter to query the domain configuration. For example, use `www.example.com` to configure the domain-level policy for that domain name.
                     * @return Host Specify the domain name. When the `Entity` parameter value is set to `Host`, use the domain-level policy specified by this parameter to query the domain configuration. For example, use `www.example.com` to configure the domain-level policy for that domain name.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Specify the domain name. When the `Entity` parameter value is set to `Host`, use the domain-level policy specified by this parameter to query the domain configuration. For example, use `www.example.com` to configure the domain-level policy for that domain name.
                     * @param _host Specify the domain name. When the `Entity` parameter value is set to `Host`, use the domain-level policy specified by this parameter to query the domain configuration. For example, use `www.example.com` to configure the domain-level policy for that domain name.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Specify the policy template ID. Use this parameter to specify the ID of the policy Template to query the Template configuration when the `Entity` parameter value is set to `Template`.
                     * @return TemplateId Specify the policy template ID. Use this parameter to specify the ID of the policy Template to query the Template configuration when the `Entity` parameter value is set to `Template`.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Specify the policy template ID. Use this parameter to specify the ID of the policy Template to query the Template configuration when the `Entity` parameter value is set to `Template`.
                     * @param _templateId Specify the policy template ID. Use this parameter to specify the ID of the policy Template to query the Template configuration when the `Entity` parameter value is set to `Template`.
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Security policy configuration. <li>when ExceptionRules in the SecurityPolicy parameter is set, ExceptConfig in the SecurityConfig parameter will be ignored;</li> <li>when CustomRules in the SecurityPolicy parameter is set, AclConfig and IpTableConfig in the SecurityConfig parameter will be ignored;</li> <li>when HttpDDoSProtection and RateLimitingRules in the SecurityPolicy parameter are set, RateLimitConfig in the SecurityConfig parameter will be ignored;</li> <li>when ManagedRule in the SecurityPolicy parameter is set, WafConfig in the SecurityConfig parameter will be ignored;</li> <li>for exception rules, custom rules, rate limits, and managed rule policy, it is recommended to use the SecurityPolicy parameter for configuration.</li>.
                     */
                    SecurityConfig m_securityConfig;
                    bool m_securityConfigHasBeenSet;

                    /**
                     * Security policy configuration. recommend using for Web exception rules, protection custom policies, rate rules, and managed rules. supports configuring security policies with expression grammar.
                     */
                    SecurityPolicy m_securityPolicy;
                    bool m_securityPolicyHasBeenSet;

                    /**
                     * `SecurityPolicy` type, the following parameter values can be used for query: <li>`ZoneDefaultPolicy`: used to specify a query for site-level policies;</li> <li>`Template`: used to specify a query for policy templates. the `TemplateId` parameter needs to be specified simultaneously;</li> <li>`Host`: used to specify a query for domain-level policies (note: when using `Host` to specify a domain name service policy, only domain name services or policy templates that have been applied domain-level policies are supported).</li>	
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * Specify the domain name. When the `Entity` parameter value is set to `Host`, use the domain-level policy specified by this parameter to query the domain configuration. For example, use `www.example.com` to configure the domain-level policy for that domain name.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Specify the policy template ID. Use this parameter to specify the ID of the policy Template to query the Template configuration when the `Entity` parameter value is set to `Template`.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYPOLICYREQUEST_H_
