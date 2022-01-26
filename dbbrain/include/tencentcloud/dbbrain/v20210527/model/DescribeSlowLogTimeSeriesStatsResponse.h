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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGTIMESERIESSTATSRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGTIMESERIESSTATSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/TimeSlice.h>
#include <tencentcloud/dbbrain/v20210527/model/MonitorMetricSeriesData.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeSlowLogTimeSeriesStats response structure.
                */
                class DescribeSlowLogTimeSeriesStatsResponse : public AbstractModel
                {
                public:
                    DescribeSlowLogTimeSeriesStatsResponse();
                    ~DescribeSlowLogTimeSeriesStatsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Time range in seconds in histogram.
                     * @return Period Time range in seconds in histogram.
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Number of slow logs in specified time range.
                     * @return TimeSeries Number of slow logs in specified time range.
                     */
                    std::vector<TimeSlice> GetTimeSeries() const;

                    /**
                     * 判断参数 TimeSeries 是否已赋值
                     * @return TimeSeries 是否已赋值
                     */
                    bool TimeSeriesHasBeenSet() const;

                    /**
                     * 获取Instance CPU utilization monitoring data in specified time range.
                     * @return SeriesData Instance CPU utilization monitoring data in specified time range.
                     */
                    MonitorMetricSeriesData GetSeriesData() const;

                    /**
                     * 判断参数 SeriesData 是否已赋值
                     * @return SeriesData 是否已赋值
                     */
                    bool SeriesDataHasBeenSet() const;

                private:

                    /**
                     * Time range in seconds in histogram.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Number of slow logs in specified time range.
                     */
                    std::vector<TimeSlice> m_timeSeries;
                    bool m_timeSeriesHasBeenSet;

                    /**
                     * Instance CPU utilization monitoring data in specified time range.
                     */
                    MonitorMetricSeriesData m_seriesData;
                    bool m_seriesDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGTIMESERIESSTATSRESPONSE_H_
