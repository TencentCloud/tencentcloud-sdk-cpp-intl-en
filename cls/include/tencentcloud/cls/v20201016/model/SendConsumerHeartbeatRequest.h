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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SENDCONSUMERHEARTBEATREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SENDCONSUMERHEARTBEATREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/TopicPartitionInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * SendConsumerHeartbeat request structure.
                */
                class SendConsumerHeartbeatRequest : public AbstractModel
                {
                public:
                    SendConsumerHeartbeatRequest();
                    ~SendConsumerHeartbeatRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Flag of the consumer group that reports the heartbeat.
                     * @return ConsumerGroup Flag of the consumer group that reports the heartbeat.
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置Flag of the consumer group that reports the heartbeat.
                     * @param _consumerGroup Flag of the consumer group that reports the heartbeat.
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
                     * 获取Consumer name for reporting heartbeat
(alphanumeric underscore, no numbers or _ at the beginning, length less than 256)
                     * @return Consumer Consumer name for reporting heartbeat
(alphanumeric underscore, no numbers or _ at the beginning, length less than 256)
                     * 
                     */
                    std::string GetConsumer() const;

                    /**
                     * 设置Consumer name for reporting heartbeat
(alphanumeric underscore, no numbers or _ at the beginning, length less than 256)
                     * @param _consumer Consumer name for reporting heartbeat
(alphanumeric underscore, no numbers or _ at the beginning, length less than 256)
                     * 
                     */
                    void SetConsumer(const std::string& _consumer);

                    /**
                     * 判断参数 Consumer 是否已赋值
                     * @return Consumer 是否已赋值
                     * 
                     */
                    bool ConsumerHasBeenSet() const;

                    /**
                     * 获取Logset ID
                     * @return LogsetId Logset ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID
                     * @param _logsetId Logset ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Topic partition information.
                     * @return TopicPartitionsInfo Topic partition information.
                     * 
                     */
                    std::vector<TopicPartitionInfo> GetTopicPartitionsInfo() const;

                    /**
                     * 设置Topic partition information.
                     * @param _topicPartitionsInfo Topic partition information.
                     * 
                     */
                    void SetTopicPartitionsInfo(const std::vector<TopicPartitionInfo>& _topicPartitionsInfo);

                    /**
                     * 判断参数 TopicPartitionsInfo 是否已赋值
                     * @return TopicPartitionsInfo 是否已赋值
                     * 
                     */
                    bool TopicPartitionsInfoHasBeenSet() const;

                private:

                    /**
                     * Flag of the consumer group that reports the heartbeat.
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * Consumer name for reporting heartbeat
(alphanumeric underscore, no numbers or _ at the beginning, length less than 256)
                     */
                    std::string m_consumer;
                    bool m_consumerHasBeenSet;

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Topic partition information.
                     */
                    std::vector<TopicPartitionInfo> m_topicPartitionsInfo;
                    bool m_topicPartitionsInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SENDCONSUMERHEARTBEATREQUEST_H_
