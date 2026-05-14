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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERGROUPLISTREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/TagFilter.h>
#include <tencentcloud/trocket/v20230308/model/Filter.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeConsumerGroupList request structure.
                */
                class DescribeConsumerGroupListRequest : public AbstractModel
                {
                public:
                    DescribeConsumerGroupListRequest();
                    ~DescribeConsumerGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * @return InstanceId TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * @param _instanceId TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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

                    /**
                     * 获取Filtering condition list. See the description of the API using this parameter for the usage method.
                     * @return Filters Filtering condition list. See the description of the API using this parameter for the usage method.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filtering condition list. See the description of the API using this parameter for the usage method.
                     * @param _filters Filtering condition list. See the description of the API using this parameter for the usage method.
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
                     * 获取Starting position of the query. Default value: 0.
                     * @return Offset Starting position of the query. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Starting position of the query. Default value: 0.
                     * @param _offset Starting position of the query. Default value: 0.
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
                     * 获取Maximum number of queried results. Default value: 20.
                     * @return Limit Maximum number of queried results. Default value: 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of queried results. Default value: 20.
                     * @param _limit Maximum number of queried results. Default value: 20.
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
                     * 获取Queries consumer groups under a specified topic.
                     * @return FromTopic Queries consumer groups under a specified topic.
                     * 
                     */
                    std::string GetFromTopic() const;

                    /**
                     * 设置Queries consumer groups under a specified topic.
                     * @param _fromTopic Queries consumer groups under a specified topic.
                     * 
                     */
                    void SetFromTopic(const std::string& _fromTopic);

                    /**
                     * 判断参数 FromTopic 是否已赋值
                     * @return FromTopic 是否已赋值
                     * 
                     */
                    bool FromTopicHasBeenSet() const;

                    /**
                     * 获取Sort by specified field, with the enumerated values as follows:
-subscribeNum: Number of topics subscribed
                     * @return SortedBy Sort by specified field, with the enumerated values as follows:
-subscribeNum: Number of topics subscribed
                     * 
                     */
                    std::string GetSortedBy() const;

                    /**
                     * 设置Sort by specified field, with the enumerated values as follows:
-subscribeNum: Number of topics subscribed
                     * @param _sortedBy Sort by specified field, with the enumerated values as follows:
-subscribeNum: Number of topics subscribed
                     * 
                     */
                    void SetSortedBy(const std::string& _sortedBy);

                    /**
                     * 判断参数 SortedBy 是否已赋值
                     * @return SortedBy 是否已赋值
                     * 
                     */
                    bool SortedByHasBeenSet() const;

                    /**
                     * 获取Sort in ascending or descending order, with the enumerated values as follows:

-asc: Ascending
- DESC: descending order.
                     * @return SortOrder Sort in ascending or descending order, with the enumerated values as follows:

-asc: Ascending
- DESC: descending order.
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置Sort in ascending or descending order, with the enumerated values as follows:

-asc: Ascending
- DESC: descending order.
                     * @param _sortOrder Sort in ascending or descending order, with the enumerated values as follows:

-asc: Ascending
- DESC: descending order.
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Tag filter
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * Filtering condition list. See the description of the API using this parameter for the usage method.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Starting position of the query. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of queried results. Default value: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Queries consumer groups under a specified topic.
                     */
                    std::string m_fromTopic;
                    bool m_fromTopicHasBeenSet;

                    /**
                     * Sort by specified field, with the enumerated values as follows:
-subscribeNum: Number of topics subscribed
                     */
                    std::string m_sortedBy;
                    bool m_sortedByHasBeenSet;

                    /**
                     * Sort in ascending or descending order, with the enumerated values as follows:

-asc: Ascending
- DESC: descending order.
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERGROUPLISTREQUEST_H_
