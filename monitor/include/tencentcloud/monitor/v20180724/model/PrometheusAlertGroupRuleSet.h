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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTGROUPRULESET_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTGROUPRULESET_H_

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
                * Prometheus alert rule information within the group.
                */
                class PrometheusAlertGroupRuleSet : public AbstractModel
                {
                public:
                    PrometheusAlertGroupRuleSet();
                    ~PrometheusAlertGroupRuleSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alert rule name. same name is not allowed in the same Alert group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleName Alert rule name. same name is not allowed in the same Alert group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Alert rule name. same name is not allowed in the same Alert group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleName Alert rule name. same name is not allowed in the same Alert group.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Prometheus alert label list.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Labels Prometheus alert label list.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PrometheusRuleKV> GetLabels() const;

                    /**
                     * 设置Prometheus alert label list.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _labels Prometheus alert label list.

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
                     * 获取Prometheus alert annotation list.

Alarm object and Alarm message are special fields of Prometheus Rule Annotations. they need to pass through Annotations for transmission. the corresponding keys are summary and description respectively.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Annotations Prometheus alert annotation list.

Alarm object and Alarm message are special fields of Prometheus Rule Annotations. they need to pass through Annotations for transmission. the corresponding keys are summary and description respectively.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PrometheusRuleKV> GetAnnotations() const;

                    /**
                     * 设置Prometheus alert annotation list.

Alarm object and Alarm message are special fields of Prometheus Rule Annotations. they need to pass through Annotations for transmission. the corresponding keys are summary and description respectively.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _annotations Prometheus alert annotation list.

Alarm object and Alarm message are special fields of Prometheus Rule Annotations. they need to pass through Annotations for transmission. the corresponding keys are summary and description respectively.
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
                     * 获取Alert will be triggered after 'Expr' satisfied for 'Duration'.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Duration Alert will be triggered after 'Expr' satisfied for 'Duration'.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置Alert will be triggered after 'Expr' satisfied for 'Duration'.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _duration Alert will be triggered after 'Expr' satisfied for 'Duration'.

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
                     * 获取Alert expression. see <a href="https://www.tencentcloud.com/document/product/1416/56008?from_cn_redirect=1">alert rule description</a>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Expr Alert expression. see <a href="https://www.tencentcloud.com/document/product/1416/56008?from_cn_redirect=1">alert rule description</a>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpr() const;

                    /**
                     * 设置Alert expression. see <a href="https://www.tencentcloud.com/document/product/1416/56008?from_cn_redirect=1">alert rule description</a>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expr Alert expression. see <a href="https://www.tencentcloud.com/document/product/1416/56008?from_cn_redirect=1">alert rule description</a>.
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
                     * 获取Alert rule status.
2 - enable.
3 - disabled.
Enabled by default if left empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return State Alert rule status.
2 - enable.
3 - disabled.
Enabled by default if left empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置Alert rule status.
2 - enable.
3 - disabled.
Enabled by default if left empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _state Alert rule status.
2 - enable.
3 - disabled.
Enabled by default if left empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * Alert rule name. same name is not allowed in the same Alert group.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Prometheus alert label list.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusRuleKV> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Prometheus alert annotation list.

Alarm object and Alarm message are special fields of Prometheus Rule Annotations. they need to pass through Annotations for transmission. the corresponding keys are summary and description respectively.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusRuleKV> m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * Alert will be triggered after 'Expr' satisfied for 'Duration'.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Alert expression. see <a href="https://www.tencentcloud.com/document/product/1416/56008?from_cn_redirect=1">alert rule description</a>.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expr;
                    bool m_exprHasBeenSet;

                    /**
                     * Alert rule status.
2 - enable.
3 - disabled.
Enabled by default if left empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTGROUPRULESET_H_
