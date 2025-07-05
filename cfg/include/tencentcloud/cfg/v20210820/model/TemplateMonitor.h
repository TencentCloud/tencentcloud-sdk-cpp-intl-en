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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEMONITOR_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEMONITOR_H_

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
                class TemplateMonitor : public AbstractModel
                {
                public:
                    TemplateMonitor();
                    ~TemplateMonitor() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取pk
                     * @return MonitorId pk
                     * 
                     */
                    int64_t GetMonitorId() const;

                    /**
                     * 设置pk
                     * @param _monitorId pk
                     * 
                     */
                    void SetMonitorId(const int64_t& _monitorId);

                    /**
                     * 判断参数 MonitorId 是否已赋值
                     * @return MonitorId 是否已赋值
                     * 
                     */
                    bool MonitorIdHasBeenSet() const;

                    /**
                     * 获取Monitoring metric ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetricId Monitoring metric ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMetricId() const;

                    /**
                     * 设置Monitoring metric ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metricId Monitoring metric ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetricId(const int64_t& _metricId);

                    /**
                     * 判断参数 MetricId 是否已赋值
                     * @return MetricId 是否已赋值
                     * 
                     */
                    bool MetricIdHasBeenSet() const;

                    /**
                     * 获取Object type ID of the monitoring metric
                     * @return ObjectTypeId Object type ID of the monitoring metric
                     * 
                     */
                    int64_t GetObjectTypeId() const;

                    /**
                     * 设置Object type ID of the monitoring metric
                     * @param _objectTypeId Object type ID of the monitoring metric
                     * 
                     */
                    void SetObjectTypeId(const int64_t& _objectTypeId);

                    /**
                     * 判断参数 ObjectTypeId 是否已赋值
                     * @return ObjectTypeId 是否已赋值
                     * 
                     */
                    bool ObjectTypeIdHasBeenSet() const;

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

                private:

                    /**
                     * pk
                     */
                    int64_t m_monitorId;
                    bool m_monitorIdHasBeenSet;

                    /**
                     * Monitoring metric ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_metricId;
                    bool m_metricIdHasBeenSet;

                    /**
                     * Object type ID of the monitoring metric
                     */
                    int64_t m_objectTypeId;
                    bool m_objectTypeIdHasBeenSet;

                    /**
                     * Metric name
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Metric in Chinese
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_metricChineseName;
                    bool m_metricChineseNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEMONITOR_H_
