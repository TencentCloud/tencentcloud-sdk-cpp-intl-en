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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MANAGEDRULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MANAGEDRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Managed rule
                */
                class ManagedRule : public AbstractModel
                {
                public:
                    ManagedRule();
                    ~ManagedRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the rule
                     * @return RuleId ID of the rule
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置ID of the rule
                     * @param _ruleId ID of the rule
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule description
                     * @return Description Rule description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule description
                     * @param _description Rule description
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
                     * 获取Rule type
                     * @return RuleTypeName Rule type
                     * 
                     */
                    std::string GetRuleTypeName() const;

                    /**
                     * 设置Rule type
                     * @param _ruleTypeName Rule type
                     * 
                     */
                    void SetRuleTypeName(const std::string& _ruleTypeName);

                    /**
                     * 判断参数 RuleTypeName 是否已赋值
                     * @return RuleTypeName 是否已赋值
                     * 
                     */
                    bool RuleTypeNameHasBeenSet() const;

                    /**
                     * 获取Rule level
                     * @return RuleLevelDesc Rule level
                     * 
                     */
                    std::string GetRuleLevelDesc() const;

                    /**
                     * 设置Rule level
                     * @param _ruleLevelDesc Rule level
                     * 
                     */
                    void SetRuleLevelDesc(const std::string& _ruleLevelDesc);

                    /**
                     * 判断参数 RuleLevelDesc 是否已赋值
                     * @return RuleLevelDesc 是否已赋值
                     * 
                     */
                    bool RuleLevelDescHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Rule status: `block`, `allow`
                     * @return Status Rule status: `block`, `allow`
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Rule status: `block`, `allow`
                     * @param _status Rule status: `block`, `allow`
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
                     * 获取Tag of the rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RuleTags Tag of the rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetRuleTags() const;

                    /**
                     * 设置Tag of the rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ruleTags Tag of the rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleTags(const std::vector<std::string>& _ruleTags);

                    /**
                     * 判断参数 RuleTags 是否已赋值
                     * @return RuleTags 是否已赋值
                     * 
                     */
                    bool RuleTagsHasBeenSet() const;

                    /**
                     * 获取Description of the rule type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RuleTypeDesc Description of the rule type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRuleTypeDesc() const;

                    /**
                     * 设置Description of the rule type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ruleTypeDesc Description of the rule type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleTypeDesc(const std::string& _ruleTypeDesc);

                    /**
                     * 判断参数 RuleTypeDesc 是否已赋值
                     * @return RuleTypeDesc 是否已赋值
                     * 
                     */
                    bool RuleTypeDescHasBeenSet() const;

                    /**
                     * 获取ID of the rule type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RuleTypeId ID of the rule type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetRuleTypeId() const;

                    /**
                     * 设置ID of the rule type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ruleTypeId ID of the rule type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleTypeId(const int64_t& _ruleTypeId);

                    /**
                     * 判断参数 RuleTypeId 是否已赋值
                     * @return RuleTypeId 是否已赋值
                     * 
                     */
                    bool RuleTypeIdHasBeenSet() const;

                private:

                    /**
                     * ID of the rule
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Rule type
                     */
                    std::string m_ruleTypeName;
                    bool m_ruleTypeNameHasBeenSet;

                    /**
                     * Rule level
                     */
                    std::string m_ruleLevelDesc;
                    bool m_ruleLevelDescHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Rule status: `block`, `allow`
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Tag of the rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_ruleTags;
                    bool m_ruleTagsHasBeenSet;

                    /**
                     * Description of the rule type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ruleTypeDesc;
                    bool m_ruleTypeDescHasBeenSet;

                    /**
                     * ID of the rule type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_ruleTypeId;
                    bool m_ruleTypeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MANAGEDRULE_H_
