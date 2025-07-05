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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECENTRYVALUE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECENTRYVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/TimingDataItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The security data queried by metric
                */
                class SecEntryValue : public AbstractModel
                {
                public:
                    SecEntryValue();
                    ~SecEntryValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The metric name.
                     * @return Metric The metric name.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置The metric name.
                     * @param _metric The metric name.
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
                     * 获取The time-series data details.
                     * @return Detail The time-series data details.
                     * 
                     */
                    std::vector<TimingDataItem> GetDetail() const;

                    /**
                     * 设置The time-series data details.
                     * @param _detail The time-series data details.
                     * 
                     */
                    void SetDetail(const std::vector<TimingDataItem>& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取The maximum value.
                     * @return Max The maximum value.
                     * 
                     */
                    int64_t GetMax() const;

                    /**
                     * 设置The maximum value.
                     * @param _max The maximum value.
                     * 
                     */
                    void SetMax(const int64_t& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取The average value.
                     * @return Avg The average value.
                     * 
                     */
                    double GetAvg() const;

                    /**
                     * 设置The average value.
                     * @param _avg The average value.
                     * 
                     */
                    void SetAvg(const double& _avg);

                    /**
                     * 判断参数 Avg 是否已赋值
                     * @return Avg 是否已赋值
                     * 
                     */
                    bool AvgHasBeenSet() const;

                    /**
                     * 获取Sum
                     * @return Sum Sum
                     * 
                     */
                    double GetSum() const;

                    /**
                     * 设置Sum
                     * @param _sum Sum
                     * 
                     */
                    void SetSum(const double& _sum);

                    /**
                     * 判断参数 Sum 是否已赋值
                     * @return Sum 是否已赋值
                     * 
                     */
                    bool SumHasBeenSet() const;

                private:

                    /**
                     * The metric name.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * The time-series data details.
                     */
                    std::vector<TimingDataItem> m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * The maximum value.
                     */
                    int64_t m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * The average value.
                     */
                    double m_avg;
                    bool m_avgHasBeenSet;

                    /**
                     * Sum
                     */
                    double m_sum;
                    bool m_sumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECENTRYVALUE_H_
