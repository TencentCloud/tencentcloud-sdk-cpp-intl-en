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
                     * 获取Subscription name, which must be unique under the same account and same topic in a single region. the name is a string of no more than 64 characters, beginning with a letter, and the remaining part may contain letters, numbers, and hyphens (-).
                     * @return SubscriptionName Subscription name, which must be unique under the same account and same topic in a single region. the name is a string of no more than 64 characters, beginning with a letter, and the remaining part may contain letters, numbers, and hyphens (-).
                     * 
                     */
                    std::string GetSubscriptionName() const;

                    /**
                     * 设置Subscription name, which must be unique under the same account and same topic in a single region. the name is a string of no more than 64 characters, beginning with a letter, and the remaining part may contain letters, numbers, and hyphens (-).
                     * @param _subscriptionName Subscription name, which must be unique under the same account and same topic in a single region. the name is a string of no more than 64 characters, beginning with a letter, and the remaining part may contain letters, numbers, and hyphens (-).
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
                     * 获取Subscription ID. The subscription ID is used when monitoring data is pulled.
                     * @return SubscriptionId Subscription ID. The subscription ID is used when monitoring data is pulled.
                     * 
                     */
                    std::string GetSubscriptionId() const;

                    /**
                     * 设置Subscription ID. The subscription ID is used when monitoring data is pulled.
                     * @param _subscriptionId Subscription ID. The subscription ID is used when monitoring data is pulled.
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
                     * 获取The number of messages waiting for shipping for this subscription.
                     * @return MsgCount The number of messages waiting for shipping for this subscription.
                     * 
                     */
                    uint64_t GetMsgCount() const;

                    /**
                     * 设置The number of messages waiting for shipping for this subscription.
                     * @param _msgCount The number of messages waiting for shipping for this subscription.
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
                     * 获取The last time the subscription attribute was modified. Returns a Unix timestamp, accurate to milliseconds.
                     * @return LastModifyTime The last time the subscription attribute was modified. Returns a Unix timestamp, accurate to milliseconds.
                     * 
                     */
                    uint64_t GetLastModifyTime() const;

                    /**
                     * 设置The last time the subscription attribute was modified. Returns a Unix timestamp, accurate to milliseconds.
                     * @param _lastModifyTime The last time the subscription attribute was modified. Returns a Unix timestamp, accurate to milliseconds.
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
                     * 获取The time when the subscription was created. Returns a Unix timestamp, accurate to milliseconds.
                     * @return CreateTime The time when the subscription was created. Returns a Unix timestamp, accurate to milliseconds.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置The time when the subscription was created. Returns a Unix timestamp, accurate to milliseconds.
                     * @param _createTime The time when the subscription was created. Returns a Unix timestamp, accurate to milliseconds.
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
                     * 获取The endpoint that receives notifications is differentiated by protocol: For HTTP, the endpoint must start with http://, and the host can be a domain name or IP; for queue, fill in queueName.
                     * @return Endpoint The endpoint that receives notifications is differentiated by protocol: For HTTP, the endpoint must start with http://, and the host can be a domain name or IP; for queue, fill in queueName.
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置The endpoint that receives notifications is differentiated by protocol: For HTTP, the endpoint must start with http://, and the host can be a domain name or IP; for queue, fill in queueName.
                     * @param _endpoint The endpoint that receives notifications is differentiated by protocol: For HTTP, the endpoint must start with http://, and the host can be a domain name or IP; for queue, fill in queueName.
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
                     * 获取Describes the filtering policy selected by users when creating subscriptions.
filterType = 1 indicates Tag filtering when users use filterTag.
filterType = 2 indicates user use bindingKey for filtering.
                     * @return FilterTags Describes the filtering policy selected by users when creating subscriptions.
filterType = 1 indicates Tag filtering when users use filterTag.
filterType = 2 indicates user use bindingKey for filtering.
                     * 
                     */
                    std::vector<std::string> GetFilterTags() const;

                    /**
                     * 设置Describes the filtering policy selected by users when creating subscriptions.
filterType = 1 indicates Tag filtering when users use filterTag.
filterType = 2 indicates user use bindingKey for filtering.
                     * @param _filterTags Describes the filtering policy selected by users when creating subscriptions.
filterType = 1 indicates Tag filtering when users use filterTag.
filterType = 2 indicates user use bindingKey for filtering.
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
                     * 获取The subscription protocol, currently supports two protocols: HTTP and queue. When the HTTP protocol is used, users need to set up their own web server to accept messages. When the queue protocol is used, messages will automatically be pushed to CMQ queues, and users can pull messages concurrently.
                     * @return Protocol The subscription protocol, currently supports two protocols: HTTP and queue. When the HTTP protocol is used, users need to set up their own web server to accept messages. When the queue protocol is used, messages will automatically be pushed to CMQ queues, and users can pull messages concurrently.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The subscription protocol, currently supports two protocols: HTTP and queue. When the HTTP protocol is used, users need to set up their own web server to accept messages. When the queue protocol is used, messages will automatically be pushed to CMQ queues, and users can pull messages concurrently.
                     * @param _protocol The subscription protocol, currently supports two protocols: HTTP and queue. When the HTTP protocol is used, users need to set up their own web server to accept messages. When the queue protocol is used, messages will automatically be pushed to CMQ queues, and users can pull messages concurrently.
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
                     * 获取Specifies the CMQ push server retry policy when an error occurs while pushing messages to an endpoint. valid values:.
BACKOFF_RETRY, backoff retry. retry at regular intervals, discard the message after a certain number of retries, and continue to push the next message.
(2) EXPONENTIAL_DECAY_RETRY, EXPONENTIAL DECAY RETRY. the interval between retries increases exponentially, for example starting at 1s, followed by 2s, 4s, 8s... since the Topic message period is one day, RETRY for at most one day then discard the message. default value is EXPONENTIAL_DECAY_RETRY.
                     * @return NotifyStrategy Specifies the CMQ push server retry policy when an error occurs while pushing messages to an endpoint. valid values:.
BACKOFF_RETRY, backoff retry. retry at regular intervals, discard the message after a certain number of retries, and continue to push the next message.
(2) EXPONENTIAL_DECAY_RETRY, EXPONENTIAL DECAY RETRY. the interval between retries increases exponentially, for example starting at 1s, followed by 2s, 4s, 8s... since the Topic message period is one day, RETRY for at most one day then discard the message. default value is EXPONENTIAL_DECAY_RETRY.
                     * 
                     */
                    std::string GetNotifyStrategy() const;

                    /**
                     * 设置Specifies the CMQ push server retry policy when an error occurs while pushing messages to an endpoint. valid values:.
BACKOFF_RETRY, backoff retry. retry at regular intervals, discard the message after a certain number of retries, and continue to push the next message.
(2) EXPONENTIAL_DECAY_RETRY, EXPONENTIAL DECAY RETRY. the interval between retries increases exponentially, for example starting at 1s, followed by 2s, 4s, 8s... since the Topic message period is one day, RETRY for at most one day then discard the message. default value is EXPONENTIAL_DECAY_RETRY.
                     * @param _notifyStrategy Specifies the CMQ push server retry policy when an error occurs while pushing messages to an endpoint. valid values:.
BACKOFF_RETRY, backoff retry. retry at regular intervals, discard the message after a certain number of retries, and continue to push the next message.
(2) EXPONENTIAL_DECAY_RETRY, EXPONENTIAL DECAY RETRY. the interval between retries increases exponentially, for example starting at 1s, followed by 2s, 4s, 8s... since the Topic message period is one day, RETRY for at most one day then discard the message. default value is EXPONENTIAL_DECAY_RETRY.
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
                     * 获取The format of the push content. Values: (1) JSON; (2) SIMPLIFIED, i.e., raw format. If protocol is queue, the value must be SIMPLIFIED. If protocol is HTTP, both values are acceptable, with the default being JSON.
                     * @return NotifyContentFormat The format of the push content. Values: (1) JSON; (2) SIMPLIFIED, i.e., raw format. If protocol is queue, the value must be SIMPLIFIED. If protocol is HTTP, both values are acceptable, with the default being JSON.
                     * 
                     */
                    std::string GetNotifyContentFormat() const;

                    /**
                     * 设置The format of the push content. Values: (1) JSON; (2) SIMPLIFIED, i.e., raw format. If protocol is queue, the value must be SIMPLIFIED. If protocol is HTTP, both values are acceptable, with the default being JSON.
                     * @param _notifyContentFormat The format of the push content. Values: (1) JSON; (2) SIMPLIFIED, i.e., raw format. If protocol is queue, the value must be SIMPLIFIED. If protocol is HTTP, both values are acceptable, with the default being JSON.
                     * 
                     */
                    void SetNotifyContentFormat(const std::string& _notifyContentFormat);

                    /**
                     * 判断参数 NotifyContentFormat 是否已赋值
                     * @return NotifyContentFormat 是否已赋值
                     * 
                     */
                    bool NotifyContentFormatHasBeenSet() const;

                    /**
                     * 获取Topic Name of the Subscription
                     * @return TopicName Topic Name of the Subscription
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic Name of the Subscription
                     * @param _topicName Topic Name of the Subscription
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                private:

                    /**
                     * Subscription name, which must be unique under the same account and same topic in a single region. the name is a string of no more than 64 characters, beginning with a letter, and the remaining part may contain letters, numbers, and hyphens (-).
                     */
                    std::string m_subscriptionName;
                    bool m_subscriptionNameHasBeenSet;

                    /**
                     * Subscription ID. The subscription ID is used when monitoring data is pulled.
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
                     * The number of messages waiting for shipping for this subscription.
                     */
                    uint64_t m_msgCount;
                    bool m_msgCountHasBeenSet;

                    /**
                     * The last time the subscription attribute was modified. Returns a Unix timestamp, accurate to milliseconds.
                     */
                    uint64_t m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * The time when the subscription was created. Returns a Unix timestamp, accurate to milliseconds.
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
                     * The endpoint that receives notifications is differentiated by protocol: For HTTP, the endpoint must start with http://, and the host can be a domain name or IP; for queue, fill in queueName.
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * Describes the filtering policy selected by users when creating subscriptions.
filterType = 1 indicates Tag filtering when users use filterTag.
filterType = 2 indicates user use bindingKey for filtering.
                     */
                    std::vector<std::string> m_filterTags;
                    bool m_filterTagsHasBeenSet;

                    /**
                     * The subscription protocol, currently supports two protocols: HTTP and queue. When the HTTP protocol is used, users need to set up their own web server to accept messages. When the queue protocol is used, messages will automatically be pushed to CMQ queues, and users can pull messages concurrently.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Specifies the CMQ push server retry policy when an error occurs while pushing messages to an endpoint. valid values:.
BACKOFF_RETRY, backoff retry. retry at regular intervals, discard the message after a certain number of retries, and continue to push the next message.
(2) EXPONENTIAL_DECAY_RETRY, EXPONENTIAL DECAY RETRY. the interval between retries increases exponentially, for example starting at 1s, followed by 2s, 4s, 8s... since the Topic message period is one day, RETRY for at most one day then discard the message. default value is EXPONENTIAL_DECAY_RETRY.
                     */
                    std::string m_notifyStrategy;
                    bool m_notifyStrategyHasBeenSet;

                    /**
                     * The format of the push content. Values: (1) JSON; (2) SIMPLIFIED, i.e., raw format. If protocol is queue, the value must be SIMPLIFIED. If protocol is HTTP, both values are acceptable, with the default being JSON.
                     */
                    std::string m_notifyContentFormat;
                    bool m_notifyContentFormatHasBeenSet;

                    /**
                     * Topic Name of the Subscription
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQSUBSCRIPTION_H_
