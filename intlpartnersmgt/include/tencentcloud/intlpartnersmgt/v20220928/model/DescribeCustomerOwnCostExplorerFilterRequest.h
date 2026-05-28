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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMEROWNCOSTEXPLORERFILTERREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMEROWNCOSTEXPLORERFILTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * DescribeCustomerOwnCostExplorerFilter request structure.
                */
                class DescribeCustomerOwnCostExplorerFilterRequest : public AbstractModel
                {
                public:
                    DescribeCustomerOwnCostExplorerFilterRequest();
                    ~DescribeCustomerOwnCostExplorerFilterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Start time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months. When PeriodType is day, the time range is 2 calendar months;</p>
                     * @return StartTime <p>Start time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months. When PeriodType is day, the time range is 2 calendar months;</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months. When PeriodType is day, the time range is 2 calendar months;</p>
                     * @param _startTime <p>Start time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months. When PeriodType is day, the time range is 2 calendar months;</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>End time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months. When PeriodType is day, the time range is 2 calendar months.</p>
                     * @return EndTime <p>End time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months. When PeriodType is day, the time range is 2 calendar months.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months. When PeriodType is day, the time range is 2 calendar months.</p>
                     * @param _endTime <p>End time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months. When PeriodType is day, the time range is 2 calendar months.</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Date type</p><p>Enumeration value:</p><ul><li>day: By day</li><li>month: Monthly</li></ul>
                     * @return PeriodType <p>Date type</p><p>Enumeration value:</p><ul><li>day: By day</li><li>month: Monthly</li></ul>
                     * 
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置<p>Date type</p><p>Enumeration value:</p><ul><li>day: By day</li><li>month: Monthly</li></ul>
                     * @param _periodType <p>Date type</p><p>Enumeration value:</p><ul><li>day: By day</li><li>month: Monthly</li></ul>
                     * 
                     */
                    void SetPeriodType(const std::string& _periodType);

                    /**
                     * 判断参数 PeriodType 是否已赋值
                     * @return PeriodType 是否已赋值
                     * 
                     */
                    bool PeriodTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Start time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months. When PeriodType is day, the time range is 2 calendar months;</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss, for example 2006-01-02 00:00:00</p><p>Input limit: When PeriodType is month, the time range is 6 calendar months. When PeriodType is day, the time range is 2 calendar months.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Date type</p><p>Enumeration value:</p><ul><li>day: By day</li><li>month: Monthly</li></ul>
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMEROWNCOSTEXPLORERFILTERREQUEST_H_
