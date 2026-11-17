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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMHOURBILLDETAILRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMHOURBILLDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/LLMBillItemFee.h>
#include <tencentcloud/waf/v20180125/model/LLMHourBillTrendItem.h>
#include <tencentcloud/waf/v20180125/model/LLMHourBillDetailItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeLLMHourBillDetail response structure.
                */
                class DescribeLLMHourBillDetailResponse : public AbstractModel
                {
                public:
                    DescribeLLMHourBillDetailResponse();
                    ~DescribeLLMHourBillDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Query date, normalized to the YYYY-MM-DD format
                     * @return Date Query date, normalized to the YYYY-MM-DD format
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Estimated total bill amount for the day (in CNY, net cost after deducting the free quota)
                     * @return EstimatedTotalFee Estimated total bill amount for the day (in CNY, net cost after deducting the free quota)
                     * 
                     */
                    std::string GetEstimatedTotalFee() const;

                    /**
                     * 判断参数 EstimatedTotalFee 是否已赋值
                     * @return EstimatedTotalFee 是否已赋值
                     * 
                     */
                    bool EstimatedTotalFeeHasBeenSet() const;

                    /**
                     * 获取Costs of the day broken down by billable item
                     * @return ItemFees Costs of the day broken down by billable item
                     * 
                     */
                    LLMBillItemFee GetItemFees() const;

                    /**
                     * 判断参数 ItemFees 是否已赋值
                     * @return ItemFees 是否已赋值
                     * 
                     */
                    bool ItemFeesHasBeenSet() const;

                    /**
                     * 获取24-hour bill trend, fixed at 24 entries, with 0 filled for missing data
                     * @return HourlyTrend 24-hour bill trend, fixed at 24 entries, with 0 filled for missing data
                     * 
                     */
                    std::vector<LLMHourBillTrendItem> GetHourlyTrend() const;

                    /**
                     * 判断参数 HourlyTrend 是否已赋值
                     * @return HourlyTrend 是否已赋值
                     * 
                     */
                    bool HourlyTrendHasBeenSet() const;

                    /**
                     * 获取24-hour bill details, fixed at 24 entries, with 0 filled for missing data
                     * @return HourlyDetail 24-hour bill details, fixed at 24 entries, with 0 filled for missing data
                     * 
                     */
                    std::vector<LLMHourBillDetailItem> GetHourlyDetail() const;

                    /**
                     * 判断参数 HourlyDetail 是否已赋值
                     * @return HourlyDetail 是否已赋值
                     * 
                     */
                    bool HourlyDetailHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Query date, normalized to the YYYY-MM-DD format
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Estimated total bill amount for the day (in CNY, net cost after deducting the free quota)
                     */
                    std::string m_estimatedTotalFee;
                    bool m_estimatedTotalFeeHasBeenSet;

                    /**
                     * Costs of the day broken down by billable item
                     */
                    LLMBillItemFee m_itemFees;
                    bool m_itemFeesHasBeenSet;

                    /**
                     * 24-hour bill trend, fixed at 24 entries, with 0 filled for missing data
                     */
                    std::vector<LLMHourBillTrendItem> m_hourlyTrend;
                    bool m_hourlyTrendHasBeenSet;

                    /**
                     * 24-hour bill details, fixed at 24 entries, with 0 filled for missing data
                     */
                    std::vector<LLMHourBillDetailItem> m_hourlyDetail;
                    bool m_hourlyDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMHOURBILLDETAILRESPONSE_H_
