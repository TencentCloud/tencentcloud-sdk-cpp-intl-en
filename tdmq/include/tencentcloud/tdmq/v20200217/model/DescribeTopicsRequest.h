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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBETOPICSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBETOPICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Filter.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeTopics request structure.
                */
                class DescribeTopicsRequest : public AbstractModel
                {
                public:
                    DescribeTopicsRequest();
                    ~DescribeTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment (namespace) name.
                     * @return EnvironmentId Environment (namespace) name.
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment (namespace) name.
                     * @param _environmentId Environment (namespace) name.
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Pulsar cluster ID.
                     * @return ClusterId Pulsar cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Pulsar cluster ID.
                     * @param _clusterId Pulsar cluster ID.
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
                     * 获取Fuzzy match by topic name.
                     * @return TopicName Fuzzy match by topic name.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Fuzzy match by topic name.
                     * @param _topicName Fuzzy match by topic name.
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Offset, which defaults to 0 if left empty.
                     * @return Offset Offset, which defaults to 0 if left empty.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which defaults to 0 if left empty.
                     * @param _offset Offset, which defaults to 0 if left empty.
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
                     * 获取The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     * @return Limit The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     * @param _limit The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
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
                     * 获取Topic type description:
0: Non-persistent and non-partitioned topic;
1: Non-persistent and partitioned topic;
2: Persistent and non-partitioned topic;
3: Persistent and partitioned topic.
                     * @return TopicType Topic type description:
0: Non-persistent and non-partitioned topic;
1: Non-persistent and partitioned topic;
2: Persistent and non-partitioned topic;
3: Persistent and partitioned topic.
                     * 
                     */
                    uint64_t GetTopicType() const;

                    /**
                     * 设置Topic type description:
0: Non-persistent and non-partitioned topic;
1: Non-persistent and partitioned topic;
2: Persistent and non-partitioned topic;
3: Persistent and partitioned topic.
                     * @param _topicType Topic type description:
0: Non-persistent and non-partitioned topic;
1: Non-persistent and partitioned topic;
2: Persistent and non-partitioned topic;
3: Persistent and partitioned topic.
                     * 
                     */
                    void SetTopicType(const uint64_t& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     * 
                     */
                    bool TopicTypeHasBeenSet() const;

                    /**
                     * 获取* TopicName
Query by topic name for exact search.
Type: String
Required: No
                     * @return Filters * TopicName
Query by topic name for exact search.
Type: String
Required: No
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置* TopicName
Query by topic name for exact search.
Type: String
Required: No
                     * @param _filters * TopicName
Query by topic name for exact search.
Type: String
Required: No
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
                     * 获取Topic creator:
1: User
2: System
                     * @return TopicCreator Topic creator:
1: User
2: System
                     * 
                     */
                    uint64_t GetTopicCreator() const;

                    /**
                     * 设置Topic creator:
1: User
2: System
                     * @param _topicCreator Topic creator:
1: User
2: System
                     * 
                     */
                    void SetTopicCreator(const uint64_t& _topicCreator);

                    /**
                     * 判断参数 TopicCreator 是否已赋值
                     * @return TopicCreator 是否已赋值
                     * 
                     */
                    bool TopicCreatorHasBeenSet() const;

                private:

                    /**
                     * Environment (namespace) name.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Pulsar cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Fuzzy match by topic name.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Offset, which defaults to 0 if left empty.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Topic type description:
0: Non-persistent and non-partitioned topic;
1: Non-persistent and partitioned topic;
2: Persistent and non-partitioned topic;
3: Persistent and partitioned topic.
                     */
                    uint64_t m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * * TopicName
Query by topic name for exact search.
Type: String
Required: No
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Topic creator:
1: User
2: System
                     */
                    uint64_t m_topicCreator;
                    bool m_topicCreatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBETOPICSREQUEST_H_
