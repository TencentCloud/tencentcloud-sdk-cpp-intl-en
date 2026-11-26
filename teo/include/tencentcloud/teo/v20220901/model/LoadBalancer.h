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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_LOADBALANCER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_LOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/HealthChecker.h>
#include <tencentcloud/teo/v20220901/model/OriginGroupHealthStatus.h>
#include <tencentcloud/teo/v20220901/model/OriginGroupReference.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * LoadBalancer information.
                */
                class LoadBalancer : public AbstractModel
                {
                public:
                    LoadBalancer();
                    ~LoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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
                     * 获取<p>Instance type. Valid values:</p><li>HTTP_V2: HTTP dedicated (V2). Supports adding HTTP dedicated and general origin groups. Site acceleration services reference only (for example, domain name service and rule engine). This instance type supports selecting the region to trigger probes, which can significantly reduce probe request volume but has lower sensitivity to origin health awareness.</li><li>HTTP: HTTP dedicated (V1). Supports adding HTTP dedicated and general origin groups. Site acceleration services reference only (for example, domain name service and rule engine). This instance type does not support selecting the region to trigger probes. The probe request volume is large, but the sensitivity to origin health awareness is higher.</li><li>GENERAL: General type. Supports adding general origin groups only. It can be referenced by site acceleration services (for example, domain name service and rule engine) and Layer-4 proxies. This instance type does not support selecting the region to trigger probes. The probe request volume is large, but the sensitivity to origin health awareness is higher.</li>
                     * @return Type <p>Instance type. Valid values:</p><li>HTTP_V2: HTTP dedicated (V2). Supports adding HTTP dedicated and general origin groups. Site acceleration services reference only (for example, domain name service and rule engine). This instance type supports selecting the region to trigger probes, which can significantly reduce probe request volume but has lower sensitivity to origin health awareness.</li><li>HTTP: HTTP dedicated (V1). Supports adding HTTP dedicated and general origin groups. Site acceleration services reference only (for example, domain name service and rule engine). This instance type does not support selecting the region to trigger probes. The probe request volume is large, but the sensitivity to origin health awareness is higher.</li><li>GENERAL: General type. Supports adding general origin groups only. It can be referenced by site acceleration services (for example, domain name service and rule engine) and Layer-4 proxies. This instance type does not support selecting the region to trigger probes. The probe request volume is large, but the sensitivity to origin health awareness is higher.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Instance type. Valid values:</p><li>HTTP_V2: HTTP dedicated (V2). Supports adding HTTP dedicated and general origin groups. Site acceleration services reference only (for example, domain name service and rule engine). This instance type supports selecting the region to trigger probes, which can significantly reduce probe request volume but has lower sensitivity to origin health awareness.</li><li>HTTP: HTTP dedicated (V1). Supports adding HTTP dedicated and general origin groups. Site acceleration services reference only (for example, domain name service and rule engine). This instance type does not support selecting the region to trigger probes. The probe request volume is large, but the sensitivity to origin health awareness is higher.</li><li>GENERAL: General type. Supports adding general origin groups only. It can be referenced by site acceleration services (for example, domain name service and rule engine) and Layer-4 proxies. This instance type does not support selecting the region to trigger probes. The probe request volume is large, but the sensitivity to origin health awareness is higher.</li>
                     * @param _type <p>Instance type. Valid values:</p><li>HTTP_V2: HTTP dedicated (V2). Supports adding HTTP dedicated and general origin groups. Site acceleration services reference only (for example, domain name service and rule engine). This instance type supports selecting the region to trigger probes, which can significantly reduce probe request volume but has lower sensitivity to origin health awareness.</li><li>HTTP: HTTP dedicated (V1). Supports adding HTTP dedicated and general origin groups. Site acceleration services reference only (for example, domain name service and rule engine). This instance type does not support selecting the region to trigger probes. The probe request volume is large, but the sensitivity to origin health awareness is higher.</li><li>GENERAL: General type. Supports adding general origin groups only. It can be referenced by site acceleration services (for example, domain name service and rule engine) and Layer-4 proxies. This instance type does not support selecting the region to trigger probes. The probe request volume is large, but the sensitivity to origin health awareness is higher.</li>
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
                     * 获取<p>Health check policy. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104228?from_cn_redirect=1">Health Check Policies</a>.</p>
                     * @return HealthChecker <p>Health check policy. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104228?from_cn_redirect=1">Health Check Policies</a>.</p>
                     * 
                     */
                    HealthChecker GetHealthChecker() const;

                    /**
                     * 设置<p>Health check policy. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104228?from_cn_redirect=1">Health Check Policies</a>.</p>
                     * @param _healthChecker <p>Health check policy. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104228?from_cn_redirect=1">Health Check Policies</a>.</p>
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
                     * 获取<p>Traffic scheduling policy among origin server groups. Valid values:</p><li>Pritory: Perform failover according to priority.</li>
                     * @return SteeringPolicy <p>Traffic scheduling policy among origin server groups. Valid values:</p><li>Pritory: Perform failover according to priority.</li>
                     * 
                     */
                    std::string GetSteeringPolicy() const;

                    /**
                     * 设置<p>Traffic scheduling policy among origin server groups. Valid values:</p><li>Pritory: Perform failover according to priority.</li>
                     * @param _steeringPolicy <p>Traffic scheduling policy among origin server groups. Valid values:</p><li>Pritory: Perform failover according to priority.</li>
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
                     * 获取<p>Request retry policy when access to an origin server fails. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104227?from_cn_redirect=1">Introduction to Request Retry Strategy</a>. Valid values:</p><li>OtherOriginGroup: After a single request fails, retry with another origin server within the next lower priority origin server group;</li><li>OtherRecordInOriginGroup: After a single request fails, retry with another origin server within the same origin server group.</li>
                     * @return FailoverPolicy <p>Request retry policy when access to an origin server fails. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104227?from_cn_redirect=1">Introduction to Request Retry Strategy</a>. Valid values:</p><li>OtherOriginGroup: After a single request fails, retry with another origin server within the next lower priority origin server group;</li><li>OtherRecordInOriginGroup: After a single request fails, retry with another origin server within the same origin server group.</li>
                     * 
                     */
                    std::string GetFailoverPolicy() const;

                    /**
                     * 设置<p>Request retry policy when access to an origin server fails. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104227?from_cn_redirect=1">Introduction to Request Retry Strategy</a>. Valid values:</p><li>OtherOriginGroup: After a single request fails, retry with another origin server within the next lower priority origin server group;</li><li>OtherRecordInOriginGroup: After a single request fails, retry with another origin server within the same origin server group.</li>
                     * @param _failoverPolicy <p>Request retry policy when access to an origin server fails. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104227?from_cn_redirect=1">Introduction to Request Retry Strategy</a>. Valid values:</p><li>OtherOriginGroup: After a single request fails, retry with another origin server within the next lower priority origin server group;</li><li>OtherRecordInOriginGroup: After a single request fails, retry with another origin server within the same origin server group.</li>
                     * 
                     */
                    void SetFailoverPolicy(const std::string& _failoverPolicy);

                    /**
                     * 判断参数 FailoverPolicy 是否已赋值
                     * @return FailoverPolicy 是否已赋值
                     * 
                     */
                    bool FailoverPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Origin server group health status.</p>
                     * @return OriginGroupHealthStatus <p>Origin server group health status.</p>
                     * 
                     */
                    std::vector<OriginGroupHealthStatus> GetOriginGroupHealthStatus() const;

                    /**
                     * 设置<p>Origin server group health status.</p>
                     * @param _originGroupHealthStatus <p>Origin server group health status.</p>
                     * 
                     */
                    void SetOriginGroupHealthStatus(const std::vector<OriginGroupHealthStatus>& _originGroupHealthStatus);

                    /**
                     * 判断参数 OriginGroupHealthStatus 是否已赋值
                     * @return OriginGroupHealthStatus 是否已赋值
                     * 
                     */
                    bool OriginGroupHealthStatusHasBeenSet() const;

                    /**
                     * 获取<p>Load balancing status. Valid values:</p><li>Pending: deploying;</li><li>Deleting: deleting;</li><li>Running: effective.</li>
                     * @return Status <p>Load balancing status. Valid values:</p><li>Pending: deploying;</li><li>Deleting: deleting;</li><li>Running: effective.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Load balancing status. Valid values:</p><li>Pending: deploying;</li><li>Deleting: deleting;</li><li>Running: effective.</li>
                     * @param _status <p>Load balancing status. Valid values:</p><li>Pending: deploying;</li><li>Deleting: deleting;</li><li>Running: effective.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>List of L4 proxy instances bound to the load balancing instance.</p>
                     * @return L4UsedList <p>List of L4 proxy instances bound to the load balancing instance.</p>
                     * 
                     */
                    std::vector<std::string> GetL4UsedList() const;

                    /**
                     * 设置<p>List of L4 proxy instances bound to the load balancing instance.</p>
                     * @param _l4UsedList <p>List of L4 proxy instances bound to the load balancing instance.</p>
                     * 
                     */
                    void SetL4UsedList(const std::vector<std::string>& _l4UsedList);

                    /**
                     * 判断参数 L4UsedList 是否已赋值
                     * @return L4UsedList 是否已赋值
                     * 
                     */
                    bool L4UsedListHasBeenSet() const;

                    /**
                     * 获取<p>List of Layer-7 domain names bound to the load balancing instance.</p>
                     * @return L7UsedList <p>List of Layer-7 domain names bound to the load balancing instance.</p>
                     * 
                     */
                    std::vector<std::string> GetL7UsedList() const;

                    /**
                     * 设置<p>List of Layer-7 domain names bound to the load balancing instance.</p>
                     * @param _l7UsedList <p>List of Layer-7 domain names bound to the load balancing instance.</p>
                     * 
                     */
                    void SetL7UsedList(const std::vector<std::string>& _l7UsedList);

                    /**
                     * 判断参数 L7UsedList 是否已赋值
                     * @return L7UsedList 是否已赋值
                     * 
                     */
                    bool L7UsedListHasBeenSet() const;

                    /**
                     * 获取<p>List of referenced instances of the load balancer.</p>
                     * @return References <p>List of referenced instances of the load balancer.</p>
                     * 
                     */
                    std::vector<OriginGroupReference> GetReferences() const;

                    /**
                     * 设置<p>List of referenced instances of the load balancer.</p>
                     * @param _references <p>List of referenced instances of the load balancer.</p>
                     * 
                     */
                    void SetReferences(const std::vector<OriginGroupReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance name, which can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Instance type. Valid values:</p><li>HTTP_V2: HTTP dedicated (V2). Supports adding HTTP dedicated and general origin groups. Site acceleration services reference only (for example, domain name service and rule engine). This instance type supports selecting the region to trigger probes, which can significantly reduce probe request volume but has lower sensitivity to origin health awareness.</li><li>HTTP: HTTP dedicated (V1). Supports adding HTTP dedicated and general origin groups. Site acceleration services reference only (for example, domain name service and rule engine). This instance type does not support selecting the region to trigger probes. The probe request volume is large, but the sensitivity to origin health awareness is higher.</li><li>GENERAL: General type. Supports adding general origin groups only. It can be referenced by site acceleration services (for example, domain name service and rule engine) and Layer-4 proxies. This instance type does not support selecting the region to trigger probes. The probe request volume is large, but the sensitivity to origin health awareness is higher.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Health check policy. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104228?from_cn_redirect=1">Health Check Policies</a>.</p>
                     */
                    HealthChecker m_healthChecker;
                    bool m_healthCheckerHasBeenSet;

                    /**
                     * <p>Traffic scheduling policy among origin server groups. Valid values:</p><li>Pritory: Perform failover according to priority.</li>
                     */
                    std::string m_steeringPolicy;
                    bool m_steeringPolicyHasBeenSet;

                    /**
                     * <p>Request retry policy when access to an origin server fails. For details, refer to <a href="https://www.tencentcloud.com/document/product/1552/104227?from_cn_redirect=1">Introduction to Request Retry Strategy</a>. Valid values:</p><li>OtherOriginGroup: After a single request fails, retry with another origin server within the next lower priority origin server group;</li><li>OtherRecordInOriginGroup: After a single request fails, retry with another origin server within the same origin server group.</li>
                     */
                    std::string m_failoverPolicy;
                    bool m_failoverPolicyHasBeenSet;

                    /**
                     * <p>Origin server group health status.</p>
                     */
                    std::vector<OriginGroupHealthStatus> m_originGroupHealthStatus;
                    bool m_originGroupHealthStatusHasBeenSet;

                    /**
                     * <p>Load balancing status. Valid values:</p><li>Pending: deploying;</li><li>Deleting: deleting;</li><li>Running: effective.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>List of L4 proxy instances bound to the load balancing instance.</p>
                     */
                    std::vector<std::string> m_l4UsedList;
                    bool m_l4UsedListHasBeenSet;

                    /**
                     * <p>List of Layer-7 domain names bound to the load balancing instance.</p>
                     */
                    std::vector<std::string> m_l7UsedList;
                    bool m_l7UsedListHasBeenSet;

                    /**
                     * <p>List of referenced instances of the load balancer.</p>
                     */
                    std::vector<OriginGroupReference> m_references;
                    bool m_referencesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_LOADBALANCER_H_
