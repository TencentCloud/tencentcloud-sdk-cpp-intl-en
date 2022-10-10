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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RECEIVEMESSAGEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RECEIVEMESSAGEREQUEST_H_

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
                * ReceiveMessage request structure.
                */
                class ReceiveMessageRequest : public AbstractModel
                {
                public:
                    ReceiveMessageRequest();
                    ~ReceiveMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the topic which receives the message. It is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     * @return Topic Name of the topic which receives the message. It is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Name of the topic which receives the message. It is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     * @param Topic Name of the topic which receives the message. It is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Subscriber name
                     * @return SubscriptionName Subscriber name
                     */
                    std::string GetSubscriptionName() const;

                    /**
                     * 设置Subscriber name
                     * @param SubscriptionName Subscriber name
                     */
                    void SetSubscriptionName(const std::string& _subscriptionName);

                    /**
                     * 判断参数 SubscriptionName 是否已赋值
                     * @return SubscriptionName 是否已赋值
                     */
                    bool SubscriptionNameHasBeenSet() const;

                    /**
                     * 获取Default value: 1000. Messages received by the consumer will first be stored in the `receiverQueueSize` queue to tune the message receiving rate.
                     * @return ReceiverQueueSize Default value: 1000. Messages received by the consumer will first be stored in the `receiverQueueSize` queue to tune the message receiving rate.
                     */
                    int64_t GetReceiverQueueSize() const;

                    /**
                     * 设置Default value: 1000. Messages received by the consumer will first be stored in the `receiverQueueSize` queue to tune the message receiving rate.
                     * @param ReceiverQueueSize Default value: 1000. Messages received by the consumer will first be stored in the `receiverQueueSize` queue to tune the message receiving rate.
                     */
                    void SetReceiverQueueSize(const int64_t& _receiverQueueSize);

                    /**
                     * 判断参数 ReceiverQueueSize 是否已赋值
                     * @return ReceiverQueueSize 是否已赋值
                     */
                    bool ReceiverQueueSizeHasBeenSet() const;

                    /**
                     * 获取A parameter used to determine the position where the consumer initially receives messages. Valid values: `Earliest` (default), `Latest`.
                     * @return SubInitialPosition A parameter used to determine the position where the consumer initially receives messages. Valid values: `Earliest` (default), `Latest`.
                     */
                    std::string GetSubInitialPosition() const;

                    /**
                     * 设置A parameter used to determine the position where the consumer initially receives messages. Valid values: `Earliest` (default), `Latest`.
                     * @param SubInitialPosition A parameter used to determine the position where the consumer initially receives messages. Valid values: `Earliest` (default), `Latest`.
                     */
                    void SetSubInitialPosition(const std::string& _subInitialPosition);

                    /**
                     * 判断参数 SubInitialPosition 是否已赋值
                     * @return SubInitialPosition 是否已赋值
                     */
                    bool SubInitialPositionHasBeenSet() const;

                    /**
                     * 获取This parameter is used to specify the maximum number of received messages in a batch for `BatchReceivePolicy`. The default value is 0, indicating that `BatchReceivePolicy` is disabled.
                     * @return MaxNumMessages This parameter is used to specify the maximum number of received messages in a batch for `BatchReceivePolicy`. The default value is 0, indicating that `BatchReceivePolicy` is disabled.
                     */
                    int64_t GetMaxNumMessages() const;

                    /**
                     * 设置This parameter is used to specify the maximum number of received messages in a batch for `BatchReceivePolicy`. The default value is 0, indicating that `BatchReceivePolicy` is disabled.
                     * @param MaxNumMessages This parameter is used to specify the maximum number of received messages in a batch for `BatchReceivePolicy`. The default value is 0, indicating that `BatchReceivePolicy` is disabled.
                     */
                    void SetMaxNumMessages(const int64_t& _maxNumMessages);

                    /**
                     * 判断参数 MaxNumMessages 是否已赋值
                     * @return MaxNumMessages 是否已赋值
                     */
                    bool MaxNumMessagesHasBeenSet() const;

                    /**
                     * 获取This parameter is used to specify the maximum body size (in bytes) of received messages in a batch for `BatchReceivePolicy`. The default value is 0, indicating that `BatchReceivePolicy` is disabled.
                     * @return MaxNumBytes This parameter is used to specify the maximum body size (in bytes) of received messages in a batch for `BatchReceivePolicy`. The default value is 0, indicating that `BatchReceivePolicy` is disabled.
                     */
                    int64_t GetMaxNumBytes() const;

                    /**
                     * 设置This parameter is used to specify the maximum body size (in bytes) of received messages in a batch for `BatchReceivePolicy`. The default value is 0, indicating that `BatchReceivePolicy` is disabled.
                     * @param MaxNumBytes This parameter is used to specify the maximum body size (in bytes) of received messages in a batch for `BatchReceivePolicy`. The default value is 0, indicating that `BatchReceivePolicy` is disabled.
                     */
                    void SetMaxNumBytes(const int64_t& _maxNumBytes);

                    /**
                     * 判断参数 MaxNumBytes 是否已赋值
                     * @return MaxNumBytes 是否已赋值
                     */
                    bool MaxNumBytesHasBeenSet() const;

                    /**
                     * 获取This parameter is used to specify the maximum wait timeout (in milliseconds) for receiving a batch of messages for `BatchReceivePolicy`. The default value is 0, indicating that `BatchReceivePolicy` is disabled.
                     * @return Timeout This parameter is used to specify the maximum wait timeout (in milliseconds) for receiving a batch of messages for `BatchReceivePolicy`. The default value is 0, indicating that `BatchReceivePolicy` is disabled.
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置This parameter is used to specify the maximum wait timeout (in milliseconds) for receiving a batch of messages for `BatchReceivePolicy`. The default value is 0, indicating that `BatchReceivePolicy` is disabled.
                     * @param Timeout This parameter is used to specify the maximum wait timeout (in milliseconds) for receiving a batch of messages for `BatchReceivePolicy`. The default value is 0, indicating that `BatchReceivePolicy` is disabled.
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * Name of the topic which receives the message. It is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Subscriber name
                     */
                    std::string m_subscriptionName;
                    bool m_subscriptionNameHasBeenSet;

                    /**
                     * Default value: 1000. Messages received by the consumer will first be stored in the `receiverQueueSize` queue to tune the message receiving rate.
                     */
                    int64_t m_receiverQueueSize;
                    bool m_receiverQueueSizeHasBeenSet;

                    /**
                     * A parameter used to determine the position where the consumer initially receives messages. Valid values: `Earliest` (default), `Latest`.
                     */
                    std::string m_subInitialPosition;
                    bool m_subInitialPositionHasBeenSet;

                    /**
                     * This parameter is used to specify the maximum number of received messages in a batch for `BatchReceivePolicy`. The default value is 0, indicating that `BatchReceivePolicy` is disabled.
                     */
                    int64_t m_maxNumMessages;
                    bool m_maxNumMessagesHasBeenSet;

                    /**
                     * This parameter is used to specify the maximum body size (in bytes) of received messages in a batch for `BatchReceivePolicy`. The default value is 0, indicating that `BatchReceivePolicy` is disabled.
                     */
                    int64_t m_maxNumBytes;
                    bool m_maxNumBytesHasBeenSet;

                    /**
                     * This parameter is used to specify the maximum wait timeout (in milliseconds) for receiving a batch of messages for `BatchReceivePolicy`. The default value is 0, indicating that `BatchReceivePolicy` is disabled.
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RECEIVEMESSAGEREQUEST_H_
