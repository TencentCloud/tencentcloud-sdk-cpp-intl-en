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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEDDOSPOLICYREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEDDOSPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/DDoSPolicyDropOption.h>
#include <tencentcloud/dayu/v20180709/model/DDoSPolicyPortLimit.h>
#include <tencentcloud/dayu/v20180709/model/IpBlackWhite.h>
#include <tencentcloud/dayu/v20180709/model/DDoSPolicyPacketFilter.h>
#include <tencentcloud/dayu/v20180709/model/WaterPrintPolicy.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateDDoSPolicy request structure.
                */
                class CreateDDoSPolicyRequest : public AbstractModel
                {
                public:
                    CreateDDoSPolicyRequest();
                    ~CreateDDoSPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * @param _business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Protocol disablement, which must be entered, and the array length must be 1
                     * @return DropOptions Protocol disablement, which must be entered, and the array length must be 1
                     * 
                     */
                    std::vector<DDoSPolicyDropOption> GetDropOptions() const;

                    /**
                     * 设置Protocol disablement, which must be entered, and the array length must be 1
                     * @param _dropOptions Protocol disablement, which must be entered, and the array length must be 1
                     * 
                     */
                    void SetDropOptions(const std::vector<DDoSPolicyDropOption>& _dropOptions);

                    /**
                     * 判断参数 DropOptions 是否已赋值
                     * @return DropOptions 是否已赋值
                     * 
                     */
                    bool DropOptionsHasBeenSet() const;

                    /**
                     * 获取Policy name
                     * @return Name Policy name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Policy name
                     * @param _name Policy name
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
                     * 获取Ports to be closed. If no ports are to be closed, enter an empty array
                     * @return PortLimits Ports to be closed. If no ports are to be closed, enter an empty array
                     * 
                     */
                    std::vector<DDoSPolicyPortLimit> GetPortLimits() const;

                    /**
                     * 设置Ports to be closed. If no ports are to be closed, enter an empty array
                     * @param _portLimits Ports to be closed. If no ports are to be closed, enter an empty array
                     * 
                     */
                    void SetPortLimits(const std::vector<DDoSPolicyPortLimit>& _portLimits);

                    /**
                     * 判断参数 PortLimits 是否已赋值
                     * @return PortLimits 是否已赋值
                     * 
                     */
                    bool PortLimitsHasBeenSet() const;

                    /**
                     * 获取Request source IP blocklist/allowlist, which should be an empty array if there are no blocked or allowed IPs.
                     * @return IpAllowDenys Request source IP blocklist/allowlist, which should be an empty array if there are no blocked or allowed IPs.
                     * 
                     */
                    std::vector<IpBlackWhite> GetIpAllowDenys() const;

                    /**
                     * 设置Request source IP blocklist/allowlist, which should be an empty array if there are no blocked or allowed IPs.
                     * @param _ipAllowDenys Request source IP blocklist/allowlist, which should be an empty array if there are no blocked or allowed IPs.
                     * 
                     */
                    void SetIpAllowDenys(const std::vector<IpBlackWhite>& _ipAllowDenys);

                    /**
                     * 判断参数 IpAllowDenys 是否已赋值
                     * @return IpAllowDenys 是否已赋值
                     * 
                     */
                    bool IpAllowDenysHasBeenSet() const;

                    /**
                     * 获取Packet filter. Enter an empty array if there are no packets to filter
                     * @return PacketFilters Packet filter. Enter an empty array if there are no packets to filter
                     * 
                     */
                    std::vector<DDoSPolicyPacketFilter> GetPacketFilters() const;

                    /**
                     * 设置Packet filter. Enter an empty array if there are no packets to filter
                     * @param _packetFilters Packet filter. Enter an empty array if there are no packets to filter
                     * 
                     */
                    void SetPacketFilters(const std::vector<DDoSPolicyPacketFilter>& _packetFilters);

                    /**
                     * 判断参数 PacketFilters 是否已赋值
                     * @return PacketFilters 是否已赋值
                     * 
                     */
                    bool PacketFiltersHasBeenSet() const;

                    /**
                     * 获取Watermarking policy parameters. Enter an empty array if the watermarking feature is not enabled. Only one watermarking policy can be passed in (that is, the size of the array cannot exceed 1)
                     * @return WaterPrint Watermarking policy parameters. Enter an empty array if the watermarking feature is not enabled. Only one watermarking policy can be passed in (that is, the size of the array cannot exceed 1)
                     * 
                     */
                    std::vector<WaterPrintPolicy> GetWaterPrint() const;

                    /**
                     * 设置Watermarking policy parameters. Enter an empty array if the watermarking feature is not enabled. Only one watermarking policy can be passed in (that is, the size of the array cannot exceed 1)
                     * @param _waterPrint Watermarking policy parameters. Enter an empty array if the watermarking feature is not enabled. Only one watermarking policy can be passed in (that is, the size of the array cannot exceed 1)
                     * 
                     */
                    void SetWaterPrint(const std::vector<WaterPrintPolicy>& _waterPrint);

                    /**
                     * 判断参数 WaterPrint 是否已赋值
                     * @return WaterPrint 是否已赋值
                     * 
                     */
                    bool WaterPrintHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Protocol disablement, which must be entered, and the array length must be 1
                     */
                    std::vector<DDoSPolicyDropOption> m_dropOptions;
                    bool m_dropOptionsHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Ports to be closed. If no ports are to be closed, enter an empty array
                     */
                    std::vector<DDoSPolicyPortLimit> m_portLimits;
                    bool m_portLimitsHasBeenSet;

                    /**
                     * Request source IP blocklist/allowlist, which should be an empty array if there are no blocked or allowed IPs.
                     */
                    std::vector<IpBlackWhite> m_ipAllowDenys;
                    bool m_ipAllowDenysHasBeenSet;

                    /**
                     * Packet filter. Enter an empty array if there are no packets to filter
                     */
                    std::vector<DDoSPolicyPacketFilter> m_packetFilters;
                    bool m_packetFiltersHasBeenSet;

                    /**
                     * Watermarking policy parameters. Enter an empty array if the watermarking feature is not enabled. Only one watermarking policy can be passed in (that is, the size of the array cannot exceed 1)
                     */
                    std::vector<WaterPrintPolicy> m_waterPrint;
                    bool m_waterPrintHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEDDOSPOLICYREQUEST_H_
