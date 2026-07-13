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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONSUMERSLISTINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONSUMERSLISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * Queue consumer list information.
                */
                class RabbitMQConsumersListInfo : public AbstractModel
                {
                public:
                    RabbitMQConsumersListInfo();
                    ~RabbitMQConsumersListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client Ip.
                     * @return ClientIp Client Ip.
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置Client Ip.
                     * @param _clientIp Client Ip.
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取Consumer Tag.
                     * @return ConsumerTag Consumer Tag.
                     * 
                     */
                    std::string GetConsumerTag() const;

                    /**
                     * 设置Consumer Tag.
                     * @param _consumerTag Consumer Tag.
                     * 
                     */
                    void SetConsumerTag(const std::string& _consumerTag);

                    /**
                     * 判断参数 ConsumerTag 是否已赋值
                     * @return ConsumerTag 是否已赋值
                     * 
                     */
                    bool ConsumerTagHasBeenSet() const;

                    /**
                     * 获取Consume target queue
                     * @return QueueName Consume target queue
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置Consume target queue
                     * @param _queueName Consume target queue
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取Whether required for the consumer to manually ack
                     * @return AckRequired Whether required for the consumer to manually ack
                     * 
                     */
                    bool GetAckRequired() const;

                    /**
                     * 设置Whether required for the consumer to manually ack
                     * @param _ackRequired Whether required for the consumer to manually ack
                     * 
                     */
                    void SetAckRequired(const bool& _ackRequired);

                    /**
                     * 判断参数 AckRequired 是否已赋值
                     * @return AckRequired 是否已赋值
                     * 
                     */
                    bool AckRequiredHasBeenSet() const;

                    /**
                     * 获取Consumer qos value
                     * @return PrefetchCount Consumer qos value
                     * 
                     */
                    uint64_t GetPrefetchCount() const;

                    /**
                     * 设置Consumer qos value
                     * @param _prefetchCount Consumer qos value
                     * 
                     */
                    void SetPrefetchCount(const uint64_t& _prefetchCount);

                    /**
                     * 判断参数 PrefetchCount 是否已赋值
                     * @return PrefetchCount 是否已赋值
                     * 
                     */
                    bool PrefetchCountHasBeenSet() const;

                    /**
                     * 获取Consumer status
                     * @return Active Consumer status
                     * 
                     */
                    std::string GetActive() const;

                    /**
                     * 设置Consumer status
                     * @param _active Consumer status
                     * 
                     */
                    void SetActive(const std::string& _active);

                    /**
                     * 判断参数 Active 是否已赋值
                     * @return Active 是否已赋值
                     * 
                     */
                    bool ActiveHasBeenSet() const;

                    /**
                     * 获取Time of the last message submission
                     * @return LastDeliveredTime Time of the last message submission
                     * 
                     */
                    std::string GetLastDeliveredTime() const;

                    /**
                     * 设置Time of the last message submission
                     * @param _lastDeliveredTime Time of the last message submission
                     * 
                     */
                    void SetLastDeliveredTime(const std::string& _lastDeliveredTime);

                    /**
                     * 判断参数 LastDeliveredTime 是否已赋值
                     * @return LastDeliveredTime 是否已赋值
                     * 
                     */
                    bool LastDeliveredTimeHasBeenSet() const;

                    /**
                     * 获取Number of unconfirmed messages of the consumer
                     * @return UnAckMsgCount Number of unconfirmed messages of the consumer
                     * 
                     */
                    int64_t GetUnAckMsgCount() const;

                    /**
                     * 设置Number of unconfirmed messages of the consumer
                     * @param _unAckMsgCount Number of unconfirmed messages of the consumer
                     * 
                     */
                    void SetUnAckMsgCount(const int64_t& _unAckMsgCount);

                    /**
                     * 判断参数 UnAckMsgCount 是否已赋值
                     * @return UnAckMsgCount 是否已赋值
                     * 
                     */
                    bool UnAckMsgCountHasBeenSet() const;

                    /**
                     * 获取channel belonging to the consumer
                     * @return ChannelName channel belonging to the consumer
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置channel belonging to the consumer
                     * @param _channelName channel belonging to the consumer
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                private:

                    /**
                     * Client Ip.
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * Consumer Tag.
                     */
                    std::string m_consumerTag;
                    bool m_consumerTagHasBeenSet;

                    /**
                     * Consume target queue
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * Whether required for the consumer to manually ack
                     */
                    bool m_ackRequired;
                    bool m_ackRequiredHasBeenSet;

                    /**
                     * Consumer qos value
                     */
                    uint64_t m_prefetchCount;
                    bool m_prefetchCountHasBeenSet;

                    /**
                     * Consumer status
                     */
                    std::string m_active;
                    bool m_activeHasBeenSet;

                    /**
                     * Time of the last message submission
                     */
                    std::string m_lastDeliveredTime;
                    bool m_lastDeliveredTimeHasBeenSet;

                    /**
                     * Number of unconfirmed messages of the consumer
                     */
                    int64_t m_unAckMsgCount;
                    bool m_unAckMsgCountHasBeenSet;

                    /**
                     * channel belonging to the consumer
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONSUMERSLISTINFO_H_
