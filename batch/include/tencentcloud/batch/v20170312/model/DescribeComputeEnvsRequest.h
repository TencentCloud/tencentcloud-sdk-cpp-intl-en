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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVSREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeComputeEnvs request structure.
                */
                class DescribeComputeEnvsRequest : public AbstractModel
                {
                public:
                    DescribeComputeEnvsRequest();
                    ~DescribeComputeEnvsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of compute environment IDs, which cannot be specified together with the `Filters` parameter.
                     * @return EnvIds List of compute environment IDs, which cannot be specified together with the `Filters` parameter.
                     * 
                     */
                    std::vector<std::string> GetEnvIds() const;

                    /**
                     * 设置List of compute environment IDs, which cannot be specified together with the `Filters` parameter.
                     * @param _envIds List of compute environment IDs, which cannot be specified together with the `Filters` parameter.
                     * 
                     */
                    void SetEnvIds(const std::vector<std::string>& _envIds);

                    /**
                     * 判断参数 EnvIds 是否已赋值
                     * @return EnvIds 是否已赋值
                     * 
                     */
                    bool EnvIdsHasBeenSet() const;

                    /**
                     * 获取Filters
<li> `zone` - String - Optional - Availability zone.</li>
<li> `env-id` - String - Optional - Compute environment ID.</li>
<li> `env-name` - String - Optional - Compute environment name.</li>
<li> `resource-type` - String - Optional - Compute resource type (`CVM` or `CPM`).</li>
<li> `tag-key` - String - Optional - Tag key.</li>
</li>`tag-value` - String - Optional - Tag value.</li>
<li> `tag:tag-key` - String - Optional - Tag key-value pair. Replace `tag-key` with the actual tag key.</li>
It cannot be specified together with `EnvIds`.
                     * @return Filters Filters
<li> `zone` - String - Optional - Availability zone.</li>
<li> `env-id` - String - Optional - Compute environment ID.</li>
<li> `env-name` - String - Optional - Compute environment name.</li>
<li> `resource-type` - String - Optional - Compute resource type (`CVM` or `CPM`).</li>
<li> `tag-key` - String - Optional - Tag key.</li>
</li>`tag-value` - String - Optional - Tag value.</li>
<li> `tag:tag-key` - String - Optional - Tag key-value pair. Replace `tag-key` with the actual tag key.</li>
It cannot be specified together with `EnvIds`.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filters
<li> `zone` - String - Optional - Availability zone.</li>
<li> `env-id` - String - Optional - Compute environment ID.</li>
<li> `env-name` - String - Optional - Compute environment name.</li>
<li> `resource-type` - String - Optional - Compute resource type (`CVM` or `CPM`).</li>
<li> `tag-key` - String - Optional - Tag key.</li>
</li>`tag-value` - String - Optional - Tag value.</li>
<li> `tag:tag-key` - String - Optional - Tag key-value pair. Replace `tag-key` with the actual tag key.</li>
It cannot be specified together with `EnvIds`.
                     * @param _filters Filters
<li> `zone` - String - Optional - Availability zone.</li>
<li> `env-id` - String - Optional - Compute environment ID.</li>
<li> `env-name` - String - Optional - Compute environment name.</li>
<li> `resource-type` - String - Optional - Compute resource type (`CVM` or `CPM`).</li>
<li> `tag-key` - String - Optional - Tag key.</li>
</li>`tag-value` - String - Optional - Tag value.</li>
<li> `tag:tag-key` - String - Optional - Tag key-value pair. Replace `tag-key` with the actual tag key.</li>
It cannot be specified together with `EnvIds`.
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
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
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
                     * 获取Maximum number of returned items
                     * @return Limit Maximum number of returned items
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of returned items
                     * @param _limit Maximum number of returned items
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
                     * List of compute environment IDs, which cannot be specified together with the `Filters` parameter.
                     */
                    std::vector<std::string> m_envIds;
                    bool m_envIdsHasBeenSet;

                    /**
                     * Filters
<li> `zone` - String - Optional - Availability zone.</li>
<li> `env-id` - String - Optional - Compute environment ID.</li>
<li> `env-name` - String - Optional - Compute environment name.</li>
<li> `resource-type` - String - Optional - Compute resource type (`CVM` or `CPM`).</li>
<li> `tag-key` - String - Optional - Tag key.</li>
</li>`tag-value` - String - Optional - Tag value.</li>
<li> `tag:tag-key` - String - Optional - Tag key-value pair. Replace `tag-key` with the actual tag key.</li>
It cannot be specified together with `EnvIds`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of returned items
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVSREQUEST_H_
