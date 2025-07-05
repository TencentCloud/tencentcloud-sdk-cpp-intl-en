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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVACTIVITIESREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVACTIVITIESREQUEST_H_

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
                * DescribeComputeEnvActivities request structure.
                */
                class DescribeComputeEnvActivitiesRequest : public AbstractModel
                {
                public:
                    DescribeComputeEnvActivitiesRequest();
                    ~DescribeComputeEnvActivitiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Compute environment ID
                     * @return EnvId Compute environment ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置Compute environment ID
                     * @param _envId Compute environment ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
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
                     * 获取Maximum number of returned items
                     * @return Limit Maximum number of returned items
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of returned items
                     * @param _limit Maximum number of returned items
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter
<li> `compute-node-id` - String - Optional - Filter by the compute node ID.</li>
                     * @return Filters Filter
<li> `compute-node-id` - String - Optional - Filter by the compute node ID.</li>
                     * 
                     */
                    Filter GetFilters() const;

                    /**
                     * 设置Filter
<li> `compute-node-id` - String - Optional - Filter by the compute node ID.</li>
                     * @param _filters Filter
<li> `compute-node-id` - String - Optional - Filter by the compute node ID.</li>
                     * 
                     */
                    void SetFilters(const Filter& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Compute environment ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of returned items
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter
<li> `compute-node-id` - String - Optional - Filter by the compute node ID.</li>
                     */
                    Filter m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVACTIVITIESREQUEST_H_
