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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERGROUPRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/ConsumerGroupTopic.h>
#include <tencentcloud/ckafka/v20190819/model/ConsumerGroup.h>
#include <tencentcloud/ckafka/v20190819/model/Partition.h>
#include <tencentcloud/ckafka/v20190819/model/Group.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Returned consumer group result entity
                */
                class ConsumerGroupResponse : public AbstractModel
                {
                public:
                    ConsumerGroupResponse();
                    ~ConsumerGroupResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of eligible consumer groups
                     * @return TotalCount Number of eligible consumer groups
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Number of eligible consumer groups
                     * @param _totalCount Number of eligible consumer groups
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Topic list.
                     * @return TopicList Topic list.
                     * 
                     */
                    std::vector<ConsumerGroupTopic> GetTopicList() const;

                    /**
                     * 设置Topic list.
                     * @param _topicList Topic list.
                     * 
                     */
                    void SetTopicList(const std::vector<ConsumerGroupTopic>& _topicList);

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     * 
                     */
                    bool TopicListHasBeenSet() const;

                    /**
                     * 获取Specifies the consumption group List.
                     * @return GroupList Specifies the consumption group List.
                     * 
                     */
                    std::vector<ConsumerGroup> GetGroupList() const;

                    /**
                     * 设置Specifies the consumption group List.
                     * @param _groupList Specifies the consumption group List.
                     * 
                     */
                    void SetGroupList(const std::vector<ConsumerGroup>& _groupList);

                    /**
                     * 判断参数 GroupList 是否已赋值
                     * @return GroupList 是否已赋值
                     * 
                     */
                    bool GroupListHasBeenSet() const;

                    /**
                     * 获取Total number of partitions.
                     * @return TotalPartition Total number of partitions.
                     * 
                     */
                    int64_t GetTotalPartition() const;

                    /**
                     * 设置Total number of partitions.
                     * @param _totalPartition Total number of partitions.
                     * 
                     */
                    void SetTotalPartition(const int64_t& _totalPartition);

                    /**
                     * 判断参数 TotalPartition 是否已赋值
                     * @return TotalPartition 是否已赋值
                     * 
                     */
                    bool TotalPartitionHasBeenSet() const;

                    /**
                     * 获取Monitored partition list.
                     * @return PartitionListForMonitor Monitored partition list.
                     * 
                     */
                    std::vector<Partition> GetPartitionListForMonitor() const;

                    /**
                     * 设置Monitored partition list.
                     * @param _partitionListForMonitor Monitored partition list.
                     * 
                     */
                    void SetPartitionListForMonitor(const std::vector<Partition>& _partitionListForMonitor);

                    /**
                     * 判断参数 PartitionListForMonitor 是否已赋值
                     * @return PartitionListForMonitor 是否已赋值
                     * 
                     */
                    bool PartitionListForMonitorHasBeenSet() const;

                    /**
                     * 获取Total number of topics.
                     * @return TotalTopic Total number of topics.
                     * 
                     */
                    int64_t GetTotalTopic() const;

                    /**
                     * 设置Total number of topics.
                     * @param _totalTopic Total number of topics.
                     * 
                     */
                    void SetTotalTopic(const int64_t& _totalTopic);

                    /**
                     * 判断参数 TotalTopic 是否已赋值
                     * @return TotalTopic 是否已赋值
                     * 
                     */
                    bool TotalTopicHasBeenSet() const;

                    /**
                     * 获取Monitored topic list.
                     * @return TopicListForMonitor Monitored topic list.
                     * 
                     */
                    std::vector<ConsumerGroupTopic> GetTopicListForMonitor() const;

                    /**
                     * 设置Monitored topic list.
                     * @param _topicListForMonitor Monitored topic list.
                     * 
                     */
                    void SetTopicListForMonitor(const std::vector<ConsumerGroupTopic>& _topicListForMonitor);

                    /**
                     * 判断参数 TopicListForMonitor 是否已赋值
                     * @return TopicListForMonitor 是否已赋值
                     * 
                     */
                    bool TopicListForMonitorHasBeenSet() const;

                    /**
                     * 获取Monitored group list.
                     * @return GroupListForMonitor Monitored group list.
                     * 
                     */
                    std::vector<Group> GetGroupListForMonitor() const;

                    /**
                     * 设置Monitored group list.
                     * @param _groupListForMonitor Monitored group list.
                     * 
                     */
                    void SetGroupListForMonitor(const std::vector<Group>& _groupListForMonitor);

                    /**
                     * 判断参数 GroupListForMonitor 是否已赋值
                     * @return GroupListForMonitor 是否已赋值
                     * 
                     */
                    bool GroupListForMonitorHasBeenSet() const;

                private:

                    /**
                     * Number of eligible consumer groups
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Topic list.
                     */
                    std::vector<ConsumerGroupTopic> m_topicList;
                    bool m_topicListHasBeenSet;

                    /**
                     * Specifies the consumption group List.
                     */
                    std::vector<ConsumerGroup> m_groupList;
                    bool m_groupListHasBeenSet;

                    /**
                     * Total number of partitions.
                     */
                    int64_t m_totalPartition;
                    bool m_totalPartitionHasBeenSet;

                    /**
                     * Monitored partition list.
                     */
                    std::vector<Partition> m_partitionListForMonitor;
                    bool m_partitionListForMonitorHasBeenSet;

                    /**
                     * Total number of topics.
                     */
                    int64_t m_totalTopic;
                    bool m_totalTopicHasBeenSet;

                    /**
                     * Monitored topic list.
                     */
                    std::vector<ConsumerGroupTopic> m_topicListForMonitor;
                    bool m_topicListForMonitorHasBeenSet;

                    /**
                     * Monitored group list.
                     */
                    std::vector<Group> m_groupListForMonitor;
                    bool m_groupListForMonitorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERGROUPRESPONSE_H_
