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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIP6ADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIP6ADDRESSESREQUEST_H_

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
                * DescribeIp6Addresses request structure.
                */
                class DescribeIp6AddressesRequest : public AbstractModel
                {
                public:
                    DescribeIp6AddressesRequest();
                    ~DescribeIp6AddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of unique IDs that identify IPv6 instances. The unique ID of an IPv6 instance is in the format of `eip-11112222`. Parameters `Ip6AddressIds` and `Filters` cannot be specified at the same time.
                     * @return Ip6AddressIds List of unique IDs that identify IPv6 instances. The unique ID of an IPv6 instance is in the format of `eip-11112222`. Parameters `Ip6AddressIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    std::vector<std::string> GetIp6AddressIds() const;

                    /**
                     * 设置List of unique IDs that identify IPv6 instances. The unique ID of an IPv6 instance is in the format of `eip-11112222`. Parameters `Ip6AddressIds` and `Filters` cannot be specified at the same time.
                     * @param _ip6AddressIds List of unique IDs that identify IPv6 instances. The unique ID of an IPv6 instance is in the format of `eip-11112222`. Parameters `Ip6AddressIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    void SetIp6AddressIds(const std::vector<std::string>& _ip6AddressIds);

                    /**
                     * 判断参数 Ip6AddressIds 是否已赋值
                     * @return Ip6AddressIds 是否已赋值
                     * 
                     */
                    bool Ip6AddressIdsHasBeenSet() const;

                    /**
                     * 获取Each request can have up to 10 `Filters` values and 100 `Filter.Values` values. Parameters `AddressIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li>address-ip - String - Required: No - (Filter condition) Filter by the IP address of IPv6 instances.</li>
<li>network-interface-id - String - Required: No - (Filter condition) Filter by the unique ID of ENIs.</li>
                     * @return Filters Each request can have up to 10 `Filters` values and 100 `Filter.Values` values. Parameters `AddressIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li>address-ip - String - Required: No - (Filter condition) Filter by the IP address of IPv6 instances.</li>
<li>network-interface-id - String - Required: No - (Filter condition) Filter by the unique ID of ENIs.</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Each request can have up to 10 `Filters` values and 100 `Filter.Values` values. Parameters `AddressIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li>address-ip - String - Required: No - (Filter condition) Filter by the IP address of IPv6 instances.</li>
<li>network-interface-id - String - Required: No - (Filter condition) Filter by the unique ID of ENIs.</li>
                     * @param _filters Each request can have up to 10 `Filters` values and 100 `Filter.Values` values. Parameters `AddressIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li>address-ip - String - Required: No - (Filter condition) Filter by the IP address of IPv6 instances.</li>
<li>network-interface-id - String - Required: No - (Filter condition) Filter by the unique ID of ENIs.</li>
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
                     * 获取Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/api/213/15688).
                     * @return Offset Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/api/213/15688).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/api/213/15688).
                     * @param _offset Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/api/213/15688).
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
                     * 获取Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/api/213/15688).
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/api/213/15688).
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/api/213/15688).
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/api/213/15688).
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
                     * List of unique IDs that identify IPv6 instances. The unique ID of an IPv6 instance is in the format of `eip-11112222`. Parameters `Ip6AddressIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> m_ip6AddressIds;
                    bool m_ip6AddressIdsHasBeenSet;

                    /**
                     * Each request can have up to 10 `Filters` values and 100 `Filter.Values` values. Parameters `AddressIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li>address-ip - String - Required: No - (Filter condition) Filter by the IP address of IPv6 instances.</li>
<li>network-interface-id - String - Required: No - (Filter condition) Filter by the unique ID of ENIs.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/api/213/15688).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/api/213/15688).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIP6ADDRESSESREQUEST_H_
