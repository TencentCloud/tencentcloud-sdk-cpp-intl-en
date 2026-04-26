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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONTRENDBYMONTHRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONTRENDBYMONTHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AllocationBillTrendDetail.h>
#include <tencentcloud/billing/v20180709/model/AllocationStat.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeAllocationTrendByMonth response structure.
                */
                class DescribeAllocationTrendByMonthResponse : public AbstractModel
                {
                public:
                    DescribeAllocationTrendByMonthResponse();
                    ~DescribeAllocationTrendByMonthResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Current month's expense information
                     * @return Current Current month's expense information
                     * 
                     */
                    AllocationBillTrendDetail GetCurrent() const;

                    /**
                     * 判断参数 Current 是否已赋值
                     * @return Current 是否已赋值
                     * 
                     */
                    bool CurrentHasBeenSet() const;

                    /**
                     * 获取Previous months' expense information
                     * @return Previous Previous months' expense information
                     * 
                     */
                    std::vector<AllocationBillTrendDetail> GetPrevious() const;

                    /**
                     * 判断参数 Previous 是否已赋值
                     * @return Previous 是否已赋值
                     * 
                     */
                    bool PreviousHasBeenSet() const;

                    /**
                     * 获取Expense statistical information
                     * @return Stat Expense statistical information
                     * 
                     */
                    AllocationStat GetStat() const;

                    /**
                     * 判断参数 Stat 是否已赋值
                     * @return Stat 是否已赋值
                     * 
                     */
                    bool StatHasBeenSet() const;

                private:

                    /**
                     * Current month's expense information
                     */
                    AllocationBillTrendDetail m_current;
                    bool m_currentHasBeenSet;

                    /**
                     * Previous months' expense information
                     */
                    std::vector<AllocationBillTrendDetail> m_previous;
                    bool m_previousHasBeenSet;

                    /**
                     * Expense statistical information
                     */
                    AllocationStat m_stat;
                    bool m_statHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONTRENDBYMONTHRESPONSE_H_
