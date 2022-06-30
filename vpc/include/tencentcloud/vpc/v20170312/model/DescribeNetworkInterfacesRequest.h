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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKINTERFACESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKINTERFACESREQUEST_H_

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
                * DescribeNetworkInterfaces request structure.
                */
                class DescribeNetworkInterfacesRequest : public AbstractModel
                {
                public:
                    DescribeNetworkInterfacesRequest();
                    ~DescribeNetworkInterfacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queries the ID of the ENI instance, such as `eni-pxir56ns`. Each request can have a maximum of 100 instances. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
                     * @return NetworkInterfaceIds Queries the ID of the ENI instance, such as `eni-pxir56ns`. Each request can have a maximum of 100 instances. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> GetNetworkInterfaceIds() const;

                    /**
                     * 设置Queries the ID of the ENI instance, such as `eni-pxir56ns`. Each request can have a maximum of 100 instances. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
                     * @param NetworkInterfaceIds Queries the ID of the ENI instance, such as `eni-pxir56ns`. Each request can have a maximum of 100 instances. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
                     */
                    void SetNetworkInterfaceIds(const std::vector<std::string>& _networkInterfaceIds);

                    /**
                     * 判断参数 NetworkInterfaceIds 是否已赋值
                     * @return NetworkInterfaceIds 是否已赋值
                     */
                    bool NetworkInterfaceIdsHasBeenSet() const;

                    /**
                     * 获取Filter. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
<li>`vpc-id` - String - VPC instance ID, such as `vpc-f49l6u0z`.</li>
<li>`subnet-id` - String - Subnet instance ID, such as `subnet-f49l6u0z`.</li>
<li>`network-interface-id` - String - ENI instance ID, such as `eni-5k56k7k7`.</li>
<li>`attachment.instance-id` - String - ID of the bound CVM instance, such as `ins-3nqpdn3i`.</li>
<li>`groups.security-group-id` - String - ID of the bound security group, such as `sg-f9ekbxeq`.</li>
<li>`network-interface-name` - String - ENI instance name.</li>
<li>`network-interface-description` - String - ENI instance description.</li>
<li>`address-ip` - String - Private IPv4 address. A single IP will be fuzzily matched with the suffix, while multiple IPs will be exactly matched. It can be used with `ip-exact-match` to query and exactly match a single IP.</li>
<li>`ip-exact-match` - Boolean - Exact match by private IPv4 address. The first value will be returned if multiple values are found.</li>
<li>`tag-key` - String - Optional - Filter by tag key. See Example 2 for the detailed usage.</li>
<li>`tag:tag-key` - String - Optional - Filter by tag key pair. Use a specific tag key to replace `tag-key`. See Example 3 for the detailed usage.</li>
<li>`is-primary` - Boolean - Optional - Filter based on whether it is a primary ENI. If the value is `true`, filter only the primary ENI. If the value is `false`, filter only the secondary ENI. If this parameter is not specified, filter the both.</li>
<li>`eni-type` - String - Optional - Filter by ENI type. "0" - secondary ENI, "1" - primary ENI, "2": relayed ENI</li>
                     * @return Filters Filter. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
<li>`vpc-id` - String - VPC instance ID, such as `vpc-f49l6u0z`.</li>
<li>`subnet-id` - String - Subnet instance ID, such as `subnet-f49l6u0z`.</li>
<li>`network-interface-id` - String - ENI instance ID, such as `eni-5k56k7k7`.</li>
<li>`attachment.instance-id` - String - ID of the bound CVM instance, such as `ins-3nqpdn3i`.</li>
<li>`groups.security-group-id` - String - ID of the bound security group, such as `sg-f9ekbxeq`.</li>
<li>`network-interface-name` - String - ENI instance name.</li>
<li>`network-interface-description` - String - ENI instance description.</li>
<li>`address-ip` - String - Private IPv4 address. A single IP will be fuzzily matched with the suffix, while multiple IPs will be exactly matched. It can be used with `ip-exact-match` to query and exactly match a single IP.</li>
<li>`ip-exact-match` - Boolean - Exact match by private IPv4 address. The first value will be returned if multiple values are found.</li>
<li>`tag-key` - String - Optional - Filter by tag key. See Example 2 for the detailed usage.</li>
<li>`tag:tag-key` - String - Optional - Filter by tag key pair. Use a specific tag key to replace `tag-key`. See Example 3 for the detailed usage.</li>
<li>`is-primary` - Boolean - Optional - Filter based on whether it is a primary ENI. If the value is `true`, filter only the primary ENI. If the value is `false`, filter only the secondary ENI. If this parameter is not specified, filter the both.</li>
<li>`eni-type` - String - Optional - Filter by ENI type. "0" - secondary ENI, "1" - primary ENI, "2": relayed ENI</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
<li>`vpc-id` - String - VPC instance ID, such as `vpc-f49l6u0z`.</li>
<li>`subnet-id` - String - Subnet instance ID, such as `subnet-f49l6u0z`.</li>
<li>`network-interface-id` - String - ENI instance ID, such as `eni-5k56k7k7`.</li>
<li>`attachment.instance-id` - String - ID of the bound CVM instance, such as `ins-3nqpdn3i`.</li>
<li>`groups.security-group-id` - String - ID of the bound security group, such as `sg-f9ekbxeq`.</li>
<li>`network-interface-name` - String - ENI instance name.</li>
<li>`network-interface-description` - String - ENI instance description.</li>
<li>`address-ip` - String - Private IPv4 address. A single IP will be fuzzily matched with the suffix, while multiple IPs will be exactly matched. It can be used with `ip-exact-match` to query and exactly match a single IP.</li>
<li>`ip-exact-match` - Boolean - Exact match by private IPv4 address. The first value will be returned if multiple values are found.</li>
<li>`tag-key` - String - Optional - Filter by tag key. See Example 2 for the detailed usage.</li>
<li>`tag:tag-key` - String - Optional - Filter by tag key pair. Use a specific tag key to replace `tag-key`. See Example 3 for the detailed usage.</li>
<li>`is-primary` - Boolean - Optional - Filter based on whether it is a primary ENI. If the value is `true`, filter only the primary ENI. If the value is `false`, filter only the secondary ENI. If this parameter is not specified, filter the both.</li>
<li>`eni-type` - String - Optional - Filter by ENI type. "0" - secondary ENI, "1" - primary ENI, "2": relayed ENI</li>
                     * @param Filters Filter. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
<li>`vpc-id` - String - VPC instance ID, such as `vpc-f49l6u0z`.</li>
<li>`subnet-id` - String - Subnet instance ID, such as `subnet-f49l6u0z`.</li>
<li>`network-interface-id` - String - ENI instance ID, such as `eni-5k56k7k7`.</li>
<li>`attachment.instance-id` - String - ID of the bound CVM instance, such as `ins-3nqpdn3i`.</li>
<li>`groups.security-group-id` - String - ID of the bound security group, such as `sg-f9ekbxeq`.</li>
<li>`network-interface-name` - String - ENI instance name.</li>
<li>`network-interface-description` - String - ENI instance description.</li>
<li>`address-ip` - String - Private IPv4 address. A single IP will be fuzzily matched with the suffix, while multiple IPs will be exactly matched. It can be used with `ip-exact-match` to query and exactly match a single IP.</li>
<li>`ip-exact-match` - Boolean - Exact match by private IPv4 address. The first value will be returned if multiple values are found.</li>
<li>`tag-key` - String - Optional - Filter by tag key. See Example 2 for the detailed usage.</li>
<li>`tag:tag-key` - String - Optional - Filter by tag key pair. Use a specific tag key to replace `tag-key`. See Example 3 for the detailed usage.</li>
<li>`is-primary` - Boolean - Optional - Filter based on whether it is a primary ENI. If the value is `true`, filter only the primary ENI. If the value is `false`, filter only the secondary ENI. If this parameter is not specified, filter the both.</li>
<li>`eni-type` - String - Optional - Filter by ENI type. "0" - secondary ENI, "1" - primary ENI, "2": relayed ENI</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param Offset Offset. Default value: 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param Limit Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Queries the ID of the ENI instance, such as `eni-pxir56ns`. Each request can have a maximum of 100 instances. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> m_networkInterfaceIds;
                    bool m_networkInterfaceIdsHasBeenSet;

                    /**
                     * Filter. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
<li>`vpc-id` - String - VPC instance ID, such as `vpc-f49l6u0z`.</li>
<li>`subnet-id` - String - Subnet instance ID, such as `subnet-f49l6u0z`.</li>
<li>`network-interface-id` - String - ENI instance ID, such as `eni-5k56k7k7`.</li>
<li>`attachment.instance-id` - String - ID of the bound CVM instance, such as `ins-3nqpdn3i`.</li>
<li>`groups.security-group-id` - String - ID of the bound security group, such as `sg-f9ekbxeq`.</li>
<li>`network-interface-name` - String - ENI instance name.</li>
<li>`network-interface-description` - String - ENI instance description.</li>
<li>`address-ip` - String - Private IPv4 address. A single IP will be fuzzily matched with the suffix, while multiple IPs will be exactly matched. It can be used with `ip-exact-match` to query and exactly match a single IP.</li>
<li>`ip-exact-match` - Boolean - Exact match by private IPv4 address. The first value will be returned if multiple values are found.</li>
<li>`tag-key` - String - Optional - Filter by tag key. See Example 2 for the detailed usage.</li>
<li>`tag:tag-key` - String - Optional - Filter by tag key pair. Use a specific tag key to replace `tag-key`. See Example 3 for the detailed usage.</li>
<li>`is-primary` - Boolean - Optional - Filter based on whether it is a primary ENI. If the value is `true`, filter only the primary ENI. If the value is `false`, filter only the secondary ENI. If this parameter is not specified, filter the both.</li>
<li>`eni-type` - String - Optional - Filter by ENI type. "0" - secondary ENI, "1" - primary ENI, "2": relayed ENI</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKINTERFACESREQUEST_H_
