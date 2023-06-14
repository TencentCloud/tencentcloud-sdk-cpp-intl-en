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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSALERTRULE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSALERTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * PROM instance alarm rule
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
                     * 获取PromQL contents
                     * @return Rule PromQL contents
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置PromQL contents
                     * @param _rule PromQL contents
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
                     * 获取Additional labels
                     * @return Labels Additional labels
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Additional labels
                     * @param _labels Additional labels
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
                     * 获取Alarm delivery template
                     * @return Template Alarm delivery template
                     * 
                     */
                    std::string GetTemplate() const;

                    /**
                     * 设置Alarm delivery template
                     * @param _template Alarm delivery template
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
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return Describe Rule description
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置Rule description
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _describe Rule description
Note: this field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Refer to annotations in prometheus rule
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return Annotations Refer to annotations in prometheus rule
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<Label> GetAnnotations() const;

                    /**
                     * 设置Refer to annotations in prometheus rule
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _annotations Refer to annotations in prometheus rule
Note: this field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Alarm rule status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RuleState Alarm rule status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRuleState() const;

                    /**
                     * 设置Alarm rule status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _ruleState Alarm rule status
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * PromQL contents
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Additional labels
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Alarm delivery template
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
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * Refer to annotations in prometheus rule
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<Label> m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * Alarm rule status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_ruleState;
                    bool m_ruleStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSALERTRULE_H_
