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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPICREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQTopic request structure.
                */
                class DescribeRocketMQTopicRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQTopicRequest();
                    ~DescribeRocketMQTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取Namespace
                     * @return NamespaceId Namespace
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置Namespace
                     * @param _namespaceId Namespace
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
                     * 获取Topic name
                     * @return TopicName Topic name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name
                     * @param _topicName Topic name
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
                     * 获取Consumer group name.
                     * @return ConsumerGroup Consumer group name.
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置Consumer group name.
                     * @param _consumerGroup Consumer group name.
                     * 
                     */
                    void SetConsumerGroup(const std::string& _consumerGroup);

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

                    /**
                     * 获取Subscription list pagination parameter Offset.
                     * @return Offset Subscription list pagination parameter Offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Subscription list pagination parameter Offset.
                     * @param _offset Subscription list pagination parameter Offset.
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
                     * 获取Subscription list pagination parameter Limit.
                     * @return Limit Subscription list pagination parameter Limit.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Subscription list pagination parameter Limit.
                     * @param _limit Subscription list pagination parameter Limit.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * Topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Consumer group name.
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * Subscription list pagination parameter Offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Subscription list pagination parameter Limit.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPICREQUEST_H_
