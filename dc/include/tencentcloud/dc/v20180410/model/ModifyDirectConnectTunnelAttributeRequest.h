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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_MODIFYDIRECTCONNECTTUNNELATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_MODIFYDIRECTCONNECTTUNNELATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/BgpPeer.h>
#include <tencentcloud/dc/v20180410/model/RouteFilterPrefix.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * ModifyDirectConnectTunnelAttribute request structure.
                */
                class ModifyDirectConnectTunnelAttributeRequest : public AbstractModel
                {
                public:
                    ModifyDirectConnectTunnelAttributeRequest();
                    ~ModifyDirectConnectTunnelAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Dedicated tunnel ID.
                     * @return DirectConnectTunnelId Dedicated tunnel ID.
                     * 
                     */
                    std::string GetDirectConnectTunnelId() const;

                    /**
                     * 设置Dedicated tunnel ID.
                     * @param _directConnectTunnelId Dedicated tunnel ID.
                     * 
                     */
                    void SetDirectConnectTunnelId(const std::string& _directConnectTunnelId);

                    /**
                     * 判断参数 DirectConnectTunnelId 是否已赋值
                     * @return DirectConnectTunnelId 是否已赋值
                     * 
                     */
                    bool DirectConnectTunnelIdHasBeenSet() const;

                    /**
                     * 获取Dedicated tunnel name.
                     * @return DirectConnectTunnelName Dedicated tunnel name.
                     * 
                     */
                    std::string GetDirectConnectTunnelName() const;

                    /**
                     * 设置Dedicated tunnel name.
                     * @param _directConnectTunnelName Dedicated tunnel name.
                     * 
                     */
                    void SetDirectConnectTunnelName(const std::string& _directConnectTunnelName);

                    /**
                     * 判断参数 DirectConnectTunnelName 是否已赋值
                     * @return DirectConnectTunnelName 是否已赋值
                     * 
                     */
                    bool DirectConnectTunnelNameHasBeenSet() const;

                    /**
                     * 获取User-side BGP, including Asn and AuthKey.
                     * @return BgpPeer User-side BGP, including Asn and AuthKey.
                     * 
                     */
                    BgpPeer GetBgpPeer() const;

                    /**
                     * 设置User-side BGP, including Asn and AuthKey.
                     * @param _bgpPeer User-side BGP, including Asn and AuthKey.
                     * 
                     */
                    void SetBgpPeer(const BgpPeer& _bgpPeer);

                    /**
                     * 判断参数 BgpPeer 是否已赋值
                     * @return BgpPeer 是否已赋值
                     * 
                     */
                    bool BgpPeerHasBeenSet() const;

                    /**
                     * 获取User-side IP range.
                     * @return RouteFilterPrefixes User-side IP range.
                     * 
                     */
                    std::vector<RouteFilterPrefix> GetRouteFilterPrefixes() const;

                    /**
                     * 设置User-side IP range.
                     * @param _routeFilterPrefixes User-side IP range.
                     * 
                     */
                    void SetRouteFilterPrefixes(const std::vector<RouteFilterPrefix>& _routeFilterPrefixes);

                    /**
                     * 判断参数 RouteFilterPrefixes 是否已赋值
                     * @return RouteFilterPrefixes 是否已赋值
                     * 
                     */
                    bool RouteFilterPrefixesHasBeenSet() const;

                    /**
                     * 获取Tencent-side IP address.
                     * @return TencentAddress Tencent-side IP address.
                     * 
                     */
                    std::string GetTencentAddress() const;

                    /**
                     * 设置Tencent-side IP address.
                     * @param _tencentAddress Tencent-side IP address.
                     * 
                     */
                    void SetTencentAddress(const std::string& _tencentAddress);

                    /**
                     * 判断参数 TencentAddress 是否已赋值
                     * @return TencentAddress 是否已赋值
                     * 
                     */
                    bool TencentAddressHasBeenSet() const;

                    /**
                     * 获取User-side IP address.
                     * @return CustomerAddress User-side IP address.
                     * 
                     */
                    std::string GetCustomerAddress() const;

                    /**
                     * 设置User-side IP address.
                     * @param _customerAddress User-side IP address.
                     * 
                     */
                    void SetCustomerAddress(const std::string& _customerAddress);

                    /**
                     * 判断参数 CustomerAddress 是否已赋值
                     * @return CustomerAddress 是否已赋值
                     * 
                     */
                    bool CustomerAddressHasBeenSet() const;

                    /**
                     * 获取Bandwidth value of a dedicated tunnel in Mbps.
                     * @return Bandwidth Bandwidth value of a dedicated tunnel in Mbps.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Bandwidth value of a dedicated tunnel in Mbps.
                     * @param _bandwidth Bandwidth value of a dedicated tunnel in Mbps.
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Tencent-side standby IP address
                     * @return TencentBackupAddress Tencent-side standby IP address
                     * 
                     */
                    std::string GetTencentBackupAddress() const;

                    /**
                     * 设置Tencent-side standby IP address
                     * @param _tencentBackupAddress Tencent-side standby IP address
                     * 
                     */
                    void SetTencentBackupAddress(const std::string& _tencentBackupAddress);

                    /**
                     * 判断参数 TencentBackupAddress 是否已赋值
                     * @return TencentBackupAddress 是否已赋值
                     * 
                     */
                    bool TencentBackupAddressHasBeenSet() const;

                private:

                    /**
                     * Dedicated tunnel ID.
                     */
                    std::string m_directConnectTunnelId;
                    bool m_directConnectTunnelIdHasBeenSet;

                    /**
                     * Dedicated tunnel name.
                     */
                    std::string m_directConnectTunnelName;
                    bool m_directConnectTunnelNameHasBeenSet;

                    /**
                     * User-side BGP, including Asn and AuthKey.
                     */
                    BgpPeer m_bgpPeer;
                    bool m_bgpPeerHasBeenSet;

                    /**
                     * User-side IP range.
                     */
                    std::vector<RouteFilterPrefix> m_routeFilterPrefixes;
                    bool m_routeFilterPrefixesHasBeenSet;

                    /**
                     * Tencent-side IP address.
                     */
                    std::string m_tencentAddress;
                    bool m_tencentAddressHasBeenSet;

                    /**
                     * User-side IP address.
                     */
                    std::string m_customerAddress;
                    bool m_customerAddressHasBeenSet;

                    /**
                     * Bandwidth value of a dedicated tunnel in Mbps.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Tencent-side standby IP address
                     */
                    std::string m_tencentBackupAddress;
                    bool m_tencentBackupAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_MODIFYDIRECTCONNECTTUNNELATTRIBUTEREQUEST_H_
