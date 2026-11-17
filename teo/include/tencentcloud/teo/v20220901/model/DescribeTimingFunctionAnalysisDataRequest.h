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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGFUNCTIONANALYSISDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGFUNCTIONANALYSISDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/QueryCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeTimingFunctionAnalysisData request structure.
                */
                class DescribeTimingFunctionAnalysisDataRequest : public AbstractModel
                {
                public:
                    DescribeTimingFunctionAnalysisDataRequest();
                    ~DescribeTimingFunctionAnalysisDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Set of site IDs. Enter at least one site ID.</p>
                     * @return ZoneIds <p>Set of site IDs. Enter at least one site ID.</p>
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置<p>Set of site IDs. Enter at least one site ID.</p>
                     * @param _zoneIds <p>Set of site IDs. Enter at least one site ID.</p>
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取<p>Start time.</p>
                     * @return StartTime <p>Start time.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time.</p>
                     * @param _startTime <p>Start time.</p>
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
                     * 获取End time. The query time range (`EndTime` - `StartTime`) must be no longer than 7 days.
                     * @return EndTime End time. The query time range (`EndTime` - `StartTime`) must be no longer than 7 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time. The query time range (`EndTime` - `StartTime`) must be no longer than 7 days.
                     * @param _endTime End time. The query time range (`EndTime` - `StartTime`) must be no longer than 7 days.
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
                     * 获取List of metrics. Valid values:<ul><li>`function_requestCount`: the number of Edge Function requests. This is a cumulative value.</li><li>`function_cpuCostTime`: the average CPU time consumed by Edge Function execution, in microseconds.</li><li>`function_wallClockTime`: the average wall clock time consumed by Edge Function execution, in microseconds.</li></ul>
                     * @return MetricNames List of metrics. Valid values:<ul><li>`function_requestCount`: the number of Edge Function requests. This is a cumulative value.</li><li>`function_cpuCostTime`: the average CPU time consumed by Edge Function execution, in microseconds.</li><li>`function_wallClockTime`: the average wall clock time consumed by Edge Function execution, in microseconds.</li></ul>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置List of metrics. Valid values:<ul><li>`function_requestCount`: the number of Edge Function requests. This is a cumulative value.</li><li>`function_cpuCostTime`: the average CPU time consumed by Edge Function execution, in microseconds.</li><li>`function_wallClockTime`: the average wall clock time consumed by Edge Function execution, in microseconds.</li></ul>
                     * @param _metricNames List of metrics. Valid values:<ul><li>`function_requestCount`: the number of Edge Function requests. This is a cumulative value.</li><li>`function_cpuCostTime`: the average CPU time consumed by Edge Function execution, in microseconds.</li><li>`function_wallClockTime`: the average wall clock time consumed by Edge Function execution, in microseconds.</li></ul>
                     * 
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     * 
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取Query time granularity. Valid values:<ul><li>`min`: 1 minute.</li><li>`5min`: 5 minutes.</li><li>`hour`: 1 hour.</li><li>`day`: 1 day.</li></ul>If this parameter is not specified, the granularity is automatically inferred based on the interval between the start time and the end time. The specific rules are as follows: within 2 hours, the granularity is `min`; within 2 days, the granularity is `5min`; within 7 days, the granularity is `hour`; longer than 7 days, the granularity is `day`.
                     * @return Interval Query time granularity. Valid values:<ul><li>`min`: 1 minute.</li><li>`5min`: 5 minutes.</li><li>`hour`: 1 hour.</li><li>`day`: 1 day.</li></ul>If this parameter is not specified, the granularity is automatically inferred based on the interval between the start time and the end time. The specific rules are as follows: within 2 hours, the granularity is `min`; within 2 days, the granularity is `5min`; within 7 days, the granularity is `hour`; longer than 7 days, the granularity is `day`.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Query time granularity. Valid values:<ul><li>`min`: 1 minute.</li><li>`5min`: 5 minutes.</li><li>`hour`: 1 hour.</li><li>`day`: 1 day.</li></ul>If this parameter is not specified, the granularity is automatically inferred based on the interval between the start time and the end time. The specific rules are as follows: within 2 hours, the granularity is `min`; within 2 days, the granularity is `5min`; within 7 days, the granularity is `hour`; longer than 7 days, the granularity is `day`.
                     * @param _interval Query time granularity. Valid values:<ul><li>`min`: 1 minute.</li><li>`5min`: 5 minutes.</li><li>`hour`: 1 hour.</li><li>`day`: 1 day.</li></ul>If this parameter is not specified, the granularity is automatically inferred based on the interval between the start time and the end time. The specific rules are as follows: within 2 hours, the granularity is `min`; within 2 days, the granularity is `5min`; within 7 days, the granularity is `hour`; longer than 7 days, the granularity is `day`.
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Filter conditions. The maximum number of values in `Filters.Value` is 20. The detailed filter condition keys are as follows:<ul><li>`domain`: filters by subdomain name. Example value: `www.example.com`.</li><li>`function-name`: filters by Edge Function name. Example value: `test051301-zone-2r2fdoxxxx-130000000`.</li><li>`function-result`: filters by Edge Function execution result. Valid values for the corresponding `Value`:<ul><li>`success`: success.</li><li>`fail`: failure.</li></ul></li></ul>
                     * @return Filters Filter conditions. The maximum number of values in `Filters.Value` is 20. The detailed filter condition keys are as follows:<ul><li>`domain`: filters by subdomain name. Example value: `www.example.com`.</li><li>`function-name`: filters by Edge Function name. Example value: `test051301-zone-2r2fdoxxxx-130000000`.</li><li>`function-result`: filters by Edge Function execution result. Valid values for the corresponding `Value`:<ul><li>`success`: success.</li><li>`fail`: failure.</li></ul></li></ul>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filter conditions. The maximum number of values in `Filters.Value` is 20. The detailed filter condition keys are as follows:<ul><li>`domain`: filters by subdomain name. Example value: `www.example.com`.</li><li>`function-name`: filters by Edge Function name. Example value: `test051301-zone-2r2fdoxxxx-130000000`.</li><li>`function-result`: filters by Edge Function execution result. Valid values for the corresponding `Value`:<ul><li>`success`: success.</li><li>`fail`: failure.</li></ul></li></ul>
                     * @param _filters Filter conditions. The maximum number of values in `Filters.Value` is 20. The detailed filter condition keys are as follows:<ul><li>`domain`: filters by subdomain name. Example value: `www.example.com`.</li><li>`function-name`: filters by Edge Function name. Example value: `test051301-zone-2r2fdoxxxx-130000000`.</li><li>`function-result`: filters by Edge Function execution result. Valid values for the corresponding `Value`:<ul><li>`success`: success.</li><li>`fail`: failure.</li></ul></li></ul>
                     * 
                     */
                    void SetFilters(const std::vector<QueryCondition>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The region the data belongs to. Valid values:<ul><li>`overseas`: data from the global area (excluding the Chinese mainland).</li><li>`mainland`: data from the Chinese mainland.</li><li>`global`: global data.</li></ul>If this parameter is not specified, the default value is `global`.
                     * @return Area The region the data belongs to. Valid values:<ul><li>`overseas`: data from the global area (excluding the Chinese mainland).</li><li>`mainland`: data from the Chinese mainland.</li><li>`global`: global data.</li></ul>If this parameter is not specified, the default value is `global`.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置The region the data belongs to. Valid values:<ul><li>`overseas`: data from the global area (excluding the Chinese mainland).</li><li>`mainland`: data from the Chinese mainland.</li><li>`global`: global data.</li></ul>If this parameter is not specified, the default value is `global`.
                     * @param _area The region the data belongs to. Valid values:<ul><li>`overseas`: data from the global area (excluding the Chinese mainland).</li><li>`mainland`: data from the Chinese mainland.</li><li>`global`: global data.</li></ul>If this parameter is not specified, the default value is `global`.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * <p>Set of site IDs. Enter at least one site ID.</p>
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>Start time.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time. The query time range (`EndTime` - `StartTime`) must be no longer than 7 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * List of metrics. Valid values:<ul><li>`function_requestCount`: the number of Edge Function requests. This is a cumulative value.</li><li>`function_cpuCostTime`: the average CPU time consumed by Edge Function execution, in microseconds.</li><li>`function_wallClockTime`: the average wall clock time consumed by Edge Function execution, in microseconds.</li></ul>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * Query time granularity. Valid values:<ul><li>`min`: 1 minute.</li><li>`5min`: 5 minutes.</li><li>`hour`: 1 hour.</li><li>`day`: 1 day.</li></ul>If this parameter is not specified, the granularity is automatically inferred based on the interval between the start time and the end time. The specific rules are as follows: within 2 hours, the granularity is `min`; within 2 days, the granularity is `5min`; within 7 days, the granularity is `hour`; longer than 7 days, the granularity is `day`.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Filter conditions. The maximum number of values in `Filters.Value` is 20. The detailed filter condition keys are as follows:<ul><li>`domain`: filters by subdomain name. Example value: `www.example.com`.</li><li>`function-name`: filters by Edge Function name. Example value: `test051301-zone-2r2fdoxxxx-130000000`.</li><li>`function-result`: filters by Edge Function execution result. Valid values for the corresponding `Value`:<ul><li>`success`: success.</li><li>`fail`: failure.</li></ul></li></ul>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The region the data belongs to. Valid values:<ul><li>`overseas`: data from the global area (excluding the Chinese mainland).</li><li>`mainland`: data from the Chinese mainland.</li><li>`global`: global data.</li></ul>If this parameter is not specified, the default value is `global`.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGFUNCTIONANALYSISDATAREQUEST_H_
