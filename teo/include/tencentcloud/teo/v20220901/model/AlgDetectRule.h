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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AclCondition.h>
#include <tencentcloud/teo/v20220901/model/AlgDetectSession.h>
#include <tencentcloud/teo/v20220901/model/AlgDetectJS.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Active bot detection rule.
                */
                class AlgDetectRule : public AbstractModel
                {
                public:
                    AlgDetectRule();
                    ~AlgDetectRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the rule.
                     * @return RuleID ID of the rule.
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置ID of the rule.
                     * @param _ruleID ID of the rule.
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取Name of the rule.
                     * @return RuleName Name of the rule.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Name of the rule.
                     * @param _ruleName Name of the rule.
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
                     * 获取Whether to enable the rule.
                     * @return Switch Whether to enable the rule.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable the rule.
                     * @param _switch Whether to enable the rule.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Condition specified for the rule.
                     * @return AlgConditions Condition specified for the rule.
                     * 
                     */
                    std::vector<AclCondition> GetAlgConditions() const;

                    /**
                     * 设置Condition specified for the rule.
                     * @param _algConditions Condition specified for the rule.
                     * 
                     */
                    void SetAlgConditions(const std::vector<AclCondition>& _algConditions);

                    /**
                     * 判断参数 AlgConditions 是否已赋值
                     * @return AlgConditions 是否已赋值
                     * 
                     */
                    bool AlgConditionsHasBeenSet() const;

                    /**
                     * 获取Validate Cookie when the condition is satisfied.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return AlgDetectSession Validate Cookie when the condition is satisfied.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    AlgDetectSession GetAlgDetectSession() const;

                    /**
                     * 设置Validate Cookie when the condition is satisfied.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _algDetectSession Validate Cookie when the condition is satisfied.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlgDetectSession(const AlgDetectSession& _algDetectSession);

                    /**
                     * 判断参数 AlgDetectSession 是否已赋值
                     * @return AlgDetectSession 是否已赋值
                     * 
                     */
                    bool AlgDetectSessionHasBeenSet() const;

                    /**
                     * 获取Validate client behavior when the condition is satisfied.
                     * @return AlgDetectJS Validate client behavior when the condition is satisfied.
                     * 
                     */
                    std::vector<AlgDetectJS> GetAlgDetectJS() const;

                    /**
                     * 设置Validate client behavior when the condition is satisfied.
                     * @param _algDetectJS Validate client behavior when the condition is satisfied.
                     * 
                     */
                    void SetAlgDetectJS(const std::vector<AlgDetectJS>& _algDetectJS);

                    /**
                     * 判断参数 AlgDetectJS 是否已赋值
                     * @return AlgDetectJS 是否已赋值
                     * 
                     */
                    bool AlgDetectJSHasBeenSet() const;

                    /**
                     * 获取The update time, which is only used as an output parameter.
                     * @return UpdateTime The update time, which is only used as an output parameter.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The update time, which is only used as an output parameter.
                     * @param _updateTime The update time, which is only used as an output parameter.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * ID of the rule.
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Name of the rule.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Whether to enable the rule.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Condition specified for the rule.
                     */
                    std::vector<AclCondition> m_algConditions;
                    bool m_algConditionsHasBeenSet;

                    /**
                     * Validate Cookie when the condition is satisfied.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    AlgDetectSession m_algDetectSession;
                    bool m_algDetectSessionHasBeenSet;

                    /**
                     * Validate client behavior when the condition is satisfied.
                     */
                    std::vector<AlgDetectJS> m_algDetectJS;
                    bool m_algDetectJSHasBeenSet;

                    /**
                     * The update time, which is only used as an output parameter.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTRULE_H_
