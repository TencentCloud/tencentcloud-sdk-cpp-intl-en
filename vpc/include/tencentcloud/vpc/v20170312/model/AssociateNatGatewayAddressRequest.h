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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATENATGATEWAYADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATENATGATEWAYADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AssociateNatGatewayAddress request structure.
                */
                class AssociateNatGatewayAddressRequest : public AbstractModel
                {
                public:
                    AssociateNatGatewayAddressRequest();
                    ~AssociateNatGatewayAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the NAT gateway, such as `nat-df45454`.
                     * @return NatGatewayId The ID of the NAT gateway, such as `nat-df45454`.
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置The ID of the NAT gateway, such as `nat-df45454`.
                     * @param NatGatewayId The ID of the NAT gateway, such as `nat-df45454`.
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取The number of EIPs you want to apply for. The system will create the same number of EIPs as you require. Either `AddressCount` or `PublicAddresses` must be passed in.
                     * @return AddressCount The number of EIPs you want to apply for. The system will create the same number of EIPs as you require. Either `AddressCount` or `PublicAddresses` must be passed in.
                     */
                    uint64_t GetAddressCount() const;

                    /**
                     * 设置The number of EIPs you want to apply for. The system will create the same number of EIPs as you require. Either `AddressCount` or `PublicAddresses` must be passed in.
                     * @param AddressCount The number of EIPs you want to apply for. The system will create the same number of EIPs as you require. Either `AddressCount` or `PublicAddresses` must be passed in.
                     */
                    void SetAddressCount(const uint64_t& _addressCount);

                    /**
                     * 判断参数 AddressCount 是否已赋值
                     * @return AddressCount 是否已赋值
                     */
                    bool AddressCountHasBeenSet() const;

                    /**
                     * 获取Array of the EIPs bound to the NAT gateway. Either `AddressCount` or `PublicAddresses` must be passed in.
                     * @return PublicIpAddresses Array of the EIPs bound to the NAT gateway. Either `AddressCount` or `PublicAddresses` must be passed in.
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置Array of the EIPs bound to the NAT gateway. Either `AddressCount` or `PublicAddresses` must be passed in.
                     * @param PublicIpAddresses Array of the EIPs bound to the NAT gateway. Either `AddressCount` or `PublicAddresses` must be passed in.
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取The availability zone of the EIP, which is passed in when the EIP is automatically assigned.
                     * @return Zone The availability zone of the EIP, which is passed in when the EIP is automatically assigned.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The availability zone of the EIP, which is passed in when the EIP is automatically assigned.
                     * @param Zone The availability zone of the EIP, which is passed in when the EIP is automatically assigned.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取The bandwidth size (in Mbps) of the EIP bound to the NAT gateway, which defaults to the maximum value applicable for the current user type.
                     * @return StockPublicIpAddressesBandwidthOut The bandwidth size (in Mbps) of the EIP bound to the NAT gateway, which defaults to the maximum value applicable for the current user type.
                     */
                    uint64_t GetStockPublicIpAddressesBandwidthOut() const;

                    /**
                     * 设置The bandwidth size (in Mbps) of the EIP bound to the NAT gateway, which defaults to the maximum value applicable for the current user type.
                     * @param StockPublicIpAddressesBandwidthOut The bandwidth size (in Mbps) of the EIP bound to the NAT gateway, which defaults to the maximum value applicable for the current user type.
                     */
                    void SetStockPublicIpAddressesBandwidthOut(const uint64_t& _stockPublicIpAddressesBandwidthOut);

                    /**
                     * 判断参数 StockPublicIpAddressesBandwidthOut 是否已赋值
                     * @return StockPublicIpAddressesBandwidthOut 是否已赋值
                     */
                    bool StockPublicIpAddressesBandwidthOutHasBeenSet() const;

                    /**
                     * 获取The requested size of the public network IP bandwidth (in Mbps), which defaults to the maximum value applicable for the current user type.
                     * @return PublicIpAddressesBandwidthOut The requested size of the public network IP bandwidth (in Mbps), which defaults to the maximum value applicable for the current user type.
                     */
                    uint64_t GetPublicIpAddressesBandwidthOut() const;

                    /**
                     * 设置The requested size of the public network IP bandwidth (in Mbps), which defaults to the maximum value applicable for the current user type.
                     * @param PublicIpAddressesBandwidthOut The requested size of the public network IP bandwidth (in Mbps), which defaults to the maximum value applicable for the current user type.
                     */
                    void SetPublicIpAddressesBandwidthOut(const uint64_t& _publicIpAddressesBandwidthOut);

                    /**
                     * 判断参数 PublicIpAddressesBandwidthOut 是否已赋值
                     * @return PublicIpAddressesBandwidthOut 是否已赋值
                     */
                    bool PublicIpAddressesBandwidthOutHasBeenSet() const;

                    /**
                     * 获取
                     * @return PublicIpFromSameZone 
                     */
                    bool GetPublicIpFromSameZone() const;

                    /**
                     * 设置
                     * @param PublicIpFromSameZone 
                     */
                    void SetPublicIpFromSameZone(const bool& _publicIpFromSameZone);

                    /**
                     * 判断参数 PublicIpFromSameZone 是否已赋值
                     * @return PublicIpFromSameZone 是否已赋值
                     */
                    bool PublicIpFromSameZoneHasBeenSet() const;

                private:

                    /**
                     * The ID of the NAT gateway, such as `nat-df45454`.
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * The number of EIPs you want to apply for. The system will create the same number of EIPs as you require. Either `AddressCount` or `PublicAddresses` must be passed in.
                     */
                    uint64_t m_addressCount;
                    bool m_addressCountHasBeenSet;

                    /**
                     * Array of the EIPs bound to the NAT gateway. Either `AddressCount` or `PublicAddresses` must be passed in.
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * The availability zone of the EIP, which is passed in when the EIP is automatically assigned.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * The bandwidth size (in Mbps) of the EIP bound to the NAT gateway, which defaults to the maximum value applicable for the current user type.
                     */
                    uint64_t m_stockPublicIpAddressesBandwidthOut;
                    bool m_stockPublicIpAddressesBandwidthOutHasBeenSet;

                    /**
                     * The requested size of the public network IP bandwidth (in Mbps), which defaults to the maximum value applicable for the current user type.
                     */
                    uint64_t m_publicIpAddressesBandwidthOut;
                    bool m_publicIpAddressesBandwidthOutHasBeenSet;

                    /**
                     * 
                     */
                    bool m_publicIpFromSameZone;
                    bool m_publicIpFromSameZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATENATGATEWAYADDRESSREQUEST_H_
