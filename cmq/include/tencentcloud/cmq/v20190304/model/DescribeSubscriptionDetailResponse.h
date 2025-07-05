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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_DESCRIBESUBSCRIPTIONDETAILRESPONSE_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_DESCRIBESUBSCRIPTIONDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cmq/v20190304/model/Subscription.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * DescribeSubscriptionDetail response structure.
                */
                class DescribeSubscriptionDetailResponse : public AbstractModel
                {
                public:
                    DescribeSubscriptionDetailResponse();
                    ~DescribeSubscriptionDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number
                     * @return TotalCount Total number
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Subscription attribute set
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubscriptionSet Subscription attribute set
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Subscription> GetSubscriptionSet() const;

                    /**
                     * 判断参数 SubscriptionSet 是否已赋值
                     * @return SubscriptionSet 是否已赋值
                     * 
                     */
                    bool SubscriptionSetHasBeenSet() const;

                private:

                    /**
                     * Total number
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Subscription attribute set
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Subscription> m_subscriptionSet;
                    bool m_subscriptionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_DESCRIBESUBSCRIPTIONDETAILRESPONSE_H_
