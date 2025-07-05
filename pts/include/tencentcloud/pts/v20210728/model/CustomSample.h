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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_CUSTOMSAMPLE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_CUSTOMSAMPLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Label.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Sample includes metric, aggregation from original metric query statement.
                */
                class CustomSample : public AbstractModel
                {
                public:
                    CustomSample();
                    ~CustomSample() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric name.
                     * @return Metric Metric name.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Metric name.
                     * @param _metric Metric name.
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取Aggregation condition.
                     * @return Aggregation Aggregation condition.
                     * 
                     */
                    std::string GetAggregation() const;

                    /**
                     * 设置Aggregation condition.
                     * @param _aggregation Aggregation condition.
                     * 
                     */
                    void SetAggregation(const std::string& _aggregation);

                    /**
                     * 判断参数 Aggregation 是否已赋值
                     * @return Aggregation 是否已赋值
                     * 
                     */
                    bool AggregationHasBeenSet() const;

                    /**
                     * 获取Label filter.

Note: This field may return null, indicating that no valid value is found.
                     * @return Labels Label filter.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Label filter.

Note: This field may return null, indicating that no valid value is found.
                     * @param _labels Label filter.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Value obtained from the query.
                     * @return Value Value obtained from the query.
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置Value obtained from the query.
                     * @param _value Value obtained from the query.
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Time is the number of milliseconds since the epoch (1970-01-01 00:00 UTC) excluding leap seconds.
                     * @return Timestamp Time is the number of milliseconds since the epoch (1970-01-01 00:00 UTC) excluding leap seconds.
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置Time is the number of milliseconds since the epoch (1970-01-01 00:00 UTC) excluding leap seconds.
                     * @param _timestamp Time is the number of milliseconds since the epoch (1970-01-01 00:00 UTC) excluding leap seconds.
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Unit corresponding to the metric, including s(second), bytes, bytes/s, reqs, reqs/s, checks, checks/s, iters, iters/s, VUs, %.
                     * @return Unit Unit corresponding to the metric, including s(second), bytes, bytes/s, reqs, reqs/s, checks, checks/s, iters, iters/s, VUs, %.
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Unit corresponding to the metric, including s(second), bytes, bytes/s, reqs, reqs/s, checks, checks/s, iters, iters/s, VUs, %.
                     * @param _unit Unit corresponding to the metric, including s(second), bytes, bytes/s, reqs, reqs/s, checks, checks/s, iters, iters/s, VUs, %.
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
                     * 获取Metric name in PTS.

Note: This field may return null, indicating that no valid value is found.
                     * @return Name Metric name in PTS.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Metric name in PTS.

Note: This field may return null, indicating that no valid value is found.
                     * @param _name Metric name in PTS.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Metric name.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Aggregation condition.
                     */
                    std::string m_aggregation;
                    bool m_aggregationHasBeenSet;

                    /**
                     * Label filter.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Value obtained from the query.
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Time is the number of milliseconds since the epoch (1970-01-01 00:00 UTC) excluding leap seconds.
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Unit corresponding to the metric, including s(second), bytes, bytes/s, reqs, reqs/s, checks, checks/s, iters, iters/s, VUs, %.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Metric name in PTS.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_CUSTOMSAMPLE_H_
