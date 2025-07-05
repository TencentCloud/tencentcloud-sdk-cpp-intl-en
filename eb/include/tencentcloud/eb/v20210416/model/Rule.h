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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_RULE_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_RULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/TargetBrief.h>
#include <tencentcloud/eb/v20210416/model/DeadLetterConfig.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * Rule information
                */
                class Rule : public AbstractModel
                {
                public:
                    Rule();
                    ~Rule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return ModTime Modification time
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置Modification time
                     * @param _modTime Modification time
                     * 
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     * 
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取Switch
                     * @return Enable Switch
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Switch
                     * @param _enable Switch
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
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
                     * 获取Creation time
                     * @return AddTime Creation time
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Creation time
                     * @param _addTime Creation time
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Event bus ID
                     * @return EventBusId Event bus ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置Event bus ID
                     * @param _eventBusId Event bus ID
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

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
                     * 获取Target overview
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Targets Target overview
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TargetBrief> GetTargets() const;

                    /**
                     * 设置Target overview
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _targets Target overview
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargets(const std::vector<TargetBrief>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取DLQ rule set by the rule, which may be null
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DeadLetterConfig DLQ rule set by the rule, which may be null
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DeadLetterConfig GetDeadLetterConfig() const;

                    /**
                     * 设置DLQ rule set by the rule, which may be null
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _deadLetterConfig DLQ rule set by the rule, which may be null
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeadLetterConfig(const DeadLetterConfig& _deadLetterConfig);

                    /**
                     * 判断参数 DeadLetterConfig 是否已赋值
                     * @return DeadLetterConfig 是否已赋值
                     * 
                     */
                    bool DeadLetterConfigHasBeenSet() const;

                private:

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * Switch
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Event bus ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Target overview
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TargetBrief> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * DLQ rule set by the rule, which may be null
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DeadLetterConfig m_deadLetterConfig;
                    bool m_deadLetterConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_RULE_H_
