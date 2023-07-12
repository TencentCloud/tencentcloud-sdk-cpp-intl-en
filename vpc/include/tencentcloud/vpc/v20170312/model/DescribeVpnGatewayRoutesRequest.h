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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPNGATEWAYROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPNGATEWAYROUTESREQUEST_H_

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
                * DescribeVpnGatewayRoutes request structure.
                */
                class DescribeVpnGatewayRoutesRequest : public AbstractModel
                {
                public:
                    DescribeVpnGatewayRoutesRequest();
                    ~DescribeVpnGatewayRoutesRequest() = default;
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
                     * 获取Filter condition. Valid values: `DestinationCidr`, `InstanceId`, and `InstanceType`.
                     * @return Filters Filter condition. Valid values: `DestinationCidr`, `InstanceId`, and `InstanceType`.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter condition. Valid values: `DestinationCidr`, `InstanceId`, and `InstanceType`.
                     * @param _filters Filter condition. Valid values: `DestinationCidr`, `InstanceId`, and `InstanceType`.
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
                     * 获取Offset. Default value: 0
                     * @return Offset Offset. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0
                     * @param _offset Offset. Default value: 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results per page. Default value: 20; maximum value: 100
                     * @return Limit Number of returned results per page. Default value: 20; maximum value: 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results per page. Default value: 20; maximum value: 100
                     * @param _limit Number of returned results per page. Default value: 20; maximum value: 100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

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
                     * Filter condition. Valid values: `DestinationCidr`, `InstanceId`, and `InstanceType`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results per page. Default value: 20; maximum value: 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPNGATEWAYROUTESREQUEST_H_
