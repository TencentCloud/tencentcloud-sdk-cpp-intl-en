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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SLARULE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SLARULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/SLALabel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * SLA rule.
                */
                class SLARule : public AbstractModel
                {
                public:
                    SLARule();
                    ~SLARule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric.

Note: This field may return null, indicating that no valid value is found.
                     * @return Metric Metric.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Metric.

Note: This field may return null, indicating that no valid value is found.
                     * @param _metric Metric.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Metric aggregation method.

Note: This field may return null, indicating that no valid value is found.
                     * @return Aggregation Metric aggregation method.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetAggregation() const;

                    /**
                     * 设置Metric aggregation method.

Note: This field may return null, indicating that no valid value is found.
                     * @param _aggregation Metric aggregation method.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Condition, such as '==' '!=' '<' '<=' '>' '>='.

Note: This field may return null, indicating that no valid value is found.
                     * @return Condition Condition, such as '==' '!=' '<' '<=' '>' '>='.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Condition, such as '==' '!=' '<' '<=' '>' '>='.

Note: This field may return null, indicating that no valid value is found.
                     * @param _condition Condition, such as '==' '!=' '<' '<=' '>' '>='.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取Threshold value.

Note: This field may return null, indicating that no valid value is found.
                     * @return Value Threshold value.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置Threshold value.

Note: This field may return null, indicating that no valid value is found.
                     * @param _value Threshold value.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Label.

Note: This field may return null, indicating that no valid value is found.
                     * @return LabelFilter Label.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<SLALabel> GetLabelFilter() const;

                    /**
                     * 设置Label.

Note: This field may return null, indicating that no valid value is found.
                     * @param _labelFilter Label.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetLabelFilter(const std::vector<SLALabel>& _labelFilter);

                    /**
                     * 判断参数 LabelFilter 是否已赋值
                     * @return LabelFilter 是否已赋值
                     * 
                     */
                    bool LabelFilterHasBeenSet() const;

                    /**
                     * 获取Whether to stop performance test job.

Note: This field may return null, indicating that no valid value is found.
                     * @return AbortFlag Whether to stop performance test job.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    bool GetAbortFlag() const;

                    /**
                     * 设置Whether to stop performance test job.

Note: This field may return null, indicating that no valid value is found.
                     * @param _abortFlag Whether to stop performance test job.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetAbortFlag(const bool& _abortFlag);

                    /**
                     * 判断参数 AbortFlag 是否已赋值
                     * @return AbortFlag 是否已赋值
                     * 
                     */
                    bool AbortFlagHasBeenSet() const;

                    /**
                     * 获取Duration.

Note: This field may return null, indicating that no valid value is found.
                     * @return For Duration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetFor() const;

                    /**
                     * 设置Duration.

Note: This field may return null, indicating that no valid value is found.
                     * @param _for Duration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetFor(const std::string& _for);

                    /**
                     * 判断参数 For 是否已赋值
                     * @return For 是否已赋值
                     * 
                     */
                    bool ForHasBeenSet() const;

                private:

                    /**
                     * Metric.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Metric aggregation method.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_aggregation;
                    bool m_aggregationHasBeenSet;

                    /**
                     * Condition, such as '==' '!=' '<' '<=' '>' '>='.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Threshold value.

Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Label.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<SLALabel> m_labelFilter;
                    bool m_labelFilterHasBeenSet;

                    /**
                     * Whether to stop performance test job.

Note: This field may return null, indicating that no valid value is found.
                     */
                    bool m_abortFlag;
                    bool m_abortFlagHasBeenSet;

                    /**
                     * Duration.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_for;
                    bool m_forHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SLARULE_H_
