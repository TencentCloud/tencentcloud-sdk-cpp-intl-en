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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeInstances request structure.
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query by instance ID(s). For example, instance ID: `ins-xxxxxxxx`. For the specific format, refer to section `Ids.N` of the API [Introduction](https://cloud.tencent.com/document/api/213/15688). You can query up to 100 instances in each request. However, `InstanceIds` and `Filters` cannot be specified at the same time.
                     * @return InstanceIds Query by instance ID(s). For example, instance ID: `ins-xxxxxxxx`. For the specific format, refer to section `Ids.N` of the API [Introduction](https://cloud.tencent.com/document/api/213/15688). You can query up to 100 instances in each request. However, `InstanceIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Query by instance ID(s). For example, instance ID: `ins-xxxxxxxx`. For the specific format, refer to section `Ids.N` of the API [Introduction](https://cloud.tencent.com/document/api/213/15688). You can query up to 100 instances in each request. However, `InstanceIds` and `Filters` cannot be specified at the same time.
                     * @param InstanceIds Query by instance ID(s). For example, instance ID: `ins-xxxxxxxx`. For the specific format, refer to section `Ids.N` of the API [Introduction](https://cloud.tencent.com/document/api/213/15688). You can query up to 100 instances in each request. However, `InstanceIds` and `Filters` cannot be specified at the same time.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Filters.
<li> `zone` - String - Optional - Filter results by availability zone.</li>
<li> `project-id` - Integer - Optional - Filter results by project ID. You can call [DescribeProject](https://cloud.tencent.com/document/api/378/4400) or log in to the [console](https://console.cloud.tencent.com/cvm/index) to view the list of existing projects. You can also create a new project by calling [AddProject](https://cloud.tencent.com/document/api/378/4398).</li>
<li> `host-id` - String - Optional - Filter results by [CDH](https://cloud.tencent.com/document/product/416) ID. [CDH](https://cloud.tencent.com/document/product/416) ID format: `host-xxxxxxxx`.</li>
</li>`vpc-id` - String - Optional - Filter results by VPC ID. VPC ID format: `vpc-xxxxxxxx`.</li>
<li> `subnet-id` - String - Optional - Filter results by subnet ID. Subnet ID format: `subnet-xxxxxxxx`.</li>
</li>`instance-id` - String - Optional - Filter results by instance ID. Instance ID format: `ins-xxxxxxxx`.</li>
</li>`security-group-id` - String - Optional - Filter results by security group ID. Security group ID format: `sg-8jlk3f3r`.</li>
</li>`instance-name` - String - Optional - Filter results by instance name.</li>
</li>`instance-charge-type` - String - Optional - Filter results by instance billing method. `POSTPAID_BY_HOUR`: pay-as-you-go | `CDHPAID`: you are only billed for [CDH](https://cloud.tencent.com/document/product/416) instances, not the CVMs running on the [CDH](https://cloud.tencent.com/document/product/416) instances.</li>
</li>`private-ip-address` - String - Optional - Filter results by the private IP address of the instance's primary ENI.</li>
</li>`public-ip-address` - String - Optional - Filter results by the public IP address of the instance's primary ENI, including the IP addresses automatically assigned during the instance creation and the EIPs manually associated after the instance creation.</li>
<li> `tag-key` - String - Optional - Filter results by tag key.</li>
</li>`tag-value` - String - Optional - Filter results by tag value.</li>
<li> `tag:tag-key` - String - Optional - Filter results by tag key-value pair. Replace `tag-key` with specific tag keys, as shown in example 2.</li>
Each request can have up to 10 `Filters` and 5 `Filters.Values`. You cannot specify `InstanceIds` and `Filters` at the same time.
                     * @return Filters Filters.
<li> `zone` - String - Optional - Filter results by availability zone.</li>
<li> `project-id` - Integer - Optional - Filter results by project ID. You can call [DescribeProject](https://cloud.tencent.com/document/api/378/4400) or log in to the [console](https://console.cloud.tencent.com/cvm/index) to view the list of existing projects. You can also create a new project by calling [AddProject](https://cloud.tencent.com/document/api/378/4398).</li>
<li> `host-id` - String - Optional - Filter results by [CDH](https://cloud.tencent.com/document/product/416) ID. [CDH](https://cloud.tencent.com/document/product/416) ID format: `host-xxxxxxxx`.</li>
</li>`vpc-id` - String - Optional - Filter results by VPC ID. VPC ID format: `vpc-xxxxxxxx`.</li>
<li> `subnet-id` - String - Optional - Filter results by subnet ID. Subnet ID format: `subnet-xxxxxxxx`.</li>
</li>`instance-id` - String - Optional - Filter results by instance ID. Instance ID format: `ins-xxxxxxxx`.</li>
</li>`security-group-id` - String - Optional - Filter results by security group ID. Security group ID format: `sg-8jlk3f3r`.</li>
</li>`instance-name` - String - Optional - Filter results by instance name.</li>
</li>`instance-charge-type` - String - Optional - Filter results by instance billing method. `POSTPAID_BY_HOUR`: pay-as-you-go | `CDHPAID`: you are only billed for [CDH](https://cloud.tencent.com/document/product/416) instances, not the CVMs running on the [CDH](https://cloud.tencent.com/document/product/416) instances.</li>
</li>`private-ip-address` - String - Optional - Filter results by the private IP address of the instance's primary ENI.</li>
</li>`public-ip-address` - String - Optional - Filter results by the public IP address of the instance's primary ENI, including the IP addresses automatically assigned during the instance creation and the EIPs manually associated after the instance creation.</li>
<li> `tag-key` - String - Optional - Filter results by tag key.</li>
</li>`tag-value` - String - Optional - Filter results by tag value.</li>
<li> `tag:tag-key` - String - Optional - Filter results by tag key-value pair. Replace `tag-key` with specific tag keys, as shown in example 2.</li>
Each request can have up to 10 `Filters` and 5 `Filters.Values`. You cannot specify `InstanceIds` and `Filters` at the same time.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filters.
<li> `zone` - String - Optional - Filter results by availability zone.</li>
<li> `project-id` - Integer - Optional - Filter results by project ID. You can call [DescribeProject](https://cloud.tencent.com/document/api/378/4400) or log in to the [console](https://console.cloud.tencent.com/cvm/index) to view the list of existing projects. You can also create a new project by calling [AddProject](https://cloud.tencent.com/document/api/378/4398).</li>
<li> `host-id` - String - Optional - Filter results by [CDH](https://cloud.tencent.com/document/product/416) ID. [CDH](https://cloud.tencent.com/document/product/416) ID format: `host-xxxxxxxx`.</li>
</li>`vpc-id` - String - Optional - Filter results by VPC ID. VPC ID format: `vpc-xxxxxxxx`.</li>
<li> `subnet-id` - String - Optional - Filter results by subnet ID. Subnet ID format: `subnet-xxxxxxxx`.</li>
</li>`instance-id` - String - Optional - Filter results by instance ID. Instance ID format: `ins-xxxxxxxx`.</li>
</li>`security-group-id` - String - Optional - Filter results by security group ID. Security group ID format: `sg-8jlk3f3r`.</li>
</li>`instance-name` - String - Optional - Filter results by instance name.</li>
</li>`instance-charge-type` - String - Optional - Filter results by instance billing method. `POSTPAID_BY_HOUR`: pay-as-you-go | `CDHPAID`: you are only billed for [CDH](https://cloud.tencent.com/document/product/416) instances, not the CVMs running on the [CDH](https://cloud.tencent.com/document/product/416) instances.</li>
</li>`private-ip-address` - String - Optional - Filter results by the private IP address of the instance's primary ENI.</li>
</li>`public-ip-address` - String - Optional - Filter results by the public IP address of the instance's primary ENI, including the IP addresses automatically assigned during the instance creation and the EIPs manually associated after the instance creation.</li>
<li> `tag-key` - String - Optional - Filter results by tag key.</li>
</li>`tag-value` - String - Optional - Filter results by tag value.</li>
<li> `tag:tag-key` - String - Optional - Filter results by tag key-value pair. Replace `tag-key` with specific tag keys, as shown in example 2.</li>
Each request can have up to 10 `Filters` and 5 `Filters.Values`. You cannot specify `InstanceIds` and `Filters` at the same time.
                     * @param Filters Filters.
<li> `zone` - String - Optional - Filter results by availability zone.</li>
<li> `project-id` - Integer - Optional - Filter results by project ID. You can call [DescribeProject](https://cloud.tencent.com/document/api/378/4400) or log in to the [console](https://console.cloud.tencent.com/cvm/index) to view the list of existing projects. You can also create a new project by calling [AddProject](https://cloud.tencent.com/document/api/378/4398).</li>
<li> `host-id` - String - Optional - Filter results by [CDH](https://cloud.tencent.com/document/product/416) ID. [CDH](https://cloud.tencent.com/document/product/416) ID format: `host-xxxxxxxx`.</li>
</li>`vpc-id` - String - Optional - Filter results by VPC ID. VPC ID format: `vpc-xxxxxxxx`.</li>
<li> `subnet-id` - String - Optional - Filter results by subnet ID. Subnet ID format: `subnet-xxxxxxxx`.</li>
</li>`instance-id` - String - Optional - Filter results by instance ID. Instance ID format: `ins-xxxxxxxx`.</li>
</li>`security-group-id` - String - Optional - Filter results by security group ID. Security group ID format: `sg-8jlk3f3r`.</li>
</li>`instance-name` - String - Optional - Filter results by instance name.</li>
</li>`instance-charge-type` - String - Optional - Filter results by instance billing method. `POSTPAID_BY_HOUR`: pay-as-you-go | `CDHPAID`: you are only billed for [CDH](https://cloud.tencent.com/document/product/416) instances, not the CVMs running on the [CDH](https://cloud.tencent.com/document/product/416) instances.</li>
</li>`private-ip-address` - String - Optional - Filter results by the private IP address of the instance's primary ENI.</li>
</li>`public-ip-address` - String - Optional - Filter results by the public IP address of the instance's primary ENI, including the IP addresses automatically assigned during the instance creation and the EIPs manually associated after the instance creation.</li>
<li> `tag-key` - String - Optional - Filter results by tag key.</li>
</li>`tag-value` - String - Optional - Filter results by tag value.</li>
<li> `tag:tag-key` - String - Optional - Filter results by tag key-value pair. Replace `tag-key` with specific tag keys, as shown in example 2.</li>
Each request can have up to 10 `Filters` and 5 `Filters.Values`. You cannot specify `InstanceIds` and `Filters` at the same time.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset; default value: 0. For more information on `Offset`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377).
                     * @return Offset Offset; default value: 0. For more information on `Offset`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377).
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset; default value: 0. For more information on `Offset`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377).
                     * @param Offset Offset; default value: 0. For more information on `Offset`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377).
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     * @return Limit Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     * @param Limit Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Query by instance ID(s). For example, instance ID: `ins-xxxxxxxx`. For the specific format, refer to section `Ids.N` of the API [Introduction](https://cloud.tencent.com/document/api/213/15688). You can query up to 100 instances in each request. However, `InstanceIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Filters.
<li> `zone` - String - Optional - Filter results by availability zone.</li>
<li> `project-id` - Integer - Optional - Filter results by project ID. You can call [DescribeProject](https://cloud.tencent.com/document/api/378/4400) or log in to the [console](https://console.cloud.tencent.com/cvm/index) to view the list of existing projects. You can also create a new project by calling [AddProject](https://cloud.tencent.com/document/api/378/4398).</li>
<li> `host-id` - String - Optional - Filter results by [CDH](https://cloud.tencent.com/document/product/416) ID. [CDH](https://cloud.tencent.com/document/product/416) ID format: `host-xxxxxxxx`.</li>
</li>`vpc-id` - String - Optional - Filter results by VPC ID. VPC ID format: `vpc-xxxxxxxx`.</li>
<li> `subnet-id` - String - Optional - Filter results by subnet ID. Subnet ID format: `subnet-xxxxxxxx`.</li>
</li>`instance-id` - String - Optional - Filter results by instance ID. Instance ID format: `ins-xxxxxxxx`.</li>
</li>`security-group-id` - String - Optional - Filter results by security group ID. Security group ID format: `sg-8jlk3f3r`.</li>
</li>`instance-name` - String - Optional - Filter results by instance name.</li>
</li>`instance-charge-type` - String - Optional - Filter results by instance billing method. `POSTPAID_BY_HOUR`: pay-as-you-go | `CDHPAID`: you are only billed for [CDH](https://cloud.tencent.com/document/product/416) instances, not the CVMs running on the [CDH](https://cloud.tencent.com/document/product/416) instances.</li>
</li>`private-ip-address` - String - Optional - Filter results by the private IP address of the instance's primary ENI.</li>
</li>`public-ip-address` - String - Optional - Filter results by the public IP address of the instance's primary ENI, including the IP addresses automatically assigned during the instance creation and the EIPs manually associated after the instance creation.</li>
<li> `tag-key` - String - Optional - Filter results by tag key.</li>
</li>`tag-value` - String - Optional - Filter results by tag value.</li>
<li> `tag:tag-key` - String - Optional - Filter results by tag key-value pair. Replace `tag-key` with specific tag keys, as shown in example 2.</li>
Each request can have up to 10 `Filters` and 5 `Filters.Values`. You cannot specify `InstanceIds` and `Filters` at the same time.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset; default value: 0. For more information on `Offset`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESREQUEST_H_
