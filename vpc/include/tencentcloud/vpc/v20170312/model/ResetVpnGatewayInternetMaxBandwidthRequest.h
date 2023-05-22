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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESETVPNGATEWAYINTERNETMAXBANDWIDTHREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESETVPNGATEWAYINTERNETMAXBANDWIDTHREQUEST_H_

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
                * ResetVpnGatewayInternetMaxBandwidth request structure.
                */
                class ResetVpnGatewayInternetMaxBandwidthRequest : public AbstractModel
                {
                public:
                    ResetVpnGatewayInternetMaxBandwidthRequest();
                    ~ResetVpnGatewayInternetMaxBandwidthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the VPN gateway instance.
                     * @return VpnGatewayId The ID of the VPN gateway instance.
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置The ID of the VPN gateway instance.
                     * @param VpnGatewayId The ID of the VPN gateway instance.
                     */
                    void SetVpnGatewayId(const std::string& _vpnGatewayId);

                    /**
                     * 判断参数 VpnGatewayId 是否已赋值
                     * @return VpnGatewayId 是否已赋值
                     */
                    bool VpnGatewayIdHasBeenSet() const;

                    /**
                     * 获取The new bandwidth cap in Mbps. Values: `5`, `10`, `20`, `50`, `100`, `200`, `500` and `1000`. The adjustment of the VPN gateway bandwidth is limited to [5,100] Mbps and [200,1000] Mbps.
                     * @return InternetMaxBandwidthOut The new bandwidth cap in Mbps. Values: `5`, `10`, `20`, `50`, `100`, `200`, `500` and `1000`. The adjustment of the VPN gateway bandwidth is limited to [5,100] Mbps and [200,1000] Mbps.
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置The new bandwidth cap in Mbps. Values: `5`, `10`, `20`, `50`, `100`, `200`, `500` and `1000`. The adjustment of the VPN gateway bandwidth is limited to [5,100] Mbps and [200,1000] Mbps.
                     * @param InternetMaxBandwidthOut The new bandwidth cap in Mbps. Values: `5`, `10`, `20`, `50`, `100`, `200`, `500` and `1000`. The adjustment of the VPN gateway bandwidth is limited to [5,100] Mbps and [200,1000] Mbps.
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                private:

                    /**
                     * The ID of the VPN gateway instance.
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * The new bandwidth cap in Mbps. Values: `5`, `10`, `20`, `50`, `100`, `200`, `500` and `1000`. The adjustment of the VPN gateway bandwidth is limited to [5,100] Mbps and [200,1000] Mbps.
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESETVPNGATEWAYINTERNETMAXBANDWIDTHREQUEST_H_
