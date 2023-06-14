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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDMESSAGESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDMESSAGESREQUEST_H_

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
                * SendMessages request structure.
                */
                class SendMessagesRequest : public AbstractModel
                {
                public:
                    SendMessagesRequest();
                    ~SendMessagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the topic to which to send the message. It is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     * @return Topic Name of the topic to which to send the message. It is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Name of the topic to which to send the message. It is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     * @param _topic Name of the topic to which to send the message. It is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
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
                     * 获取Content of the message to be sent
                     * @return Payload Content of the message to be sent
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置Content of the message to be sent
                     * @param _payload Content of the message to be sent
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取Token used for authentication, which is optional and will be automatically obtained by the system.
                     * @return StringToken Token used for authentication, which is optional and will be automatically obtained by the system.
                     * 
                     */
                    std::string GetStringToken() const;

                    /**
                     * 设置Token used for authentication, which is optional and will be automatically obtained by the system.
                     * @param _stringToken Token used for authentication, which is optional and will be automatically obtained by the system.
                     * 
                     */
                    void SetStringToken(const std::string& _stringToken);

                    /**
                     * 判断参数 StringToken 是否已赋值
                     * @return StringToken 是否已赋值
                     * 
                     */
                    bool StringTokenHasBeenSet() const;

                    /**
                     * 获取Producer name, which is randomly generated and must be globally unique. If you set the producer name manually, the producer may fail to be created, causing message sending failure.
This parameter is used only when a specific producer is allowed to produce messages. It won’t be used in most cases.
                     * @return ProducerName Producer name, which is randomly generated and must be globally unique. If you set the producer name manually, the producer may fail to be created, causing message sending failure.
This parameter is used only when a specific producer is allowed to produce messages. It won’t be used in most cases.
                     * 
                     */
                    std::string GetProducerName() const;

                    /**
                     * 设置Producer name, which is randomly generated and must be globally unique. If you set the producer name manually, the producer may fail to be created, causing message sending failure.
This parameter is used only when a specific producer is allowed to produce messages. It won’t be used in most cases.
                     * @param _producerName Producer name, which is randomly generated and must be globally unique. If you set the producer name manually, the producer may fail to be created, causing message sending failure.
This parameter is used only when a specific producer is allowed to produce messages. It won’t be used in most cases.
                     * 
                     */
                    void SetProducerName(const std::string& _producerName);

                    /**
                     * 判断参数 ProducerName 是否已赋值
                     * @return ProducerName 是否已赋值
                     * 
                     */
                    bool ProducerNameHasBeenSet() const;

                    /**
                     * 获取Message sending timeout period, which is 30s by default.
                     * @return SendTimeout Message sending timeout period, which is 30s by default.
                     * 
                     */
                    int64_t GetSendTimeout() const;

                    /**
                     * 设置Message sending timeout period, which is 30s by default.
                     * @param _sendTimeout Message sending timeout period, which is 30s by default.
                     * 
                     */
                    void SetSendTimeout(const int64_t& _sendTimeout);

                    /**
                     * 判断参数 SendTimeout 是否已赋值
                     * @return SendTimeout 是否已赋值
                     * 
                     */
                    bool SendTimeoutHasBeenSet() const;

                    /**
                     * 获取Maximum number of produced messages which can be cached in the memory. Default value: 1000
                     * @return MaxPendingMessages Maximum number of produced messages which can be cached in the memory. Default value: 1000
                     * 
                     */
                    int64_t GetMaxPendingMessages() const;

                    /**
                     * 设置Maximum number of produced messages which can be cached in the memory. Default value: 1000
                     * @param _maxPendingMessages Maximum number of produced messages which can be cached in the memory. Default value: 1000
                     * 
                     */
                    void SetMaxPendingMessages(const int64_t& _maxPendingMessages);

                    /**
                     * 判断参数 MaxPendingMessages 是否已赋值
                     * @return MaxPendingMessages 是否已赋值
                     * 
                     */
                    bool MaxPendingMessagesHasBeenSet() const;

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
                     * Token used for authentication, which is optional and will be automatically obtained by the system.
                     */
                    std::string m_stringToken;
                    bool m_stringTokenHasBeenSet;

                    /**
                     * Producer name, which is randomly generated and must be globally unique. If you set the producer name manually, the producer may fail to be created, causing message sending failure.
This parameter is used only when a specific producer is allowed to produce messages. It won’t be used in most cases.
                     */
                    std::string m_producerName;
                    bool m_producerNameHasBeenSet;

                    /**
                     * Message sending timeout period, which is 30s by default.
                     */
                    int64_t m_sendTimeout;
                    bool m_sendTimeoutHasBeenSet;

                    /**
                     * Maximum number of produced messages which can be cached in the memory. Default value: 1000
                     */
                    int64_t m_maxPendingMessages;
                    bool m_maxPendingMessagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDMESSAGESREQUEST_H_
