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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GETMONITORDATARESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GETMONITORDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DataPoint.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * GetMonitorData response structure.
                */
                class GetMonitorDataResponse : public AbstractModel
                {
                public:
                    GetMonitorDataResponse();
                    ~GetMonitorDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Statistical period
                     * @return Period Statistical period
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Metric name
                     * @return MetricName Metric name
                     */
                    std::string GetMetricName() const;

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Array of data points
                     * @return DataPoints Array of data points
                     */
                    std::vector<DataPoint> GetDataPoints() const;

                    /**
                     * 判断参数 DataPoints 是否已赋值
                     * @return DataPoints 是否已赋值
                     */
                    bool DataPointsHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndTime End time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Statistical period
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Metric name
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Array of data points
                     */
                    std::vector<DataPoint> m_dataPoints;
                    bool m_dataPointsHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GETMONITORDATARESPONSE_H_
