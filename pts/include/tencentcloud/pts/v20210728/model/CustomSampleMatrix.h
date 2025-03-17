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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_CUSTOMSAMPLEMATRIX_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_CUSTOMSAMPLEMATRIX_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/SampleStream.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Metric matrix, which contains multiple metric sequence arrays.
                */
                class CustomSampleMatrix : public AbstractModel
                {
                public:
                    CustomSampleMatrix();
                    ~CustomSampleMatrix() = default;
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
                     * 获取Aggregation function.
                     * @return Aggregation Aggregation function.
                     * 
                     */
                    std::string GetAggregation() const;

                    /**
                     * 设置Aggregation function.
                     * @param _aggregation Aggregation function.
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
                     * 获取Metric unit.

Note: This field may return null, indicating that no valid value is found.
                     * @return Unit Metric unit.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Metric unit.

Note: This field may return null, indicating that no valid value is found.
                     * @param _unit Metric unit.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Metric sequence array.

Note: This field may return null, indicating that no valid value is found.
                     * @return Streams Metric sequence array.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<SampleStream> GetStreams() const;

                    /**
                     * 设置Metric sequence array.

Note: This field may return null, indicating that no valid value is found.
                     * @param _streams Metric sequence array.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetStreams(const std::vector<SampleStream>& _streams);

                    /**
                     * 判断参数 Streams 是否已赋值
                     * @return Streams 是否已赋值
                     * 
                     */
                    bool StreamsHasBeenSet() const;

                private:

                    /**
                     * Metric name.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Aggregation function.
                     */
                    std::string m_aggregation;
                    bool m_aggregationHasBeenSet;

                    /**
                     * Metric unit.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Metric sequence array.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<SampleStream> m_streams;
                    bool m_streamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_CUSTOMSAMPLEMATRIX_H_
