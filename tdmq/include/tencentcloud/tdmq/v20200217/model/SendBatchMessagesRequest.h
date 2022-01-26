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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDBATCHMESSAGESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDBATCHMESSAGESREQUEST_H_

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
                * SendBatchMessages request structure.
                */
                class SendBatchMessagesRequest : public AbstractModel
                {
                public:
                    SendBatchMessagesRequest();
                    ~SendBatchMessagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the topic to which to send the message. It is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     * @return Topic Name of the topic to which to send the message. It is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Name of the topic to which to send the message. It is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     * @param Topic Name of the topic to which to send the message. It is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Content of the message to be sent
                     * @return Payload Content of the message to be sent
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置Content of the message to be sent
                     * @param Payload Content of the message to be sent
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取String-Type token, which is optional and will be automatically obtained by the system.
                     * @return StringToken String-Type token, which is optional and will be automatically obtained by the system.
                     */
                    std::string GetStringToken() const;

                    /**
                     * 设置String-Type token, which is optional and will be automatically obtained by the system.
                     * @param StringToken String-Type token, which is optional and will be automatically obtained by the system.
                     */
                    void SetStringToken(const std::string& _stringToken);

                    /**
                     * 判断参数 StringToken 是否已赋值
                     * @return StringToken 是否已赋值
                     */
                    bool StringTokenHasBeenSet() const;

                    /**
                     * 获取Producer name, which must be globally unique. If it is not configured, the system will automatically generate one.
                     * @return ProducerName Producer name, which must be globally unique. If it is not configured, the system will automatically generate one.
                     */
                    std::string GetProducerName() const;

                    /**
                     * 设置Producer name, which must be globally unique. If it is not configured, the system will automatically generate one.
                     * @param ProducerName Producer name, which must be globally unique. If it is not configured, the system will automatically generate one.
                     */
                    void SetProducerName(const std::string& _producerName);

                    /**
                     * 判断参数 ProducerName 是否已赋值
                     * @return ProducerName 是否已赋值
                     */
                    bool ProducerNameHasBeenSet() const;

                    /**
                     * 获取Message sending timeout period in seconds. Default value: 30s
                     * @return SendTimeout Message sending timeout period in seconds. Default value: 30s
                     */
                    int64_t GetSendTimeout() const;

                    /**
                     * 设置Message sending timeout period in seconds. Default value: 30s
                     * @param SendTimeout Message sending timeout period in seconds. Default value: 30s
                     */
                    void SetSendTimeout(const int64_t& _sendTimeout);

                    /**
                     * 判断参数 SendTimeout 是否已赋值
                     * @return SendTimeout 是否已赋值
                     */
                    bool SendTimeoutHasBeenSet() const;

                    /**
                     * 获取Maximum number of produced messages which can be cached in the memory. Default value: 1000
                     * @return MaxPendingMessages Maximum number of produced messages which can be cached in the memory. Default value: 1000
                     */
                    int64_t GetMaxPendingMessages() const;

                    /**
                     * 设置Maximum number of produced messages which can be cached in the memory. Default value: 1000
                     * @param MaxPendingMessages Maximum number of produced messages which can be cached in the memory. Default value: 1000
                     */
                    void SetMaxPendingMessages(const int64_t& _maxPendingMessages);

                    /**
                     * 判断参数 MaxPendingMessages 是否已赋值
                     * @return MaxPendingMessages 是否已赋值
                     */
                    bool MaxPendingMessagesHasBeenSet() const;

                    /**
                     * 获取Maximum number of messages in each batch. Default value: 1000 messages/batch
                     * @return BatchingMaxMessages Maximum number of messages in each batch. Default value: 1000 messages/batch
                     */
                    int64_t GetBatchingMaxMessages() const;

                    /**
                     * 设置Maximum number of messages in each batch. Default value: 1000 messages/batch
                     * @param BatchingMaxMessages Maximum number of messages in each batch. Default value: 1000 messages/batch
                     */
                    void SetBatchingMaxMessages(const int64_t& _batchingMaxMessages);

                    /**
                     * 判断参数 BatchingMaxMessages 是否已赋值
                     * @return BatchingMaxMessages 是否已赋值
                     */
                    bool BatchingMaxMessagesHasBeenSet() const;

                    /**
                     * 获取Maximum wait time for each batch, after which the batch will be sent no matter whether the specified number or size of messages in the batch is reached. Default value: 10 ms
                     * @return BatchingMaxPublishDelay Maximum wait time for each batch, after which the batch will be sent no matter whether the specified number or size of messages in the batch is reached. Default value: 10 ms
                     */
                    int64_t GetBatchingMaxPublishDelay() const;

                    /**
                     * 设置Maximum wait time for each batch, after which the batch will be sent no matter whether the specified number or size of messages in the batch is reached. Default value: 10 ms
                     * @param BatchingMaxPublishDelay Maximum wait time for each batch, after which the batch will be sent no matter whether the specified number or size of messages in the batch is reached. Default value: 10 ms
                     */
                    void SetBatchingMaxPublishDelay(const int64_t& _batchingMaxPublishDelay);

                    /**
                     * 判断参数 BatchingMaxPublishDelay 是否已赋值
                     * @return BatchingMaxPublishDelay 是否已赋值
                     */
                    bool BatchingMaxPublishDelayHasBeenSet() const;

                    /**
                     * 获取Maximum allowed size of messages in each batch. Default value: 128 KB
                     * @return BatchingMaxBytes Maximum allowed size of messages in each batch. Default value: 128 KB
                     */
                    int64_t GetBatchingMaxBytes() const;

                    /**
                     * 设置Maximum allowed size of messages in each batch. Default value: 128 KB
                     * @param BatchingMaxBytes Maximum allowed size of messages in each batch. Default value: 128 KB
                     */
                    void SetBatchingMaxBytes(const int64_t& _batchingMaxBytes);

                    /**
                     * 判断参数 BatchingMaxBytes 是否已赋值
                     * @return BatchingMaxBytes 是否已赋值
                     */
                    bool BatchingMaxBytesHasBeenSet() const;

                private:

                    /**
                     * Name of the topic to which to send the message. It is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Content of the message to be sent
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * String-Type token, which is optional and will be automatically obtained by the system.
                     */
                    std::string m_stringToken;
                    bool m_stringTokenHasBeenSet;

                    /**
                     * Producer name, which must be globally unique. If it is not configured, the system will automatically generate one.
                     */
                    std::string m_producerName;
                    bool m_producerNameHasBeenSet;

                    /**
                     * Message sending timeout period in seconds. Default value: 30s
                     */
                    int64_t m_sendTimeout;
                    bool m_sendTimeoutHasBeenSet;

                    /**
                     * Maximum number of produced messages which can be cached in the memory. Default value: 1000
                     */
                    int64_t m_maxPendingMessages;
                    bool m_maxPendingMessagesHasBeenSet;

                    /**
                     * Maximum number of messages in each batch. Default value: 1000 messages/batch
                     */
                    int64_t m_batchingMaxMessages;
                    bool m_batchingMaxMessagesHasBeenSet;

                    /**
                     * Maximum wait time for each batch, after which the batch will be sent no matter whether the specified number or size of messages in the batch is reached. Default value: 10 ms
                     */
                    int64_t m_batchingMaxPublishDelay;
                    bool m_batchingMaxPublishDelayHasBeenSet;

                    /**
                     * Maximum allowed size of messages in each batch. Default value: 128 KB
                     */
                    int64_t m_batchingMaxBytes;
                    bool m_batchingMaxBytesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDBATCHMESSAGESREQUEST_H_
