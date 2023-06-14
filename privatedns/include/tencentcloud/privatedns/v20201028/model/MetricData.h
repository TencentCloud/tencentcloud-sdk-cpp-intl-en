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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_METRICDATA_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_METRICDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/DatePoint.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Statistics table
                */
                class MetricData : public AbstractModel
                {
                public:
                    MetricData();
                    ~MetricData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource description
                     * @return Resource Resource description
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Resource description
                     * @param _resource Resource description
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Table name
                     * @return Metric Table name
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Table name
                     * @param _metric Table name
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
                     * 获取Table data
                     * @return DataSet Table data
                     * 
                     */
                    std::vector<DatePoint> GetDataSet() const;

                    /**
                     * 设置Table data
                     * @param _dataSet Table data
                     * 
                     */
                    void SetDataSet(const std::vector<DatePoint>& _dataSet);

                    /**
                     * 判断参数 DataSet 是否已赋值
                     * @return DataSet 是否已赋值
                     * 
                     */
                    bool DataSetHasBeenSet() const;

                    /**
                     * 获取The total number of requests within the query scope.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MetricCount The total number of requests within the query scope.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetMetricCount() const;

                    /**
                     * 设置The total number of requests within the query scope.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _metricCount The total number of requests within the query scope.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMetricCount(const int64_t& _metricCount);

                    /**
                     * 判断参数 MetricCount 是否已赋值
                     * @return MetricCount 是否已赋值
                     * 
                     */
                    bool MetricCountHasBeenSet() const;

                private:

                    /**
                     * Resource description
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Table name
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Table data
                     */
                    std::vector<DatePoint> m_dataSet;
                    bool m_dataSetHasBeenSet;

                    /**
                     * The total number of requests within the query scope.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_metricCount;
                    bool m_metricCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_METRICDATA_H_
