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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCSREQUEST_H_

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
                * DescribeVpcs request structure.
                */
                class DescribeVpcsRequest : public AbstractModel
                {
                public:
                    DescribeVpcsRequest();
                    ~DescribeVpcsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The VPC instance ID, such as `vpc-f49l6u0z`. Each request supports a maximum of 100 instances. `VpcIds` and `Filters` cannot be specified at the same time.
                     * @return VpcIds The VPC instance ID, such as `vpc-f49l6u0z`. Each request supports a maximum of 100 instances. `VpcIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置The VPC instance ID, such as `vpc-f49l6u0z`. Each request supports a maximum of 100 instances. `VpcIds` and `Filters` cannot be specified at the same time.
                     * @param _vpcIds The VPC instance ID, such as `vpc-f49l6u0z`. Each request supports a maximum of 100 instances. `VpcIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取Filter condition. `VpcIds` and `Filters` cannot be specified at the same time.
Valid filters include:
<li>`vpc-name`: VPC instance name, which supports fuzzy search.</li>
<li>`is-default`: Indicates whether it is the default VPC</li>
<li>`vpc-id`: VPC instance ID, such as `vpc-f49l6u0z`</li>
<li>`cidr-block`: VPC CIDR block</li>
<li>`tag-key`: (Optional) tag key</li>
<li>`tag:tag-key`: (Optional) tag key-value pair. Replace the `tag-key` with a specified tag value. For its usage, refer to Example 2.</li>
  **Note:** If one filter has multiple values, the logical relationship between these values is `OR`. The logical relationship between filters is `AND`.
                     * @return Filters Filter condition. `VpcIds` and `Filters` cannot be specified at the same time.
Valid filters include:
<li>`vpc-name`: VPC instance name, which supports fuzzy search.</li>
<li>`is-default`: Indicates whether it is the default VPC</li>
<li>`vpc-id`: VPC instance ID, such as `vpc-f49l6u0z`</li>
<li>`cidr-block`: VPC CIDR block</li>
<li>`tag-key`: (Optional) tag key</li>
<li>`tag:tag-key`: (Optional) tag key-value pair. Replace the `tag-key` with a specified tag value. For its usage, refer to Example 2.</li>
  **Note:** If one filter has multiple values, the logical relationship between these values is `OR`. The logical relationship between filters is `AND`.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter condition. `VpcIds` and `Filters` cannot be specified at the same time.
Valid filters include:
<li>`vpc-name`: VPC instance name, which supports fuzzy search.</li>
<li>`is-default`: Indicates whether it is the default VPC</li>
<li>`vpc-id`: VPC instance ID, such as `vpc-f49l6u0z`</li>
<li>`cidr-block`: VPC CIDR block</li>
<li>`tag-key`: (Optional) tag key</li>
<li>`tag:tag-key`: (Optional) tag key-value pair. Replace the `tag-key` with a specified tag value. For its usage, refer to Example 2.</li>
  **Note:** If one filter has multiple values, the logical relationship between these values is `OR`. The logical relationship between filters is `AND`.
                     * @param _filters Filter condition. `VpcIds` and `Filters` cannot be specified at the same time.
Valid filters include:
<li>`vpc-name`: VPC instance name, which supports fuzzy search.</li>
<li>`is-default`: Indicates whether it is the default VPC</li>
<li>`vpc-id`: VPC instance ID, such as `vpc-f49l6u0z`</li>
<li>`cidr-block`: VPC CIDR block</li>
<li>`tag-key`: (Optional) tag key</li>
<li>`tag:tag-key`: (Optional) tag key-value pair. Replace the `tag-key` with a specified tag value. For its usage, refer to Example 2.</li>
  **Note:** If one filter has multiple values, the logical relationship between these values is `OR`. The logical relationship between filters is `AND`.
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
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The VPC instance ID, such as `vpc-f49l6u0z`. Each request supports a maximum of 100 instances. `VpcIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * Filter condition. `VpcIds` and `Filters` cannot be specified at the same time.
Valid filters include:
<li>`vpc-name`: VPC instance name, which supports fuzzy search.</li>
<li>`is-default`: Indicates whether it is the default VPC</li>
<li>`vpc-id`: VPC instance ID, such as `vpc-f49l6u0z`</li>
<li>`cidr-block`: VPC CIDR block</li>
<li>`tag-key`: (Optional) tag key</li>
<li>`tag:tag-key`: (Optional) tag key-value pair. Replace the `tag-key` with a specified tag value. For its usage, refer to Example 2.</li>
  **Note:** If one filter has multiple values, the logical relationship between these values is `OR`. The logical relationship between filters is `AND`.
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

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCSREQUEST_H_
