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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ACKNOWLEDGEMESSAGEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ACKNOWLEDGEMESSAGEREQUEST_H_

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
                * AcknowledgeMessage request structure.
                */
                class AcknowledgeMessageRequest : public AbstractModel
                {
                public:
                    AcknowledgeMessageRequest();
                    ~AcknowledgeMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID used to identify the message, which can be obtained from the returned value of `receiveMessage`.
                     * @return MessageId Unique ID used to identify the message, which can be obtained from the returned value of `receiveMessage`.
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置Unique ID used to identify the message, which can be obtained from the returned value of `receiveMessage`.
                     * @param _messageId Unique ID used to identify the message, which can be obtained from the returned value of `receiveMessage`.
                     * 
                     */
                    void SetMessageId(const std::string& _messageId);

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取Topic name, which can be obtained from the returned value of `receiveMessage` and is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     * @return AckTopic Topic name, which can be obtained from the returned value of `receiveMessage` and is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     * 
                     */
                    std::string GetAckTopic() const;

                    /**
                     * 设置Topic name, which can be obtained from the returned value of `receiveMessage` and is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     * @param _ackTopic Topic name, which can be obtained from the returned value of `receiveMessage` and is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     * 
                     */
                    void SetAckTopic(const std::string& _ackTopic);

                    /**
                     * 判断参数 AckTopic 是否已赋值
                     * @return AckTopic 是否已赋值
                     * 
                     */
                    bool AckTopicHasBeenSet() const;

                    /**
                     * 获取Subscriber name, which can be obtained from the returned value of `receiveMessage`. Make sure that it is the same as the subscriber name identified in `receiveMessage`; otherwise, the received message cannot be correctly acknowledged.
                     * @return SubName Subscriber name, which can be obtained from the returned value of `receiveMessage`. Make sure that it is the same as the subscriber name identified in `receiveMessage`; otherwise, the received message cannot be correctly acknowledged.
                     * 
                     */
                    std::string GetSubName() const;

                    /**
                     * 设置Subscriber name, which can be obtained from the returned value of `receiveMessage`. Make sure that it is the same as the subscriber name identified in `receiveMessage`; otherwise, the received message cannot be correctly acknowledged.
                     * @param _subName Subscriber name, which can be obtained from the returned value of `receiveMessage`. Make sure that it is the same as the subscriber name identified in `receiveMessage`; otherwise, the received message cannot be correctly acknowledged.
                     * 
                     */
                    void SetSubName(const std::string& _subName);

                    /**
                     * 判断参数 SubName 是否已赋值
                     * @return SubName 是否已赋值
                     * 
                     */
                    bool SubNameHasBeenSet() const;

                private:

                    /**
                     * Unique ID used to identify the message, which can be obtained from the returned value of `receiveMessage`.
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * Topic name, which can be obtained from the returned value of `receiveMessage` and is better to be the full path of the topic, such as `tenant/namespace/topic`. If it is not specified, `public/default` will be used by default.
                     */
                    std::string m_ackTopic;
                    bool m_ackTopicHasBeenSet;

                    /**
                     * Subscriber name, which can be obtained from the returned value of `receiveMessage`. Make sure that it is the same as the subscriber name identified in `receiveMessage`; otherwise, the received message cannot be correctly acknowledged.
                     */
                    std::string m_subName;
                    bool m_subNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ACKNOWLEDGEMESSAGEREQUEST_H_
