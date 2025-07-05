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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_CREATESUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_CREATESUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * CreateSubscribe request structure.
                */
                class CreateSubscribeRequest : public AbstractModel
                {
                public:
                    CreateSubscribeRequest();
                    ~CreateSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Topic name, which is unique under the same account in an individual region. It is a string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     * @return TopicName Topic name, which is unique under the same account in an individual region. It is a string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name, which is unique under the same account in an individual region. It is a string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     * @param _topicName Topic name, which is unique under the same account in an individual region. It is a string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
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
                     * 获取Subscription name, which is unique in the same topic under the same account in an individual region. It is a string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     * @return SubscriptionName Subscription name, which is unique in the same topic under the same account in an individual region. It is a string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     * 
                     */
                    std::string GetSubscriptionName() const;

                    /**
                     * 设置Subscription name, which is unique in the same topic under the same account in an individual region. It is a string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     * @param _subscriptionName Subscription name, which is unique in the same topic under the same account in an individual region. It is a string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     * 
                     */
                    void SetSubscriptionName(const std::string& _subscriptionName);

                    /**
                     * 判断参数 SubscriptionName 是否已赋值
                     * @return SubscriptionName 是否已赋值
                     * 
                     */
                    bool SubscriptionNameHasBeenSet() const;

                    /**
                     * 获取Subscription protocol. Currently, two protocols are supported: http and queue. To use the `http` protocol, you need to build your own web server to receive messages. With the `queue` protocol, messages are automatically pushed to a CMQ queue and you can pull them concurrently.
                     * @return Protocol Subscription protocol. Currently, two protocols are supported: http and queue. To use the `http` protocol, you need to build your own web server to receive messages. With the `queue` protocol, messages are automatically pushed to a CMQ queue and you can pull them concurrently.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Subscription protocol. Currently, two protocols are supported: http and queue. To use the `http` protocol, you need to build your own web server to receive messages. With the `queue` protocol, messages are automatically pushed to a CMQ queue and you can pull them concurrently.
                     * @param _protocol Subscription protocol. Currently, two protocols are supported: http and queue. To use the `http` protocol, you need to build your own web server to receive messages. With the `queue` protocol, messages are automatically pushed to a CMQ queue and you can pull them concurrently.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取`Endpoint` for notification receipt, which is distinguished by `Protocol`. For `http`, `Endpoint` must begin with `http://` and `host` can be a domain name or IP. For `Queue`, enter `QueueName`. Please note that currently the push service cannot push messages to a VPC; therefore, if a VPC domain name or address is entered for `Endpoint`, pushed messages will not be received. Currently, messages can be pushed only to the public network and basic network.
                     * @return Endpoint `Endpoint` for notification receipt, which is distinguished by `Protocol`. For `http`, `Endpoint` must begin with `http://` and `host` can be a domain name or IP. For `Queue`, enter `QueueName`. Please note that currently the push service cannot push messages to a VPC; therefore, if a VPC domain name or address is entered for `Endpoint`, pushed messages will not be received. Currently, messages can be pushed only to the public network and basic network.
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置`Endpoint` for notification receipt, which is distinguished by `Protocol`. For `http`, `Endpoint` must begin with `http://` and `host` can be a domain name or IP. For `Queue`, enter `QueueName`. Please note that currently the push service cannot push messages to a VPC; therefore, if a VPC domain name or address is entered for `Endpoint`, pushed messages will not be received. Currently, messages can be pushed only to the public network and basic network.
                     * @param _endpoint `Endpoint` for notification receipt, which is distinguished by `Protocol`. For `http`, `Endpoint` must begin with `http://` and `host` can be a domain name or IP. For `Queue`, enter `QueueName`. Please note that currently the push service cannot push messages to a VPC; therefore, if a VPC domain name or address is entered for `Endpoint`, pushed messages will not be received. Currently, messages can be pushed only to the public network and basic network.
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取CMQ push server retry policy in case an error occurs while pushing a message to `Endpoint`. Valid values: 1. BACKOFF_RETRY: backoff retry, which is to retry at a fixed interval, discard the message after a certain number of retries, and continue to push the next message; 2. EXPONENTIAL_DECAY_RETRY: exponential decay retry, which is to retry at an exponentially increasing interval, such as 1s, 2s, 4s, 8s, and so on. As a message can be retained in a topic for one day, failed messages will be discarded at most after one day of retry. Default value: EXPONENTIAL_DECAY_RETRY.
                     * @return NotifyStrategy CMQ push server retry policy in case an error occurs while pushing a message to `Endpoint`. Valid values: 1. BACKOFF_RETRY: backoff retry, which is to retry at a fixed interval, discard the message after a certain number of retries, and continue to push the next message; 2. EXPONENTIAL_DECAY_RETRY: exponential decay retry, which is to retry at an exponentially increasing interval, such as 1s, 2s, 4s, 8s, and so on. As a message can be retained in a topic for one day, failed messages will be discarded at most after one day of retry. Default value: EXPONENTIAL_DECAY_RETRY.
                     * 
                     */
                    std::string GetNotifyStrategy() const;

                    /**
                     * 设置CMQ push server retry policy in case an error occurs while pushing a message to `Endpoint`. Valid values: 1. BACKOFF_RETRY: backoff retry, which is to retry at a fixed interval, discard the message after a certain number of retries, and continue to push the next message; 2. EXPONENTIAL_DECAY_RETRY: exponential decay retry, which is to retry at an exponentially increasing interval, such as 1s, 2s, 4s, 8s, and so on. As a message can be retained in a topic for one day, failed messages will be discarded at most after one day of retry. Default value: EXPONENTIAL_DECAY_RETRY.
                     * @param _notifyStrategy CMQ push server retry policy in case an error occurs while pushing a message to `Endpoint`. Valid values: 1. BACKOFF_RETRY: backoff retry, which is to retry at a fixed interval, discard the message after a certain number of retries, and continue to push the next message; 2. EXPONENTIAL_DECAY_RETRY: exponential decay retry, which is to retry at an exponentially increasing interval, such as 1s, 2s, 4s, 8s, and so on. As a message can be retained in a topic for one day, failed messages will be discarded at most after one day of retry. Default value: EXPONENTIAL_DECAY_RETRY.
                     * 
                     */
                    void SetNotifyStrategy(const std::string& _notifyStrategy);

                    /**
                     * 判断参数 NotifyStrategy 是否已赋值
                     * @return NotifyStrategy 是否已赋值
                     * 
                     */
                    bool NotifyStrategyHasBeenSet() const;

                    /**
                     * 获取Message body tag (used for message filtering). The number of tags cannot exceed 5, and each tag can contain up to 16 characters. It is used in conjunction with the `MsgTag` parameter of `(Batch)PublishMessage`. Rules: 1. If `FilterTag` is not set, no matter whether `MsgTag` is set, the subscription will receive all messages published to the topic; 2. If the `FilterTag` array has a value, only when at least one of the values in the array also exists in the `MsgTag` array (i.e., `FilterTag` and `MsgTag` have an intersection) can the subscription receive messages published to the topic; 3. If the `FilterTag` array has a value, but `MsgTag` is not set, then no message published to the topic will be received, which can be considered as a special case of rule 2 as `FilterTag` and `MsgTag` do not intersect in this case. The overall design idea of rules is based on the intention of the subscriber.
                     * @return FilterTag Message body tag (used for message filtering). The number of tags cannot exceed 5, and each tag can contain up to 16 characters. It is used in conjunction with the `MsgTag` parameter of `(Batch)PublishMessage`. Rules: 1. If `FilterTag` is not set, no matter whether `MsgTag` is set, the subscription will receive all messages published to the topic; 2. If the `FilterTag` array has a value, only when at least one of the values in the array also exists in the `MsgTag` array (i.e., `FilterTag` and `MsgTag` have an intersection) can the subscription receive messages published to the topic; 3. If the `FilterTag` array has a value, but `MsgTag` is not set, then no message published to the topic will be received, which can be considered as a special case of rule 2 as `FilterTag` and `MsgTag` do not intersect in this case. The overall design idea of rules is based on the intention of the subscriber.
                     * 
                     */
                    std::vector<std::string> GetFilterTag() const;

                    /**
                     * 设置Message body tag (used for message filtering). The number of tags cannot exceed 5, and each tag can contain up to 16 characters. It is used in conjunction with the `MsgTag` parameter of `(Batch)PublishMessage`. Rules: 1. If `FilterTag` is not set, no matter whether `MsgTag` is set, the subscription will receive all messages published to the topic; 2. If the `FilterTag` array has a value, only when at least one of the values in the array also exists in the `MsgTag` array (i.e., `FilterTag` and `MsgTag` have an intersection) can the subscription receive messages published to the topic; 3. If the `FilterTag` array has a value, but `MsgTag` is not set, then no message published to the topic will be received, which can be considered as a special case of rule 2 as `FilterTag` and `MsgTag` do not intersect in this case. The overall design idea of rules is based on the intention of the subscriber.
                     * @param _filterTag Message body tag (used for message filtering). The number of tags cannot exceed 5, and each tag can contain up to 16 characters. It is used in conjunction with the `MsgTag` parameter of `(Batch)PublishMessage`. Rules: 1. If `FilterTag` is not set, no matter whether `MsgTag` is set, the subscription will receive all messages published to the topic; 2. If the `FilterTag` array has a value, only when at least one of the values in the array also exists in the `MsgTag` array (i.e., `FilterTag` and `MsgTag` have an intersection) can the subscription receive messages published to the topic; 3. If the `FilterTag` array has a value, but `MsgTag` is not set, then no message published to the topic will be received, which can be considered as a special case of rule 2 as `FilterTag` and `MsgTag` do not intersect in this case. The overall design idea of rules is based on the intention of the subscriber.
                     * 
                     */
                    void SetFilterTag(const std::vector<std::string>& _filterTag);

                    /**
                     * 判断参数 FilterTag 是否已赋值
                     * @return FilterTag 是否已赋值
                     * 
                     */
                    bool FilterTagHasBeenSet() const;

                    /**
                     * 获取The number of `BindingKey` cannot exceed 5, and the length of each `BindingKey` cannot exceed 64 bytes. This field indicates the filtering policy for subscribing to and receiving messages. Each `BindingKey` can contain up to 15 `.`, i.e., up to 16 phrases.
                     * @return BindingKey The number of `BindingKey` cannot exceed 5, and the length of each `BindingKey` cannot exceed 64 bytes. This field indicates the filtering policy for subscribing to and receiving messages. Each `BindingKey` can contain up to 15 `.`, i.e., up to 16 phrases.
                     * 
                     */
                    std::vector<std::string> GetBindingKey() const;

                    /**
                     * 设置The number of `BindingKey` cannot exceed 5, and the length of each `BindingKey` cannot exceed 64 bytes. This field indicates the filtering policy for subscribing to and receiving messages. Each `BindingKey` can contain up to 15 `.`, i.e., up to 16 phrases.
                     * @param _bindingKey The number of `BindingKey` cannot exceed 5, and the length of each `BindingKey` cannot exceed 64 bytes. This field indicates the filtering policy for subscribing to and receiving messages. Each `BindingKey` can contain up to 15 `.`, i.e., up to 16 phrases.
                     * 
                     */
                    void SetBindingKey(const std::vector<std::string>& _bindingKey);

                    /**
                     * 判断参数 BindingKey 是否已赋值
                     * @return BindingKey 是否已赋值
                     * 
                     */
                    bool BindingKeyHasBeenSet() const;

                    /**
                     * 获取Push content format. Valid values: 1. JSON, 2. SIMPLIFIED, i.e., the raw format. If `Protocol` is `queue`, this value must be `SIMPLIFIED`. If `Protocol` is `http`, both options are acceptable, and the default value is `JSON`.
                     * @return NotifyContentFormat Push content format. Valid values: 1. JSON, 2. SIMPLIFIED, i.e., the raw format. If `Protocol` is `queue`, this value must be `SIMPLIFIED`. If `Protocol` is `http`, both options are acceptable, and the default value is `JSON`.
                     * 
                     */
                    std::string GetNotifyContentFormat() const;

                    /**
                     * 设置Push content format. Valid values: 1. JSON, 2. SIMPLIFIED, i.e., the raw format. If `Protocol` is `queue`, this value must be `SIMPLIFIED`. If `Protocol` is `http`, both options are acceptable, and the default value is `JSON`.
                     * @param _notifyContentFormat Push content format. Valid values: 1. JSON, 2. SIMPLIFIED, i.e., the raw format. If `Protocol` is `queue`, this value must be `SIMPLIFIED`. If `Protocol` is `http`, both options are acceptable, and the default value is `JSON`.
                     * 
                     */
                    void SetNotifyContentFormat(const std::string& _notifyContentFormat);

                    /**
                     * 判断参数 NotifyContentFormat 是否已赋值
                     * @return NotifyContentFormat 是否已赋值
                     * 
                     */
                    bool NotifyContentFormatHasBeenSet() const;

                private:

                    /**
                     * Topic name, which is unique under the same account in an individual region. It is a string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Subscription name, which is unique in the same topic under the same account in an individual region. It is a string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     */
                    std::string m_subscriptionName;
                    bool m_subscriptionNameHasBeenSet;

                    /**
                     * Subscription protocol. Currently, two protocols are supported: http and queue. To use the `http` protocol, you need to build your own web server to receive messages. With the `queue` protocol, messages are automatically pushed to a CMQ queue and you can pull them concurrently.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * `Endpoint` for notification receipt, which is distinguished by `Protocol`. For `http`, `Endpoint` must begin with `http://` and `host` can be a domain name or IP. For `Queue`, enter `QueueName`. Please note that currently the push service cannot push messages to a VPC; therefore, if a VPC domain name or address is entered for `Endpoint`, pushed messages will not be received. Currently, messages can be pushed only to the public network and basic network.
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * CMQ push server retry policy in case an error occurs while pushing a message to `Endpoint`. Valid values: 1. BACKOFF_RETRY: backoff retry, which is to retry at a fixed interval, discard the message after a certain number of retries, and continue to push the next message; 2. EXPONENTIAL_DECAY_RETRY: exponential decay retry, which is to retry at an exponentially increasing interval, such as 1s, 2s, 4s, 8s, and so on. As a message can be retained in a topic for one day, failed messages will be discarded at most after one day of retry. Default value: EXPONENTIAL_DECAY_RETRY.
                     */
                    std::string m_notifyStrategy;
                    bool m_notifyStrategyHasBeenSet;

                    /**
                     * Message body tag (used for message filtering). The number of tags cannot exceed 5, and each tag can contain up to 16 characters. It is used in conjunction with the `MsgTag` parameter of `(Batch)PublishMessage`. Rules: 1. If `FilterTag` is not set, no matter whether `MsgTag` is set, the subscription will receive all messages published to the topic; 2. If the `FilterTag` array has a value, only when at least one of the values in the array also exists in the `MsgTag` array (i.e., `FilterTag` and `MsgTag` have an intersection) can the subscription receive messages published to the topic; 3. If the `FilterTag` array has a value, but `MsgTag` is not set, then no message published to the topic will be received, which can be considered as a special case of rule 2 as `FilterTag` and `MsgTag` do not intersect in this case. The overall design idea of rules is based on the intention of the subscriber.
                     */
                    std::vector<std::string> m_filterTag;
                    bool m_filterTagHasBeenSet;

                    /**
                     * The number of `BindingKey` cannot exceed 5, and the length of each `BindingKey` cannot exceed 64 bytes. This field indicates the filtering policy for subscribing to and receiving messages. Each `BindingKey` can contain up to 15 `.`, i.e., up to 16 phrases.
                     */
                    std::vector<std::string> m_bindingKey;
                    bool m_bindingKeyHasBeenSet;

                    /**
                     * Push content format. Valid values: 1. JSON, 2. SIMPLIFIED, i.e., the raw format. If `Protocol` is `queue`, this value must be `SIMPLIFIED`. If `Protocol` is `http`, both options are acceptable, and the default value is `JSON`.
                     */
                    std::string m_notifyContentFormat;
                    bool m_notifyContentFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_CREATESUBSCRIBEREQUEST_H_
