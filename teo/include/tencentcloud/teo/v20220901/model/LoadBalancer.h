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
                     * 获取LoadBalancer ID.
                     * @return InstanceId LoadBalancer ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置LoadBalancer ID.
                     * @param _instanceId LoadBalancer ID.
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
                     * 获取LoadBalancer name, which can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).	
                     * @return Name LoadBalancer name, which can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).	
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置LoadBalancer name, which can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).	
                     * @param _name LoadBalancer name, which can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).	
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
                     * 获取LoadBalancer type. Valid values:
<li>HTTP: HTTP-specific LoadBalancer. It supports adding HTTP-specific and general origin server groups. It can only be referenced by site acceleration services (such as domain name service and rule engine).</li>
<li>GENERAL: general LoadBalancer. It only supports adding general origin server groups. It can be referenced by site acceleration services (such as domain name service and rule engine) and Layer-4 proxy.</li>
                     * @return Type LoadBalancer type. Valid values:
<li>HTTP: HTTP-specific LoadBalancer. It supports adding HTTP-specific and general origin server groups. It can only be referenced by site acceleration services (such as domain name service and rule engine).</li>
<li>GENERAL: general LoadBalancer. It only supports adding general origin server groups. It can be referenced by site acceleration services (such as domain name service and rule engine) and Layer-4 proxy.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置LoadBalancer type. Valid values:
<li>HTTP: HTTP-specific LoadBalancer. It supports adding HTTP-specific and general origin server groups. It can only be referenced by site acceleration services (such as domain name service and rule engine).</li>
<li>GENERAL: general LoadBalancer. It only supports adding general origin server groups. It can be referenced by site acceleration services (such as domain name service and rule engine) and Layer-4 proxy.</li>
                     * @param _type LoadBalancer type. Valid values:
