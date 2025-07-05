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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RECEIVEMESSAGERESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RECEIVEMESSAGERESPONSE_H_

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
                * ReceiveMessage response structure.
                */
                class ReceiveMessageResponse : public AbstractModel
                {
                public:
                    ReceiveMessageResponse();
                    ~ReceiveMessageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique primary key used to identify the message
                     * @return MessageID Unique primary key used to identify the message
                     * 
                     */
                    std::string GetMessageID() const;

                    /**
                     * 判断参数 MessageID 是否已赋值
                     * @return MessageID 是否已赋值
                     * 
                     */
                    bool MessageIDHasBeenSet() const;

                    /**
                     * 获取Content of the received message
                     * @return MessagePayload Content of the received message
                     * 
                     */
                    std::string GetMessagePayload() const;

                    /**
                     * 判断参数 MessagePayload 是否已赋值
                     * @return MessagePayload 是否已赋值
                     * 
                     */
                    bool MessagePayloadHasBeenSet() const;

                    /**
                     * 获取Provided to the `Ack` API and used to acknowledge messages in the topic
                     * @return AckTopic Provided to the `Ack` API and used to acknowledge messages in the topic
                     * 
                     */
                    std::string GetAckTopic() const;

                    /**
                     * 判断参数 AckTopic 是否已赋值
                     * @return AckTopic 是否已赋值
                     * 
                     */
                    bool AckTopicHasBeenSet() const;

                    /**
                     * 获取Returned error message. If it is an empty string, no error occurred.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ErrorMsg Returned error message. If it is an empty string, no error occurred.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取Returned subscriber name, which will be used when an acknowledgment consumer is created.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubName Returned subscriber name, which will be used when an acknowledgment consumer is created.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubName() const;

                    /**
                     * 判断参数 SubName 是否已赋值
                     * @return SubName 是否已赋值
                     * 
                     */
                    bool SubNameHasBeenSet() const;

                    /**
                     * 获取MessageIDs returned by `BatchReceivePolicy` at a time, which are separated by “###”.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MessageIDList MessageIDs returned by `BatchReceivePolicy` at a time, which are separated by “###”.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessageIDList() const;

                    /**
                     * 判断参数 MessageIDList 是否已赋值
                     * @return MessageIDList 是否已赋值
                     * 
                     */
                    bool MessageIDListHasBeenSet() const;

                    /**
                     * 获取Message contents returned by `BatchReceivePolicy` at a time, which are separated by “###”.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MessagesPayload Message contents returned by `BatchReceivePolicy` at a time, which are separated by “###”.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessagesPayload() const;

                    /**
                     * 判断参数 MessagesPayload 是否已赋值
                     * @return MessagesPayload 是否已赋值
                     * 
                     */
                    bool MessagesPayloadHasBeenSet() const;

                private:

                    /**
                     * Unique primary key used to identify the message
                     */
                    std::string m_messageID;
                    bool m_messageIDHasBeenSet;

                    /**
                     * Content of the received message
                     */
                    std::string m_messagePayload;
                    bool m_messagePayloadHasBeenSet;

                    /**
                     * Provided to the `Ack` API and used to acknowledge messages in the topic
                     */
                    std::string m_ackTopic;
                    bool m_ackTopicHasBeenSet;

                    /**
                     * Returned error message. If it is an empty string, no error occurred.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * Returned subscriber name, which will be used when an acknowledgment consumer is created.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subName;
                    bool m_subNameHasBeenSet;

                    /**
                     * MessageIDs returned by `BatchReceivePolicy` at a time, which are separated by “###”.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_messageIDList;
                    bool m_messageIDListHasBeenSet;

                    /**
                     * Message contents returned by `BatchReceivePolicy` at a time, which are separated by “###”.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_messagesPayload;
                    bool m_messagesPayloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RECEIVEMESSAGERESPONSE_H_
