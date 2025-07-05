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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyRule.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Metric trigger condition of alarm policy
                */
                class AlarmPolicyCondition : public AbstractModel
                {
                public:
                    AlarmPolicyCondition();
                    ~AlarmPolicyCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Judgment condition of an alarm trigger condition (`0`: Any; `1`: All; `2`: Composite). When the value is set to `2` (i.e., composite trigger conditions), this parameter should be used together with `ComplexExpression`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsUnionRule Judgment condition of an alarm trigger condition (`0`: Any; `1`: All; `2`: Composite). When the value is set to `2` (i.e., composite trigger conditions), this parameter should be used together with `ComplexExpression`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置Judgment condition of an alarm trigger condition (`0`: Any; `1`: All; `2`: Composite). When the value is set to `2` (i.e., composite trigger conditions), this parameter should be used together with `ComplexExpression`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isUnionRule Judgment condition of an alarm trigger condition (`0`: Any; `1`: All; `2`: Composite). When the value is set to `2` (i.e., composite trigger conditions), this parameter should be used together with `ComplexExpression`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsUnionRule(const int64_t& _isUnionRule);

                    /**
                     * 判断参数 IsUnionRule 是否已赋值
                     * @return IsUnionRule 是否已赋值
                     * 
                     */
                    bool IsUnionRuleHasBeenSet() const;

                    /**
                     * 获取Alarm trigger condition list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Rules Alarm trigger condition list
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AlarmPolicyRule> GetRules() const;

                    /**
                     * 设置Alarm trigger condition list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _rules Alarm trigger condition list
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRules(const std::vector<AlarmPolicyRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取The judgment expression of composite alarm trigger conditions, which is valid when the value of `IsUnionRule` is `2`. This parameter is used to determine that an alarm condition is met only when the expression values are `True` for multiple trigger conditions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComplexExpression The judgment expression of composite alarm trigger conditions, which is valid when the value of `IsUnionRule` is `2`. This parameter is used to determine that an alarm condition is met only when the expression values are `True` for multiple trigger conditions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComplexExpression() const;

                    /**
                     * 设置The judgment expression of composite alarm trigger conditions, which is valid when the value of `IsUnionRule` is `2`. This parameter is used to determine that an alarm condition is met only when the expression values are `True` for multiple trigger conditions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _complexExpression The judgment expression of composite alarm trigger conditions, which is valid when the value of `IsUnionRule` is `2`. This parameter is used to determine that an alarm condition is met only when the expression values are `True` for multiple trigger conditions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetComplexExpression(const std::string& _complexExpression);

                    /**
                     * 判断参数 ComplexExpression 是否已赋值
                     * @return ComplexExpression 是否已赋值
                     * 
                     */
                    bool ComplexExpressionHasBeenSet() const;

                private:

                    /**
                     * Judgment condition of an alarm trigger condition (`0`: Any; `1`: All; `2`: Composite). When the value is set to `2` (i.e., composite trigger conditions), this parameter should be used together with `ComplexExpression`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                    /**
                     * Alarm trigger condition list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AlarmPolicyRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * The judgment expression of composite alarm trigger conditions, which is valid when the value of `IsUnionRule` is `2`. This parameter is used to determine that an alarm condition is met only when the expression values are `True` for multiple trigger conditions.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_complexExpression;
                    bool m_complexExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYCONDITION_H_
