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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEITEM_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomVariable.h>
#include <tencentcloud/teo/v20220901/model/CustomVariableOperation.h>
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
                * Rule details of the engine rule.
                */
                class RuleEngineItem : public AbstractModel
                {
                public:
                    RuleEngineItem();
                    ~RuleEngineItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Rule status. Valid values: <li> enable: Enable; </li><li> disable: Disabled.</li></p>
                     * @return Status <p>Rule status. Valid values: <li> enable: Enable; </li><li> disable: Disabled.</li></p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Rule status. Valid values: <li> enable: Enable; </li><li> disable: Disabled.</li></p>
                     * @param _status <p>Rule status. Valid values: <li> enable: Enable; </li><li> disable: Disabled.</li></p>
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
                     * 获取<p>Rule ID. The unique identifier of a rule. This parameter is required when calling ModifyL7AccRule.</p>
                     * @return RuleId <p>Rule ID. The unique identifier of a rule. This parameter is required when calling ModifyL7AccRule.</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>Rule ID. The unique identifier of a rule. This parameter is required when calling ModifyL7AccRule.</p>
                     * @param _ruleId <p>Rule ID. The unique identifier of a rule. This parameter is required when calling ModifyL7AccRule.</p>
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
                     * 获取<p>Rule name. The name can contain no more than 255 characters.</p>
                     * @return RuleName <p>Rule name. The name can contain no more than 255 characters.</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>Rule name. The name can contain no more than 255 characters.</p>
                     * @param _ruleName <p>Rule name. The name can contain no more than 255 characters.</p>
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
                     * 获取<p>Rule note. Multiple notes can be filled.</p>
                     * @return Description <p>Rule note. Multiple notes can be filled.</p>
                     * 
                     */
                    std::vector<std::string> GetDescription() const;

                    /**
                     * 设置<p>Rule note. Multiple notes can be filled.</p>
                     * @param _description <p>Rule note. Multiple notes can be filled.</p>
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
                     * 获取<p>List of rule-level custom variables. CustomVariable.Name requires the use of user.rule. as a prefix. Variables are initialized sequentially in the array order. InitialValue supports referencing site-level custom variables and rule-level custom variables before the current variable. It does not support referencing the current variable itself or rule-level custom variables after it. Site-level custom variables can be queried through the DescribeZoneCustomVariables API. When Branches is empty, CustomVariable cannot be filled in, and any entry is invalid.</p>
                     * @return CustomVariables <p>List of rule-level custom variables. CustomVariable.Name requires the use of user.rule. as a prefix. Variables are initialized sequentially in the array order. InitialValue supports referencing site-level custom variables and rule-level custom variables before the current variable. It does not support referencing the current variable itself or rule-level custom variables after it. Site-level custom variables can be queried through the DescribeZoneCustomVariables API. When Branches is empty, CustomVariable cannot be filled in, and any entry is invalid.</p>
                     * 
                     */
                    std::vector<CustomVariable> GetCustomVariables() const;

                    /**
                     * 设置<p>List of rule-level custom variables. CustomVariable.Name requires the use of user.rule. as a prefix. Variables are initialized sequentially in the array order. InitialValue supports referencing site-level custom variables and rule-level custom variables before the current variable. It does not support referencing the current variable itself or rule-level custom variables after it. Site-level custom variables can be queried through the DescribeZoneCustomVariables API. When Branches is empty, CustomVariable cannot be filled in, and any entry is invalid.</p>
                     * @param _customVariables <p>List of rule-level custom variables. CustomVariable.Name requires the use of user.rule. as a prefix. Variables are initialized sequentially in the array order. InitialValue supports referencing site-level custom variables and rule-level custom variables before the current variable. It does not support referencing the current variable itself or rule-level custom variables after it. Site-level custom variables can be queried through the DescribeZoneCustomVariables API. When Branches is empty, CustomVariable cannot be filled in, and any entry is invalid.</p>
                     * 
                     */
                    void SetCustomVariables(const std::vector<CustomVariable>& _customVariables);

                    /**
                     * 判断参数 CustomVariables 是否已赋值
                     * @return CustomVariables 是否已赋值
                     * 
                     */
                    bool CustomVariablesHasBeenSet() const;

                    /**
                     * 获取<p>Operation details of rule-level custom variables. You can reference site-level custom variables and rule-level custom variables defined in the current rule during operations. Site-level custom variables can be queried through the DescribeZoneCustomVariables API. This list currently only supports filling in one rule; additional entries are invalid. When Branches is empty, CustomVariableOperations is not allowed to be filled in, and any entry will be invalid.</p>
                     * @return CustomVariableOperations <p>Operation details of rule-level custom variables. You can reference site-level custom variables and rule-level custom variables defined in the current rule during operations. Site-level custom variables can be queried through the DescribeZoneCustomVariables API. This list currently only supports filling in one rule; additional entries are invalid. When Branches is empty, CustomVariableOperations is not allowed to be filled in, and any entry will be invalid.</p>
                     * 
                     */
                    std::vector<CustomVariableOperation> GetCustomVariableOperations() const;

                    /**
                     * 设置<p>Operation details of rule-level custom variables. You can reference site-level custom variables and rule-level custom variables defined in the current rule during operations. Site-level custom variables can be queried through the DescribeZoneCustomVariables API. This list currently only supports filling in one rule; additional entries are invalid. When Branches is empty, CustomVariableOperations is not allowed to be filled in, and any entry will be invalid.</p>
                     * @param _customVariableOperations <p>Operation details of rule-level custom variables. You can reference site-level custom variables and rule-level custom variables defined in the current rule during operations. Site-level custom variables can be queried through the DescribeZoneCustomVariables API. This list currently only supports filling in one rule; additional entries are invalid. When Branches is empty, CustomVariableOperations is not allowed to be filled in, and any entry will be invalid.</p>
                     * 
                     */
                    void SetCustomVariableOperations(const std::vector<CustomVariableOperation>& _customVariableOperations);

                    /**
                     * 判断参数 CustomVariableOperations 是否已赋值
                     * @return CustomVariableOperations 是否已赋值
                     * 
                     */
                    bool CustomVariableOperationsHasBeenSet() const;

                    /**
                     * 获取<p>Sub-rule branch. This list currently only supports filling in one rule. Additional rules are invalid.</p>
                     * @return Branches <p>Sub-rule branch. This list currently only supports filling in one rule. Additional rules are invalid.</p>
                     * 
                     */
                    std::vector<RuleBranch> GetBranches() const;

                    /**
                     * 设置<p>Sub-rule branch. This list currently only supports filling in one rule. Additional rules are invalid.</p>
                     * @param _branches <p>Sub-rule branch. This list currently only supports filling in one rule. Additional rules are invalid.</p>
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
                     * 获取<p>Rule priority. Output only.</p>
                     * @return RulePriority <p>Rule priority. Output only.</p>
                     * 
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置<p>Rule priority. Output only.</p>
                     * @param _rulePriority <p>Rule priority. Output only.</p>
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
                     * <p>Rule status. Valid values: <li> enable: Enable; </li><li> disable: Disabled.</li></p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Rule ID. The unique identifier of a rule. This parameter is required when calling ModifyL7AccRule.</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>Rule name. The name can contain no more than 255 characters.</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Rule note. Multiple notes can be filled.</p>
                     */
                    std::vector<std::string> m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>List of rule-level custom variables. CustomVariable.Name requires the use of user.rule. as a prefix. Variables are initialized sequentially in the array order. InitialValue supports referencing site-level custom variables and rule-level custom variables before the current variable. It does not support referencing the current variable itself or rule-level custom variables after it. Site-level custom variables can be queried through the DescribeZoneCustomVariables API. When Branches is empty, CustomVariable cannot be filled in, and any entry is invalid.</p>
                     */
                    std::vector<CustomVariable> m_customVariables;
                    bool m_customVariablesHasBeenSet;

                    /**
                     * <p>Operation details of rule-level custom variables. You can reference site-level custom variables and rule-level custom variables defined in the current rule during operations. Site-level custom variables can be queried through the DescribeZoneCustomVariables API. This list currently only supports filling in one rule; additional entries are invalid. When Branches is empty, CustomVariableOperations is not allowed to be filled in, and any entry will be invalid.</p>
                     */
                    std::vector<CustomVariableOperation> m_customVariableOperations;
                    bool m_customVariableOperationsHasBeenSet;

                    /**
                     * <p>Sub-rule branch. This list currently only supports filling in one rule. Additional rules are invalid.</p>
                     */
                    std::vector<RuleBranch> m_branches;
                    bool m_branchesHasBeenSet;

                    /**
                     * <p>Rule priority. Output only.</p>
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEITEM_H_
