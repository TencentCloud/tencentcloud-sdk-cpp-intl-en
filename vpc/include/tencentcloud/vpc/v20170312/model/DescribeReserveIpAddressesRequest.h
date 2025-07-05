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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBERESERVEIPADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBERESERVEIPADDRESSESREQUEST_H_

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
                * DescribeReserveIpAddresses request structure.
                */
                class DescribeReserveIpAddressesRequest : public AbstractModel
                {
                public:
                    DescribeReserveIpAddressesRequest();
                    ~DescribeReserveIpAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of unique IDs of reserved private IP addresses.
                     * @return ReserveIpIds List of unique IDs of reserved private IP addresses.
                     * 
                     */
                    std::vector<std::string> GetReserveIpIds() const;

                    /**
                     * 设置List of unique IDs of reserved private IP addresses.
                     * @param _reserveIpIds List of unique IDs of reserved private IP addresses.
                     * 
                     */
                    void SetReserveIpIds(const std::vector<std::string>& _reserveIpIds);

                    /**
                     * 判断参数 ReserveIpIds 是否已赋值
                     * @return ReserveIpIds 是否已赋值
                     * 
                     */
                    bool ReserveIpIdsHasBeenSet() const;

                    /**
                     * 获取Filter criteria. ReserveIpIds and Filters cannot be specified at the same time.

reserve-ip-id - String - (Filter criteria) Unique ID of a reserved private IP address, for example, rsvip-pvqgv9vi.
vpc-id - String - (Filter criteria) VPC instance ID, for example, vpc-f49l6u0z.
subnet-id - String - (Filter criteria) Subnet instance ID, for example, subnet-f49l6u0z.
address-ip - String - (Filter criteria) Reserved private IP address, for example, 192.168.0.10.
ip-type - String - (Filter criteria) Business type (IpType), for example, 0.
name - String - (Filter criteria) Name.
state - String - (Filter criteria) Status. Valid values: Bind and UnBind.
resource-id - String - (Filter criteria) Bound instance resource, for example, eni-059qmnif.
tag-key - String - (Filter criteria) Tag key.
tag:tag-key - String - (Filter criteria) Tag key-value pair. Replace tag-key with the specific tag key.

                     * @return Filters Filter criteria. ReserveIpIds and Filters cannot be specified at the same time.

reserve-ip-id - String - (Filter criteria) Unique ID of a reserved private IP address, for example, rsvip-pvqgv9vi.
vpc-id - String - (Filter criteria) VPC instance ID, for example, vpc-f49l6u0z.
subnet-id - String - (Filter criteria) Subnet instance ID, for example, subnet-f49l6u0z.
address-ip - String - (Filter criteria) Reserved private IP address, for example, 192.168.0.10.
ip-type - String - (Filter criteria) Business type (IpType), for example, 0.
name - String - (Filter criteria) Name.
state - String - (Filter criteria) Status. Valid values: Bind and UnBind.
resource-id - String - (Filter criteria) Bound instance resource, for example, eni-059qmnif.
tag-key - String - (Filter criteria) Tag key.
tag:tag-key - String - (Filter criteria) Tag key-value pair. Replace tag-key with the specific tag key.

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria. ReserveIpIds and Filters cannot be specified at the same time.

reserve-ip-id - String - (Filter criteria) Unique ID of a reserved private IP address, for example, rsvip-pvqgv9vi.
vpc-id - String - (Filter criteria) VPC instance ID, for example, vpc-f49l6u0z.
subnet-id - String - (Filter criteria) Subnet instance ID, for example, subnet-f49l6u0z.
address-ip - String - (Filter criteria) Reserved private IP address, for example, 192.168.0.10.
ip-type - String - (Filter criteria) Business type (IpType), for example, 0.
name - String - (Filter criteria) Name.
state - String - (Filter criteria) Status. Valid values: Bind and UnBind.
resource-id - String - (Filter criteria) Bound instance resource, for example, eni-059qmnif.
tag-key - String - (Filter criteria) Tag key.
tag:tag-key - String - (Filter criteria) Tag key-value pair. Replace tag-key with the specific tag key.

                     * @param _filters Filter criteria. ReserveIpIds and Filters cannot be specified at the same time.

reserve-ip-id - String - (Filter criteria) Unique ID of a reserved private IP address, for example, rsvip-pvqgv9vi.
vpc-id - String - (Filter criteria) VPC instance ID, for example, vpc-f49l6u0z.
subnet-id - String - (Filter criteria) Subnet instance ID, for example, subnet-f49l6u0z.
address-ip - String - (Filter criteria) Reserved private IP address, for example, 192.168.0.10.
ip-type - String - (Filter criteria) Business type (IpType), for example, 0.
name - String - (Filter criteria) Name.
state - String - (Filter criteria) Status. Valid values: Bind and UnBind.
resource-id - String - (Filter criteria) Bound instance resource, for example, eni-059qmnif.
tag-key - String - (Filter criteria) Tag key.
tag:tag-key - String - (Filter criteria) Tag key-value pair. Replace tag-key with the specific tag key.

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
                     * 获取Number of request objects.
                     * @return Limit Number of request objects.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of request objects.
                     * @param _limit Number of request objects.
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
                     * List of unique IDs of reserved private IP addresses.
                     */
                    std::vector<std::string> m_reserveIpIds;
                    bool m_reserveIpIdsHasBeenSet;

                    /**
                     * Filter criteria. ReserveIpIds and Filters cannot be specified at the same time.

reserve-ip-id - String - (Filter criteria) Unique ID of a reserved private IP address, for example, rsvip-pvqgv9vi.
vpc-id - String - (Filter criteria) VPC instance ID, for example, vpc-f49l6u0z.
subnet-id - String - (Filter criteria) Subnet instance ID, for example, subnet-f49l6u0z.
address-ip - String - (Filter criteria) Reserved private IP address, for example, 192.168.0.10.
ip-type - String - (Filter criteria) Business type (IpType), for example, 0.
name - String - (Filter criteria) Name.
state - String - (Filter criteria) Status. Valid values: Bind and UnBind.
resource-id - String - (Filter criteria) Bound instance resource, for example, eni-059qmnif.
tag-key - String - (Filter criteria) Tag key.
tag:tag-key - String - (Filter criteria) Tag key-value pair. Replace tag-key with the specific tag key.

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of request objects.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBERESERVEIPADDRESSESREQUEST_H_
