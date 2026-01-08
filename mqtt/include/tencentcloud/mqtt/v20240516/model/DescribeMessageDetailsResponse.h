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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEDETAILSRESPONSE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/UserProperty.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * DescribeMessageDetails response structure.
                */
                class DescribeMessageDetailsResponse : public AbstractModel
                {
                public:
                    DescribeMessageDetailsResponse();
                    ~DescribeMessageDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Message body.
                     * @return Body Message body.
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取Describes the user-customized attribute.
                     * @return UserProperties Describes the user-customized attribute.
                     * 
                     */
                    std::vector<UserProperty> GetUserProperties() const;

                    /**
                     * 判断参数 UserProperties 是否已赋值
                     * @return UserProperties 是否已赋值
                     * 
                     */
                    bool UserPropertiesHasBeenSet() const;

                    /**
                     * 获取Specifies the message storage time. millisecond-level timestamp.
                     * @return StoreTimestamp Specifies the message storage time. millisecond-level timestamp.
                     * 
                     */
                    int64_t GetStoreTimestamp() const;

                    /**
                     * 判断参数 StoreTimestamp 是否已赋值
                     * @return StoreTimestamp 是否已赋值
                     * 
                     */
                    bool StoreTimestampHasBeenSet() const;

                    /**
                     * 获取Message ID.
                     * @return MessageId Message ID.
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取Producer address.
                     * @return ClientId Producer address.
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取Topic
                     * @return Qos Topic
                     * 
                     */
                    std::string GetQos() const;

                    /**
                     * 判断参数 Qos 是否已赋值
                     * @return Qos 是否已赋值
                     * 
                     */
                    bool QosHasBeenSet() const;

                    /**
                     * 获取Specifies the source topic.
                     * @return OriginTopic Specifies the source topic.
                     * 
                     */
                    std::string GetOriginTopic() const;

                    /**
                     * 判断参数 OriginTopic 是否已赋值
                     * @return OriginTopic 是否已赋值
                     * 
                     */
                    bool OriginTopicHasBeenSet() const;

                    /**
                     * 获取Content type (MQTT5).
Indicates the content type of the message payload using standard MIME type format. helps the receiver correctly parse and process the message content.
Specifies the example.
application/json: indicates the payload is data in json format.
Text/Plain: indicates the payload is plain text.
application/octet-stream: indicates the payload is binary data.
                     * @return ContentType Content type (MQTT5).
Indicates the content type of the message payload using standard MIME type format. helps the receiver correctly parse and process the message content.
Specifies the example.
application/json: indicates the payload is data in json format.
Text/Plain: indicates the payload is plain text.
application/octet-stream: indicates the payload is binary data.
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取Payload format indicator (MQTT5).
Indicates the payload format, which is a boolean value. 0 means an unspecified format (binary), and 1 means a UTF-8 encoded string.
Specifies the example.
Valid values: 0 indicates the payload is binary data, such as images or audio.
Valid value 1: when the payload is UTF-8 encoded text, such as JSON string or XML.
                     * @return PayloadFormatIndicator Payload format indicator (MQTT5).
Indicates the payload format, which is a boolean value. 0 means an unspecified format (binary), and 1 means a UTF-8 encoded string.
Specifies the example.
Valid values: 0 indicates the payload is binary data, such as images or audio.
Valid value 1: when the payload is UTF-8 encoded text, such as JSON string or XML.
                     * 
                     */
                    int64_t GetPayloadFormatIndicator() const;

                    /**
                     * 判断参数 PayloadFormatIndicator 是否已赋值
                     * @return PayloadFormatIndicator 是否已赋值
                     * 
                     */
                    bool PayloadFormatIndicatorHasBeenSet() const;

                    /**
                     * 获取Message expiration interval (MQTT5).
Specifies the validity time (in seconds) of the specified message before it is discarded. if the message fails to reach the MQTT server before expiration, it will be discarded.
Specifies the example.
The value 60 indicates that the message is valid within 60 seconds after release. unreached messages will be dropped after expiry.
A value of 0 indicates the message never expires and remains permanently valid until received or the session ends.
                     * @return MessageExpiryInterval Message expiration interval (MQTT5).
Specifies the validity time (in seconds) of the specified message before it is discarded. if the message fails to reach the MQTT server before expiration, it will be discarded.
Specifies the example.
The value 60 indicates that the message is valid within 60 seconds after release. unreached messages will be dropped after expiry.
A value of 0 indicates the message never expires and remains permanently valid until received or the session ends.
                     * 
                     */
                    int64_t GetMessageExpiryInterval() const;

                    /**
                     * 判断参数 MessageExpiryInterval 是否已赋值
                     * @return MessageExpiryInterval 是否已赋值
                     * 
                     */
                    bool MessageExpiryIntervalHasBeenSet() const;

                    /**
                     * 获取Response topic (MQTT5).
Specifies a topic for the response message in request-response mode. the sender can specify which topic the recipient should send the response to.
Specifies the example.
Sender publishes a request to the topic devices/device1/commands and sets ResponseTopic to devices/device1/responses.
Specifies the topic where the response is published after the recipient processes the request.
                     * @return ResponseTopic Response topic (MQTT5).
Specifies a topic for the response message in request-response mode. the sender can specify which topic the recipient should send the response to.
Specifies the example.
Sender publishes a request to the topic devices/device1/commands and sets ResponseTopic to devices/device1/responses.
Specifies the topic where the response is published after the recipient processes the request.
                     * 
                     */
                    std::string GetResponseTopic() const;

                    /**
                     * 判断参数 ResponseTopic 是否已赋值
                     * @return ResponseTopic 是否已赋值
                     * 
                     */
                    bool ResponseTopicHasBeenSet() const;

                    /**
                     * 获取Associated data (MQTT5).
Specifies the identifier used to associate a request and response, usually a byte array. in request-response mode, the sender sets this value, and the recipient includes the same value in the response so that the sender can identify the corresponding request.
Specifies the example.
The sender generates a unique ID (such as a byte[] of UUID) as CorrelationData and adds it to the request message.
The recipient includes the same CorrelationData in the response message. the sender compares this value to match the response and the request.
                     * @return CorrelationData Associated data (MQTT5).
Specifies the identifier used to associate a request and response, usually a byte array. in request-response mode, the sender sets this value, and the recipient includes the same value in the response so that the sender can identify the corresponding request.
Specifies the example.
The sender generates a unique ID (such as a byte[] of UUID) as CorrelationData and adds it to the request message.
The recipient includes the same CorrelationData in the response message. the sender compares this value to match the response and the request.
                     * 
                     */
                    std::string GetCorrelationData() const;

                    /**
                     * 判断参数 CorrelationData 是否已赋值
                     * @return CorrelationData 是否已赋值
                     * 
                     */
                    bool CorrelationDataHasBeenSet() const;

                    /**
                     * 获取Subscription identifier (MQTT5).
Specifies the unique identifier assigned to the subscription, used to identify a specific subscription of the client. when sending a message to the client, the server can include this identifier to help with client identification of the corresponding subscription.
Specifies the example.
The client subscribes to the topic devices/+/temperature and sets SubscriptionIdentifier to 123.
When the server sends a message of this topic to the client, the message will contain SubscriptionIdentifier: 123. the client can know which subscription the message is sent through based on this value.
                     * @return SubscriptionIdentifier Subscription identifier (MQTT5).
Specifies the unique identifier assigned to the subscription, used to identify a specific subscription of the client. when sending a message to the client, the server can include this identifier to help with client identification of the corresponding subscription.
Specifies the example.
The client subscribes to the topic devices/+/temperature and sets SubscriptionIdentifier to 123.
When the server sends a message of this topic to the client, the message will contain SubscriptionIdentifier: 123. the client can know which subscription the message is sent through based on this value.
                     * 
                     */
                    std::string GetSubscriptionIdentifier() const;

                    /**
                     * 判断参数 SubscriptionIdentifier 是否已赋值
                     * @return SubscriptionIdentifier 是否已赋值
                     * 
                     */
                    bool SubscriptionIdentifierHasBeenSet() const;

                private:

                    /**
                     * Message body.
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * Describes the user-customized attribute.
                     */
                    std::vector<UserProperty> m_userProperties;
                    bool m_userPropertiesHasBeenSet;

                    /**
                     * Specifies the message storage time. millisecond-level timestamp.
                     */
                    int64_t m_storeTimestamp;
                    bool m_storeTimestampHasBeenSet;

                    /**
                     * Message ID.
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * Producer address.
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Topic
                     */
                    std::string m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * Specifies the source topic.
                     */
                    std::string m_originTopic;
                    bool m_originTopicHasBeenSet;

                    /**
                     * Content type (MQTT5).
Indicates the content type of the message payload using standard MIME type format. helps the receiver correctly parse and process the message content.
Specifies the example.
application/json: indicates the payload is data in json format.
Text/Plain: indicates the payload is plain text.
application/octet-stream: indicates the payload is binary data.
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * Payload format indicator (MQTT5).
Indicates the payload format, which is a boolean value. 0 means an unspecified format (binary), and 1 means a UTF-8 encoded string.
Specifies the example.
Valid values: 0 indicates the payload is binary data, such as images or audio.
Valid value 1: when the payload is UTF-8 encoded text, such as JSON string or XML.
                     */
                    int64_t m_payloadFormatIndicator;
                    bool m_payloadFormatIndicatorHasBeenSet;

                    /**
                     * Message expiration interval (MQTT5).
Specifies the validity time (in seconds) of the specified message before it is discarded. if the message fails to reach the MQTT server before expiration, it will be discarded.
Specifies the example.
The value 60 indicates that the message is valid within 60 seconds after release. unreached messages will be dropped after expiry.
A value of 0 indicates the message never expires and remains permanently valid until received or the session ends.
                     */
                    int64_t m_messageExpiryInterval;
                    bool m_messageExpiryIntervalHasBeenSet;

                    /**
                     * Response topic (MQTT5).
Specifies a topic for the response message in request-response mode. the sender can specify which topic the recipient should send the response to.
Specifies the example.
Sender publishes a request to the topic devices/device1/commands and sets ResponseTopic to devices/device1/responses.
Specifies the topic where the response is published after the recipient processes the request.
                     */
                    std::string m_responseTopic;
                    bool m_responseTopicHasBeenSet;

                    /**
                     * Associated data (MQTT5).
Specifies the identifier used to associate a request and response, usually a byte array. in request-response mode, the sender sets this value, and the recipient includes the same value in the response so that the sender can identify the corresponding request.
Specifies the example.
The sender generates a unique ID (such as a byte[] of UUID) as CorrelationData and adds it to the request message.
The recipient includes the same CorrelationData in the response message. the sender compares this value to match the response and the request.
                     */
                    std::string m_correlationData;
                    bool m_correlationDataHasBeenSet;

                    /**
                     * Subscription identifier (MQTT5).
Specifies the unique identifier assigned to the subscription, used to identify a specific subscription of the client. when sending a message to the client, the server can include this identifier to help with client identification of the corresponding subscription.
Specifies the example.
The client subscribes to the topic devices/+/temperature and sets SubscriptionIdentifier to 123.
When the server sends a message of this topic to the client, the message will contain SubscriptionIdentifier: 123. the client can know which subscription the message is sent through based on this value.
                     */
                    std::string m_subscriptionIdentifier;
                    bool m_subscriptionIdentifierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEDETAILSRESPONSE_H_
