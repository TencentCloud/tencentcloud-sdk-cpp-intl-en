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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEITEM_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleBranch.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Rule details of the rule engine.
                */
                class RuleEngineItem : public AbstractModel
                {
                public:
                    RuleEngineItem();
                    ~RuleEngineItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule status. values: <li>`enable`: enabled</li> <li>`disable`: disabled</li>.
                     * @return Status Rule status. values: <li>`enable`: enabled</li> <li>`disable`: disabled</li>.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Rule status. values: <li>`enable`: enabled</li> <li>`disable`: disabled</li>.
                     * @param _status Rule status. values: <li>`enable`: enabled</li> <li>`disable`: disabled</li>.
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
                     * 获取Rule id. a unique identifier for the rule. this parameter is required when calling `modifyl7accrules`.
                     * @return RuleId Rule id. a unique identifier for the rule. this parameter is required when calling `modifyl7accrules`.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule id. a unique identifier for the rule. this parameter is required when calling `modifyl7accrules`.
                     * @param _ruleId Rule id. a unique identifier for the rule. this parameter is required when calling `modifyl7accrules`.
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
                     * 获取Rule name. name length limit: 255 characters.
                     * @return RuleName Rule name. name length limit: 255 characters.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name. name length limit: 255 characters.
                     * @param _ruleName Rule name. name length limit: 255 characters.
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
                     * 获取Rule annotation. multiple annotations can be added.
                     * @return Description Rule annotation. multiple annotations can be added.
                     * 
                     */
                    std::vector<std::string> GetDescription() const;

                    /**
                     * 设置Rule annotation. multiple annotations can be added.
                     * @param _description Rule annotation. multiple annotations can be added.
                     * 
                     */
                    void SetDescription(const std::vector<std::string>& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Sub-Rule branch. this list currently supports filling in only one rule; multiple entries are invalid.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return Branches Sub-Rule branch. this list currently supports filling in only one rule; multiple entries are invalid.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::vector<RuleBranch> GetBranches() const;

                    /**
                     * 设置Sub-Rule branch. this list currently supports filling in only one rule; multiple entries are invalid.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _branches Sub-Rule branch. this list currently supports filling in only one rule; multiple entries are invalid.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetBranches(const std::vector<RuleBranch>& _branches);

                    /**
                     * 判断参数 Branches 是否已赋值
                     * @return Branches 是否已赋值
                     * 
                     */
                    bool BranchesHasBeenSet() const;

                    /**
                     * 获取Rule priority. only used as an output parameter.
                     * @return RulePriority Rule priority. only used as an output parameter.
                     * 
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置Rule priority. only used as an output parameter.
                     * @param _rulePriority Rule priority. only used as an output parameter.
                     * 
                     */
                    void SetRulePriority(const int64_t& _rulePriority);

                    /**
                     * 判断参数 RulePriority 是否已赋值
                     * @return RulePriority 是否已赋值
                     * 
                     */
                    bool RulePriorityHasBeenSet() const;

                private:

                    /**
                     * Rule status. values: <li>`enable`: enabled</li> <li>`disable`: disabled</li>.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Rule id. a unique identifier for the rule. this parameter is required when calling `modifyl7accrules`.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule name. name length limit: 255 characters.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule annotation. multiple annotations can be added.
                     */
                    std::vector<std::string> m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Sub-Rule branch. this list currently supports filling in only one rule; multiple entries are invalid.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::vector<RuleBranch> m_branches;
                    bool m_branchesHasBeenSet;

                    /**
                     * Rule priority. only used as an output parameter.
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEITEM_H_
