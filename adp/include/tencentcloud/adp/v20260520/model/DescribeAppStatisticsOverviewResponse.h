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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSTATISTICSOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSTATISTICSOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Distribution.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeAppStatisticsOverview response structure.
                */
                class DescribeAppStatisticsOverviewResponse : public AbstractModel
                {
                public:
                    DescribeAppStatisticsOverviewResponse();
                    ~DescribeAppStatisticsOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Average first tokens duration (ms)</p>
                     * @return AvgFirstTokenTime <p>Average first tokens duration (ms)</p>
                     * 
                     */
                    std::string GetAvgFirstTokenTime() const;

                    /**
                     * 判断参数 AvgFirstTokenTime 是否已赋值
                     * @return AvgFirstTokenTime 是否已赋值
                     * 
                     */
                    bool AvgFirstTokenTimeHasBeenSet() const;

                    /**
                     * 获取<p>Avg duration of total tokens (ms)</p>
                     * @return AvgTotalTokenTime <p>Avg duration of total tokens (ms)</p>
                     * 
                     */
                    std::string GetAvgTotalTokenTime() const;

                    /**
                     * 判断参数 AvgTotalTokenTime 是否已赋值
                     * @return AvgTotalTokenTime 是否已赋值
                     * 
                     */
                    bool AvgTotalTokenTimeHasBeenSet() const;

                    /**
                     * 获取<p>Application call success rate (percentage, 0-100)</p>
                     * @return CallSuccessRate <p>Application call success rate (percentage, 0-100)</p>
                     * 
                     */
                    double GetCallSuccessRate() const;

                    /**
                     * 判断参数 CallSuccessRate 是否已赋值
                     * @return CallSuccessRate 是否已赋值
                     * 
                     */
                    bool CallSuccessRateHasBeenSet() const;

                    /**
                     * 获取<p>Reply type distribution list; statistics by app_type, all reply methods are completed and returned in a fixed sequence. For reply methods with no data, call_count is 0</p>
                     * @return ReplyTypeDistributionList <p>Reply type distribution list; statistics by app_type, all reply methods are completed and returned in a fixed sequence. For reply methods with no data, call_count is 0</p>
                     * 
                     */
                    std::vector<Distribution> GetReplyTypeDistributionList() const;

                    /**
                     * 判断参数 ReplyTypeDistributionList 是否已赋值
                     * @return ReplyTypeDistributionList 是否已赋值
                     * 
                     */
                    bool ReplyTypeDistributionListHasBeenSet() const;

                    /**
                     * 获取<p>Total number of calls</p>
                     * @return TotalCallCount <p>Total number of calls</p>
                     * 
                     */
                    std::string GetTotalCallCount() const;

                    /**
                     * 判断参数 TotalCallCount 是否已赋值
                     * @return TotalCallCount 是否已赋值
                     * 
                     */
                    bool TotalCallCountHasBeenSet() const;

                private:

                    /**
                     * <p>Average first tokens duration (ms)</p>
                     */
                    std::string m_avgFirstTokenTime;
                    bool m_avgFirstTokenTimeHasBeenSet;

                    /**
                     * <p>Avg duration of total tokens (ms)</p>
                     */
                    std::string m_avgTotalTokenTime;
                    bool m_avgTotalTokenTimeHasBeenSet;

                    /**
                     * <p>Application call success rate (percentage, 0-100)</p>
                     */
                    double m_callSuccessRate;
                    bool m_callSuccessRateHasBeenSet;

                    /**
                     * <p>Reply type distribution list; statistics by app_type, all reply methods are completed and returned in a fixed sequence. For reply methods with no data, call_count is 0</p>
                     */
                    std::vector<Distribution> m_replyTypeDistributionList;
                    bool m_replyTypeDistributionListHasBeenSet;

                    /**
                     * <p>Total number of calls</p>
                     */
                    std::string m_totalCallCount;
                    bool m_totalCallCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSTATISTICSOVERVIEWRESPONSE_H_
