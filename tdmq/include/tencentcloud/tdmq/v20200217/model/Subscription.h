/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_SUBSCRIPTION_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_SUBSCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Consumer.h>
#include <tencentcloud/tdmq/v20200217/model/ConsumersSchedule.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Subscriber
                */
                class Subscription : public AbstractModel
                {
                public:
                    Subscription();
                    ~Subscription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic name.
                     * @return TopicName Topic name.
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name.
                     * @param TopicName Topic name.
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Environment (namespace) name.
                     * @return EnvironmentId Environment (namespace) name.
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment (namespace) name.
                     * @param EnvironmentId Environment (namespace) name.
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取The time when the consumer started connecting.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ConnectedSince The time when the consumer started connecting.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetConnectedSince() const;

                    /**
                     * 设置The time when the consumer started connecting.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ConnectedSince The time when the consumer started connecting.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetConnectedSince(const std::string& _connectedSince);

                    /**
                     * 判断参数 ConnectedSince 是否已赋值
                     * @return ConnectedSince 是否已赋值
                     */
                    bool ConnectedSinceHasBeenSet() const;

                    /**
                     * 获取Consumer address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerAddr Consumer address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetConsumerAddr() const;

                    /**
                     * 设置Consumer address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ConsumerAddr Consumer address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConsumerAddr(const std::string& _consumerAddr);

                    /**
                     * 判断参数 ConsumerAddr 是否已赋值
                     * @return ConsumerAddr 是否已赋值
                     */
                    bool ConsumerAddrHasBeenSet() const;

                    /**
                     * 获取The number of consumers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerCount The number of consumers.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetConsumerCount() const;

                    /**
                     * 设置The number of consumers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ConsumerCount The number of consumers.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConsumerCount(const std::string& _consumerCount);

                    /**
                     * 判断参数 ConsumerCount 是否已赋值
                     * @return ConsumerCount 是否已赋值
                     */
                    bool ConsumerCountHasBeenSet() const;

                    /**
                     * 获取Consumer name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerName Consumer name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetConsumerName() const;

                    /**
                     * 设置Consumer name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ConsumerName Consumer name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConsumerName(const std::string& _consumerName);

                    /**
                     * 判断参数 ConsumerName 是否已赋值
                     * @return ConsumerName 是否已赋值
                     */
                    bool ConsumerNameHasBeenSet() const;

                    /**
                     * 获取The number of heaped messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgBacklog The number of heaped messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMsgBacklog() const;

                    /**
                     * 设置The number of heaped messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MsgBacklog The number of heaped messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgBacklog(const std::string& _msgBacklog);

                    /**
                     * 判断参数 MsgBacklog 是否已赋值
                     * @return MsgBacklog 是否已赋值
                     */
                    bool MsgBacklogHasBeenSet() const;

                    /**
                     * 获取Percentage of messages under this subscription that were discarded but not sent after TTL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgRateExpired Percentage of messages under this subscription that were discarded but not sent after TTL.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMsgRateExpired() const;

                    /**
                     * 设置Percentage of messages under this subscription that were discarded but not sent after TTL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MsgRateExpired Percentage of messages under this subscription that were discarded but not sent after TTL.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgRateExpired(const std::string& _msgRateExpired);

                    /**
                     * 判断参数 MsgRateExpired 是否已赋值
                     * @return MsgRateExpired 是否已赋值
                     */
                    bool MsgRateExpiredHasBeenSet() const;

                    /**
                     * 获取The total number of messages delivered by the consumer per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgRateOut The total number of messages delivered by the consumer per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMsgRateOut() const;

                    /**
                     * 设置The total number of messages delivered by the consumer per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MsgRateOut The total number of messages delivered by the consumer per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgRateOut(const std::string& _msgRateOut);

                    /**
                     * 判断参数 MsgRateOut 是否已赋值
                     * @return MsgRateOut 是否已赋值
                     */
                    bool MsgRateOutHasBeenSet() const;

                    /**
                     * 获取The size (in bytes) of messages consumed by the consumer per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgThroughputOut The size (in bytes) of messages consumed by the consumer per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMsgThroughputOut() const;

                    /**
                     * 设置The size (in bytes) of messages consumed by the consumer per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MsgThroughputOut The size (in bytes) of messages consumed by the consumer per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgThroughputOut(const std::string& _msgThroughputOut);

                    /**
                     * 判断参数 MsgThroughputOut 是否已赋值
                     * @return MsgThroughputOut 是否已赋值
                     */
                    bool MsgThroughputOutHasBeenSet() const;

                    /**
                     * 获取Subscription name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubscriptionName Subscription name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSubscriptionName() const;

                    /**
                     * 设置Subscription name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SubscriptionName Subscription name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubscriptionName(const std::string& _subscriptionName);

                    /**
                     * 判断参数 SubscriptionName 是否已赋值
                     * @return SubscriptionName 是否已赋值
                     */
                    bool SubscriptionNameHasBeenSet() const;

                    /**
                     * 获取Set of consumers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerSets Set of consumers.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Consumer> GetConsumerSets() const;

                    /**
                     * 设置Set of consumers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ConsumerSets Set of consumers.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConsumerSets(const std::vector<Consumer>& _consumerSets);

                    /**
                     * 判断参数 ConsumerSets 是否已赋值
                     * @return ConsumerSets 是否已赋值
                     */
                    bool ConsumerSetsHasBeenSet() const;

                    /**
                     * 获取Whether the consumer is online.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsOnline Whether the consumer is online.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetIsOnline() const;

                    /**
                     * 设置Whether the consumer is online.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IsOnline Whether the consumer is online.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsOnline(const bool& _isOnline);

                    /**
                     * 判断参数 IsOnline 是否已赋值
                     * @return IsOnline 是否已赋值
                     */
                    bool IsOnlineHasBeenSet() const;

                    /**
                     * 获取Set of consumption progress information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumersScheduleSets Set of consumption progress information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ConsumersSchedule> GetConsumersScheduleSets() const;

                    /**
                     * 设置Set of consumption progress information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ConsumersScheduleSets Set of consumption progress information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConsumersScheduleSets(const std::vector<ConsumersSchedule>& _consumersScheduleSets);

                    /**
                     * 判断参数 ConsumersScheduleSets 是否已赋值
                     * @return ConsumersScheduleSets 是否已赋值
                     */
                    bool ConsumersScheduleSetsHasBeenSet() const;

                    /**
                     * 获取Remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Remark Remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CreateTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Last modified.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UpdateTime Last modified.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Subscription type. Valid values: `Exclusive`, `Shared`, `Failover`, and `Key_Shared`. An empty string or `NULL`: Unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubType Subscription type. Valid values: `Exclusive`, `Shared`, `Failover`, and `Key_Shared`. An empty string or `NULL`: Unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置Subscription type. Valid values: `Exclusive`, `Shared`, `Failover`, and `Key_Shared`. An empty string or `NULL`: Unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SubType Subscription type. Valid values: `Exclusive`, `Shared`, `Failover`, and `Key_Shared`. An empty string or `NULL`: Unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取Whether messages are blocked as the limit of unacknowledged messages has been reached.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BlockedSubscriptionOnUnackedMsgs Whether messages are blocked as the limit of unacknowledged messages has been reached.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetBlockedSubscriptionOnUnackedMsgs() const;

                    /**
                     * 设置Whether messages are blocked as the limit of unacknowledged messages has been reached.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param BlockedSubscriptionOnUnackedMsgs Whether messages are blocked as the limit of unacknowledged messages has been reached.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBlockedSubscriptionOnUnackedMsgs(const bool& _blockedSubscriptionOnUnackedMsgs);

                    /**
                     * 判断参数 BlockedSubscriptionOnUnackedMsgs 是否已赋值
                     * @return BlockedSubscriptionOnUnackedMsgs 是否已赋值
                     */
                    bool BlockedSubscriptionOnUnackedMsgsHasBeenSet() const;

                    /**
                     * 获取The maximum number of unacknowledged messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxUnackedMsgNum The maximum number of unacknowledged messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetMaxUnackedMsgNum() const;

                    /**
                     * 设置The maximum number of unacknowledged messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MaxUnackedMsgNum The maximum number of unacknowledged messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxUnackedMsgNum(const int64_t& _maxUnackedMsgNum);

                    /**
                     * 判断参数 MaxUnackedMsgNum 是否已赋值
                     * @return MaxUnackedMsgNum 是否已赋值
                     */
                    bool MaxUnackedMsgNumHasBeenSet() const;

                private:

                    /**
                     * Topic name.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Environment (namespace) name.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * The time when the consumer started connecting.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_connectedSince;
                    bool m_connectedSinceHasBeenSet;

                    /**
                     * Consumer address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_consumerAddr;
                    bool m_consumerAddrHasBeenSet;

                    /**
                     * The number of consumers.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_consumerCount;
                    bool m_consumerCountHasBeenSet;

                    /**
                     * Consumer name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_consumerName;
                    bool m_consumerNameHasBeenSet;

                    /**
                     * The number of heaped messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgBacklog;
                    bool m_msgBacklogHasBeenSet;

                    /**
                     * Percentage of messages under this subscription that were discarded but not sent after TTL.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgRateExpired;
                    bool m_msgRateExpiredHasBeenSet;

                    /**
                     * The total number of messages delivered by the consumer per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgRateOut;
                    bool m_msgRateOutHasBeenSet;

                    /**
                     * The size (in bytes) of messages consumed by the consumer per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgThroughputOut;
                    bool m_msgThroughputOutHasBeenSet;

                    /**
                     * Subscription name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subscriptionName;
                    bool m_subscriptionNameHasBeenSet;

                    /**
                     * Set of consumers.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Consumer> m_consumerSets;
                    bool m_consumerSetsHasBeenSet;

                    /**
                     * Whether the consumer is online.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isOnline;
                    bool m_isOnlineHasBeenSet;

                    /**
                     * Set of consumption progress information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ConsumersSchedule> m_consumersScheduleSets;
                    bool m_consumersScheduleSetsHasBeenSet;

                    /**
                     * Remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Subscription type. Valid values: `Exclusive`, `Shared`, `Failover`, and `Key_Shared`. An empty string or `NULL`: Unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * Whether messages are blocked as the limit of unacknowledged messages has been reached.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_blockedSubscriptionOnUnackedMsgs;
                    bool m_blockedSubscriptionOnUnackedMsgsHasBeenSet;

                    /**
                     * The maximum number of unacknowledged messages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxUnackedMsgNum;
                    bool m_maxUnackedMsgNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_SUBSCRIPTION_H_
