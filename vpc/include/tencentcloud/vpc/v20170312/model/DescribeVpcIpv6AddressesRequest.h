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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCIPV6ADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCIPV6ADDRESSESREQUEST_H_

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
                * DescribeVpcIpv6Addresses request structure.
                */
                class DescribeVpcIpv6AddressesRequest : public AbstractModel
                {
                public:
                    DescribeVpcIpv6AddressesRequest();
                    ~DescribeVpcIpv6AddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The `ID` of the `VPC`, such as `vpc-f49l6u0z`.
                     * @return VpcId The `ID` of the `VPC`, such as `vpc-f49l6u0z`.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The `ID` of the `VPC`, such as `vpc-f49l6u0z`.
                     * @param VpcId The `ID` of the `VPC`, such as `vpc-f49l6u0z`.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The `IP` address list. Each request supports a maximum of `10` batch querying.
                     * @return Ipv6Addresses The `IP` address list. Each request supports a maximum of `10` batch querying.
                     */
                    std::vector<std::string> GetIpv6Addresses() const;

                    /**
                     * 设置The `IP` address list. Each request supports a maximum of `10` batch querying.
                     * @param Ipv6Addresses The `IP` address list. Each request supports a maximum of `10` batch querying.
                     */
                    void SetIpv6Addresses(const std::vector<std::string>& _ipv6Addresses);

                    /**
                     * 判断参数 Ipv6Addresses 是否已赋值
                     * @return Ipv6Addresses 是否已赋值
                     */
                    bool Ipv6AddressesHasBeenSet() const;

                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param Offset Offset.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The returned quantity.
                     * @return Limit The returned quantity.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The returned quantity.
                     * @param Limit The returned quantity.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The `ID` of the `VPC`, such as `vpc-f49l6u0z`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The `IP` address list. Each request supports a maximum of `10` batch querying.
                     */
                    std::vector<std::string> m_ipv6Addresses;
                    bool m_ipv6AddressesHasBeenSet;

                    /**
                     * Offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The returned quantity.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCIPV6ADDRESSESREQUEST_H_
