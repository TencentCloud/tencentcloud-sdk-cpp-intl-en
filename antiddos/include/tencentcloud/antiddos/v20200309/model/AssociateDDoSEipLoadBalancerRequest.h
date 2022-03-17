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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ASSOCIATEDDOSEIPLOADBALANCERREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ASSOCIATEDDOSEIPLOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * AssociateDDoSEipLoadBalancer request structure.
                */
                class AssociateDDoSEipLoadBalancerRequest : public AbstractModel
                {
                public:
                    AssociateDDoSEipLoadBalancerRequest();
                    ~AssociateDDoSEipLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS instance ID (only Anti-DDoS Advanced). For example, `bgpip-0000011x`.
                     * @return InstanceId Anti-DDoS instance ID (only Anti-DDoS Advanced). For example, `bgpip-0000011x`.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Anti-DDoS instance ID (only Anti-DDoS Advanced). For example, `bgpip-0000011x`.
                     * @param InstanceId Anti-DDoS instance ID (only Anti-DDoS Advanced). For example, `bgpip-0000011x`.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取EIP of the Anti-DDoS instance ID.
                     * @return Eip EIP of the Anti-DDoS instance ID.
                     */
                    std::string GetEip() const;

                    /**
                     * 设置EIP of the Anti-DDoS instance ID.
                     * @param Eip EIP of the Anti-DDoS instance ID.
                     */
                    void SetEip(const std::string& _eip);

                    /**
                     * 判断参数 Eip 是否已赋值
                     * @return Eip 是否已赋值
                     */
                    bool EipHasBeenSet() const;

                    /**
                     * 获取ID of the CLB to bind, such as `lb-0000002i`. It can be queried in the console or obtained from `LoadBalancerId` returned by the `DescribeLoadBalancers` API.
                     * @return LoadBalancerID ID of the CLB to bind, such as `lb-0000002i`. It can be queried in the console or obtained from `LoadBalancerId` returned by the `DescribeLoadBalancers` API.
                     */
                    std::string GetLoadBalancerID() const;

                    /**
                     * 设置ID of the CLB to bind, such as `lb-0000002i`. It can be queried in the console or obtained from `LoadBalancerId` returned by the `DescribeLoadBalancers` API.
                     * @param LoadBalancerID ID of the CLB to bind, such as `lb-0000002i`. It can be queried in the console or obtained from `LoadBalancerId` returned by the `DescribeLoadBalancers` API.
                     */
                    void SetLoadBalancerID(const std::string& _loadBalancerID);

                    /**
                     * 判断参数 LoadBalancerID 是否已赋值
                     * @return LoadBalancerID 是否已赋值
                     */
                    bool LoadBalancerIDHasBeenSet() const;

                    /**
                     * 获取Region of the CLB instance, such as `ap-hongkong`.
                     * @return LoadBalancerRegion Region of the CLB instance, such as `ap-hongkong`.
                     */
                    std::string GetLoadBalancerRegion() const;

                    /**
                     * 设置Region of the CLB instance, such as `ap-hongkong`.
                     * @param LoadBalancerRegion Region of the CLB instance, such as `ap-hongkong`.
                     */
                    void SetLoadBalancerRegion(const std::string& _loadBalancerRegion);

                    /**
                     * 判断参数 LoadBalancerRegion 是否已赋值
                     * @return LoadBalancerRegion 是否已赋值
                     */
                    bool LoadBalancerRegionHasBeenSet() const;

                    /**
                     * 获取CLB private IP
                     * @return Vip CLB private IP
                     */
                    std::string GetVip() const;

                    /**
                     * 设置CLB private IP
                     * @param Vip CLB private IP
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS instance ID (only Anti-DDoS Advanced). For example, `bgpip-0000011x`.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * EIP of the Anti-DDoS instance ID.
                     */
                    std::string m_eip;
                    bool m_eipHasBeenSet;

                    /**
                     * ID of the CLB to bind, such as `lb-0000002i`. It can be queried in the console or obtained from `LoadBalancerId` returned by the `DescribeLoadBalancers` API.
                     */
                    std::string m_loadBalancerID;
                    bool m_loadBalancerIDHasBeenSet;

                    /**
                     * Region of the CLB instance, such as `ap-hongkong`.
                     */
                    std::string m_loadBalancerRegion;
                    bool m_loadBalancerRegionHasBeenSet;

                    /**
                     * CLB private IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ASSOCIATEDDOSEIPLOADBALANCERREQUEST_H_
