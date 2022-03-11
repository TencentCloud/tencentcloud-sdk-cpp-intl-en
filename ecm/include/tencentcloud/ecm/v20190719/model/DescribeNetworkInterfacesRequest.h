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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBENETWORKINTERFACESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBENETWORKINTERFACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取Queries the ID of the ENI instance, such as `eni-pxir56ns`. Each request supports a maximum of 100 instances. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
                     * @return NetworkInterfaceIds Queries the ID of the ENI instance, such as `eni-pxir56ns`. Each request supports a maximum of 100 instances. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> GetNetworkInterfaceIds() const;

                    /**
                     * 设置Queries the ID of the ENI instance, such as `eni-pxir56ns`. Each request supports a maximum of 100 instances. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
                     * @param NetworkInterfaceIds Queries the ID of the ENI instance, such as `eni-pxir56ns`. Each request supports a maximum of 100 instances. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
                     */
                    void SetNetworkInterfaceIds(const std::vector<std::string>& _networkInterfaceIds);

                    /**
                     * 判断参数 NetworkInterfaceIds 是否已赋值
                     * @return NetworkInterfaceIds 是否已赋值
                     */
                    bool NetworkInterfaceIdsHasBeenSet() const;

                    /**
                     * 获取Filter. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
vpc-id - String - (Filter) VPC instance ID, such as `vpc-f49l6u0z`.
subnet-id - String - (Filter) Subnet instance ID, such as `subnet-f49l6u0z`.
network-interface-id - String - (Filter) ENI instance ID, such as `eni-5k56k7k7`.
attachment.instance-id - String - (Filter) ID of the bound CVM instance, such as `ein-3nqpdn3i`.
groups.security-group-id - String - (Filter) ID of the bound security group instance, such as `sg-f9ekbxeq`.
network-interface-name - String - (Filter) ENI instance name.
network-interface-description - String - (Filter) ENI instance description.
address-ip - String - (Filter) Private IPv4 address.
tag-key - String - Required: no - (Filter) Filter by tag key. For directions, see Sample 2.
tag:tag-key - String - Required: no - (Filter) Filter by tag key-value pair. Replace `tag-key` with the specific tag key. For directions, see Sample 3.
is-primary - Boolean - Required: no - (Filter) Filter by whether it is a primary ENI. true: filter only by primary ENI; false: filter only by secondary ENI. If this parameter is not specified, filtering by both primary and secondary ENIs will be used.
                     * @return Filters Filter. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
vpc-id - String - (Filter) VPC instance ID, such as `vpc-f49l6u0z`.
subnet-id - String - (Filter) Subnet instance ID, such as `subnet-f49l6u0z`.
network-interface-id - String - (Filter) ENI instance ID, such as `eni-5k56k7k7`.
attachment.instance-id - String - (Filter) ID of the bound CVM instance, such as `ein-3nqpdn3i`.
groups.security-group-id - String - (Filter) ID of the bound security group instance, such as `sg-f9ekbxeq`.
network-interface-name - String - (Filter) ENI instance name.
network-interface-description - String - (Filter) ENI instance description.
address-ip - String - (Filter) Private IPv4 address.
tag-key - String - Required: no - (Filter) Filter by tag key. For directions, see Sample 2.
tag:tag-key - String - Required: no - (Filter) Filter by tag key-value pair. Replace `tag-key` with the specific tag key. For directions, see Sample 3.
is-primary - Boolean - Required: no - (Filter) Filter by whether it is a primary ENI. true: filter only by primary ENI; false: filter only by secondary ENI. If this parameter is not specified, filtering by both primary and secondary ENIs will be used.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
vpc-id - String - (Filter) VPC instance ID, such as `vpc-f49l6u0z`.
subnet-id - String - (Filter) Subnet instance ID, such as `subnet-f49l6u0z`.
network-interface-id - String - (Filter) ENI instance ID, such as `eni-5k56k7k7`.
attachment.instance-id - String - (Filter) ID of the bound CVM instance, such as `ein-3nqpdn3i`.
groups.security-group-id - String - (Filter) ID of the bound security group instance, such as `sg-f9ekbxeq`.
network-interface-name - String - (Filter) ENI instance name.
network-interface-description - String - (Filter) ENI instance description.
address-ip - String - (Filter) Private IPv4 address.
tag-key - String - Required: no - (Filter) Filter by tag key. For directions, see Sample 2.
tag:tag-key - String - Required: no - (Filter) Filter by tag key-value pair. Replace `tag-key` with the specific tag key. For directions, see Sample 3.
is-primary - Boolean - Required: no - (Filter) Filter by whether it is a primary ENI. true: filter only by primary ENI; false: filter only by secondary ENI. If this parameter is not specified, filtering by both primary and secondary ENIs will be used.
                     * @param Filters Filter. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
vpc-id - String - (Filter) VPC instance ID, such as `vpc-f49l6u0z`.
subnet-id - String - (Filter) Subnet instance ID, such as `subnet-f49l6u0z`.
network-interface-id - String - (Filter) ENI instance ID, such as `eni-5k56k7k7`.
attachment.instance-id - String - (Filter) ID of the bound CVM instance, such as `ein-3nqpdn3i`.
groups.security-group-id - String - (Filter) ID of the bound security group instance, such as `sg-f9ekbxeq`.
network-interface-name - String - (Filter) ENI instance name.
network-interface-description - String - (Filter) ENI instance description.
address-ip - String - (Filter) Private IPv4 address.
tag-key - String - Required: no - (Filter) Filter by tag key. For directions, see Sample 2.
tag:tag-key - String - Required: no - (Filter) Filter by tag key-value pair. Replace `tag-key` with the specific tag key. For directions, see Sample 3.
is-primary - Boolean - Required: no - (Filter) Filter by whether it is a primary ENI. true: filter only by primary ENI; false: filter only by secondary ENI. If this parameter is not specified, filtering by both primary and secondary ENIs will be used.
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
                     * 获取Number of results to be returned. Default value: 20. Maximum value: 100.
                     * @return Limit Number of results to be returned. Default value: 20. Maximum value: 100.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: 20. Maximum value: 100.
                     * @param Limit Number of results to be returned. Default value: 20. Maximum value: 100.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取ECM region, such as `ap-xian-ecm`.
                     * @return EcmRegion ECM region, such as `ap-xian-ecm`.
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM region, such as `ap-xian-ecm`.
                     * @param EcmRegion ECM region, such as `ap-xian-ecm`.
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     */
                    bool EcmRegionHasBeenSet() const;

                private:

                    /**
                     * Queries the ID of the ENI instance, such as `eni-pxir56ns`. Each request supports a maximum of 100 instances. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> m_networkInterfaceIds;
                    bool m_networkInterfaceIdsHasBeenSet;

                    /**
                     * Filter. `NetworkInterfaceIds` and `Filters` cannot be specified at the same time.
vpc-id - String - (Filter) VPC instance ID, such as `vpc-f49l6u0z`.
subnet-id - String - (Filter) Subnet instance ID, such as `subnet-f49l6u0z`.
network-interface-id - String - (Filter) ENI instance ID, such as `eni-5k56k7k7`.
attachment.instance-id - String - (Filter) ID of the bound CVM instance, such as `ein-3nqpdn3i`.
groups.security-group-id - String - (Filter) ID of the bound security group instance, such as `sg-f9ekbxeq`.
network-interface-name - String - (Filter) ENI instance name.
network-interface-description - String - (Filter) ENI instance description.
address-ip - String - (Filter) Private IPv4 address.
tag-key - String - Required: no - (Filter) Filter by tag key. For directions, see Sample 2.
tag:tag-key - String - Required: no - (Filter) Filter by tag key-value pair. Replace `tag-key` with the specific tag key. For directions, see Sample 3.
is-primary - Boolean - Required: no - (Filter) Filter by whether it is a primary ENI. true: filter only by primary ENI; false: filter only by secondary ENI. If this parameter is not specified, filtering by both primary and secondary ENIs will be used.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: 20. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * ECM region, such as `ap-xian-ecm`.
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBENETWORKINTERFACESREQUEST_H_
