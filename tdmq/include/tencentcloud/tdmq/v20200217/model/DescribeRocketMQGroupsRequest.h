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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQGROUPSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/TagFilter.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQGroups request structure.
                */
                class DescribeRocketMQGroupsRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQGroupsRequest();
                    ~DescribeRocketMQGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return ClusterId Cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _clusterId Cluster ID.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Namespace.
                     * @return NamespaceId Namespace.
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置Namespace.
                     * @param _namespaceId Namespace.
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
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
                     * 获取The max number of returned results.
                     * @return Limit The max number of returned results.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The max number of returned results.
                     * @param _limit The max number of returned results.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Topic name, which can be used to query all subscription groups under the topic
                     * @return FilterTopic Topic name, which can be used to query all subscription groups under the topic
                     * 
                     */
                    std::string GetFilterTopic() const;

                    /**
                     * 设置Topic name, which can be used to query all subscription groups under the topic
                     * @param _filterTopic Topic name, which can be used to query all subscription groups under the topic
                     * 
                     */
                    void SetFilterTopic(const std::string& _filterTopic);

                    /**
                     * 判断参数 FilterTopic 是否已赋值
                     * @return FilterTopic 是否已赋值
                     * 
                     */
                    bool FilterTopicHasBeenSet() const;

                    /**
                     * 获取Consumer group query by consumer group name. Fuzzy query is supported
                     * @return FilterGroup Consumer group query by consumer group name. Fuzzy query is supported
                     * 
                     */
                    std::string GetFilterGroup() const;

                    /**
                     * 设置Consumer group query by consumer group name. Fuzzy query is supported
                     * @param _filterGroup Consumer group query by consumer group name. Fuzzy query is supported
                     * 
                     */
                    void SetFilterGroup(const std::string& _filterGroup);

                    /**
                     * 判断参数 FilterGroup 是否已赋值
                     * @return FilterGroup 是否已赋值
                     * 
                     */
                    bool FilterGroupHasBeenSet() const;

                    /**
                     * 获取Sorts by the specified field. Valid value: subscribeNum: number of subscribed topics.
                     * @return SortedBy Sorts by the specified field. Valid value: subscribeNum: number of subscribed topics.
                     * 
                     */
                    std::string GetSortedBy() const;

                    /**
                     * 设置Sorts by the specified field. Valid value: subscribeNum: number of subscribed topics.
                     * @param _sortedBy Sorts by the specified field. Valid value: subscribeNum: number of subscribed topics.
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
                     * 获取Sort in ascending or descending order. Valid values: `asc`, `desc`.
                     * @return SortOrder Sort in ascending or descending order. Valid values: `asc`, `desc`.
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置Sort in ascending or descending order. Valid values: `asc`, `desc`.
                     * @param _sortOrder Sort in ascending or descending order. Valid values: `asc`, `desc`.
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取Subscription group name. After it is specified, the information of only this subscription group will be returned.
                     * @return FilterOneGroup Subscription group name. After it is specified, the information of only this subscription group will be returned.
                     * 
                     */
                    std::string GetFilterOneGroup() const;

                    /**
                     * 设置Subscription group name. After it is specified, the information of only this subscription group will be returned.
                     * @param _filterOneGroup Subscription group name. After it is specified, the information of only this subscription group will be returned.
                     * 
                     */
                    void SetFilterOneGroup(const std::string& _filterOneGroup);

                    /**
                     * 判断参数 FilterOneGroup 是否已赋值
                     * @return FilterOneGroup 是否已赋值
                     * 
                     */
                    bool FilterOneGroupHasBeenSet() const;

                    /**
                     * 获取Group type
                     * @return Types Group type
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置Group type
                     * @param _types Group type
                     * 
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

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
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Namespace.
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * Offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The max number of returned results.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Topic name, which can be used to query all subscription groups under the topic
                     */
                    std::string m_filterTopic;
                    bool m_filterTopicHasBeenSet;

                    /**
                     * Consumer group query by consumer group name. Fuzzy query is supported
                     */
                    std::string m_filterGroup;
                    bool m_filterGroupHasBeenSet;

                    /**
                     * Sorts by the specified field. Valid value: subscribeNum: number of subscribed topics.
                     */
                    std::string m_sortedBy;
                    bool m_sortedByHasBeenSet;

                    /**
                     * Sort in ascending or descending order. Valid values: `asc`, `desc`.
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * Subscription group name. After it is specified, the information of only this subscription group will be returned.
                     */
                    std::string m_filterOneGroup;
                    bool m_filterOneGroupHasBeenSet;

                    /**
                     * Group type
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

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

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQGROUPSREQUEST_H_
