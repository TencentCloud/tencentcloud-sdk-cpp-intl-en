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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTRULE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Label.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus alerting rule
                */
                class PrometheusAlertRule : public AbstractModel
                {
                public:
                    PrometheusAlertRule();
                    ~PrometheusAlertRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule name
                     * @return Name Rule name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule name
                     * @param _name Rule name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Prometheus statement
                     * @return Rule Prometheus statement
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置Prometheus statement
                     * @param _rule Prometheus statement
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Additional tags
                     * @return Labels Additional tags
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Additional tags
                     * @param _labels Additional tags
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Alert sending template
                     * @return Template Alert sending template
                     * 
                     */
                    std::string GetTemplate() const;

                    /**
                     * 设置Alert sending template
                     * @param _template Alert sending template
                     * 
                     */
                    void SetTemplate(const std::string& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     * 
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取Duration
                     * @return For Duration
                     * 
                     */
                    std::string GetFor() const;

                    /**
                     * 设置Duration
                     * @param _for Duration
                     * 
                     */
                    void SetFor(const std::string& _for);

                    /**
                     * 判断参数 For 是否已赋值
                     * @return For 是否已赋值
                     * 
                     */
                    bool ForHasBeenSet() const;

                    /**
                     * 获取Rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Describe Rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置Rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _describe Rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取See `annotations` in the Prometheus rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Annotations See `annotations` in the Prometheus rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Label> GetAnnotations() const;

                    /**
                     * 设置See `annotations` in the Prometheus rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _annotations See `annotations` in the Prometheus rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAnnotations(const std::vector<Label>& _annotations);

                    /**
                     * 判断参数 Annotations 是否已赋值
                     * @return Annotations 是否已赋值
                     * 
                     */
                    bool AnnotationsHasBeenSet() const;

                    /**
                     * 获取Alerting rule status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleState Alerting rule status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRuleState() const;

                    /**
                     * 设置Alerting rule status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleState Alerting rule status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleState(const int64_t& _ruleState);

                    /**
                     * 判断参数 RuleState 是否已赋值
                     * @return RuleState 是否已赋值
                     * 
                     */
                    bool RuleStateHasBeenSet() const;

                private:

                    /**
                     * Rule name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Prometheus statement
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Additional tags
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Alert sending template
                     */
                    std::string m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * Duration
                     */
                    std::string m_for;
                    bool m_forHasBeenSet;

                    /**
                     * Rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * See `annotations` in the Prometheus rule
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Label> m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * Alerting rule status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ruleState;
                    bool m_ruleStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTRULE_H_
