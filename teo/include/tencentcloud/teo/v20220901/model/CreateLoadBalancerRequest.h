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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATELOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginGroupInLoadBalancer.h>
#include <tencentcloud/teo/v20220901/model/HealthChecker.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateLoadBalancer request structure.
                */
                class CreateLoadBalancerRequest : public AbstractModel
                {
                public:
                    CreateLoadBalancerRequest();
                    ~CreateLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
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
                     * 获取<p>Instance name, which can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).</p>
                     * @return Name <p>Instance name, which can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Instance name, which can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).</p>
                     * @param _name <p>Instance name, which can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Instance type. Valid values:</p><li>HTTP_V2: HTTP dedicated (V2). Supports adding HTTP dedicated and general origin server groups. Site acceleration services reference only (such as domain name service and rule engine). This instance type supports selecting the region to initiate probes, which can significantly reduce probe request volume but has lower sensitivity to origin server health awareness.</li><li>HTTP: HTTP dedicated (V1). Supports adding HTTP dedicated and general origin server groups. Site acceleration services reference only (such as domain name service and rule engine). This instance type does not support selecting the region to initiate probes. The probe request volume is large but has higher sensitivity to origin server health awareness.</li><li>GENERAL: General type. Supports adding general origin server groups only. Can be referenced by site acceleration services (such as domain name service and rule engine) and Layer-4 proxies. This instance type does not support selecting the region to initiate probes. The probe request volume is large but has higher sensitivity to origin server health awareness.</li>
                     * @return Type <p>Instance type. Valid values:</p><li>HTTP_V2: HTTP dedicated (V2). Supports adding HTTP dedicated and general origin server groups. Site acceleration services reference only (such as domain name service and rule engine). This instance type supports selecting the region to initiate probes, which can significantly reduce probe request volume but has lower sensitivity to origin server health awareness.</li><li>HTTP: HTTP dedicated (V1). Supports adding HTTP dedicated and general origin server groups. Site acceleration services reference only (such as domain name service and rule engine). This instance type does not support selecting the region to initiate probes. The probe request volume is large but has higher sensitivity to origin server health awareness.</li><li>GENERAL: General type. Supports adding general origin server groups only. Can be referenced by site acceleration services (such as domain name service and rule engine) and Layer-4 proxies. This instance type does not support selecting the region to initiate probes. The probe request volume is large but has higher sensitivity to origin server health awareness.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Instance type. Valid values:</p><li>HTTP_V2: HTTP dedicated (V2). Supports adding HTTP dedicated and general origin server groups. Site acceleration services reference only (such as domain name service and rule engine). This instance type supports selecting the region to initiate probes, which can significantly reduce probe request volume but has lower sensitivity to origin server health awareness.</li><li>HTTP: HTTP dedicated (V1). Supports adding HTTP dedicated and general origin server groups. Site acceleration services reference only (such as domain name service and rule engine). This instance type does not support selecting the region to initiate probes. The probe request volume is large but has higher sensitivity to origin server health awareness.</li><li>GENERAL: General type. Supports adding general origin server groups only. Can be referenced by site acceleration services (such as domain name service and rule engine) and Layer-4 proxies. This instance type does not support selecting the region to initiate probes. The probe request volume is large but has higher sensitivity to origin server health awareness.</li>
                     * @param _type <p>Instance type. Valid values:</p><li>HTTP_V2: HTTP dedicated (V2). Supports adding HTTP dedicated and general origin server groups. Site acceleration services reference only (such as domain name service and rule engine). This instance type supports selecting the region to initiate probes, which can significantly reduce probe request volume but has lower sensitivity to origin server health awareness.</li><li>HTTP: HTTP dedicated (V1). Supports adding HTTP dedicated and general origin server groups. Site acceleration services reference only (such as domain name service and rule engine). This instance type does not support selecting the region to initiate probes. The probe request volume is large but has higher sensitivity to origin server health awareness.</li><li>GENERAL: General type. Supports adding general origin server groups only. Can be referenced by site acceleration services (such as domain name service and rule engine) and Layer-4 proxies. This instance type does not support selecting the region to initiate probes. The probe request volume is large but has higher sensitivity to origin server health awareness.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>List of origin server groups and their corresponding disaster recovery scheduling priorities. For details, refer to Sample Scenario in <a href="https://www.tencentcloud.com/document/product/1552/104223?from_cn_redirect=1">Quickly Create Load Balancers</a>.</p>
                     * @return OriginGroups <p>List of origin server groups and their corresponding disaster recovery scheduling priorities. For details, refer to Sample Scenario in <a href="https://www.tencentcloud.com/document/product/1552/104223?from_cn_redirect=1">Quickly Create Load Balancers</a>.</p>
                     * 
                     */
                    std::vector<OriginGroupInLoadBalancer> GetOriginGroups() const;

                    /**
                     * 设置<p>List of origin server groups and their corresponding disaster recovery scheduling priorities. For details, refer to Sample Scenario in <a href="https://www.tencentcloud.com/document/product/1552/104223?from_cn_redirect=1">Quickly Create Load Balancers</a>.</p>
                     * @param _originGroups <p>List of origin server groups and their corresponding disaster recovery scheduling priorities. For details, refer to Sample Scenario in <a href="https://www.tencentcloud.com/document/product/1552/104223?from_cn_redirect=1">Quickly Create Load Balancers</a>.</p>
                     * 
                     */
                    void SetOriginGroups(const std::vector<OriginGroupInLoadBalancer>& _originGroups);

                    /**
                     * 判断参数 OriginGroups 是否已赋值
                     * @return OriginGroups 是否已赋值
                     * 
                     */
                    bool OriginGroupsHasBeenSet() const;

                    /**
                     * 获取<p>Health check policy. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104228?from_cn_redirect=1">Health Check Policies</a>. If left empty, health check is disabled by default.</p>
                     * @return HealthChecker <p>Health check policy. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104228?from_cn_redirect=1">Health Check Policies</a>. If left empty, health check is disabled by default.</p>
                     * 
                     */
                    HealthChecker GetHealthChecker() const;

                    /**
                     * 设置<p>Health check policy. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104228?from_cn_redirect=1">Health Check Policies</a>. If left empty, health check is disabled by default.</p>
                     * @param _healthChecker <p>Health check policy. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104228?from_cn_redirect=1">Health Check Policies</a>. If left empty, health check is disabled by default.</p>
                     * 
                     */
                    void SetHealthChecker(const HealthChecker& _healthChecker);

                    /**
                     * 判断参数 HealthChecker 是否已赋值
                     * @return HealthChecker 是否已赋值
                     * 
                     */
                    bool HealthCheckerHasBeenSet() const;

                    /**
                     * 获取<p>Traffic scheduling policy between origin server groups. Valid values:</p><li>Pritory: Perform failover according to priority.</li>Default value: Pritory.
                     * @return SteeringPolicy <p>Traffic scheduling policy between origin server groups. Valid values:</p><li>Pritory: Perform failover according to priority.</li>Default value: Pritory.
                     * 
                     */
                    std::string GetSteeringPolicy() const;

                    /**
                     * 设置<p>Traffic scheduling policy between origin server groups. Valid values:</p><li>Pritory: Perform failover according to priority.</li>Default value: Pritory.
                     * @param _steeringPolicy <p>Traffic scheduling policy between origin server groups. Valid values:</p><li>Pritory: Perform failover according to priority.</li>Default value: Pritory.
                     * 
                     */
                    void SetSteeringPolicy(const std::string& _steeringPolicy);

                    /**
                     * 判断参数 SteeringPolicy 是否已赋值
                     * @return SteeringPolicy 是否已赋值
                     * 
                     */
                    bool SteeringPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Request retry policy when access to an origin server fails. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104227?from_cn_redirect=1">Introduction to Request Retry Strategy</a>. Valid values:</p><li>OtherOriginGroup: After a single request fails, retry with another origin server within the next lower priority origin server group.</li><li>OtherRecordInOriginGroup: After a single request fails, retry with another origin server within the same origin server group.</li>The default value is OtherRecordInOriginGroup.
                     * @return FailoverPolicy <p>Request retry policy when access to an origin server fails. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104227?from_cn_redirect=1">Introduction to Request Retry Strategy</a>. Valid values:</p><li>OtherOriginGroup: After a single request fails, retry with another origin server within the next lower priority origin server group.</li><li>OtherRecordInOriginGroup: After a single request fails, retry with another origin server within the same origin server group.</li>The default value is OtherRecordInOriginGroup.
                     * 
                     */
                    std::string GetFailoverPolicy() const;

                    /**
                     * 设置<p>Request retry policy when access to an origin server fails. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104227?from_cn_redirect=1">Introduction to Request Retry Strategy</a>. Valid values:</p><li>OtherOriginGroup: After a single request fails, retry with another origin server within the next lower priority origin server group.</li><li>OtherRecordInOriginGroup: After a single request fails, retry with another origin server within the same origin server group.</li>The default value is OtherRecordInOriginGroup.
                     * @param _failoverPolicy <p>Request retry policy when access to an origin server fails. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104227?from_cn_redirect=1">Introduction to Request Retry Strategy</a>. Valid values:</p><li>OtherOriginGroup: After a single request fails, retry with another origin server within the next lower priority origin server group.</li><li>OtherRecordInOriginGroup: After a single request fails, retry with another origin server within the same origin server group.</li>The default value is OtherRecordInOriginGroup.
                     * 
                     */
                    void SetFailoverPolicy(const std::string& _failoverPolicy);

                    /**
                     * 判断参数 FailoverPolicy 是否已赋值
                     * @return FailoverPolicy 是否已赋值
                     * 
                     */
                    bool FailoverPolicyHasBeenSet() const;

                private:

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Instance name, which can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Instance type. Valid values:</p><li>HTTP_V2: HTTP dedicated (V2). Supports adding HTTP dedicated and general origin server groups. Site acceleration services reference only (such as domain name service and rule engine). This instance type supports selecting the region to initiate probes, which can significantly reduce probe request volume but has lower sensitivity to origin server health awareness.</li><li>HTTP: HTTP dedicated (V1). Supports adding HTTP dedicated and general origin server groups. Site acceleration services reference only (such as domain name service and rule engine). This instance type does not support selecting the region to initiate probes. The probe request volume is large but has higher sensitivity to origin server health awareness.</li><li>GENERAL: General type. Supports adding general origin server groups only. Can be referenced by site acceleration services (such as domain name service and rule engine) and Layer-4 proxies. This instance type does not support selecting the region to initiate probes. The probe request volume is large but has higher sensitivity to origin server health awareness.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>List of origin server groups and their corresponding disaster recovery scheduling priorities. For details, refer to Sample Scenario in <a href="https://www.tencentcloud.com/document/product/1552/104223?from_cn_redirect=1">Quickly Create Load Balancers</a>.</p>
                     */
                    std::vector<OriginGroupInLoadBalancer> m_originGroups;
                    bool m_originGroupsHasBeenSet;

                    /**
                     * <p>Health check policy. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104228?from_cn_redirect=1">Health Check Policies</a>. If left empty, health check is disabled by default.</p>
                     */
                    HealthChecker m_healthChecker;
                    bool m_healthCheckerHasBeenSet;

                    /**
                     * <p>Traffic scheduling policy between origin server groups. Valid values:</p><li>Pritory: Perform failover according to priority.</li>Default value: Pritory.
                     */
                    std::string m_steeringPolicy;
                    bool m_steeringPolicyHasBeenSet;

                    /**
                     * <p>Request retry policy when access to an origin server fails. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104227?from_cn_redirect=1">Introduction to Request Retry Strategy</a>. Valid values:</p><li>OtherOriginGroup: After a single request fails, retry with another origin server within the next lower priority origin server group.</li><li>OtherRecordInOriginGroup: After a single request fails, retry with another origin server within the same origin server group.</li>The default value is OtherRecordInOriginGroup.
                     */
                    std::string m_failoverPolicy;
                    bool m_failoverPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATELOADBALANCERREQUEST_H_
