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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQSUBSCRIPTION_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQSUBSCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Subscription response parameter in CMQ
                */
                class CmqSubscription : public AbstractModel
                {
                public:
                    CmqSubscription();
                    ~CmqSubscription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subscription name, which must be unique in the same topic under the same account in the same region. It can contain up to 64 letters, digits, and hyphens and must begin with a letter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubscriptionName Subscription name, which must be unique in the same topic under the same account in the same region. It can contain up to 64 letters, digits, and hyphens and must begin with a letter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubscriptionName() const;

                    /**
                     * 设置Subscription name, which must be unique in the same topic under the same account in the same region. It can contain up to 64 letters, digits, and hyphens and must begin with a letter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _subscriptionName Subscription name, which must be unique in the same topic under the same account in the same region. It can contain up to 64 letters, digits, and hyphens and must begin with a letter.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Subscription ID, which will be used during monitoring data pull.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubscriptionId Subscription ID, which will be used during monitoring data pull.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubscriptionId() const;

                    /**
                     * 设置Subscription ID, which will be used during monitoring data pull.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _subscriptionId Subscription ID, which will be used during monitoring data pull.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubscriptionId(const std::string& _subscriptionId);

                    /**
                     * 判断参数 SubscriptionId 是否已赋值
                     * @return SubscriptionId 是否已赋值
                     * 
                     */
                    bool SubscriptionIdHasBeenSet() const;

                    /**
                     * 获取Subscription owner `APPID`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TopicOwner Subscription owner `APPID`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTopicOwner() const;

                    /**
                     * 设置Subscription owner `APPID`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _topicOwner Subscription owner `APPID`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicOwner(const uint64_t& _topicOwner);

                    /**
                     * 判断参数 TopicOwner 是否已赋值
                     * @return TopicOwner 是否已赋值
                     * 
                     */
                    bool TopicOwnerHasBeenSet() const;

                    /**
                     * 获取Number of messages to be delivered in the subscription.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MsgCount Number of messages to be delivered in the subscription.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMsgCount() const;

                    /**
                     * 设置Number of messages to be delivered in the subscription.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _msgCount Number of messages to be delivered in the subscription.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMsgCount(const uint64_t& _msgCount);

                    /**
                     * 判断参数 MsgCount 是否已赋值
                     * @return MsgCount 是否已赋值
                     * 
                     */
                    bool MsgCountHasBeenSet() const;

                    /**
                     * 获取Time when the subscription attribute is last modified. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastModifyTime Time when the subscription attribute is last modified. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLastModifyTime() const;

                    /**
                     * 设置Time when the subscription attribute is last modified. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _lastModifyTime Time when the subscription attribute is last modified. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastModifyTime(const uint64_t& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     * 
                     */
                    bool LastModifyTimeHasBeenSet() const;

                    /**
                     * 获取Subscription creation time. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Subscription creation time. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Subscription creation time. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Subscription creation time. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Filtering policy for subscribing to and receiving messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BindingKey Filtering policy for subscribing to and receiving messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBindingKey() const;

                    /**
                     * 设置Filtering policy for subscribing to and receiving messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _bindingKey Filtering policy for subscribing to and receiving messages.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Endpoint that receives notifications, which varies by `protocol`: for HTTP, the endpoint must start with `http://`, and the `host` can be a domain or IP; for `queue`, `queueName` should be entered.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Endpoint Endpoint that receives notifications, which varies by `protocol`: for HTTP, the endpoint must start with `http://`, and the `host` can be a domain or IP; for `queue`, `queueName` should be entered.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置Endpoint that receives notifications, which varies by `protocol`: for HTTP, the endpoint must start with `http://`, and the `host` can be a domain or IP; for `queue`, `queueName` should be entered.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _endpoint Endpoint that receives notifications, which varies by `protocol`: for HTTP, the endpoint must start with `http://`, and the `host` can be a domain or IP; for `queue`, `queueName` should be entered.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Filtering policy selected when a subscription is created:
If `filterType` is 1, `filterTag` will be used for filtering.
If `filterType` is 2, `bindingKey` will be used for filtering.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FilterTags Filtering policy selected when a subscription is created:
If `filterType` is 1, `filterTag` will be used for filtering.
If `filterType` is 2, `bindingKey` will be used for filtering.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFilterTags() const;

                    /**
                     * 设置Filtering policy selected when a subscription is created:
If `filterType` is 1, `filterTag` will be used for filtering.
If `filterType` is 2, `bindingKey` will be used for filtering.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _filterTags Filtering policy selected when a subscription is created:
If `filterType` is 1, `filterTag` will be used for filtering.
If `filterType` is 2, `bindingKey` will be used for filtering.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFilterTags(const std::vector<std::string>& _filterTags);

                    /**
                     * 判断参数 FilterTags 是否已赋值
                     * @return FilterTags 是否已赋值
                     * 
                     */
                    bool FilterTagsHasBeenSet() const;

                    /**
                     * 获取Subscription protocol. Currently, two protocols are supported: HTTP and queue. To use the HTTP protocol, you need to build your own web server to receive messages. With the queue protocol, messages are automatically pushed to a CMQ queue and you can pull them concurrently.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Subscription protocol. Currently, two protocols are supported: HTTP and queue. To use the HTTP protocol, you need to build your own web server to receive messages. With the queue protocol, messages are automatically pushed to a CMQ queue and you can pull them concurrently.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Subscription protocol. Currently, two protocols are supported: HTTP and queue. To use the HTTP protocol, you need to build your own web server to receive messages. With the queue protocol, messages are automatically pushed to a CMQ queue and you can pull them concurrently.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _protocol Subscription protocol. Currently, two protocols are supported: HTTP and queue. To use the HTTP protocol, you need to build your own web server to receive messages. With the queue protocol, messages are automatically pushed to a CMQ queue and you can pull them concurrently.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取CMQ push server retry policy in case an error occurs while pushing a message to the endpoint. Valid values:
(1) BACKOFF_RETRY: backoff retry, which is to retry at a fixed interval, discard the message after a certain number of retries, and continue to push the next message.
(2) EXPONENTIAL_DECAY_RETRY: exponential decay retry, which is to retry at an exponentially increasing interval, such as 1s, 2s, 4s, 8s, and so on. As a message can be retained in a topic for one day, failed messages will be discarded at most after one day of retry. Default value: EXPONENTIAL_DECAY_RETRY.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NotifyStrategy CMQ push server retry policy in case an error occurs while pushing a message to the endpoint. Valid values:
(1) BACKOFF_RETRY: backoff retry, which is to retry at a fixed interval, discard the message after a certain number of retries, and continue to push the next message.
(2) EXPONENTIAL_DECAY_RETRY: exponential decay retry, which is to retry at an exponentially increasing interval, such as 1s, 2s, 4s, 8s, and so on. As a message can be retained in a topic for one day, failed messages will be discarded at most after one day of retry. Default value: EXPONENTIAL_DECAY_RETRY.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNotifyStrategy() const;

                    /**
                     * 设置CMQ push server retry policy in case an error occurs while pushing a message to the endpoint. Valid values:
(1) BACKOFF_RETRY: backoff retry, which is to retry at a fixed interval, discard the message after a certain number of retries, and continue to push the next message.
(2) EXPONENTIAL_DECAY_RETRY: exponential decay retry, which is to retry at an exponentially increasing interval, such as 1s, 2s, 4s, 8s, and so on. As a message can be retained in a topic for one day, failed messages will be discarded at most after one day of retry. Default value: EXPONENTIAL_DECAY_RETRY.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _notifyStrategy CMQ push server retry policy in case an error occurs while pushing a message to the endpoint. Valid values:
(1) BACKOFF_RETRY: backoff retry, which is to retry at a fixed interval, discard the message after a certain number of retries, and continue to push the next message.
(2) EXPONENTIAL_DECAY_RETRY: exponential decay retry, which is to retry at an exponentially increasing interval, such as 1s, 2s, 4s, 8s, and so on. As a message can be retained in a topic for one day, failed messages will be discarded at most after one day of retry. Default value: EXPONENTIAL_DECAY_RETRY.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Push content format. Valid values: 1. JSON; 2. SIMPLIFIED, i.e., the raw format. If `protocol` is `queue`, this value must be `SIMPLIFIED`. If `protocol` is `HTTP`, both values are acceptable, and the default value is `JSON`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NotifyContentFormat Push content format. Valid values: 1. JSON; 2. SIMPLIFIED, i.e., the raw format. If `protocol` is `queue`, this value must be `SIMPLIFIED`. If `protocol` is `HTTP`, both values are acceptable, and the default value is `JSON`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNotifyContentFormat() const;

                    /**
                     * 设置Push content format. Valid values: 1. JSON; 2. SIMPLIFIED, i.e., the raw format. If `protocol` is `queue`, this value must be `SIMPLIFIED`. If `protocol` is `HTTP`, both values are acceptable, and the default value is `JSON`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _notifyContentFormat Push content format. Valid values: 1. JSON; 2. SIMPLIFIED, i.e., the raw format. If `protocol` is `queue`, this value must be `SIMPLIFIED`. If `protocol` is `HTTP`, both values are acceptable, and the default value is `JSON`.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Subscription name, which must be unique in the same topic under the same account in the same region. It can contain up to 64 letters, digits, and hyphens and must begin with a letter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subscriptionName;
                    bool m_subscriptionNameHasBeenSet;

                    /**
                     * Subscription ID, which will be used during monitoring data pull.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subscriptionId;
                    bool m_subscriptionIdHasBeenSet;

                    /**
                     * Subscription owner `APPID`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_topicOwner;
                    bool m_topicOwnerHasBeenSet;

                    /**
                     * Number of messages to be delivered in the subscription.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_msgCount;
                    bool m_msgCountHasBeenSet;

                    /**
                     * Time when the subscription attribute is last modified. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * Subscription creation time. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Filtering policy for subscribing to and receiving messages.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_bindingKey;
                    bool m_bindingKeyHasBeenSet;

                    /**
                     * Endpoint that receives notifications, which varies by `protocol`: for HTTP, the endpoint must start with `http://`, and the `host` can be a domain or IP; for `queue`, `queueName` should be entered.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * Filtering policy selected when a subscription is created:
If `filterType` is 1, `filterTag` will be used for filtering.
If `filterType` is 2, `bindingKey` will be used for filtering.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_filterTags;
                    bool m_filterTagsHasBeenSet;

                    /**
                     * Subscription protocol. Currently, two protocols are supported: HTTP and queue. To use the HTTP protocol, you need to build your own web server to receive messages. With the queue protocol, messages are automatically pushed to a CMQ queue and you can pull them concurrently.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * CMQ push server retry policy in case an error occurs while pushing a message to the endpoint. Valid values:
(1) BACKOFF_RETRY: backoff retry, which is to retry at a fixed interval, discard the message after a certain number of retries, and continue to push the next message.
(2) EXPONENTIAL_DECAY_RETRY: exponential decay retry, which is to retry at an exponentially increasing interval, such as 1s, 2s, 4s, 8s, and so on. As a message can be retained in a topic for one day, failed messages will be discarded at most after one day of retry. Default value: EXPONENTIAL_DECAY_RETRY.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_notifyStrategy;
                    bool m_notifyStrategyHasBeenSet;

                    /**
                     * Push content format. Valid values: 1. JSON; 2. SIMPLIFIED, i.e., the raw format. If `protocol` is `queue`, this value must be `SIMPLIFIED`. If `protocol` is `HTTP`, both values are acceptable, and the default value is `JSON`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_notifyContentFormat;
                    bool m_notifyContentFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQSUBSCRIPTION_H_
