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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_METRICLABELWITHVALUES_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_METRICLABELWITHVALUES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/LabelWithValues.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Metric provided by PTS with labels and values.
                */
                class MetricLabelWithValues : public AbstractModel
                {
                public:
                    MetricLabelWithValues();
                    ~MetricLabelWithValues() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Labels and values.
                     * @return LabelValuesSet Labels and values.
                     * 
                     */
                    std::vector<LabelWithValues> GetLabelValuesSet() const;

                    /**
                     * 设置Labels and values.
                     * @param _labelValuesSet Labels and values.
                     * 
                     */
                    void SetLabelValuesSet(const std::vector<LabelWithValues>& _labelValuesSet);

                    /**
                     * 判断参数 LabelValuesSet 是否已赋值
                     * @return LabelValuesSet 是否已赋值
                     * 
                     */
                    bool LabelValuesSetHasBeenSet() const;

                private:

                    /**
                     * Metric name.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Labels and values.
                     */
                    std::vector<LabelWithValues> m_labelValuesSet;
                    bool m_labelValuesSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_METRICLABELWITHVALUES_H_
