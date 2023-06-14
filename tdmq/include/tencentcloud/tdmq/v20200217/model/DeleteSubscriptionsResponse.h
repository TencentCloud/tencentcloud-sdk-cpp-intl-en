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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETESUBSCRIPTIONSRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETESUBSCRIPTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/SubscriptionTopic.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DeleteSubscriptions response structure.
                */
                class DeleteSubscriptionsResponse : public AbstractModel
                {
                public:
                    DeleteSubscriptionsResponse();
                    ~DeleteSubscriptionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of successfully deleted subscriptions.
                     * @return SubscriptionTopicSets Array of successfully deleted subscriptions.
                     * 
                     */
                    std::vector<SubscriptionTopic> GetSubscriptionTopicSets() const;

                    /**
                     * 判断参数 SubscriptionTopicSets 是否已赋值
                     * @return SubscriptionTopicSets 是否已赋值
                     * 
                     */
                    bool SubscriptionTopicSetsHasBeenSet() const;

                private:

                    /**
                     * Array of successfully deleted subscriptions.
                     */
                    std::vector<SubscriptionTopic> m_subscriptionTopicSets;
                    bool m_subscriptionTopicSetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETESUBSCRIPTIONSRESPONSE_H_
