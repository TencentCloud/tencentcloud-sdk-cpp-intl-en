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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTMESSAGE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * MQTT message.
                */
                class MQTTMessage : public AbstractModel
                {
                public:
                    MQTTMessage();
                    ~MQTTMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Message ID
                     * @return MessageId Message ID
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置Message ID
                     * @param _messageId Message ID
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
                     * 获取Client Id of the message sender.
                     * @return ClientId Client Id of the message sender.
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置Client Id of the message sender.
                     * @param _clientId Client Id of the message sender.
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取Message service quality grade.
                     * @return Qos Message service quality grade.
                     * 
                     */
                    std::string GetQos() const;

                    /**
                     * 设置Message service quality grade.
                     * @param _qos Message service quality grade.
                     * 
                     */
                    void SetQos(const std::string& _qos);

                    /**
                     * 判断参数 Qos 是否已赋值
                     * @return Qos 是否已赋值
                     * 
                     */
                    bool QosHasBeenSet() const;

                    /**
                     * 获取Message storage time on the server. millisecond-level timestamp.
                     * @return StoreTimestamp Message storage time on the server. millisecond-level timestamp.
                     * 
                     */
                    int64_t GetStoreTimestamp() const;

                    /**
                     * 设置Message storage time on the server. millisecond-level timestamp.
                     * @param _storeTimestamp Message storage time on the server. millisecond-level timestamp.
                     * 
                     */
                    void SetStoreTimestamp(const int64_t& _storeTimestamp);

                    /**
                     * 判断参数 StoreTimestamp 是否已赋值
                     * @return StoreTimestamp 是否已赋值
                     * 
                     */
                    bool StoreTimestampHasBeenSet() const;

                    /**
                     * 获取Specifies the source topic.
                     * @return OriginTopic Specifies the source topic.
                     * 
                     */
                    std::string GetOriginTopic() const;

                    /**
                     * 设置Specifies the source topic.
                     * @param _originTopic Specifies the source topic.
                     * 
                     */
                    void SetOriginTopic(const std::string& _originTopic);

                    /**
                     * 判断参数 OriginTopic 是否已赋值
                     * @return OriginTopic 是否已赋值
                     * 
                     */
                    bool OriginTopicHasBeenSet() const;

                private:

                    /**
                     * Message ID
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * Client Id of the message sender.
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Message service quality grade.
                     */
                    std::string m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * Message storage time on the server. millisecond-level timestamp.
                     */
                    int64_t m_storeTimestamp;
                    bool m_storeTimestampHasBeenSet;

                    /**
                     * Specifies the source topic.
                     */
                    std::string m_originTopic;
                    bool m_originTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTMESSAGE_H_
