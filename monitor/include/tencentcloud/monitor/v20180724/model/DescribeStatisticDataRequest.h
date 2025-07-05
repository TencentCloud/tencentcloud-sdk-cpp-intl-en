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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESTATISTICDATAREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESTATISTICDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/MidQueryCondition.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeStatisticData request structure.
                */
                class DescribeStatisticDataRequest : public AbstractModel
                {
                public:
                    DescribeStatisticDataRequest();
                    ~DescribeStatisticDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Module, whose value is fixed at `monitor`
                     * @return Module Module, whose value is fixed at `monitor`
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Module, whose value is fixed at `monitor`
                     * @param _module Module, whose value is fixed at `monitor`
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Namespace. Valid values: `QCE`, `TKE2`.
                     * @return Namespace Namespace. Valid values: `QCE`, `TKE2`.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace. Valid values: `QCE`, `TKE2`.
                     * @param _namespace Namespace. Valid values: `QCE`, `TKE2`.
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Metric name list
                     * @return MetricNames Metric name list
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Metric name list
                     * @param _metricNames Metric name list
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
                     * 获取Dimension condition. The `=` and `in` operators are supported
                     * @return Conditions Dimension condition. The `=` and `in` operators are supported
                     * 
                     */
                    std::vector<MidQueryCondition> GetConditions() const;

                    /**
                     * 设置Dimension condition. The `=` and `in` operators are supported
                     * @param _conditions Dimension condition. The `=` and `in` operators are supported
                     * 
                     */
                    void SetConditions(const std::vector<MidQueryCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取Statistical period in seconds. Default value: 300. Optional values: 60, 300, 3,600, and 86,400.
Due to the storage period limit, the statistical period is subject to the time range of statistics:
60s: The time range is less than 12 hours, and the timespan between `StartTime` and the current time cannot exceed 15 days.
300s: The time range is less than three days, and the timespan between `StartTime` and the current time cannot exceed 31 days.
3,600s: The time range is less than 30 days, and the timespan between `StartTime` and the current time cannot exceed 93 days.
86,400s: The time range is less than 186 days, and the timespan between `StartTime` and the current time cannot exceed 186 days.
                     * @return Period Statistical period in seconds. Default value: 300. Optional values: 60, 300, 3,600, and 86,400.
Due to the storage period limit, the statistical period is subject to the time range of statistics:
60s: The time range is less than 12 hours, and the timespan between `StartTime` and the current time cannot exceed 15 days.
300s: The time range is less than three days, and the timespan between `StartTime` and the current time cannot exceed 31 days.
3,600s: The time range is less than 30 days, and the timespan between `StartTime` and the current time cannot exceed 93 days.
86,400s: The time range is less than 186 days, and the timespan between `StartTime` and the current time cannot exceed 186 days.
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Statistical period in seconds. Default value: 300. Optional values: 60, 300, 3,600, and 86,400.
Due to the storage period limit, the statistical period is subject to the time range of statistics:
60s: The time range is less than 12 hours, and the timespan between `StartTime` and the current time cannot exceed 15 days.
300s: The time range is less than three days, and the timespan between `StartTime` and the current time cannot exceed 31 days.
3,600s: The time range is less than 30 days, and the timespan between `StartTime` and the current time cannot exceed 93 days.
86,400s: The time range is less than 186 days, and the timespan between `StartTime` and the current time cannot exceed 186 days.
                     * @param _period Statistical period in seconds. Default value: 300. Optional values: 60, 300, 3,600, and 86,400.
Due to the storage period limit, the statistical period is subject to the time range of statistics:
60s: The time range is less than 12 hours, and the timespan between `StartTime` and the current time cannot exceed 15 days.
300s: The time range is less than three days, and the timespan between `StartTime` and the current time cannot exceed 31 days.
3,600s: The time range is less than 30 days, and the timespan between `StartTime` and the current time cannot exceed 93 days.
86,400s: The time range is less than 186 days, and the timespan between `StartTime` and the current time cannot exceed 186 days.
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Start time, which is the current time by default, such as 2020-12-08T19:51:23+08:00
                     * @return StartTime Start time, which is the current time by default, such as 2020-12-08T19:51:23+08:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time, which is the current time by default, such as 2020-12-08T19:51:23+08:00
                     * @param _startTime Start time, which is the current time by default, such as 2020-12-08T19:51:23+08:00
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
                     * 获取End time, which is the current time by default, such as 2020-12-08T19:51:23+08:00
                     * @return EndTime End time, which is the current time by default, such as 2020-12-08T19:51:23+08:00
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time, which is the current time by default, such as 2020-12-08T19:51:23+08:00
                     * @param _endTime End time, which is the current time by default, such as 2020-12-08T19:51:23+08:00
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
                     * 获取`groupBy` by the specified dimension
                     * @return GroupBys `groupBy` by the specified dimension
                     * 
                     */
                    std::vector<std::string> GetGroupBys() const;

                    /**
                     * 设置`groupBy` by the specified dimension
                     * @param _groupBys `groupBy` by the specified dimension
                     * 
                     */
                    void SetGroupBys(const std::vector<std::string>& _groupBys);

                    /**
                     * 判断参数 GroupBys 是否已赋值
                     * @return GroupBys 是否已赋值
                     * 
                     */
                    bool GroupBysHasBeenSet() const;

                private:

                    /**
                     * Module, whose value is fixed at `monitor`
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Namespace. Valid values: `QCE`, `TKE2`.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Metric name list
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * Dimension condition. The `=` and `in` operators are supported
                     */
                    std::vector<MidQueryCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * Statistical period in seconds. Default value: 300. Optional values: 60, 300, 3,600, and 86,400.
Due to the storage period limit, the statistical period is subject to the time range of statistics:
60s: The time range is less than 12 hours, and the timespan between `StartTime` and the current time cannot exceed 15 days.
300s: The time range is less than three days, and the timespan between `StartTime` and the current time cannot exceed 31 days.
3,600s: The time range is less than 30 days, and the timespan between `StartTime` and the current time cannot exceed 93 days.
86,400s: The time range is less than 186 days, and the timespan between `StartTime` and the current time cannot exceed 186 days.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Start time, which is the current time by default, such as 2020-12-08T19:51:23+08:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, which is the current time by default, such as 2020-12-08T19:51:23+08:00
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * `groupBy` by the specified dimension
                     */
                    std::vector<std::string> m_groupBys;
                    bool m_groupBysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESTATISTICDATAREQUEST_H_
