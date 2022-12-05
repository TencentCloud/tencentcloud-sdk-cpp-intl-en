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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEPENDINGRISKINFORESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEPENDINGRISKINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribePendingRiskInfo response structure.
                */
                class DescribePendingRiskInfoResponse : public AbstractModel
                {
                public:
                    DescribePendingRiskInfoResponse();
                    ~DescribePendingRiskInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the user is a paid user
                     * @return IsPaidUsr Whether the user is a paid user
                     */
                    bool GetIsPaidUsr() const;

                    /**
                     * 判断参数 IsPaidUsr 是否已赋值
                     * @return IsPaidUsr 是否已赋值
                     */
                    bool IsPaidUsrHasBeenSet() const;

                    /**
                     * 获取Number of resources being attacked
                     * @return AttackingCount Number of resources being attacked
                     */
                    int64_t GetAttackingCount() const;

                    /**
                     * 判断参数 AttackingCount 是否已赋值
                     * @return AttackingCount 是否已赋值
                     */
                    bool AttackingCountHasBeenSet() const;

                    /**
                     * 获取Number of resource blocked
                     * @return BlockingCount Number of resource blocked
                     */
                    int64_t GetBlockingCount() const;

                    /**
                     * 判断参数 BlockingCount 是否已赋值
                     * @return BlockingCount 是否已赋值
                     */
                    bool BlockingCountHasBeenSet() const;

                    /**
                     * 获取Number of expired resources
                     * @return ExpiredCount Number of expired resources
                     */
                    int64_t GetExpiredCount() const;

                    /**
                     * 判断参数 ExpiredCount 是否已赋值
                     * @return ExpiredCount 是否已赋值
                     */
                    bool ExpiredCountHasBeenSet() const;

                    /**
                     * 获取Total pending risk events
                     * @return Total Total pending risk events
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Whether the user is a paid user
                     */
                    bool m_isPaidUsr;
                    bool m_isPaidUsrHasBeenSet;

                    /**
                     * Number of resources being attacked
                     */
                    int64_t m_attackingCount;
                    bool m_attackingCountHasBeenSet;

                    /**
                     * Number of resource blocked
                     */
                    int64_t m_blockingCount;
                    bool m_blockingCountHasBeenSet;

                    /**
                     * Number of expired resources
                     */
                    int64_t m_expiredCount;
                    bool m_expiredCountHasBeenSet;

                    /**
                     * Total pending risk events
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEPENDINGRISKINFORESPONSE_H_
