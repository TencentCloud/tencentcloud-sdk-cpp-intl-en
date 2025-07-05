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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_SECENTRYVALUE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_SECENTRYVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/TimingDataItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Corresponding value of security data entry
                */
                class SecEntryValue : public AbstractModel
                {
                public:
                    SecEntryValue();
                    ~SecEntryValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Metric Metric name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Metric name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metric Metric name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Metric data details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Detail Metric data details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TimingDataItem> GetDetail() const;

                    /**
                     * 设置Metric data details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _detail Metric data details
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Maximum
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Max Maximum
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMax() const;

                    /**
                     * 设置Maximum
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _max Maximum
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Average
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Avg Average
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetAvg() const;

                    /**
                     * 设置Average
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _avg Average
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sum Sum
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetSum() const;

                    /**
                     * 设置Sum
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sum Sum
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Metric name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Metric data details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TimingDataItem> m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Maximum
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Average
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_avg;
                    bool m_avgHasBeenSet;

                    /**
                     * Sum
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_sum;
                    bool m_sumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_SECENTRYVALUE_H_
