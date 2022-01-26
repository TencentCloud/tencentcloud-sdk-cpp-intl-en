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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYPRODUCTRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYPRODUCTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BusinessSummaryTotal.h>
#include <tencentcloud/billing/v20180709/model/BusinessSummaryOverviewItem.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillSummaryByProduct response structure.
                */
                class DescribeBillSummaryByProductResponse : public AbstractModel
                {
                public:
                    DescribeBillSummaryByProductResponse();
                    ~DescribeBillSummaryByProductResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Indicates whether or not the data is ready. 0 = not ready, 1 = ready.
                     * @return Ready Indicates whether or not the data is ready. 0 = not ready, 1 = ready.
                     */
                    uint64_t GetReady() const;

                    /**
                     * 判断参数 Ready 是否已赋值
                     * @return Ready 是否已赋值
                     */
                    bool ReadyHasBeenSet() const;

                    /**
                     * 获取Total cost details
Note: This field may return null, indicating that no valid value was found.
                     * @return SummaryTotal Total cost details
Note: This field may return null, indicating that no valid value was found.
                     */
                    BusinessSummaryTotal GetSummaryTotal() const;

                    /**
                     * 判断参数 SummaryTotal 是否已赋值
                     * @return SummaryTotal 是否已赋值
                     */
                    bool SummaryTotalHasBeenSet() const;

                    /**
                     * 获取Cost distribution of all products
Note: This field may return null, indicating that no valid value was found.
                     * @return SummaryOverview Cost distribution of all products
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<BusinessSummaryOverviewItem> GetSummaryOverview() const;

                    /**
                     * 判断参数 SummaryOverview 是否已赋值
                     * @return SummaryOverview 是否已赋值
                     */
                    bool SummaryOverviewHasBeenSet() const;

                private:

                    /**
                     * Indicates whether or not the data is ready. 0 = not ready, 1 = ready.
                     */
                    uint64_t m_ready;
                    bool m_readyHasBeenSet;

                    /**
                     * Total cost details
Note: This field may return null, indicating that no valid value was found.
                     */
                    BusinessSummaryTotal m_summaryTotal;
                    bool m_summaryTotalHasBeenSet;

                    /**
                     * Cost distribution of all products
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<BusinessSummaryOverviewItem> m_summaryOverview;
                    bool m_summaryOverviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYPRODUCTRESPONSE_H_
