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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICSET_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PeriodsSt.h>
#include <tencentcloud/monitor/v20180724/model/MetricObjectMeaning.h>
#include <tencentcloud/monitor/v20180724/model/DimensionsDesc.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Description of the unit and supported statistical period of the business metric
                */
                class MetricSet : public AbstractModel
                {
                public:
                    MetricSet();
                    ~MetricSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Namespace. Each Tencent Cloud product has a namespace
                     * @return Namespace Namespace. Each Tencent Cloud product has a namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace. Each Tencent Cloud product has a namespace
                     * @param _namespace Namespace. Each Tencent Cloud product has a namespace
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
                     * 获取Metric Name
                     * @return MetricName Metric Name
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric Name
                     * @param _metricName Metric Name
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
                     * 获取Unit used by the metric
                     * @return Unit Unit used by the metric
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Unit used by the metric
                     * @param _unit Unit used by the metric
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取Unit used by the metric
                     * @return UnitCname Unit used by the metric
                     * 
                     */
                    std::string GetUnitCname() const;

                    /**
                     * 设置Unit used by the metric
                     * @param _unitCname Unit used by the metric
                     * 
                     */
                    void SetUnitCname(const std::string& _unitCname);

                    /**
                     * 判断参数 UnitCname 是否已赋值
                     * @return UnitCname 是否已赋值
                     * 
                     */
                    bool UnitCnameHasBeenSet() const;

                    /**
                     * 获取Statistical period in seconds supported by the metric, such as 60 and 300
                     * @return Period Statistical period in seconds supported by the metric, such as 60 and 300
                     * 
                     */
                    std::vector<int64_t> GetPeriod() const;

                    /**
                     * 设置Statistical period in seconds supported by the metric, such as 60 and 300
                     * @param _period Statistical period in seconds supported by the metric, such as 60 and 300
                     * 
                     */
                    void SetPeriod(const std::vector<int64_t>& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Metric method during the statistical period
                     * @return Periods Metric method during the statistical period
                     * 
                     */
                    std::vector<PeriodsSt> GetPeriods() const;

                    /**
                     * 设置Metric method during the statistical period
                     * @param _periods Metric method during the statistical period
                     * 
                     */
                    void SetPeriods(const std::vector<PeriodsSt>& _periods);

                    /**
                     * 判断参数 Periods 是否已赋值
                     * @return Periods 是否已赋值
                     * 
                     */
                    bool PeriodsHasBeenSet() const;

                    /**
                     * 获取Meaning of the statistical metric
                     * @return Meaning Meaning of the statistical metric
                     * 
                     */
                    MetricObjectMeaning GetMeaning() const;

                    /**
                     * 设置Meaning of the statistical metric
                     * @param _meaning Meaning of the statistical metric
                     * 
                     */
                    void SetMeaning(const MetricObjectMeaning& _meaning);

                    /**
                     * 判断参数 Meaning 是否已赋值
                     * @return Meaning 是否已赋值
                     * 
                     */
                    bool MeaningHasBeenSet() const;

                    /**
                     * 获取Dimension description
                     * @return Dimensions Dimension description
                     * 
                     */
                    std::vector<DimensionsDesc> GetDimensions() const;

                    /**
                     * 设置Dimension description
                     * @param _dimensions Dimension description
                     * 
                     */
                    void SetDimensions(const std::vector<DimensionsDesc>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取Metric name (in Chinese).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MetricCName Metric name (in Chinese).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMetricCName() const;

                    /**
                     * 设置Metric name (in Chinese).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _metricCName Metric name (in Chinese).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetricCName(const std::string& _metricCName);

                    /**
                     * 判断参数 MetricCName 是否已赋值
                     * @return MetricCName 是否已赋值
                     * 
                     */
                    bool MetricCNameHasBeenSet() const;

                    /**
                     * 获取Metric name (in English).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MetricEName Metric name (in English).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMetricEName() const;

                    /**
                     * 设置Metric name (in English).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _metricEName Metric name (in English).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetricEName(const std::string& _metricEName);

                    /**
                     * 判断参数 MetricEName 是否已赋值
                     * @return MetricEName 是否已赋值
                     * 
                     */
                    bool MetricENameHasBeenSet() const;

                private:

                    /**
                     * Namespace. Each Tencent Cloud product has a namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Metric Name
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Unit used by the metric
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Unit used by the metric
                     */
                    std::string m_unitCname;
                    bool m_unitCnameHasBeenSet;

                    /**
                     * Statistical period in seconds supported by the metric, such as 60 and 300
                     */
                    std::vector<int64_t> m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Metric method during the statistical period
                     */
                    std::vector<PeriodsSt> m_periods;
                    bool m_periodsHasBeenSet;

                    /**
                     * Meaning of the statistical metric
                     */
                    MetricObjectMeaning m_meaning;
                    bool m_meaningHasBeenSet;

                    /**
                     * Dimension description
                     */
                    std::vector<DimensionsDesc> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * Metric name (in Chinese).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_metricCName;
                    bool m_metricCNameHasBeenSet;

                    /**
                     * Metric name (in English).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_metricEName;
                    bool m_metricENameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICSET_H_
