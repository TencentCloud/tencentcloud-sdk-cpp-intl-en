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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCERTRAFFIC_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCERTRAFFIC_H_

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
                * CLB instance traffic data
                */
                class LoadBalancerTraffic : public AbstractModel
                {
                public:
                    LoadBalancerTraffic();
                    ~LoadBalancerTraffic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CLB instance ID
                     * @return LoadBalancerId CLB instance ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID
                     * @param _loadBalancerId CLB instance ID
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
                     * 获取CLB instance region
                     * @return Region CLB instance region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置CLB instance region
                     * @param _region CLB instance region
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
                     * 获取CLB instance VIP
                     * @return Vip CLB instance VIP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置CLB instance VIP
                     * @param _vip CLB instance VIP
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
                     * 获取Maximum outbound bandwidth in Mbps
                     * @return OutBandwidth Maximum outbound bandwidth in Mbps
                     * 
                     */
                    double GetOutBandwidth() const;

                    /**
                     * 设置Maximum outbound bandwidth in Mbps
                     * @param _outBandwidth Maximum outbound bandwidth in Mbps
                     * 
                     */
                    void SetOutBandwidth(const double& _outBandwidth);

                    /**
                     * 判断参数 OutBandwidth 是否已赋值
                     * @return OutBandwidth 是否已赋值
                     * 
                     */
                    bool OutBandwidthHasBeenSet() const;

                    /**
                     * 获取Specifies the CLB domain name.
                     * @return Domain Specifies the CLB domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Specifies the CLB domain name.
                     * @param _domain Specifies the CLB domain name.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
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
                     * Maximum outbound bandwidth in Mbps
                     */
                    double m_outBandwidth;
                    bool m_outBandwidthHasBeenSet;

                    /**
                     * Specifies the CLB domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCERTRAFFIC_H_
