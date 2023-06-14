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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_METRICSTATISTICSINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_METRICSTATISTICSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/StatisticsDataInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * One-metric statistics
                */
                class MetricStatisticsInfo : public AbstractModel
                {
                public:
                    MetricStatisticsInfo();
                    ~MetricStatisticsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Metric statistics
                     * @return MetricData Metric statistics
                     * 
                     */
                    std::vector<StatisticsDataInfo> GetMetricData() const;

                    /**
                     * 设置Metric statistics
                     * @param _metricData Metric statistics
                     * 
                     */
                    void SetMetricData(const std::vector<StatisticsDataInfo>& _metricData);

                    /**
                     * 判断参数 MetricData 是否已赋值
                     * @return MetricData 是否已赋值
                     * 
                     */
                    bool MetricDataHasBeenSet() const;

                private:

                    /**
                     * Metric name
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Metric statistics
                     */
                    std::vector<StatisticsDataInfo> m_metricData;
                    bool m_metricDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_METRICSTATISTICSINFO_H_
