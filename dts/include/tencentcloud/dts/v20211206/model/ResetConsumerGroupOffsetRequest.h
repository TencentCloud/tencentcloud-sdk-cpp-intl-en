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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_RESETCONSUMERGROUPOFFSETREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_RESETCONSUMERGROUPOFFSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ResetConsumerGroupOffset request structure.
                */
                class ResetConsumerGroupOffsetRequest : public AbstractModel
                {
                public:
                    ResetConsumerGroupOffsetRequest();
                    ~ResetConsumerGroupOffsetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Subscription instance ID
                     * @return SubscribeId Subscription instance ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置Subscription instance ID
                     * @param _subscribeId Subscription instance ID
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取Subscribed Kafka topic
                     * @return TopicName Subscribed Kafka topic
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Subscribed Kafka topic
                     * @param _topicName Subscribed Kafka topic
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
                     * 获取Consumer group name. The full name of the actual consumer group is in the form: consumer-grp-#{SubscribeId}-#{ConsumerGroupName}.
                     * @return ConsumerGroupName Consumer group name. The full name of the actual consumer group is in the form: consumer-grp-#{SubscribeId}-#{ConsumerGroupName}.
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置Consumer group name. The full name of the actual consumer group is in the form: consumer-grp-#{SubscribeId}-#{ConsumerGroupName}.
                     * @param _consumerGroupName Consumer group name. The full name of the actual consumer group is in the form: consumer-grp-#{SubscribeId}-#{ConsumerGroupName}.
                     * 
                     */
                    void SetConsumerGroupName(const std::string& _consumerGroupName);

                    /**
                     * 判断参数 ConsumerGroupName 是否已赋值
                     * @return ConsumerGroupName 是否已赋值
                     * 
                     */
                    bool ConsumerGroupNameHasBeenSet() const;

                    /**
                     * 获取The partition number of offset needs to be modified.
                     * @return PartitionNos The partition number of offset needs to be modified.
                     * 
                     */
                    std::vector<int64_t> GetPartitionNos() const;

                    /**
                     * 设置The partition number of offset needs to be modified.
                     * @param _partitionNos The partition number of offset needs to be modified.
                     * 
                     */
                    void SetPartitionNos(const std::vector<int64_t>& _partitionNos);

                    /**
                     * 判断参数 PartitionNos 是否已赋值
                     * @return PartitionNos 是否已赋值
                     * 
                     */
                    bool PartitionNosHasBeenSet() const;

                    /**
                     * 获取Reset mode. Valid values: earliest (start consumption from the earliest position); latest (start consumption from the latest position); datetime (start consumption from the most recent checkpoint before the specified time).
                     * @return ResetMode Reset mode. Valid values: earliest (start consumption from the earliest position); latest (start consumption from the latest position); datetime (start consumption from the most recent checkpoint before the specified time).
                     * 
                     */
                    std::string GetResetMode() const;

                    /**
                     * 设置Reset mode. Valid values: earliest (start consumption from the earliest position); latest (start consumption from the latest position); datetime (start consumption from the most recent checkpoint before the specified time).
                     * @param _resetMode Reset mode. Valid values: earliest (start consumption from the earliest position); latest (start consumption from the latest position); datetime (start consumption from the most recent checkpoint before the specified time).
                     * 
                     */
                    void SetResetMode(const std::string& _resetMode);

                    /**
                     * 判断参数 ResetMode 是否已赋值
                     * @return ResetMode 是否已赋值
                     * 
                     */
                    bool ResetModeHasBeenSet() const;

                    /**
                     * 获取When ResetMode is datetime, this field needs to be filled in, the format is: Y-m-d h:m:s. If not filled in, the default time is 0, and the effect is the same as earliest.
                     * @return ResetDatetime When ResetMode is datetime, this field needs to be filled in, the format is: Y-m-d h:m:s. If not filled in, the default time is 0, and the effect is the same as earliest.
                     * 
                     */
                    std::string GetResetDatetime() const;

                    /**
                     * 设置When ResetMode is datetime, this field needs to be filled in, the format is: Y-m-d h:m:s. If not filled in, the default time is 0, and the effect is the same as earliest.
                     * @param _resetDatetime When ResetMode is datetime, this field needs to be filled in, the format is: Y-m-d h:m:s. If not filled in, the default time is 0, and the effect is the same as earliest.
                     * 
                     */
                    void SetResetDatetime(const std::string& _resetDatetime);

                    /**
                     * 判断参数 ResetDatetime 是否已赋值
                     * @return ResetDatetime 是否已赋值
                     * 
                     */
                    bool ResetDatetimeHasBeenSet() const;

                private:

                    /**
                     * Subscription instance ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * Subscribed Kafka topic
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Consumer group name. The full name of the actual consumer group is in the form: consumer-grp-#{SubscribeId}-#{ConsumerGroupName}.
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * The partition number of offset needs to be modified.
                     */
                    std::vector<int64_t> m_partitionNos;
                    bool m_partitionNosHasBeenSet;

                    /**
                     * Reset mode. Valid values: earliest (start consumption from the earliest position); latest (start consumption from the latest position); datetime (start consumption from the most recent checkpoint before the specified time).
                     */
                    std::string m_resetMode;
                    bool m_resetModeHasBeenSet;

                    /**
                     * When ResetMode is datetime, this field needs to be filled in, the format is: Y-m-d h:m:s. If not filled in, the default time is 0, and the effect is the same as earliest.
                     */
                    std::string m_resetDatetime;
                    bool m_resetDatetimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_RESETCONSUMERGROUPOFFSETREQUEST_H_
