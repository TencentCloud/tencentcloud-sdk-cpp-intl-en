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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYRESOURCERESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYRESOURCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/ConsumptionSummaryTotal.h>
#include <tencentcloud/billing/v20180709/model/ConsumptionResourceSummaryConditionValue.h>
#include <tencentcloud/billing/v20180709/model/ConsumptionResourceSummaryDataItem.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCostSummaryByResource response structure.
                */
                class DescribeCostSummaryByResourceResponse : public AbstractModel
                {
                public:
                    DescribeCostSummaryByResourceResponse();
                    ~DescribeCostSummaryByResourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Data readiness, 0 for not ready, 1 for ready
                     * @return Ready Data readiness, 0 for not ready, 1 for ready
                     * 
                     */
                    uint64_t GetReady() const;

                    /**
                     * 判断参数 Ready 是否已赋值
                     * @return Ready 是否已赋值
                     * 
                     */
                    bool ReadyHasBeenSet() const;

                    /**
                     * 获取Consumption detailsNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Total Consumption detailsNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ConsumptionSummaryTotal GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Filter criteria
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConditionValue Filter criteria
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ConsumptionResourceSummaryConditionValue GetConditionValue() const;

                    /**
                     * 判断参数 ConditionValue 是否已赋值
                     * @return ConditionValue 是否已赋值
                     * 
                     */
                    bool ConditionValueHasBeenSet() const;

                    /**
                     * 获取Record countNote: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordNum Record countNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRecordNum() const;

                    /**
                     * 判断参数 RecordNum 是否已赋值
                     * @return RecordNum 是否已赋值
                     * 
                     */
                    bool RecordNumHasBeenSet() const;

                    /**
                     * 获取Resource consumption detailsNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Data Resource consumption detailsNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ConsumptionResourceSummaryDataItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Data readiness, 0 for not ready, 1 for ready
                     */
                    uint64_t m_ready;
                    bool m_readyHasBeenSet;

                    /**
                     * Consumption detailsNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    ConsumptionSummaryTotal m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Filter criteria
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ConsumptionResourceSummaryConditionValue m_conditionValue;
                    bool m_conditionValueHasBeenSet;

                    /**
                     * Record countNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_recordNum;
                    bool m_recordNumHasBeenSet;

                    /**
                     * Resource consumption detailsNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ConsumptionResourceSummaryDataItem> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYRESOURCERESPONSE_H_
