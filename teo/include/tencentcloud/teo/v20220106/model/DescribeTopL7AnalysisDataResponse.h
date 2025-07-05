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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETOPL7ANALYSISDATARESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETOPL7ANALYSISDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/TopDataRecord.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeTopL7AnalysisData response structure.
                */
                class DescribeTopL7AnalysisDataResponse : public AbstractModel
                {
                public:
                    DescribeTopL7AnalysisDataResponse();
                    ~DescribeTopL7AnalysisDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Top detailed data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data Top detailed data
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TopDataRecord> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Query dimension
                     * @return Type Query dimension
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Query metric
                     * @return MetricName Query metric
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                private:

                    /**
                     * Top detailed data
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TopDataRecord> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Query dimension
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Query metric
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETOPL7ANALYSISDATARESPONSE_H_