<li>HTTP: HTTP-specific LoadBalancer. It supports adding HTTP-specific and general origin server groups. It can only be referenced by site acceleration services (such as domain name service and rule engine).</li>
<li>GENERAL: general LoadBalancer. It only supports adding general origin server groups. It can be referenced by site acceleration services (such as domain name service and rule engine) and Layer-4 proxy.</li>
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
                     * 获取Health check policy. For details, refer to [Health Check Policies](https://intl.cloud.tencent.com/document/product/1552/104228?from_cn_redirect=1).
                     * @return HealthChecker Health check policy. For details, refer to [Health Check Policies](https://intl.cloud.tencent.com/document/product/1552/104228?from_cn_redirect=1).
                     * 
                     */
                    HealthChecker GetHealthChecker() const;

                    /**
                     * 设置Health check policy. For details, refer to [Health Check Policies](https://intl.cloud.tencent.com/document/product/1552/104228?from_cn_redirect=1).
                     * @param _healthChecker Health check policy. For details, refer to [Health Check Policies](https://intl.cloud.tencent.com/document/product/1552/104228?from_cn_redirect=1).
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
                     * 获取Traffic scheduling policy among origin server groups. Valid values:
<li>Priority: Perform failover according to priority.</li>
                     * @return SteeringPolicy Traffic scheduling policy among origin server groups. Valid values:
<li>Priority: Perform failover according to priority.</li>
                     * 
                     */
                    std::string GetSteeringPolicy() const;

                    /**
                     * 设置Traffic scheduling policy among origin server groups. Valid values:
<li>Priority: Perform failover according to priority.</li>
                     * @param _steeringPolicy Traffic scheduling policy among origin server groups. Valid values:
<li>Priority: Perform failover according to priority.</li>
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
                     * 获取Request retry policy when access to an origin server fails. For details, refer to [Introduction to Request Retry Strategy](https://intl.cloud.tencent.com/document/product/1552/104227?from_cn_redirect=1). Valid values:
<li>OtherOriginGroup: After a single request fails, retry with another origin server within the next lower priority origin server group.</li>
<li>OtherRecordInOriginGroup: After a single request fails, retry with another origin server within the same origin server group.</li>
                     * @return FailoverPolicy Request retry policy when access to an origin server fails. For details, refer to [Introduction to Request Retry Strategy](https://intl.cloud.tencent.com/document/product/1552/104227?from_cn_redirect=1). Valid values:
<li>OtherOriginGroup: After a single request fails, retry with another origin server within the next lower priority origin server group.</li>
<li>OtherRecordInOriginGroup: After a single request fails, retry with another origin server within the same origin server group.</li>
                     * 
                     */
                    std::string GetFailoverPolicy() const;

                    /**
                     * 设置Request retry policy when access to an origin server fails. For details, refer to [Introduction to Request Retry Strategy](https://intl.cloud.tencent.com/document/product/1552/104227?from_cn_redirect=1). Valid values:
<li>OtherOriginGroup: After a single request fails, retry with another origin server within the next lower priority origin server group.</li>
<li>OtherRecordInOriginGroup: After a single request fails, retry with another origin server within the same origin server group.</li>
                     * @param _failoverPolicy Request retry policy when access to an origin server fails. For details, refer to [Introduction to Request Retry Strategy](https://intl.cloud.tencent.com/document/product/1552/104227?from_cn_redirect=1). Valid values:
<li>OtherOriginGroup: After a single request fails, retry with another origin server within the next lower priority origin server group.</li>
<li>OtherRecordInOriginGroup: After a single request fails, retry with another origin server within the same origin server group.</li>
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
                     * 获取Origin server group health status.
                     * @return OriginGroupHealthStatus Origin server group health status.
                     * 
                     */
                    std::vector<OriginGroupHealthStatus> GetOriginGroupHealthStatus() const;

                    /**
                     * 设置Origin server group health status.
                     * @param _originGroupHealthStatus Origin server group health status.
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
                     * 获取LoadBalancer status. Valid values:
<li>Pending: deploying.</li>
<li>Deleting: deleting.</li>
<li>Running: effective.</li>
                     * @return Status LoadBalancer status. Valid values:
<li>Pending: deploying.</li>
<li>Deleting: deleting.</li>
<li>Running: effective.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置LoadBalancer status. Valid values:
<li>Pending: deploying.</li>
<li>Deleting: deleting.</li>
<li>Running: effective.</li>
                     * @param _status LoadBalancer status. Valid values:
<li>Pending: deploying.</li>
<li>Deleting: deleting.</li>
<li>Running: effective.</li>
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
                     * 获取List of Layer-4 proxy instances bound to a LoadBalancer.
                     * @return L4UsedList List of Layer-4 proxy instances bound to a LoadBalancer.
                     * 
                     */
                    std::vector<std::string> GetL4UsedList() const;

                    /**
                     * 设置List of Layer-4 proxy instances bound to a LoadBalancer.
                     * @param _l4UsedList List of Layer-4 proxy instances bound to a LoadBalancer.
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
                     * 获取List of Layer-7 domain names bound to a LoadBalancer.
                     * @return L7UsedList List of Layer-7 domain names bound to a LoadBalancer.
                     * 
                     */
                    std::vector<std::string> GetL7UsedList() const;

                    /**
                     * 设置List of Layer-7 domain names bound to a LoadBalancer.
                     * @param _l7UsedList List of Layer-7 domain names bound to a LoadBalancer.
                     * 
                     */
                    void SetL7UsedList(const std::vector<std::string>& _l7UsedList);

                    /**
                     * 判断参数 L7UsedList 是否已赋值
                     * @return L7UsedList 是否已赋值
                     * 
                     */
                    bool L7UsedListHasBeenSet() const;

                private:

                    /**
                     * LoadBalancer ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * LoadBalancer name, which can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).	
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * LoadBalancer type. Valid values:
<li>HTTP: HTTP-specific LoadBalancer. It supports adding HTTP-specific and general origin server groups. It can only be referenced by site acceleration services (such as domain name service and rule engine).</li>
<li>GENERAL: general LoadBalancer. It only supports adding general origin server groups. It can be referenced by site acceleration services (such as domain name service and rule engine) and Layer-4 proxy.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Health check policy. For details, refer to [Health Check Policies](https://intl.cloud.tencent.com/document/product/1552/104228?from_cn_redirect=1).
                     */
                    HealthChecker m_healthChecker;
                    bool m_healthCheckerHasBeenSet;

                    /**
                     * Traffic scheduling policy among origin server groups. Valid values:
<li>Priority: Perform failover according to priority.</li>
                     */
                    std::string m_steeringPolicy;
                    bool m_steeringPolicyHasBeenSet;

                    /**
                     * Request retry policy when access to an origin server fails. For details, refer to [Introduction to Request Retry Strategy](https://intl.cloud.tencent.com/document/product/1552/104227?from_cn_redirect=1). Valid values:
<li>OtherOriginGroup: After a single request fails, retry with another origin server within the next lower priority origin server group.</li>
<li>OtherRecordInOriginGroup: After a single request fails, retry with another origin server within the same origin server group.</li>
                     */
                    std::string m_failoverPolicy;
                    bool m_failoverPolicyHasBeenSet;

                    /**
                     * Origin server group health status.
                     */
                    std::vector<OriginGroupHealthStatus> m_originGroupHealthStatus;
                    bool m_originGroupHealthStatusHasBeenSet;

                    /**
                     * LoadBalancer status. Valid values:
<li>Pending: deploying.</li>
<li>Deleting: deleting.</li>
<li>Running: effective.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * List of Layer-4 proxy instances bound to a LoadBalancer.
                     */
                    std::vector<std::string> m_l4UsedList;
                    bool m_l4UsedListHasBeenSet;

                    /**
                     * List of Layer-7 domain names bound to a LoadBalancer.
                     */
                    std::vector<std::string> m_l7UsedList;
                    bool m_l7UsedListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_LOADBALANCER_H_
