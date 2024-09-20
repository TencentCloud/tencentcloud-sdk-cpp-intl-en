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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKMONITOR_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKMONITOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Monitoring metrics
                */
                class TaskMonitor : public AbstractModel
                {
                public:
                    TaskMonitor();
                    ~TaskMonitor() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Experiment monitoring metric ID
                     * @return TaskMonitorId Experiment monitoring metric ID
                     * 
                     */
                    int64_t GetTaskMonitorId() const;

                    /**
                     * 设置Experiment monitoring metric ID
                     * @param _taskMonitorId Experiment monitoring metric ID
                     * 
                     */
                    void SetTaskMonitorId(const int64_t& _taskMonitorId);

                    /**
                     * 判断参数 TaskMonitorId 是否已赋值
                     * @return TaskMonitorId 是否已赋值
                     * 
                     */
                    bool TaskMonitorIdHasBeenSet() const;

                    /**
                     * 获取Monitoring metric ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetricId Monitoring metric ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMetricId() const;

                    /**
                     * 设置Monitoring metric ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metricId Monitoring metric ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetricId(const uint64_t& _metricId);

                    /**
                     * 判断参数 MetricId 是否已赋值
                     * @return MetricId 是否已赋值
                     * 
                     */
                    bool MetricIdHasBeenSet() const;

                    /**
                     * 获取Object type ID of the monitoring metric
                     * @return TaskMonitorObjectTypeId Object type ID of the monitoring metric
                     * 
                     */
                    int64_t GetTaskMonitorObjectTypeId() const;

                    /**
                     * 设置Object type ID of the monitoring metric
                     * @param _taskMonitorObjectTypeId Object type ID of the monitoring metric
                     * 
                     */
                    void SetTaskMonitorObjectTypeId(const int64_t& _taskMonitorObjectTypeId);

                    /**
                     * 判断参数 TaskMonitorObjectTypeId 是否已赋值
                     * @return TaskMonitorObjectTypeId 是否已赋值
                     * 
                     */
                    bool TaskMonitorObjectTypeIdHasBeenSet() const;

                    /**
                     * 获取Metric name
                     * @return MetricName Metric name
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name
                     * @param _metricName Metric name
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Instance ID list
                     * @return InstancesIds Instance ID list
                     * 
                     */
                    std::vector<std::string> GetInstancesIds() const;

                    /**
                     * 设置Instance ID list
                     * @param _instancesIds Instance ID list
                     * 
                     */
                    void SetInstancesIds(const std::vector<std::string>& _instancesIds);

                    /**
                     * 判断参数 InstancesIds 是否已赋值
                     * @return InstancesIds 是否已赋值
                     * 
                     */
                    bool InstancesIdsHasBeenSet() const;

                    /**
                     * 获取Metric in Chinese
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetricChineseName Metric in Chinese
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMetricChineseName() const;

                    /**
                     * 设置Metric in Chinese
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metricChineseName Metric in Chinese
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetricChineseName(const std::string& _metricChineseName);

                    /**
                     * 判断参数 MetricChineseName 是否已赋值
                     * @return MetricChineseName 是否已赋值
                     * 
                     */
                    bool MetricChineseNameHasBeenSet() const;

                    /**
                     * 获取Unit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Unit Unit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Unit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unit Unit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                private:

                    /**
                     * Experiment monitoring metric ID
                     */
                    int64_t m_taskMonitorId;
                    bool m_taskMonitorIdHasBeenSet;

                    /**
                     * Monitoring metric ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_metricId;
                    bool m_metricIdHasBeenSet;

                    /**
                     * Object type ID of the monitoring metric
                     */
                    int64_t m_taskMonitorObjectTypeId;
                    bool m_taskMonitorObjectTypeIdHasBeenSet;

                    /**
                     * Metric name
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Instance ID list
                     */
                    std::vector<std::string> m_instancesIds;
                    bool m_instancesIdsHasBeenSet;

                    /**
                     * Metric in Chinese
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_metricChineseName;
                    bool m_metricChineseNameHasBeenSet;

                    /**
                     * Unit
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKMONITOR_H_
