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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GETMONITORDATAREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GETMONITORDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Instance.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * GetMonitorData request structure.
                */
                class GetMonitorDataRequest : public AbstractModel
                {
                public:
                    GetMonitorDataRequest();
                    ~GetMonitorDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Namespace. Each Tencent Cloud product has a namespace
                     * @return Namespace Namespace. Each Tencent Cloud product has a namespace
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace. Each Tencent Cloud product has a namespace
                     * @param Namespace Namespace. Each Tencent Cloud product has a namespace
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Metric name. For detailed metric descriptions of each Tencent Cloud product, see the corresponding [Monitoring API](https://cloud.tencent.com/document/product/248/30384) document
                     * @return MetricName Metric name. For detailed metric descriptions of each Tencent Cloud product, see the corresponding [Monitoring API](https://cloud.tencent.com/document/product/248/30384) document
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name. For detailed metric descriptions of each Tencent Cloud product, see the corresponding [Monitoring API](https://cloud.tencent.com/document/product/248/30384) document
                     * @param MetricName Metric name. For detailed metric descriptions of each Tencent Cloud product, see the corresponding [Monitoring API](https://cloud.tencent.com/document/product/248/30384) document
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Combination of instance object dimensions
                     * @return Instances Combination of instance object dimensions
                     */
                    std::vector<Instance> GetInstances() const;

                    /**
                     * 设置Combination of instance object dimensions
                     * @param Instances Combination of instance object dimensions
                     */
                    void SetInstances(const std::vector<Instance>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取Monitoring statistical period. The default value is 300, and the unit is s
                     * @return Period Monitoring statistical period. The default value is 300, and the unit is s
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Monitoring statistical period. The default value is 300, and the unit is s
                     * @param Period Monitoring statistical period. The default value is 300, and the unit is s
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Start time such as 2018-09-22T19:51:23+08:00
                     * @return StartTime Start time such as 2018-09-22T19:51:23+08:00
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time such as 2018-09-22T19:51:23+08:00
                     * @param StartTime Start time such as 2018-09-22T19:51:23+08:00
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time. Uses the current time by default and cannot be earlier than StartTime
                     * @return EndTime End time. Uses the current time by default and cannot be earlier than StartTime
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time. Uses the current time by default and cannot be earlier than StartTime
                     * @param EndTime End time. Uses the current time by default and cannot be earlier than StartTime
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Namespace. Each Tencent Cloud product has a namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Metric name. For detailed metric descriptions of each Tencent Cloud product, see the corresponding [Monitoring API](https://cloud.tencent.com/document/product/248/30384) document
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Combination of instance object dimensions
                     */
                    std::vector<Instance> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * Monitoring statistical period. The default value is 300, and the unit is s
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Start time such as 2018-09-22T19:51:23+08:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time. Uses the current time by default and cannot be earlier than StartTime
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GETMONITORDATAREQUEST_H_
