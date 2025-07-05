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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONITORFLOATMETRICSERIESDATA_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONITORFLOATMETRICSERIESDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/MonitorFloatMetric.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Monitoring metric value in float type in a unit of time interval
                */
                class MonitorFloatMetricSeriesData : public AbstractModel
                {
                public:
                    MonitorFloatMetricSeriesData();
                    ~MonitorFloatMetricSeriesData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Monitoring metric.
                     * @return Series Monitoring metric.
                     * 
                     */
                    std::vector<MonitorFloatMetric> GetSeries() const;

                    /**
                     * 设置Monitoring metric.
                     * @param _series Monitoring metric.
                     * 
                     */
                    void SetSeries(const std::vector<MonitorFloatMetric>& _series);

                    /**
                     * 判断参数 Series 是否已赋值
                     * @return Series 是否已赋值
                     * 
                     */
                    bool SeriesHasBeenSet() const;

                    /**
                     * 获取Timestamp corresponding to monitoring metric.
                     * @return Timestamp Timestamp corresponding to monitoring metric.
                     * 
                     */
                    std::vector<int64_t> GetTimestamp() const;

                    /**
                     * 设置Timestamp corresponding to monitoring metric.
                     * @param _timestamp Timestamp corresponding to monitoring metric.
                     * 
                     */
                    void SetTimestamp(const std::vector<int64_t>& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * Monitoring metric.
                     */
                    std::vector<MonitorFloatMetric> m_series;
                    bool m_seriesHasBeenSet;

                    /**
                     * Timestamp corresponding to monitoring metric.
                     */
                    std::vector<int64_t> m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONITORFLOATMETRICSERIESDATA_H_
