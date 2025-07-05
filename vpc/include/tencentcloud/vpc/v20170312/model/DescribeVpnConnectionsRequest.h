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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPNCONNECTIONSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPNCONNECTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeVpnConnections request structure.
                */
                class DescribeVpnConnectionsRequest : public AbstractModel
                {
                public:
                    DescribeVpnConnectionsRequest();
                    ~DescribeVpnConnectionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The instance ID of the VPN tunnel, such as `vpnx-f49l6u0z`. Each request can have a maximum of 100 instances. `VpnConnectionIds` and `Filters` cannot be specified at the same time.
                     * @return VpnConnectionIds The instance ID of the VPN tunnel, such as `vpnx-f49l6u0z`. Each request can have a maximum of 100 instances. `VpnConnectionIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    std::vector<std::string> GetVpnConnectionIds() const;

                    /**
                     * 设置The instance ID of the VPN tunnel, such as `vpnx-f49l6u0z`. Each request can have a maximum of 100 instances. `VpnConnectionIds` and `Filters` cannot be specified at the same time.
                     * @param _vpnConnectionIds The instance ID of the VPN tunnel, such as `vpnx-f49l6u0z`. Each request can have a maximum of 100 instances. `VpnConnectionIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    void SetVpnConnectionIds(const std::vector<std::string>& _vpnConnectionIds);

                    /**
                     * 判断参数 VpnConnectionIds 是否已赋值
                     * @return VpnConnectionIds 是否已赋值
                     * 
                     */
                    bool VpnConnectionIdsHasBeenSet() const;

                    /**
                     * 获取Filter condition. In each request, the upper limit for `Filters` is 10 and 5 for `Filter.Values`. `VpnConnectionIds` and `Filters` cannot be specified at the same time.
<li>vpc-id - String - VPC instance ID, such as `vpc-0a36uwkr`.</li>
<li>vpn-gateway-id - String - VPN gateway instance ID, such as `vpngw-p4lmqawn`.</li>
<li>customer-gateway-id - String - Customer gateway instance ID, such as `cgw-l4rblw63`.</li>
<li>vpn-connection-name - String - Connection name, such as `test-vpn`.</li>
<li>vpn-connection-id - String - Connection instance ID, such as `vpnx-5p7vkch8"`.</li>
                     * @return Filters Filter condition. In each request, the upper limit for `Filters` is 10 and 5 for `Filter.Values`. `VpnConnectionIds` and `Filters` cannot be specified at the same time.
<li>vpc-id - String - VPC instance ID, such as `vpc-0a36uwkr`.</li>
<li>vpn-gateway-id - String - VPN gateway instance ID, such as `vpngw-p4lmqawn`.</li>
<li>customer-gateway-id - String - Customer gateway instance ID, such as `cgw-l4rblw63`.</li>
<li>vpn-connection-name - String - Connection name, such as `test-vpn`.</li>
<li>vpn-connection-id - String - Connection instance ID, such as `vpnx-5p7vkch8"`.</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter condition. In each request, the upper limit for `Filters` is 10 and 5 for `Filter.Values`. `VpnConnectionIds` and `Filters` cannot be specified at the same time.
<li>vpc-id - String - VPC instance ID, such as `vpc-0a36uwkr`.</li>
<li>vpn-gateway-id - String - VPN gateway instance ID, such as `vpngw-p4lmqawn`.</li>
<li>customer-gateway-id - String - Customer gateway instance ID, such as `cgw-l4rblw63`.</li>
<li>vpn-connection-name - String - Connection name, such as `test-vpn`.</li>
<li>vpn-connection-id - String - Connection instance ID, such as `vpnx-5p7vkch8"`.</li>
                     * @param _filters Filter condition. In each request, the upper limit for `Filters` is 10 and 5 for `Filter.Values`. `VpnConnectionIds` and `Filters` cannot be specified at the same time.
<li>vpc-id - String - VPC instance ID, such as `vpc-0a36uwkr`.</li>
<li>vpn-gateway-id - String - VPN gateway instance ID, such as `vpngw-p4lmqawn`.</li>
<li>customer-gateway-id - String - Customer gateway instance ID, such as `cgw-l4rblw63`.</li>
<li>vpn-connection-name - String - Connection name, such as `test-vpn`.</li>
<li>vpn-connection-id - String - Connection instance ID, such as `vpnx-5p7vkch8"`.</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The Offset. The default value is 0. For more information about Offset, see the relevant section in the API Introduction.
                     * @return Offset The Offset. The default value is 0. For more information about Offset, see the relevant section in the API Introduction.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The Offset. The default value is 0. For more information about Offset, see the relevant section in the API Introduction.
                     * @param _offset The Offset. The default value is 0. For more information about Offset, see the relevant section in the API Introduction.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of values to be returned. The default value is 20. Maximum is 100.
                     * @return Limit Number of values to be returned. The default value is 20. Maximum is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of values to be returned. The default value is 20. Maximum is 100.
                     * @param _limit Number of values to be returned. The default value is 20. Maximum is 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The instance ID of the VPN tunnel, such as `vpnx-f49l6u0z`. Each request can have a maximum of 100 instances. `VpnConnectionIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> m_vpnConnectionIds;
                    bool m_vpnConnectionIdsHasBeenSet;

                    /**
                     * Filter condition. In each request, the upper limit for `Filters` is 10 and 5 for `Filter.Values`. `VpnConnectionIds` and `Filters` cannot be specified at the same time.
<li>vpc-id - String - VPC instance ID, such as `vpc-0a36uwkr`.</li>
<li>vpn-gateway-id - String - VPN gateway instance ID, such as `vpngw-p4lmqawn`.</li>
<li>customer-gateway-id - String - Customer gateway instance ID, such as `cgw-l4rblw63`.</li>
<li>vpn-connection-name - String - Connection name, such as `test-vpn`.</li>
<li>vpn-connection-id - String - Connection instance ID, such as `vpnx-5p7vkch8"`.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The Offset. The default value is 0. For more information about Offset, see the relevant section in the API Introduction.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of values to be returned. The default value is 20. Maximum is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPNCONNECTIONSREQUEST_H_
