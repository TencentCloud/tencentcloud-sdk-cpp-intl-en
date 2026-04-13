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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FLOATTIMINGTYPEVALUE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FLOATTIMINGTYPEVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/FloatTimingDataItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Time series type details.
                */
                class FloatTimingTypeValue : public AbstractModel
                {
                public:
                    FloatTimingTypeValue();
                    ~FloatTimingTypeValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data and.
                     * @return Sum Data and.
                     * 
                     */
                    double GetSum() const;

                    /**
                     * 设置Data and.
                     * @param _sum Data and.
                     * 
                     */
                    void SetSum(const double& _sum);

                    /**
                     * 判断参数 Sum 是否已赋值
                     * @return Sum 是否已赋值
                     * 
                     */
                    bool SumHasBeenSet() const;

                    /**
                     * 获取Maximum value.
                     * @return Max Maximum value.
                     * 
                     */
                    double GetMax() const;

                    /**
                     * 设置Maximum value.
                     * @param _max Maximum value.
                     * 
                     */
                    void SetMax(const double& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取Average.
                     * @return Avg Average.
                     * 
                     */
                    double GetAvg() const;

                    /**
                     * 设置Average.
                     * @param _avg Average.
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
                     * 获取Metric name.
                     * @return MetricName Metric name.
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name.
                     * @param _metricName Metric name.
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
                     * 获取Details.
                     * @return Detail Details.
                     * 
                     */
                    std::vector<FloatTimingDataItem> GetDetail() const;

                    /**
                     * 设置Details.
                     * @param _detail Details.
                     * 
                     */
                    void SetDetail(const std::vector<FloatTimingDataItem>& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * Data and.
                     */
                    double m_sum;
                    bool m_sumHasBeenSet;

                    /**
                     * Maximum value.
                     */
                    double m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Average.
                     */
                    double m_avg;
                    bool m_avgHasBeenSet;

                    /**
                     * Metric name.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Details.
                     */
                    std::vector<FloatTimingDataItem> m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FLOATTIMINGTYPEVALUE_H_
