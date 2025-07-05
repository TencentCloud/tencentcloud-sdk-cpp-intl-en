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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYREGIONRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYREGIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/ConsumptionSummaryTotal.h>
#include <tencentcloud/billing/v20180709/model/ConsumptionRegionSummaryDataItem.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCostSummaryByRegion response structure.
                */
                class DescribeCostSummaryByRegionResponse : public AbstractModel
                {
                public:
                    DescribeCostSummaryByRegionResponse();
                    ~DescribeCostSummaryByRegionResponse() = default;
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
                     * 获取Consumption details
                     * @return Total Consumption details
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
                     * 获取Consumption details summarized by region
                     * @return Data Consumption details summarized by region
                     * 
                     */
                    std::vector<ConsumptionRegionSummaryDataItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Record count. The system returns null when NeedRecordNum is 0.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordNum Record count. The system returns null when NeedRecordNum is 0.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRecordNum() const;

                    /**
                     * 判断参数 RecordNum 是否已赋值
                     * @return RecordNum 是否已赋值
                     * 
                     */
                    bool RecordNumHasBeenSet() const;

                private:

                    /**
                     * Data readiness, 0 for not ready, 1 for ready
                     */
                    uint64_t m_ready;
                    bool m_readyHasBeenSet;

                    /**
                     * Consumption details
                     */
                    ConsumptionSummaryTotal m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Consumption details summarized by region
                     */
                    std::vector<ConsumptionRegionSummaryDataItem> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Record count. The system returns null when NeedRecordNum is 0.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_recordNum;
                    bool m_recordNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYREGIONRESPONSE_H_
