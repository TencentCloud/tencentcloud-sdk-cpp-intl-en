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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQSUBSCRIPTIONDETAILREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQSUBSCRIPTIONDETAILREQUEST_H_

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
                * DescribeCmqSubscriptionDetail request structure.
                */
                class DescribeCmqSubscriptionDetailRequest : public AbstractModel
                {
                public:
                    DescribeCmqSubscriptionDetailRequest();
                    ~DescribeCmqSubscriptionDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Topic name, which must be unique under the same account in a single region. The name is a string of no more than 64 characters, starting with a letter, and the remaining part may include letters, numbers, and hyphens (-).
                     * @return TopicName Topic name, which must be unique under the same account in a single region. The name is a string of no more than 64 characters, starting with a letter, and the remaining part may include letters, numbers, and hyphens (-).
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name, which must be unique under the same account in a single region. The name is a string of no more than 64 characters, starting with a letter, and the remaining part may include letters, numbers, and hyphens (-).
                     * @param _topicName Topic name, which must be unique under the same account in a single region. The name is a string of no more than 64 characters, starting with a letter, and the remaining part may include letters, numbers, and hyphens (-).
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
                     * 获取Starting position of the list of topics to be returned on the current page in case of paginated return. If a value is entered, `limit` is required. If this parameter is left empty, 0 will be used by default
                     * @return Offset Starting position of the list of topics to be returned on the current page in case of paginated return. If a value is entered, `limit` is required. If this parameter is left empty, 0 will be used by default
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting position of the list of topics to be returned on the current page in case of paginated return. If a value is entered, `limit` is required. If this parameter is left empty, 0 will be used by default
                     * @param _offset Starting position of the list of topics to be returned on the current page in case of paginated return. If a value is entered, `limit` is required. If this parameter is left empty, 0 will be used by default
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of topics to be returned per page in case of paginated return. If this parameter is not passed in, 20 will be used by default. Maximum value: 50.
                     * @return Limit Number of topics to be returned per page in case of paginated return. If this parameter is not passed in, 20 will be used by default. Maximum value: 50.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of topics to be returned per page in case of paginated return. If this parameter is not passed in, 20 will be used by default. Maximum value: 50.
                     * @param _limit Number of topics to be returned per page in case of paginated return. If this parameter is not passed in, 20 will be used by default. Maximum value: 50.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Fuzzy search by `SubscriptionName`
                     * @return SubscriptionName Fuzzy search by `SubscriptionName`
                     * 
                     */
                    std::string GetSubscriptionName() const;

                    /**
                     * 设置Fuzzy search by `SubscriptionName`
                     * @param _subscriptionName Fuzzy search by `SubscriptionName`
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
                     * 获取Queue name. Endpoint of bound subscription
                     * @return QueueName Queue name. Endpoint of bound subscription
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置Queue name. Endpoint of bound subscription
                     * @param _queueName Queue name. Endpoint of bound subscription
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取Query type. valid values: (1) topic; (2) queue.
Default value is topic. if queryType is topic, query subscriptions under the topic. if queryType is queue, query subscriptions bound to the queue.
                     * @return QueryType Query type. valid values: (1) topic; (2) queue.
Default value is topic. if queryType is topic, query subscriptions under the topic. if queryType is queue, query subscriptions bound to the queue.
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置Query type. valid values: (1) topic; (2) queue.
Default value is topic. if queryType is topic, query subscriptions under the topic. if queryType is queue, query subscriptions bound to the queue.
                     * @param _queryType Query type. valid values: (1) topic; (2) queue.
Default value is topic. if queryType is topic, query subscriptions under the topic. if queryType is queue, query subscriptions bound to the queue.
                     * 
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                private:

                    /**
                     * Topic name, which must be unique under the same account in a single region. The name is a string of no more than 64 characters, starting with a letter, and the remaining part may include letters, numbers, and hyphens (-).
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Starting position of the list of topics to be returned on the current page in case of paginated return. If a value is entered, `limit` is required. If this parameter is left empty, 0 will be used by default
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of topics to be returned per page in case of paginated return. If this parameter is not passed in, 20 will be used by default. Maximum value: 50.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Fuzzy search by `SubscriptionName`
                     */
                    std::string m_subscriptionName;
                    bool m_subscriptionNameHasBeenSet;

                    /**
                     * Queue name. Endpoint of bound subscription
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * Query type. valid values: (1) topic; (2) queue.
Default value is topic. if queryType is topic, query subscriptions under the topic. if queryType is queue, query subscriptions bound to the queue.
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQSUBSCRIPTIONDETAILREQUEST_H_
