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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CLEARCMQSUBSCRIPTIONFILTERTAGSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CLEARCMQSUBSCRIPTIONFILTERTAGSREQUEST_H_

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
                * ClearCmqSubscriptionFilterTags request structure.
                */
                class ClearCmqSubscriptionFilterTagsRequest : public AbstractModel
                {
                public:
                    ClearCmqSubscriptionFilterTagsRequest();
                    ~ClearCmqSubscriptionFilterTagsRequest() = default;
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

                private:

                    /**
                     * Topic name, which must be unique under the same account in a single region. The name is a string of no more than 64 characters, starting with a letter, and the remaining part may include letters, numbers, and hyphens (-).
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Subscription name, which must be unique under the same account and same topic in a single region. the name is a string of no more than 64 characters, beginning with a letter, and the remaining part may contain letters, numbers, and hyphens (-).
                     */
                    std::string m_subscriptionName;
                    bool m_subscriptionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CLEARCMQSUBSCRIPTIONFILTERTAGSREQUEST_H_
