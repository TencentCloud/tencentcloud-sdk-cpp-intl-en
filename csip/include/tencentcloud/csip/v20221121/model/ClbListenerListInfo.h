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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLBLISTENERLISTINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLBLISTENERLISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CLB instance and listener information
                */
                class ClbListenerListInfo : public AbstractModel
                {
                public:
                    ClbListenerListInfo();
                    ~ClbListenerListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Listener ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ListenerId Listener ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _listenerId Listener ID
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取The listener name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ListenerName The listener name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置The listener name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _listenerName The listener name.
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Load balancer ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return LoadBalancerId Load balancer ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置Load balancer ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _loadBalancerId Load balancer ID
Note: This field may return·null, indicating that no valid values can be obtained.
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
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return LoadBalancerName CLB instance name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置CLB instance name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _loadBalancerName CLB instance name
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Network protocol
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Protocol Network protocol
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Network protocol
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _protocol Network protocol
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Region Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _region Region
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取CLB instance IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Vip CLB instance IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置CLB instance IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _vip CLB instance IP
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Port
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VPort Port
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVPort() const;

                    /**
                     * 设置Port
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _vPort Port
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVPort(const int64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取Availability zone
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Zone Availability zone
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _zone Availability zone
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取VPC ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return NumericalVpcId VPC ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNumericalVpcId() const;

                    /**
                     * 设置VPC ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _numericalVpcId VPC ID
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取CLB instance type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return LoadBalancerType CLB instance type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置CLB instance type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _loadBalancerType CLB instance type
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Listener domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Domain Listener domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Listener domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _domain Listener domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Load balancer domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return LoadBalancerDomain Load balancer domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancerDomain() const;

                    /**
                     * 设置Load balancer domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _loadBalancerDomain Load balancer domain name
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * Listener ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * The listener name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Load balancer ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CLB instance name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * Network protocol
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * CLB instance IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Port
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * Availability zone
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * VPC ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_numericalVpcId;
                    bool m_numericalVpcIdHasBeenSet;

                    /**
                     * CLB instance type
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * Listener domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Load balancer domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerDomain;
                    bool m_loadBalancerDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLBLISTENERLISTINFO_H_
