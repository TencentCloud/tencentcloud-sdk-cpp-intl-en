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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_OVERVIEWMETRICDATA_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_OVERVIEWMETRICDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/MetricTags.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Overview data.
                */
                class OverviewMetricData : public AbstractModel
                {
                public:
                    OverviewMetricData();
                    ~OverviewMetricData() = default;
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
                     * 获取First data timestamp.
                     * @return First First data timestamp.
                     * 
                     */
                    int64_t GetFirst() const;

                    /**
                     * 设置First data timestamp.
                     * @param _first First data timestamp.
                     * 
                     */
                    void SetFirst(const int64_t& _first);

                    /**
                     * 判断参数 First 是否已赋值
                     * @return First 是否已赋值
                     * 
                     */
                    bool FirstHasBeenSet() const;

                    /**
                     * 获取Last data timestamp.
                     * @return Last Last data timestamp.
                     * 
                     */
                    int64_t GetLast() const;

                    /**
                     * 设置Last data timestamp.
                     * @param _last Last data timestamp.
                     * 
                     */
                    void SetLast(const int64_t& _last);

                    /**
                     * 判断参数 Last 是否已赋值
                     * @return Last 是否已赋值
                     * 
                     */
                    bool LastHasBeenSet() const;

                    /**
                     * 获取Sampling point time interval.
                     * @return Interval Sampling point time interval.
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置Sampling point time interval.
                     * @param _interval Sampling point time interval.
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Sampling point data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataPoints Sampling point data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDataPoints() const;

                    /**
                     * 设置Sampling point data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataPoints Sampling point data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataPoints(const std::vector<std::string>& _dataPoints);

                    /**
                     * 判断参数 DataPoints 是否已赋值
                     * @return DataPoints 是否已赋值
                     * 
                     */
                    bool DataPointsHasBeenSet() const;

                    /**
                     * 获取Metric tags.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Metric tags.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MetricTags GetTags() const;

                    /**
                     * 设置Metric tags.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Metric tags.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const MetricTags& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Metric name.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * First data timestamp.
                     */
                    int64_t m_first;
                    bool m_firstHasBeenSet;

                    /**
                     * Last data timestamp.
                     */
                    int64_t m_last;
                    bool m_lastHasBeenSet;

                    /**
                     * Sampling point time interval.
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Sampling point data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_dataPoints;
                    bool m_dataPointsHasBeenSet;

                    /**
                     * Metric tags.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MetricTags m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_OVERVIEWMETRICDATA_H_
