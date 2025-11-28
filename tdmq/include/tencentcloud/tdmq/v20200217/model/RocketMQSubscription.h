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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQSUBSCRIPTION_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQSUBSCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/ClientSubscriptionInfo.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RocketMQ Consumer Group Subscription Information
                */
                class RocketMQSubscription : public AbstractModel
                {
                public:
                    RocketMQSubscription();
                    ~RocketMQSubscription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic name
                     * @return Topic Topic name
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Topic name
                     * @param _topic Topic name
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Topic type.
Normal.
GlobalOrder specifies the global sequential order.
Partitionally sequential.
Transactional message.
DelayScheduled specifies the delayed message.
Retry.
DeadLetter. specifies the dead letter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Topic type.
Normal.
GlobalOrder specifies the global sequential order.
Partitionally sequential.
Transactional message.
DelayScheduled specifies the delayed message.
Retry.
DeadLetter. specifies the dead letter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Topic type.
Normal.
GlobalOrder specifies the global sequential order.
Partitionally sequential.
Transactional message.
DelayScheduled specifies the delayed message.
Retry.
DeadLetter. specifies the dead letter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Topic type.
Normal.
GlobalOrder specifies the global sequential order.
Partitionally sequential.
Transactional message.
DelayScheduled specifies the delayed message.
Retry.
DeadLetter. specifies the dead letter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Number of partitions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PartitionNum Number of partitions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置Number of partitions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _partitionNum Number of partitions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPartitionNum(const int64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     * 
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取Filter mode, which can be TAG or SQL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpressionType Filter mode, which can be TAG or SQL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpressionType() const;

                    /**
                     * 设置Filter mode, which can be TAG or SQL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expressionType Filter mode, which can be TAG or SQL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpressionType(const std::string& _expressionType);

                    /**
                     * 判断参数 ExpressionType 是否已赋值
                     * @return ExpressionType 是否已赋值
                     * 
                     */
                    bool ExpressionTypeHasBeenSet() const;

                    /**
                     * 获取Filter expression.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubString Filter expression.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubString() const;

                    /**
                     * 设置Filter expression.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subString Filter expression.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubString(const std::string& _subString);

                    /**
                     * 判断参数 SubString 是否已赋值
                     * @return SubString 是否已赋值
                     * 
                     */
                    bool SubStringHasBeenSet() const;

                    /**
                     * 获取Subscription status:.
Consistent subscription relationship.
Inconsistent subscription relationship.
2. unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Subscription status:.
Consistent subscription relationship.
Inconsistent subscription relationship.
2. unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Subscription status:.
Consistent subscription relationship.
Inconsistent subscription relationship.
2. unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Subscription status:.
Consistent subscription relationship.
Inconsistent subscription relationship.
2. unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Number of heaped consumer groups.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerLag Number of heaped consumer groups.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetConsumerLag() const;

                    /**
                     * 设置Number of heaped consumer groups.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consumerLag Number of heaped consumer groups.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConsumerLag(const int64_t& _consumerLag);

                    /**
                     * 判断参数 ConsumerLag 是否已赋值
                     * @return ConsumerLag 是否已赋值
                     * 
                     */
                    bool ConsumerLagHasBeenSet() const;

                    /**
                     * 获取Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterId Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterId Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Specifies the consumer group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerGroup Specifies the consumer group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置Specifies the consumer group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consumerGroup Specifies the consumer group name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Online status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsOnline Online status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsOnline() const;

                    /**
                     * 设置Online status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isOnline Online status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsOnline(const bool& _isOnline);

                    /**
                     * 判断参数 IsOnline 是否已赋值
                     * @return IsOnline 是否已赋值
                     * 
                     */
                    bool IsOnlineHasBeenSet() const;

                    /**
                     * 获取Consumption type.
Broadcast consumption.
Specifies the cluster consumption.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumeType Consumption type.
Broadcast consumption.
Specifies the cluster consumption.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetConsumeType() const;

                    /**
                     * 设置Consumption type.
Broadcast consumption.
Specifies the cluster consumption.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consumeType Consumption type.
Broadcast consumption.
Specifies the cluster consumption.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConsumeType(const int64_t& _consumeType);

                    /**
                     * 判断参数 ConsumeType 是否已赋值
                     * @return ConsumeType 是否已赋值
                     * 
                     */
                    bool ConsumeTypeHasBeenSet() const;

                    /**
                     * 获取Subscription consistency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Consistency Subscription consistency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetConsistency() const;

                    /**
                     * 设置Subscription consistency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consistency Subscription consistency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConsistency(const int64_t& _consistency);

                    /**
                     * 判断参数 Consistency 是否已赋值
                     * @return Consistency 是否已赋值
                     * 
                     */
                    bool ConsistencyHasBeenSet() const;

                    /**
                     * 获取Last consumption progress update time, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastUpdateTime Last consumption progress update time, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLastUpdateTime() const;

                    /**
                     * 设置Last consumption progress update time, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastUpdateTime Last consumption progress update time, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastUpdateTime(const int64_t& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Maximum number of retries.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxRetryTimes Maximum number of retries.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxRetryTimes() const;

                    /**
                     * 设置Maximum number of retries.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxRetryTimes Maximum number of retries.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxRetryTimes(const int64_t& _maxRetryTimes);

                    /**
                     * 判断参数 MaxRetryTimes 是否已赋值
                     * @return MaxRetryTimes 是否已赋值
                     * 
                     */
                    bool MaxRetryTimesHasBeenSet() const;

                    /**
                     * 获取Protocol type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientProtocol Protocol type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClientProtocol() const;

                    /**
                     * 设置Protocol type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clientProtocol Protocol type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClientProtocol(const std::string& _clientProtocol);

                    /**
                     * 判断参数 ClientProtocol 是否已赋值
                     * @return ClientProtocol 是否已赋值
                     * 
                     */
                    bool ClientProtocolHasBeenSet() const;

                    /**
                     * 获取Client subscription details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientSubscriptionInfos Client subscription details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ClientSubscriptionInfo> GetClientSubscriptionInfos() const;

                    /**
                     * 设置Client subscription details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clientSubscriptionInfos Client subscription details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClientSubscriptionInfos(const std::vector<ClientSubscriptionInfo>& _clientSubscriptionInfos);

                    /**
                     * 判断参数 ClientSubscriptionInfos 是否已赋值
                     * @return ClientSubscriptionInfos 是否已赋值
                     * 
                     */
                    bool ClientSubscriptionInfosHasBeenSet() const;

                private:

                    /**
                     * Topic name
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Topic type.
Normal.
GlobalOrder specifies the global sequential order.
Partitionally sequential.
Transactional message.
DelayScheduled specifies the delayed message.
Retry.
DeadLetter. specifies the dead letter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Number of partitions
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * Filter mode, which can be TAG or SQL.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expressionType;
                    bool m_expressionTypeHasBeenSet;

                    /**
                     * Filter expression.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subString;
                    bool m_subStringHasBeenSet;

                    /**
                     * Subscription status:.
Consistent subscription relationship.
Inconsistent subscription relationship.
2. unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Number of heaped consumer groups.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_consumerLag;
                    bool m_consumerLagHasBeenSet;

                    /**
                     * Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Specifies the consumer group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * Online status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isOnline;
                    bool m_isOnlineHasBeenSet;

                    /**
                     * Consumption type.
Broadcast consumption.
Specifies the cluster consumption.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_consumeType;
                    bool m_consumeTypeHasBeenSet;

                    /**
                     * Subscription consistency.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_consistency;
                    bool m_consistencyHasBeenSet;

                    /**
                     * Last consumption progress update time, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * Maximum number of retries.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxRetryTimes;
                    bool m_maxRetryTimesHasBeenSet;

                    /**
                     * Protocol type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientProtocol;
                    bool m_clientProtocolHasBeenSet;

                    /**
                     * Client subscription details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClientSubscriptionInfo> m_clientSubscriptionInfos;
                    bool m_clientSubscriptionInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQSUBSCRIPTION_H_
