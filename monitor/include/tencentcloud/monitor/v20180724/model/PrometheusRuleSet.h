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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSRULESET_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSRULESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusRuleKV.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Set of Prometheus alerting rules
                */
                class PrometheusRuleSet : public AbstractModel
                {
                public:
                    PrometheusRuleSet();
                    ~PrometheusRuleSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleId Rule ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule name
                     * @return RuleName Rule name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
                     * @param _ruleName Rule name
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Rule status code
                     * @return RuleState Rule status code
                     * 
                     */
                    int64_t GetRuleState() const;

                    /**
                     * 设置Rule status code
                     * @param _ruleState Rule status code
                     * 
                     */
                    void SetRuleState(const int64_t& _ruleState);

                    /**
                     * 判断参数 RuleState 是否已赋值
                     * @return RuleState 是否已赋值
                     * 
                     */
                    bool RuleStateHasBeenSet() const;

                    /**
                     * 获取Rule category
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Rule category
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Rule category
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Rule category
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取List of rule tags
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Labels List of rule tags
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PrometheusRuleKV> GetLabels() const;

                    /**
                     * 设置List of rule tags
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _labels List of rule tags
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabels(const std::vector<PrometheusRuleKV>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取List of rule annotations
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Annotations List of rule annotations
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PrometheusRuleKV> GetAnnotations() const;

                    /**
                     * 设置List of rule annotations
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _annotations List of rule annotations
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAnnotations(const std::vector<PrometheusRuleKV>& _annotations);

                    /**
                     * 判断参数 Annotations 是否已赋值
                     * @return Annotations 是否已赋值
                     * 
                     */
                    bool AnnotationsHasBeenSet() const;

                    /**
                     * 获取Rule expression
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Expr Rule expression
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpr() const;

                    /**
                     * 设置Rule expression
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expr Rule expression
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpr(const std::string& _expr);

                    /**
                     * 判断参数 Expr 是否已赋值
                     * @return Expr 是否已赋值
                     * 
                     */
                    bool ExprHasBeenSet() const;

                    /**
                     * 获取Rule alert duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Duration Rule alert duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置Rule alert duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _duration Rule alert duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取List of alert recipient groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Receivers List of alert recipient groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置List of alert recipient groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _receivers List of alert recipient groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReceivers(const std::vector<std::string>& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     * 
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取Rule status. Valid values:
<li>unknown: Unknown</li>
<li>pending: Loading</li>
<li>ok: Running</li>
<li>err: Error</li>
                     * @return Health Rule status. Valid values:
<li>unknown: Unknown</li>
<li>pending: Loading</li>
<li>ok: Running</li>
<li>err: Error</li>
                     * 
                     */
                    std::string GetHealth() const;

                    /**
                     * 设置Rule status. Valid values:
<li>unknown: Unknown</li>
<li>pending: Loading</li>
<li>ok: Running</li>
<li>err: Error</li>
                     * @param _health Rule status. Valid values:
<li>unknown: Unknown</li>
<li>pending: Loading</li>
<li>ok: Running</li>
<li>err: Error</li>
                     * 
                     */
                    void SetHealth(const std::string& _health);

                    /**
                     * 判断参数 Health 是否已赋值
                     * @return Health 是否已赋值
                     * 
                     */
                    bool HealthHasBeenSet() const;

                    /**
                     * 获取Rule creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedAt Rule creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Rule creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createdAt Rule creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Rule update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedAt Rule update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Rule update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updatedAt Rule update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule status code
                     */
                    int64_t m_ruleState;
                    bool m_ruleStateHasBeenSet;

                    /**
                     * Rule category
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * List of rule tags
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusRuleKV> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * List of rule annotations
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusRuleKV> m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * Rule expression
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expr;
                    bool m_exprHasBeenSet;

                    /**
                     * Rule alert duration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * List of alert recipient groups
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * Rule status. Valid values:
<li>unknown: Unknown</li>
<li>pending: Loading</li>
<li>ok: Running</li>
<li>err: Error</li>
                     */
                    std::string m_health;
                    bool m_healthHasBeenSet;

                    /**
                     * Rule creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Rule update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSRULESET_H_
