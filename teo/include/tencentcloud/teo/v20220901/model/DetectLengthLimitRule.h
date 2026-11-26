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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DETECTLENGTHLIMITRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DETECTLENGTHLIMITRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DetectLengthLimitCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Detection length limit rule details
                */
                class DetectLengthLimitRule : public AbstractModel
                {
                public:
                    DetectLengthLimitRule();
                    ~DetectLengthLimitRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule Id. Output only.
                     * @return RuleId Rule Id. Output only.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Rule Id. Output only.
                     * @param _ruleId Rule Id. Output only.
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule name. Output usage only.
                     * @return RuleName Rule name. Output usage only.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name. Output usage only.
                     * @param _ruleName Rule name. Output usage only.
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
                     * 获取Rule description. For output usage only.
                     * @return Description Rule description. For output usage only.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule description. For output usage only.
                     * @param _description Rule description. For output usage only.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Rule configuration condition. For output usage only.
                     * @return Conditions Rule configuration condition. For output usage only.
                     * 
                     */
                    std::vector<DetectLengthLimitCondition> GetConditions() const;

                    /**
                     * 设置Rule configuration condition. For output usage only.
                     * @param _conditions Rule configuration condition. For output usage only.
                     * 
                     */
                    void SetConditions(const std::vector<DetectLengthLimitCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取Handling method. Valid values:
<li>skip: When the request body data exceeds the detection depth set by body_depth in the Conditions output parameter, skip testing of all request body content;</li>
<li>scan: Only detect the detection depth set by body_depth in the Conditions output. Request body content beyond this depth is directly truncated, and the excess request body will not undergo security detection.</li>Output usage only.
                     * @return Action Handling method. Valid values:
<li>skip: When the request body data exceeds the detection depth set by body_depth in the Conditions output parameter, skip testing of all request body content;</li>
<li>scan: Only detect the detection depth set by body_depth in the Conditions output. Request body content beyond this depth is directly truncated, and the excess request body will not undergo security detection.</li>Output usage only.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Handling method. Valid values:
<li>skip: When the request body data exceeds the detection depth set by body_depth in the Conditions output parameter, skip testing of all request body content;</li>
<li>scan: Only detect the detection depth set by body_depth in the Conditions output. Request body content beyond this depth is directly truncated, and the excess request body will not undergo security detection.</li>Output usage only.
                     * @param _action Handling method. Valid values:
<li>skip: When the request body data exceeds the detection depth set by body_depth in the Conditions output parameter, skip testing of all request body content;</li>
<li>scan: Only detect the detection depth set by body_depth in the Conditions output. Request body content beyond this depth is directly truncated, and the excess request body will not undergo security detection.</li>Output usage only.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * Rule Id. Output only.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule name. Output usage only.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule description. For output usage only.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Rule configuration condition. For output usage only.
                     */
                    std::vector<DetectLengthLimitCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * Handling method. Valid values:
<li>skip: When the request body data exceeds the detection depth set by body_depth in the Conditions output parameter, skip testing of all request body content;</li>
<li>scan: Only detect the detection depth set by body_depth in the Conditions output. Request body content beyond this depth is directly truncated, and the excess request body will not undergo security detection.</li>Output usage only.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DETECTLENGTHLIMITRULE_H_
