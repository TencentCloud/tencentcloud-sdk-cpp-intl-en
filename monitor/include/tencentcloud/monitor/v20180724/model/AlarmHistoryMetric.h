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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHISTORYMETRIC_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHISTORYMETRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Metric information of alarm records
                */
                class AlarmHistoryMetric : public AbstractModel
                {
                public:
                    AlarmHistoryMetric();
                    ~AlarmHistoryMetric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Namespace used to query data by Tencent Cloud service monitoring type
                     * @return QceNamespace Namespace used to query data by Tencent Cloud service monitoring type
                     */
                    std::string GetQceNamespace() const;

                    /**
                     * 设置Namespace used to query data by Tencent Cloud service monitoring type
                     * @param QceNamespace Namespace used to query data by Tencent Cloud service monitoring type
                     */
                    void SetQceNamespace(const std::string& _qceNamespace);

                    /**
                     * 判断参数 QceNamespace 是否已赋值
                     * @return QceNamespace 是否已赋值
                     */
                    bool QceNamespaceHasBeenSet() const;

                    /**
                     * 获取Metric name
                     * @return MetricName Metric name
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name
                     * @param MetricName Metric name
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Statistical period
                     * @return Period Statistical period
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Statistical period
                     * @param Period Statistical period
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Value triggering alarm
                     * @return Value Value triggering alarm
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value triggering alarm
                     * @param Value Value triggering alarm
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Metric display name
                     * @return Description Metric display name
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Metric display name
                     * @param Description Metric display name
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Namespace used to query data by Tencent Cloud service monitoring type
                     */
                    std::string m_qceNamespace;
                    bool m_qceNamespaceHasBeenSet;

                    /**
                     * Metric name
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Statistical period
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Value triggering alarm
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Metric display name
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHISTORYMETRIC_H_
