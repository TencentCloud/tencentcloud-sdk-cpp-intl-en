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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEMONITORDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEMONITORDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeInferenceServiceMonitorData request structure.
                */
                class DescribeInferenceServiceMonitorDataRequest : public AbstractModel
                {
                public:
                    DescribeInferenceServiceMonitorDataRequest();
                    ~DescribeInferenceServiceMonitorDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>ID of the inference service. You can import up to 10 inference service IDs.</p>
                     * @return ServiceIds <p>ID of the inference service. You can import up to 10 inference service IDs.</p>
                     * 
                     */
                    std::vector<std::string> GetServiceIds() const;

                    /**
                     * 设置<p>ID of the inference service. You can import up to 10 inference service IDs.</p>
                     * @param _serviceIds <p>ID of the inference service. You can import up to 10 inference service IDs.</p>
                     * 
                     */
                    void SetServiceIds(const std::vector<std::string>& _serviceIds);

                    /**
                     * 判断参数 ServiceIds 是否已赋值
                     * @return ServiceIds 是否已赋值
                     * 
                     */
                    bool ServiceIdsHasBeenSet() const;

                    /**
                     * 获取<p>Metric list, supports up to 10 metrics. Valid values: <li>cpu_usage_average: Average CPU utilization, unit: %, metric type: Float;</li><li>cpu_usage_max: Maximum CPU utilization, unit: %, metric type: Float;</li><li>gpu_usage_average: Average GPU utilization, unit: %, metric type: Float;</li><li>gpu_usage_max: Maximum GPU utilization, unit: %, metric type: Float;</li><li>instance_num_average: Average number of instances, unit: unit, metric type: Float;</li><li>instance_num_max: Maximum number of instances, unit: unit, metric type: Float;</li><li>gpu_memory_usage_max: Maximum GPU VRAM utilization, unit: %, metric type: Float;</li><li>memory_usage_average: Average memory utilization, unit: %, metric type: Float;</li><li>memory_usage_max: Maximum memory utilization, unit: %, metric type: Float;</li></p>
                     * @return MetricNames <p>Metric list, supports up to 10 metrics. Valid values: <li>cpu_usage_average: Average CPU utilization, unit: %, metric type: Float;</li><li>cpu_usage_max: Maximum CPU utilization, unit: %, metric type: Float;</li><li>gpu_usage_average: Average GPU utilization, unit: %, metric type: Float;</li><li>gpu_usage_max: Maximum GPU utilization, unit: %, metric type: Float;</li><li>instance_num_average: Average number of instances, unit: unit, metric type: Float;</li><li>instance_num_max: Maximum number of instances, unit: unit, metric type: Float;</li><li>gpu_memory_usage_max: Maximum GPU VRAM utilization, unit: %, metric type: Float;</li><li>memory_usage_average: Average memory utilization, unit: %, metric type: Float;</li><li>memory_usage_max: Maximum memory utilization, unit: %, metric type: Float;</li></p>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置<p>Metric list, supports up to 10 metrics. Valid values: <li>cpu_usage_average: Average CPU utilization, unit: %, metric type: Float;</li><li>cpu_usage_max: Maximum CPU utilization, unit: %, metric type: Float;</li><li>gpu_usage_average: Average GPU utilization, unit: %, metric type: Float;</li><li>gpu_usage_max: Maximum GPU utilization, unit: %, metric type: Float;</li><li>instance_num_average: Average number of instances, unit: unit, metric type: Float;</li><li>instance_num_max: Maximum number of instances, unit: unit, metric type: Float;</li><li>gpu_memory_usage_max: Maximum GPU VRAM utilization, unit: %, metric type: Float;</li><li>memory_usage_average: Average memory utilization, unit: %, metric type: Float;</li><li>memory_usage_max: Maximum memory utilization, unit: %, metric type: Float;</li></p>
                     * @param _metricNames <p>Metric list, supports up to 10 metrics. Valid values: <li>cpu_usage_average: Average CPU utilization, unit: %, metric type: Float;</li><li>cpu_usage_max: Maximum CPU utilization, unit: %, metric type: Float;</li><li>gpu_usage_average: Average GPU utilization, unit: %, metric type: Float;</li><li>gpu_usage_max: Maximum GPU utilization, unit: %, metric type: Float;</li><li>instance_num_average: Average number of instances, unit: unit, metric type: Float;</li><li>instance_num_max: Maximum number of instances, unit: unit, metric type: Float;</li><li>gpu_memory_usage_max: Maximum GPU VRAM utilization, unit: %, metric type: Float;</li><li>memory_usage_average: Average memory utilization, unit: %, metric type: Float;</li><li>memory_usage_max: Maximum memory utilization, unit: %, metric type: Float;</li></p>
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
                     * 获取<p>End time. The query time range (<code>EndTime - StartTime</code>) must be less than or equal to 30 days.</p>
                     * @return EndTime <p>End time. The query time range (<code>EndTime - StartTime</code>) must be less than or equal to 30 days.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time. The query time range (<code>EndTime - StartTime</code>) must be less than or equal to 30 days.</p>
                     * @param _endTime <p>End time. The query time range (<code>EndTime - StartTime</code>) must be less than or equal to 30 days.</p>
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
                     * 获取<p>Query time granularity. Valid values:</p><li>min: 1 minute, supports queries within a 1-day range.</li><li>5min: 5 minutes, supports queries within a 7-day range.</li><li>hour: 1 hour, supports queries within a 30-day range.</li><li>day: 1 day, supports queries within a 30-day range.</li>If this parameter is not input, the granularity will be automatically inferred based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.
                     * @return Interval <p>Query time granularity. Valid values:</p><li>min: 1 minute, supports queries within a 1-day range.</li><li>5min: 5 minutes, supports queries within a 7-day range.</li><li>hour: 1 hour, supports queries within a 30-day range.</li><li>day: 1 day, supports queries within a 30-day range.</li>If this parameter is not input, the granularity will be automatically inferred based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置<p>Query time granularity. Valid values:</p><li>min: 1 minute, supports queries within a 1-day range.</li><li>5min: 5 minutes, supports queries within a 7-day range.</li><li>hour: 1 hour, supports queries within a 30-day range.</li><li>day: 1 day, supports queries within a 30-day range.</li>If this parameter is not input, the granularity will be automatically inferred based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.
                     * @param _interval <p>Query time granularity. Valid values:</p><li>min: 1 minute, supports queries within a 1-day range.</li><li>5min: 5 minutes, supports queries within a 7-day range.</li><li>hour: 1 hour, supports queries within a 30-day range.</li><li>day: 1 day, supports queries within a 30-day range.</li>If this parameter is not input, the granularity will be automatically inferred based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>ID of the inference service. You can import up to 10 inference service IDs.</p>
                     */
                    std::vector<std::string> m_serviceIds;
                    bool m_serviceIdsHasBeenSet;

                    /**
                     * <p>Metric list, supports up to 10 metrics. Valid values: <li>cpu_usage_average: Average CPU utilization, unit: %, metric type: Float;</li><li>cpu_usage_max: Maximum CPU utilization, unit: %, metric type: Float;</li><li>gpu_usage_average: Average GPU utilization, unit: %, metric type: Float;</li><li>gpu_usage_max: Maximum GPU utilization, unit: %, metric type: Float;</li><li>instance_num_average: Average number of instances, unit: unit, metric type: Float;</li><li>instance_num_max: Maximum number of instances, unit: unit, metric type: Float;</li><li>gpu_memory_usage_max: Maximum GPU VRAM utilization, unit: %, metric type: Float;</li><li>memory_usage_average: Average memory utilization, unit: %, metric type: Float;</li><li>memory_usage_max: Maximum memory utilization, unit: %, metric type: Float;</li></p>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * <p>Start time.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time. The query time range (<code>EndTime - StartTime</code>) must be less than or equal to 30 days.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Query time granularity. Valid values:</p><li>min: 1 minute, supports queries within a 1-day range.</li><li>5min: 5 minutes, supports queries within a 7-day range.</li><li>hour: 1 hour, supports queries within a 30-day range.</li><li>day: 1 day, supports queries within a 30-day range.</li>If this parameter is not input, the granularity will be automatically inferred based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEMONITORDATAREQUEST_H_
