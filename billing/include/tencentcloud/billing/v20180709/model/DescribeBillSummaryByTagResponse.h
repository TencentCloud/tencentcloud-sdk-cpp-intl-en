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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYTAGRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYTAGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/TagSummaryOverviewItem.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillSummaryByTag response structure.
                */
                class DescribeBillSummaryByTagResponse : public AbstractModel
                {
                public:
                    DescribeBillSummaryByTagResponse();
                    ~DescribeBillSummaryByTagResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Indicates whether or not the data is ready. `0`: not ready; `1`: ready.
                     * @return Ready Indicates whether or not the data is ready. `0`: not ready; `1`: ready.
                     */
                    uint64_t GetReady() const;

                    /**
                     * 判断参数 Ready 是否已赋值
                     * @return Ready 是否已赋值
                     */
                    bool ReadyHasBeenSet() const;

                    /**
                     * 获取Details about cost distribution over different tags
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SummaryOverview Details about cost distribution over different tags
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagSummaryOverviewItem> GetSummaryOverview() const;

                    /**
                     * 判断参数 SummaryOverview 是否已赋值
                     * @return SummaryOverview 是否已赋值
                     */
                    bool SummaryOverviewHasBeenSet() const;

                private:

                    /**
                     * Indicates whether or not the data is ready. `0`: not ready; `1`: ready.
                     */
                    uint64_t m_ready;
                    bool m_readyHasBeenSet;

                    /**
                     * Details about cost distribution over different tags
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagSummaryOverviewItem> m_summaryOverview;
                    bool m_summaryOverviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYTAGRESPONSE_H_
