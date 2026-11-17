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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_RULEDETAIL_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_RULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * aiguard rule details.
                */
                class RuleDetail : public AbstractModel
                {
                public:
                    RuleDetail();
                    ~RuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Rule ID.</p>
                     * @return RuleId <p>Rule ID.</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>Rule ID.</p>
                     * @param _ruleId <p>Rule ID.</p>
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
                     * 获取<p>rule name</p>
                     * @return RuleName <p>rule name</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>rule name</p>
                     * @param _ruleName <p>rule name</p>
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
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
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
                     * 获取<p>Severity.</p>
                     * @return Severity <p>Severity.</p>
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置<p>Severity.</p>
                     * @param _severity <p>Severity.</p>
                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取<p>Action.</p>
                     * @return Action <p>Action.</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>Action.</p>
                     * @param _action <p>Action.</p>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>Switch.</p>
                     * @return Status <p>Switch.</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Switch.</p>
                     * @param _status <p>Switch.</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Desensitization example.</p>
                     * @return DesensitizeSample <p>Desensitization example.</p>
                     * 
                     */
                    std::string GetDesensitizeSample() const;

                    /**
                     * 设置<p>Desensitization example.</p>
                     * @param _desensitizeSample <p>Desensitization example.</p>
                     * 
                     */
                    void SetDesensitizeSample(const std::string& _desensitizeSample);

                    /**
                     * 判断参数 DesensitizeSample 是否已赋值
                     * @return DesensitizeSample 是否已赋值
                     * 
                     */
                    bool DesensitizeSampleHasBeenSet() const;

                    /**
                     * 获取<p>Detection direction.</p><p>Value range: [0, 3].</p>
                     * @return Direction <p>Detection direction.</p><p>Value range: [0, 3].</p>
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置<p>Detection direction.</p><p>Value range: [0, 3].</p>
                     * @param _direction <p>Detection direction.</p><p>Value range: [0, 3].</p>
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取<p>Rule modification time (second-level timestamp): The last time the tenant modified this rule. If it has never been modified, the value is 0.</p>
                     * @return UpdateTime <p>Rule modification time (second-level timestamp): The last time the tenant modified this rule. If it has never been modified, the value is 0.</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>Rule modification time (second-level timestamp): The last time the tenant modified this rule. If it has never been modified, the value is 0.</p>
                     * @param _updateTime <p>Rule modification time (second-level timestamp): The last time the tenant modified this rule. If it has never been modified, the value is 0.</p>
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Rule ID.</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>rule name</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Severity.</p>
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * <p>Action.</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>Switch.</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Desensitization example.</p>
                     */
                    std::string m_desensitizeSample;
                    bool m_desensitizeSampleHasBeenSet;

                    /**
                     * <p>Detection direction.</p><p>Value range: [0, 3].</p>
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * <p>Rule modification time (second-level timestamp): The last time the tenant modified this rule. If it has never been modified, the value is 0.</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_RULEDETAIL_H_
