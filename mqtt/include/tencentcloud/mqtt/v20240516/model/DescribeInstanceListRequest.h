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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/Filter.h>
#include <tencentcloud/mqtt/v20240516/model/TagFilter.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * DescribeInstanceList request structure.
                */
                class DescribeInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeInstanceListRequest();
                    ~DescribeInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query criteria list, support the following fields
InstanceName: Fuzzy search for cluster name
InstanceId: Cluster id for exact search
InstanceStatus: Cluster status search (RUNNING - running, CREATING - creating, MODIFYING - modifying, DELETING - deleting)
Note: The query condition is not effective when TagFilters is configured.
                     * @return Filters Query criteria list, support the following fields
InstanceName: Fuzzy search for cluster name
InstanceId: Cluster id for exact search
InstanceStatus: Cluster status search (RUNNING - running, CREATING - creating, MODIFYING - modifying, DELETING - deleting)
Note: The query condition is not effective when TagFilters is configured.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Query criteria list, support the following fields
InstanceName: Fuzzy search for cluster name
InstanceId: Cluster id for exact search
InstanceStatus: Cluster status search (RUNNING - running, CREATING - creating, MODIFYING - modifying, DELETING - deleting)
Note: The query condition is not effective when TagFilters is configured.
                     * @param _filters Query criteria list, support the following fields
InstanceName: Fuzzy search for cluster name
InstanceId: Cluster id for exact search
InstanceStatus: Cluster status search (RUNNING - running, CREATING - creating, MODIFYING - modifying, DELETING - deleting)
Note: The query condition is not effective when TagFilters is configured.
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
                     * 获取Query start position, default 0
                     * @return Offset Query start position, default 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Query start position, default 0
                     * @param _offset Query start position, default 0
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
                     * 获取Query result limit count. Default 20. Maximum 100.
                     * @return Limit Query result limit count. Default 20. Maximum 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Query result limit count. Default 20. Maximum 100.
                     * @param _limit Query result limit count. Default 20. Maximum 100.
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
                     * 获取Tag filter
                     * @return TagFilters Tag filter
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置Tag filter
                     * @param _tagFilters Tag filter
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * Query criteria list, support the following fields
InstanceName: Fuzzy search for cluster name
InstanceId: Cluster id for exact search
InstanceStatus: Cluster status search (RUNNING - running, CREATING - creating, MODIFYING - modifying, DELETING - deleting)
Note: The query condition is not effective when TagFilters is configured.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Query start position, default 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Query result limit count. Default 20. Maximum 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Tag filter
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSTANCELISTREQUEST_H_
