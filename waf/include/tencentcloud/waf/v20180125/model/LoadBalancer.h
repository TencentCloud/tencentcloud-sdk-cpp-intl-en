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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LOADBALANCER_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * CLB listener
                */
                class LoadBalancer : public AbstractModel
                {
                public:
                    LoadBalancer();
                    ~LoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CLB LD's ID
                     * @return LoadBalancerId CLB LD's ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB LD's ID
                     * @param _loadBalancerId CLB LD's ID
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
                     * 获取CLB LD's Name
                     * @return LoadBalancerName CLB LD's Name
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置CLB LD's Name
                     * @param _loadBalancerName CLB LD's Name
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
                     * 获取CLB Listener ID
                     * @return ListenerId CLB Listener ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置CLB Listener ID
                     * @param _listenerId CLB Listener ID
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Name of CLB Listener
                     * @return ListenerName Name of CLB Listener
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Name of CLB Listener
                     * @param _listenerName Name of CLB Listener
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取IP of CLB Instance
                     * @return Vip IP of CLB Instance
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置IP of CLB Instance
                     * @param _vip IP of CLB Instance
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Port of the CLB Instance
                     * @return Vport Port of the CLB Instance
                     * 
                     */
                    uint64_t GetVport() const;

                    /**
                     * 设置Port of the CLB Instance
                     * @param _vport Port of the CLB Instance
                     * 
                     */
                    void SetVport(const uint64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取CLB LD's Region
                     * @return Region CLB LD's Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置CLB LD's Region
                     * @param _region CLB LD's Region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Listener Protocol, HTTP, HTTPS
                     * @return Protocol Listener Protocol, HTTP, HTTPS
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener Protocol, HTTP, HTTPS
                     * @param _protocol Listener Protocol, HTTP, HTTPS
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Zone of the CLB Listener
                     * @return Zone Zone of the CLB Listener
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Zone of the CLB Listener
                     * @param _zone Zone of the CLB Listener
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取CLB's VPC ID, -1 for public network, fill in the actual number for private network

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NumericalVpcId CLB's VPC ID, -1 for public network, fill in the actual number for private network

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNumericalVpcId() const;

                    /**
                     * 设置CLB's VPC ID, -1 for public network, fill in the actual number for private network

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _numericalVpcId CLB's VPC ID, -1 for public network, fill in the actual number for private network

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNumericalVpcId(const int64_t& _numericalVpcId);

                    /**
                     * 判断参数 NumericalVpcId 是否已赋值
                     * @return NumericalVpcId 是否已赋值
                     * 
                     */
                    bool NumericalVpcIdHasBeenSet() const;

                    /**
                     * 获取CLB Network Type

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerType CLB Network Type

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置CLB Network Type

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerType CLB Network Type

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取CLB Domain Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerDomain CLB Domain Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancerDomain() const;

                    /**
                     * 设置CLB Domain Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerDomain CLB Domain Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLoadBalancerDomain(const std::string& _loadBalancerDomain);

                    /**
                     * 判断参数 LoadBalancerDomain 是否已赋值
                     * @return LoadBalancerDomain 是否已赋值
                     * 
                     */
                    bool LoadBalancerDomainHasBeenSet() const;

                private:

                    /**
                     * CLB LD's ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CLB LD's Name
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * CLB Listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Name of CLB Listener
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * IP of CLB Instance
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Port of the CLB Instance
                     */
                    uint64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * CLB LD's Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Listener Protocol, HTTP, HTTPS
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Zone of the CLB Listener
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * CLB's VPC ID, -1 for public network, fill in the actual number for private network

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_numericalVpcId;
                    bool m_numericalVpcIdHasBeenSet;

                    /**
                     * CLB Network Type

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * CLB Domain Name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerDomain;
                    bool m_loadBalancerDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LOADBALANCER_H_
