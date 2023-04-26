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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLSUMMARYBYPAYMODERESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLSUMMARYBYPAYMODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/PayModeSummaryOverviewItem.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * DescribeBillSummaryByPayMode response structure.
                */
                class DescribeBillSummaryByPayModeResponse : public AbstractModel
                {
                public:
                    DescribeBillSummaryByPayModeResponse();
                    ~DescribeBillSummaryByPayModeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Payment mode details in the customer bill data totaled by payment mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SummaryOverview Payment mode details in the customer bill data totaled by payment mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PayModeSummaryOverviewItem> GetSummaryOverview() const;

                    /**
                     * 判断参数 SummaryOverview 是否已赋值
                     * @return SummaryOverview 是否已赋值
                     */
                    bool SummaryOverviewHasBeenSet() const;

                private:

                    /**
                     * Payment mode details in the customer bill data totaled by payment mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PayModeSummaryOverviewItem> m_summaryOverview;
                    bool m_summaryOverviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLSUMMARYBYPAYMODERESPONSE_H_
