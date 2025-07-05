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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/LoadBalancerInternetAccessible.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancerAttributes request structure.
                */
                class ModifyLoadBalancerAttributesRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancerAttributesRequest();
                    ~ModifyLoadBalancerAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique CLB ID
                     * @return LoadBalancerId Unique CLB ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置Unique CLB ID
                     * @param _loadBalancerId Unique CLB ID
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取CLB instance name
                     * @return LoadBalancerName CLB instance name
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置CLB instance name
                     * @param _loadBalancerName CLB instance name
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取Network billing and bandwidth parameters
                     * @return InternetChargeInfo Network billing and bandwidth parameters
                     * 
                     */
                    LoadBalancerInternetAccessible GetInternetChargeInfo() const;

                    /**
                     * 设置Network billing and bandwidth parameters
                     * @param _internetChargeInfo Network billing and bandwidth parameters
                     * 
                     */
                    void SetInternetChargeInfo(const LoadBalancerInternetAccessible& _internetChargeInfo);

                    /**
                     * 判断参数 InternetChargeInfo 是否已赋值
                     * @return InternetChargeInfo 是否已赋值
                     * 
                     */
                    bool InternetChargeInfoHasBeenSet() const;

                    /**
                     * 获取Whether to allow ELB traffic to the target group. `true`: allows ELB traffic to the target group and verifies security groups only on ELB; `false`: denies ELB traffic to the target group and verifies security groups on both ELB and backend instances.
                     * @return LoadBalancerPassToTarget Whether to allow ELB traffic to the target group. `true`: allows ELB traffic to the target group and verifies security groups only on ELB; `false`: denies ELB traffic to the target group and verifies security groups on both ELB and backend instances.
                     * 
                     */
                    bool GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置Whether to allow ELB traffic to the target group. `true`: allows ELB traffic to the target group and verifies security groups only on ELB; `false`: denies ELB traffic to the target group and verifies security groups on both ELB and backend instances.
                     * @param _loadBalancerPassToTarget Whether to allow ELB traffic to the target group. `true`: allows ELB traffic to the target group and verifies security groups only on ELB; `false`: denies ELB traffic to the target group and verifies security groups on both ELB and backend instances.
                     * 
                     */
                    void SetLoadBalancerPassToTarget(const bool& _loadBalancerPassToTarget);

                    /**
                     * 判断参数 LoadBalancerPassToTarget 是否已赋值
                     * @return LoadBalancerPassToTarget 是否已赋值
                     * 
                     */
                    bool LoadBalancerPassToTargetHasBeenSet() const;

                private:

                    /**
                     * Unique CLB ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CLB instance name
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * Network billing and bandwidth parameters
                     */
                    LoadBalancerInternetAccessible m_internetChargeInfo;
                    bool m_internetChargeInfoHasBeenSet;

                    /**
                     * Whether to allow ELB traffic to the target group. `true`: allows ELB traffic to the target group and verifies security groups only on ELB; `false`: denies ELB traffic to the target group and verifies security groups on both ELB and backend instances.
                     */
                    bool m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_
