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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_SUBSCRIPTIONDATA_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_SUBSCRIPTIONDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/ClientSubscriptionInfo.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * Topic and consumer group subscription relationship data
                */
                class SubscriptionData : public AbstractModel
                {
                public:
                    SubscriptionData();
                    ~SubscriptionData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Instance ID

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Topic name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Topic Topic name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Topic name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topic Topic name

Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicType Topic type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopicType() const;

                    /**
                     * 设置Topic type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicType Topic type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicType(const std::string& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     * 
                     */
                    bool TopicTypeHasBeenSet() const;

                    /**
                     * 获取Number of topic queues on a single node

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicQueueNum Number of topic queues on a single node

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTopicQueueNum() const;

                    /**
                     * 设置Number of topic queues on a single node

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicQueueNum Number of topic queues on a single node

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicQueueNum(const int64_t& _topicQueueNum);

                    /**
                     * 判断参数 TopicQueueNum 是否已赋值
                     * @return TopicQueueNum 是否已赋值
                     * 
                     */
                    bool TopicQueueNumHasBeenSet() const;

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
                     * 获取Consumption type. valid values as follows:.

-PULL: specifies the pull consumption type.
-PUSH: specifies the push consumption type.
-POP: specifies the pop consumption type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumeType Consumption type. valid values as follows:.

-PULL: specifies the pull consumption type.
-PUSH: specifies the push consumption type.
-POP: specifies the pop consumption type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConsumeType() const;

                    /**
                     * 设置Consumption type. valid values as follows:.

-PULL: specifies the pull consumption type.
-PUSH: specifies the push consumption type.
-POP: specifies the pop consumption type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consumeType Consumption type. valid values as follows:.

-PULL: specifies the pull consumption type.
-PUSH: specifies the push consumption type.
-POP: specifies the pop consumption type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConsumeType(const std::string& _consumeType);

                    /**
                     * 判断参数 ConsumeType 是否已赋值
                     * @return ConsumeType 是否已赋值
                     * 
                     */
                    bool ConsumeTypeHasBeenSet() const;

                    /**
                     * 获取Subscription rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubString Subscription rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubString() const;

                    /**
                     * 设置Subscription rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subString Subscription rule.
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
                     * 获取Filter type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpressionType Filter type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpressionType() const;

                    /**
                     * 设置Filter type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expressionType Filter type.
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
                     * 获取Subscription consistency. enumerated as follows:.

-Subscription consistency.
-Subscription inconsistency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Consistency Subscription consistency. enumerated as follows:.

-Subscription consistency.
-Subscription inconsistency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetConsistency() const;

                    /**
                     * 设置Subscription consistency. enumerated as follows:.

-Subscription consistency.
-Subscription inconsistency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consistency Subscription consistency. enumerated as follows:.

-Subscription consistency.
-Subscription inconsistency.
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
                     * 获取Consumption heap

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerLag Consumption heap

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetConsumerLag() const;

                    /**
                     * 设置Consumption heap

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consumerLag Consumption heap

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
                     * 获取Last consumption progress update time. **It is a Unix timestamp (ms).**
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastUpdateTime Last consumption progress update time. **It is a Unix timestamp (ms).**
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLastUpdateTime() const;

                    /**
                     * 设置Last consumption progress update time. **It is a Unix timestamp (ms).**
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastUpdateTime Last consumption progress update time. **It is a Unix timestamp (ms).**
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
                     * 获取Whether it is sequential consumption

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumeMessageOrderly Whether it is sequential consumption

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetConsumeMessageOrderly() const;

                    /**
                     * 设置Whether it is sequential consumption

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consumeMessageOrderly Whether it is sequential consumption

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConsumeMessageOrderly(const bool& _consumeMessageOrderly);

                    /**
                     * 判断参数 ConsumeMessageOrderly 是否已赋值
                     * @return ConsumeMessageOrderly 是否已赋值
                     * 
                     */
                    bool ConsumeMessageOrderlyHasBeenSet() const;

                    /**
                     * 获取Specifies the consumption mode. 
BROADCASTING mode.
CLUSTERING: cluster mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MessageModel Specifies the consumption mode. 
BROADCASTING mode.
CLUSTERING: cluster mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessageModel() const;

                    /**
                     * 设置Specifies the consumption mode. 
BROADCASTING mode.
CLUSTERING: cluster mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _messageModel Specifies the consumption mode. 
BROADCASTING mode.
CLUSTERING: cluster mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessageModel(const std::string& _messageModel);

                    /**
                     * 判断参数 MessageModel 是否已赋值
                     * @return MessageModel 是否已赋值
                     * 
                     */
                    bool MessageModelHasBeenSet() const;

                    /**
                     * 获取List of clients with inconsistent subscriptions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientSubscriptionInfos List of clients with inconsistent subscriptions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ClientSubscriptionInfo> GetClientSubscriptionInfos() const;

                    /**
                     * 设置List of clients with inconsistent subscriptions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clientSubscriptionInfos List of clients with inconsistent subscriptions.
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
                     * Instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Topic name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Topic type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * Number of topic queues on a single node

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_topicQueueNum;
                    bool m_topicQueueNumHasBeenSet;

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
                     * Consumption type. valid values as follows:.

-PULL: specifies the pull consumption type.
-PUSH: specifies the push consumption type.
-POP: specifies the pop consumption type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_consumeType;
                    bool m_consumeTypeHasBeenSet;

                    /**
                     * Subscription rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subString;
                    bool m_subStringHasBeenSet;

                    /**
                     * Filter type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expressionType;
                    bool m_expressionTypeHasBeenSet;

                    /**
                     * Subscription consistency. enumerated as follows:.

-Subscription consistency.
-Subscription inconsistency.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_consistency;
                    bool m_consistencyHasBeenSet;

                    /**
                     * Consumption heap

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_consumerLag;
                    bool m_consumerLagHasBeenSet;

                    /**
                     * Last consumption progress update time. **It is a Unix timestamp (ms).**
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
                     * Whether it is sequential consumption

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_consumeMessageOrderly;
                    bool m_consumeMessageOrderlyHasBeenSet;

                    /**
                     * Specifies the consumption mode. 
BROADCASTING mode.
CLUSTERING: cluster mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_messageModel;
                    bool m_messageModelHasBeenSet;

                    /**
                     * List of clients with inconsistent subscriptions.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClientSubscriptionInfo> m_clientSubscriptionInfos;
                    bool m_clientSubscriptionInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_SUBSCRIPTIONDATA_H_
