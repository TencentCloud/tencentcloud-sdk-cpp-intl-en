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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicy request structure.
                */
                class DescribeSecurityPolicyRequest : public AbstractModel
                {
                public:
                    DescribeSecurityPolicyRequest();
                    ~DescribeSecurityPolicyRequest() = default;
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
                     * 获取Security policy type. You can use the following parameter values for query: <li>ZoneDefaultPolicy: used to specify query for site-level policies;</li><li>Template: used to specify query for policy templates. The TemplateId parameter must be specified simultaneously;</li><li>Host: used to specify query for domain-level policies (Note: when using a domain name to specify a domain name service policy, only domain name services or policy templates that already have a domain-level policy applied are supported).</li>	
                     * @return Entity Security policy type. You can use the following parameter values for query: <li>ZoneDefaultPolicy: used to specify query for site-level policies;</li><li>Template: used to specify query for policy templates. The TemplateId parameter must be specified simultaneously;</li><li>Host: used to specify query for domain-level policies (Note: when using a domain name to specify a domain name service policy, only domain name services or policy templates that already have a domain-level policy applied are supported).</li>	
                     * 
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置Security policy type. You can use the following parameter values for query: <li>ZoneDefaultPolicy: used to specify query for site-level policies;</li><li>Template: used to specify query for policy templates. The TemplateId parameter must be specified simultaneously;</li><li>Host: used to specify query for domain-level policies (Note: when using a domain name to specify a domain name service policy, only domain name services or policy templates that already have a domain-level policy applied are supported).</li>	
                     * @param _entity Security policy type. You can use the following parameter values for query: <li>ZoneDefaultPolicy: used to specify query for site-level policies;</li><li>Template: used to specify query for policy templates. The TemplateId parameter must be specified simultaneously;</li><li>Host: used to specify query for domain-level policies (Note: when using a domain name to specify a domain name service policy, only domain name services or policy templates that already have a domain-level policy applied are supported).</li>	
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
                     * 获取Specify the policy template ID. When the Entity parameter value is Template, use this parameter to specify the policy template ID to query template configurations.
                     * @return TemplateId Specify the policy template ID. When the Entity parameter value is Template, use this parameter to specify the policy template ID to query template configurations.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Specify the policy template ID. When the Entity parameter value is Template, use this parameter to specify the policy template ID to query template configurations.
                     * @param _templateId Specify the policy template ID. When the Entity parameter value is Template, use this parameter to specify the policy template ID to query template configurations.
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
                     * 获取Specify domain name. When the value of the Entity parameter is Host, use this parameter to specify the domain-level policy to query the domain configuration. For example, use www.example.com to configure the domain-level policy for this domain.
                     * @return Host Specify domain name. When the value of the Entity parameter is Host, use this parameter to specify the domain-level policy to query the domain configuration. For example, use www.example.com to configure the domain-level policy for this domain.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Specify domain name. When the value of the Entity parameter is Host, use this parameter to specify the domain-level policy to query the domain configuration. For example, use www.example.com to configure the domain-level policy for this domain.
                     * @param _host Specify domain name. When the value of the Entity parameter is Host, use this parameter to specify the domain-level policy to query the domain configuration. For example, use www.example.com to configure the domain-level policy for this domain.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Security policy type. You can use the following parameter values for query: <li>ZoneDefaultPolicy: used to specify query for site-level policies;</li><li>Template: used to specify query for policy templates. The TemplateId parameter must be specified simultaneously;</li><li>Host: used to specify query for domain-level policies (Note: when using a domain name to specify a domain name service policy, only domain name services or policy templates that already have a domain-level policy applied are supported).</li>	
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * Specify the policy template ID. When the Entity parameter value is Template, use this parameter to specify the policy template ID to query template configurations.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Specify domain name. When the value of the Entity parameter is Host, use this parameter to specify the domain-level policy to query the domain configuration. For example, use www.example.com to configure the domain-level policy for this domain.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYPOLICYREQUEST_H_
