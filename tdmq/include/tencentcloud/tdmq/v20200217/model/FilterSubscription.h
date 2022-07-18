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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_FILTERSUBSCRIPTION_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_FILTERSUBSCRIPTION_H_

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
                * Filter subscriptions
                */
                class FilterSubscription : public AbstractModel
                {
                public:
                    FilterSubscription();
                    ~FilterSubscription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to only display subscriptions that include real consumers.
                     * @return ConsumerHasCount Whether to only display subscriptions that include real consumers.
                     */
                    bool GetConsumerHasCount() const;

                    /**
                     * 设置Whether to only display subscriptions that include real consumers.
                     * @param ConsumerHasCount Whether to only display subscriptions that include real consumers.
                     */
                    void SetConsumerHasCount(const bool& _consumerHasCount);

                    /**
                     * 判断参数 ConsumerHasCount 是否已赋值
                     * @return ConsumerHasCount 是否已赋值
                     */
                    bool ConsumerHasCountHasBeenSet() const;

                    /**
                     * 获取Whether to only display subscriptions with heaped messages.
                     * @return ConsumerHasBacklog Whether to only display subscriptions with heaped messages.
                     */
                    bool GetConsumerHasBacklog() const;

                    /**
                     * 设置Whether to only display subscriptions with heaped messages.
                     * @param ConsumerHasBacklog Whether to only display subscriptions with heaped messages.
                     */
                    void SetConsumerHasBacklog(const bool& _consumerHasBacklog);

                    /**
                     * 判断参数 ConsumerHasBacklog 是否已赋值
                     * @return ConsumerHasBacklog 是否已赋值
                     */
                    bool ConsumerHasBacklogHasBeenSet() const;

                    /**
                     * 获取Whether to only display subscriptions with messages discarded after expiration.
                     * @return ConsumerHasExpired Whether to only display subscriptions with messages discarded after expiration.
                     */
                    bool GetConsumerHasExpired() const;

                    /**
                     * 设置Whether to only display subscriptions with messages discarded after expiration.
                     * @param ConsumerHasExpired Whether to only display subscriptions with messages discarded after expiration.
                     */
                    void SetConsumerHasExpired(const bool& _consumerHasExpired);

                    /**
                     * 判断参数 ConsumerHasExpired 是否已赋值
                     * @return ConsumerHasExpired 是否已赋值
                     */
                    bool ConsumerHasExpiredHasBeenSet() const;

                    /**
                     * 获取Filter by subscription name for exact query.
                     * @return SubscriptionNames Filter by subscription name for exact query.
                     */
                    std::vector<std::string> GetSubscriptionNames() const;

                    /**
                     * 设置Filter by subscription name for exact query.
                     * @param SubscriptionNames Filter by subscription name for exact query.
                     */
                    void SetSubscriptionNames(const std::vector<std::string>& _subscriptionNames);

                    /**
                     * 判断参数 SubscriptionNames 是否已赋值
                     * @return SubscriptionNames 是否已赋值
                     */
                    bool SubscriptionNamesHasBeenSet() const;

                private:

                    /**
                     * Whether to only display subscriptions that include real consumers.
                     */
                    bool m_consumerHasCount;
                    bool m_consumerHasCountHasBeenSet;

                    /**
                     * Whether to only display subscriptions with heaped messages.
                     */
                    bool m_consumerHasBacklog;
                    bool m_consumerHasBacklogHasBeenSet;

                    /**
                     * Whether to only display subscriptions with messages discarded after expiration.
                     */
                    bool m_consumerHasExpired;
                    bool m_consumerHasExpiredHasBeenSet;

                    /**
                     * Filter by subscription name for exact query.
                     */
                    std::vector<std::string> m_subscriptionNames;
                    bool m_subscriptionNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_FILTERSUBSCRIPTION_H_
