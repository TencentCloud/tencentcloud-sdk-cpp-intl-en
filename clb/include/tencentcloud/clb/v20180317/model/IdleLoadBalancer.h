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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_IDLELOADBALANCER_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_IDLELOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ID of the idle CLB instance
                */
                class IdleLoadBalancer : public AbstractModel
                {
                public:
                    IdleLoadBalancer();
                    ~IdleLoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CLB instance ID
                     * @return LoadBalancerId CLB instance ID
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID
                     * @param LoadBalancerId CLB instance ID
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取CLB instance name
                     * @return LoadBalancerName CLB instance name
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置CLB instance name
                     * @param LoadBalancerName CLB instance name
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取CLB instance region
                     * @return Region CLB instance region
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置CLB instance region
                     * @param Region CLB instance region
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取CLB instance VIP
                     * @return Vip CLB instance VIP
                     */
                    std::string GetVip() const;

                    /**
                     * 设置CLB instance VIP
                     * @param Vip CLB instance VIP
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取The reason why the load balancer is considered idle. `NO_RULES`: No rules configured. `NO_RS`: The rules are not associated with servers.
                     * @return IdleReason The reason why the load balancer is considered idle. `NO_RULES`: No rules configured. `NO_RS`: The rules are not associated with servers.
                     */
                    std::string GetIdleReason() const;

                    /**
                     * 设置The reason why the load balancer is considered idle. `NO_RULES`: No rules configured. `NO_RS`: The rules are not associated with servers.
                     * @param IdleReason The reason why the load balancer is considered idle. `NO_RULES`: No rules configured. `NO_RS`: The rules are not associated with servers.
                     */
                    void SetIdleReason(const std::string& _idleReason);

                    /**
                     * 判断参数 IdleReason 是否已赋值
                     * @return IdleReason 是否已赋值
                     */
                    bool IdleReasonHasBeenSet() const;

                    /**
                     * 获取CLB instance status, including:
`0`: Creating; `1`: Running.
                     * @return Status CLB instance status, including:
`0`: Creating; `1`: Running.
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置CLB instance status, including:
`0`: Creating; `1`: Running.
                     * @param Status CLB instance status, including:
`0`: Creating; `1`: Running.
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取CLB type. Value range: `1` (CLB); `0` (classic CLB).
                     * @return Forward CLB type. Value range: `1` (CLB); `0` (classic CLB).
                     */
                    uint64_t GetForward() const;

                    /**
                     * 设置CLB type. Value range: `1` (CLB); `0` (classic CLB).
                     * @param Forward CLB type. Value range: `1` (CLB); `0` (classic CLB).
                     */
                    void SetForward(const uint64_t& _forward);

                    /**
                     * 判断参数 Forward 是否已赋值
                     * @return Forward 是否已赋值
                     */
                    bool ForwardHasBeenSet() const;

                    /**
                     * 获取The load balancing hostname.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Domain The load balancing hostname.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The load balancing hostname.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Domain The load balancing hostname.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CLB instance name
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * CLB instance region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * CLB instance VIP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * The reason why the load balancer is considered idle. `NO_RULES`: No rules configured. `NO_RS`: The rules are not associated with servers.
                     */
                    std::string m_idleReason;
                    bool m_idleReasonHasBeenSet;

                    /**
                     * CLB instance status, including:
`0`: Creating; `1`: Running.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CLB type. Value range: `1` (CLB); `0` (classic CLB).
                     */
                    uint64_t m_forward;
                    bool m_forwardHasBeenSet;

                    /**
                     * The load balancing hostname.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_IDLELOADBALANCER_H_
