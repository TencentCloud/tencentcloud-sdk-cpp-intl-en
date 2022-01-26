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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESUBNETSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESUBNETSREQUEST_H_

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
                * DescribeSubnets request structure.
                */
                class DescribeSubnetsRequest : public AbstractModel
                {
                public:
                    DescribeSubnetsRequest();
                    ~DescribeSubnetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queries the ID of the subnet instance, such as `subnet-pxir56ns`. Each request can have a maximum of 100 instances. `SubnetIds` and `Filters` cannot be specified at the same time.
                     * @return SubnetIds Queries the ID of the subnet instance, such as `subnet-pxir56ns`. Each request can have a maximum of 100 instances. `SubnetIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置Queries the ID of the subnet instance, such as `subnet-pxir56ns`. Each request can have a maximum of 100 instances. `SubnetIds` and `Filters` cannot be specified at the same time.
                     * @param SubnetIds Queries the ID of the subnet instance, such as `subnet-pxir56ns`. Each request can have a maximum of 100 instances. `SubnetIds` and `Filters` cannot be specified at the same time.
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Filter condition. `SubnetIds` and `Filters` cannot be specified at the same time.
<li>subnet-id - String - (Filter condition) Subnet instance name.</li>
<li>vpc-id - String - (Filter condition) VPC instance ID, such as `vpc-f49l6u0z`.</li>
<li>cidr-block - String - (Filter condition) Subnet IP range, such as `192.168.1.0`.</li>
<li>is-default - Boolean - (Filter condition) Whether it is the default subnet.</li>
<li>is-remote-vpc-snat - Boolean - (Filter condition) Whether it is a VPC SNAT address pool subnet.</li>
<li>subnet-name - String - (Filter condition) Subnet name.</li>
<li>zone - String - (Filter condition) Availability zone.</li>
<li> tag-key - String - Required: No - (Filter condition) Filter by tag key.</li>
<li>tag:tag-key - String - Required: No - (Filter condition) Filter by tag key-value pair. Use a specific tag key to replace `tag-key`. For its usage, see example 2.</li>
<li>cdc-id - String - Required: No - (Filter condition) Filter by CDC ID to obtain subnets in the specified CDC.</li>
<li>is-cdc-subnet - String - Required: No - (Filter condition) Whether it is a CDC subnet. Valid values: `0` (no); `1` (yes).</li>
                     * @return Filters Filter condition. `SubnetIds` and `Filters` cannot be specified at the same time.
<li>subnet-id - String - (Filter condition) Subnet instance name.</li>
<li>vpc-id - String - (Filter condition) VPC instance ID, such as `vpc-f49l6u0z`.</li>
<li>cidr-block - String - (Filter condition) Subnet IP range, such as `192.168.1.0`.</li>
<li>is-default - Boolean - (Filter condition) Whether it is the default subnet.</li>
<li>is-remote-vpc-snat - Boolean - (Filter condition) Whether it is a VPC SNAT address pool subnet.</li>
<li>subnet-name - String - (Filter condition) Subnet name.</li>
<li>zone - String - (Filter condition) Availability zone.</li>
<li> tag-key - String - Required: No - (Filter condition) Filter by tag key.</li>
<li>tag:tag-key - String - Required: No - (Filter condition) Filter by tag key-value pair. Use a specific tag key to replace `tag-key`. For its usage, see example 2.</li>
<li>cdc-id - String - Required: No - (Filter condition) Filter by CDC ID to obtain subnets in the specified CDC.</li>
<li>is-cdc-subnet - String - Required: No - (Filter condition) Whether it is a CDC subnet. Valid values: `0` (no); `1` (yes).</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter condition. `SubnetIds` and `Filters` cannot be specified at the same time.
<li>subnet-id - String - (Filter condition) Subnet instance name.</li>
<li>vpc-id - String - (Filter condition) VPC instance ID, such as `vpc-f49l6u0z`.</li>
<li>cidr-block - String - (Filter condition) Subnet IP range, such as `192.168.1.0`.</li>
<li>is-default - Boolean - (Filter condition) Whether it is the default subnet.</li>
<li>is-remote-vpc-snat - Boolean - (Filter condition) Whether it is a VPC SNAT address pool subnet.</li>
<li>subnet-name - String - (Filter condition) Subnet name.</li>
<li>zone - String - (Filter condition) Availability zone.</li>
<li> tag-key - String - Required: No - (Filter condition) Filter by tag key.</li>
<li>tag:tag-key - String - Required: No - (Filter condition) Filter by tag key-value pair. Use a specific tag key to replace `tag-key`. For its usage, see example 2.</li>
<li>cdc-id - String - Required: No - (Filter condition) Filter by CDC ID to obtain subnets in the specified CDC.</li>
<li>is-cdc-subnet - String - Required: No - (Filter condition) Whether it is a CDC subnet. Valid values: `0` (no); `1` (yes).</li>
                     * @param Filters Filter condition. `SubnetIds` and `Filters` cannot be specified at the same time.
<li>subnet-id - String - (Filter condition) Subnet instance name.</li>
<li>vpc-id - String - (Filter condition) VPC instance ID, such as `vpc-f49l6u0z`.</li>
<li>cidr-block - String - (Filter condition) Subnet IP range, such as `192.168.1.0`.</li>
<li>is-default - Boolean - (Filter condition) Whether it is the default subnet.</li>
<li>is-remote-vpc-snat - Boolean - (Filter condition) Whether it is a VPC SNAT address pool subnet.</li>
<li>subnet-name - String - (Filter condition) Subnet name.</li>
<li>zone - String - (Filter condition) Availability zone.</li>
<li> tag-key - String - Required: No - (Filter condition) Filter by tag key.</li>
<li>tag:tag-key - String - Required: No - (Filter condition) Filter by tag key-value pair. Use a specific tag key to replace `tag-key`. For its usage, see example 2.</li>
<li>cdc-id - String - Required: No - (Filter condition) Filter by CDC ID to obtain subnets in the specified CDC.</li>
<li>is-cdc-subnet - String - Required: No - (Filter condition) Whether it is a CDC subnet. Valid values: `0` (no); `1` (yes).</li>
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
                    std::string GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param Offset Offset. Default value: 0.
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param Limit Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Queries the ID of the subnet instance, such as `subnet-pxir56ns`. Each request can have a maximum of 100 instances. `SubnetIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Filter condition. `SubnetIds` and `Filters` cannot be specified at the same time.
<li>subnet-id - String - (Filter condition) Subnet instance name.</li>
<li>vpc-id - String - (Filter condition) VPC instance ID, such as `vpc-f49l6u0z`.</li>
<li>cidr-block - String - (Filter condition) Subnet IP range, such as `192.168.1.0`.</li>
<li>is-default - Boolean - (Filter condition) Whether it is the default subnet.</li>
<li>is-remote-vpc-snat - Boolean - (Filter condition) Whether it is a VPC SNAT address pool subnet.</li>
<li>subnet-name - String - (Filter condition) Subnet name.</li>
<li>zone - String - (Filter condition) Availability zone.</li>
<li> tag-key - String - Required: No - (Filter condition) Filter by tag key.</li>
<li>tag:tag-key - String - Required: No - (Filter condition) Filter by tag key-value pair. Use a specific tag key to replace `tag-key`. For its usage, see example 2.</li>
<li>cdc-id - String - Required: No - (Filter condition) Filter by CDC ID to obtain subnets in the specified CDC.</li>
<li>is-cdc-subnet - String - Required: No - (Filter condition) Whether it is a CDC subnet. Valid values: `0` (no); `1` (yes).</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESUBNETSREQUEST_H_
