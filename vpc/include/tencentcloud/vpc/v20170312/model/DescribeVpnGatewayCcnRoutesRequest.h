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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPNGATEWAYCCNROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPNGATEWAYCCNROUTESREQUEST_H_

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
                * DescribeVpnGatewayCcnRoutes request structure.
                */
                class DescribeVpnGatewayCcnRoutesRequest : public AbstractModel
                {
                public:
                    DescribeVpnGatewayCcnRoutesRequest();
                    ~DescribeVpnGatewayCcnRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID of the VPN gateway
                     * @return VpnGatewayId Instance ID of the VPN gateway
                     * 
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置Instance ID of the VPN gateway
                     * @param _vpnGatewayId Instance ID of the VPN gateway
                     * 
                     */
                    void SetVpnGatewayId(const std::string& _vpnGatewayId);

                    /**
                     * 判断参数 VpnGatewayId 是否已赋值
                     * @return VpnGatewayId 是否已赋值
                     * 
                     */
                    bool VpnGatewayIdHasBeenSet() const;

                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
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
                     * 获取The returned quantity
                     * @return Limit The returned quantity
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The returned quantity
                     * @param _limit The returned quantity
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
                     * Instance ID of the VPN gateway
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * Offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The returned quantity
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPNGATEWAYCCNROUTESREQUEST_H_
