/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param _zoneId The site ID.
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
                     * 获取Security configuration.
                     * @return SecurityConfig Security configuration.
                     * 
                     */
                    SecurityConfig GetSecurityConfig() const;

                    /**
                     * 设置Security configuration.
                     * @param _securityConfig Security configuration.
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
                     * 获取Subdomain/application name.

Note: When both this parameter and the TemplateId parameter are specified, this parameter will not take effect. Do not specify this parameter and the TemplateId parameter at the same time.
                     * @return Entity Subdomain/application name.

Note: When both this parameter and the TemplateId parameter are specified, this parameter will not take effect. Do not specify this parameter and the TemplateId parameter at the same time.
                     * 
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置Subdomain/application name.

Note: When both this parameter and the TemplateId parameter are specified, this parameter will not take effect. Do not specify this parameter and the TemplateId parameter at the same time.
                     * @param _entity Subdomain/application name.

Note: When both this parameter and the TemplateId parameter are specified, this parameter will not take effect. Do not specify this parameter and the TemplateId parameter at the same time.
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
                     * 获取Specifies the policy template ID, or the site's global policy.
- To configure a policy template, specify the policy template ID.
- To configure the site's global policy, use the @ZoneLevel@Domain parameter value.

Note: When this parameter is used, the Entity parameter will not take effect. Do not use this parameter and the Entity parameter at the same time.
                     * @return TemplateId Specifies the policy template ID, or the site's global policy.
- To configure a policy template, specify the policy template ID.
- To configure the site's global policy, use the @ZoneLevel@Domain parameter value.

Note: When this parameter is used, the Entity parameter will not take effect. Do not use this parameter and the Entity parameter at the same time.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Specifies the policy template ID, or the site's global policy.
- To configure a policy template, specify the policy template ID.
- To configure the site's global policy, use the @ZoneLevel@Domain parameter value.

Note: When this parameter is used, the Entity parameter will not take effect. Do not use this parameter and the Entity parameter at the same time.
                     * @param _templateId Specifies the policy template ID, or the site's global policy.
- To configure a policy template, specify the policy template ID.
- To configure the site's global policy, use the @ZoneLevel@Domain parameter value.

Note: When this parameter is used, the Entity parameter will not take effect. Do not use this parameter and the Entity parameter at the same time.
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
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Security configuration.
                     */
                    SecurityConfig m_securityConfig;
                    bool m_securityConfigHasBeenSet;

                    /**
                     * Subdomain/application name.

Note: When both this parameter and the TemplateId parameter are specified, this parameter will not take effect. Do not specify this parameter and the TemplateId parameter at the same time.
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * Specifies the policy template ID, or the site's global policy.
- To configure a policy template, specify the policy template ID.
- To configure the site's global policy, use the @ZoneLevel@Domain parameter value.

Note: When this parameter is used, the Entity parameter will not take effect. Do not use this parameter and the Entity parameter at the same time.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYPOLICYREQUEST_H_
