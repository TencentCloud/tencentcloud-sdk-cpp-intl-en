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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDAGGREGATECONFIGRULEREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDAGGREGATECONFIGRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/TriggerType.h>
#include <tencentcloud/config/v20220802/model/InputParameter.h>
#include <tencentcloud/config/v20220802/model/Tag.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * AddAggregateConfigRule request structure.
                */
                class AddAggregateConfigRuleRequest : public AbstractModel
                {
                public:
                    AddAggregateConfigRuleRequest();
                    ~AddAggregateConfigRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule template ID. The preset rule template is Identifier, and the custom rule is the serverless cloud function ARN (region:functionName).
                     * @return Identifier Rule template ID. The preset rule template is Identifier, and the custom rule is the serverless cloud function ARN (region:functionName).
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置Rule template ID. The preset rule template is Identifier, and the custom rule is the serverless cloud function ARN (region:functionName).
                     * @param _identifier Rule template ID. The preset rule template is Identifier, and the custom rule is the serverless cloud function ARN (region:functionName).
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                    /**
                     * 获取Rule template type. Valid values: SYSTEM and CUSTOMIZE.
                     * @return IdentifierType Rule template type. Valid values: SYSTEM and CUSTOMIZE.
                     * 
                     */
                    std::string GetIdentifierType() const;

                    /**
                     * 设置Rule template type. Valid values: SYSTEM and CUSTOMIZE.
                     * @param _identifierType Rule template type. Valid values: SYSTEM and CUSTOMIZE.
                     * 
                     */
                    void SetIdentifierType(const std::string& _identifierType);

                    /**
                     * 判断参数 IdentifierType 是否已赋值
                     * @return IdentifierType 是否已赋值
                     * 
                     */
                    bool IdentifierTypeHasBeenSet() const;

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
                     * 获取Resources supported by the rule.
                     * @return ResourceType Resources supported by the rule.
                     * 
                     */
                    std::vector<std::string> GetResourceType() const;

                    /**
                     * 设置Resources supported by the rule.
                     * @param _resourceType Resources supported by the rule.
                     * 
                     */
                    void SetResourceType(const std::vector<std::string>& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Trigger types. A maximum of two types are supported.
                     * @return TriggerType Trigger types. A maximum of two types are supported.
                     * 
                     */
                    std::vector<TriggerType> GetTriggerType() const;

                    /**
                     * 设置Trigger types. A maximum of two types are supported.
                     * @param _triggerType Trigger types. A maximum of two types are supported.
                     * 
                     */
                    void SetTriggerType(const std::vector<TriggerType>& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取Risk level
1: High-risk.
2: Medium-risk.
3: Low risk.
                     * @return RiskLevel Risk level
1: High-risk.
2: Medium-risk.
3: Low risk.
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置Risk level
1: High-risk.
2: Medium-risk.
3: Low risk.
                     * @param _riskLevel Risk level
1: High-risk.
2: Medium-risk.
3: Low risk.
                     * 
                     */
                    void SetRiskLevel(const uint64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Account group ID.
                     * @return AccountGroupId Account group ID.
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置Account group ID.
                     * @param _accountGroupId Account group ID.
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取Input parameters
                     * @return InputParameter Input parameters
                     * 
                     */
                    std::vector<InputParameter> GetInputParameter() const;

                    /**
                     * 设置Input parameters
                     * @param _inputParameter Input parameters
                     * 
                     */
                    void SetInputParameter(const std::vector<InputParameter>& _inputParameter);

                    /**
                     * 判断参数 InputParameter 是否已赋值
                     * @return InputParameter 是否已赋值
                     * 
                     */
                    bool InputParameterHasBeenSet() const;

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
                     * 获取Associated regions.
                     * @return RegionScope Associated regions.
                     * 
                     */
                    std::vector<std::string> GetRegionScope() const;

                    /**
                     * 设置Associated regions.
                     * @param _regionScope Associated regions.
                     * 
                     */
                    void SetRegionScope(const std::vector<std::string>& _regionScope);

                    /**
                     * 判断参数 RegionScope 是否已赋值
                     * @return RegionScope 是否已赋值
                     * 
                     */
                    bool RegionScopeHasBeenSet() const;

                    /**
                     * 获取Associated tag
                     * @return TagsScope Associated tag
                     * 
                     */
                    std::vector<Tag> GetTagsScope() const;

                    /**
                     * 设置Associated tag
                     * @param _tagsScope Associated tag
                     * 
                     */
                    void SetTagsScope(const std::vector<Tag>& _tagsScope);

                    /**
                     * 判断参数 TagsScope 是否已赋值
                     * @return TagsScope 是否已赋值
                     * 
                     */
                    bool TagsScopeHasBeenSet() const;

                    /**
                     * 获取Excluded resource ID.
                     * @return ExcludeResourceIdsScope Excluded resource ID.
                     * 
                     */
                    std::vector<std::string> GetExcludeResourceIdsScope() const;

                    /**
                     * 设置Excluded resource ID.
                     * @param _excludeResourceIdsScope Excluded resource ID.
                     * 
                     */
                    void SetExcludeResourceIdsScope(const std::vector<std::string>& _excludeResourceIdsScope);

                    /**
                     * 判断参数 ExcludeResourceIdsScope 是否已赋值
                     * @return ExcludeResourceIdsScope 是否已赋值
                     * 
                     */
                    bool ExcludeResourceIdsScopeHasBeenSet() const;

                private:

                    /**
                     * Rule template ID. The preset rule template is Identifier, and the custom rule is the serverless cloud function ARN (region:functionName).
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * Rule template type. Valid values: SYSTEM and CUSTOMIZE.
                     */
                    std::string m_identifierType;
                    bool m_identifierTypeHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Resources supported by the rule.
                     */
                    std::vector<std::string> m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Trigger types. A maximum of two types are supported.
                     */
                    std::vector<TriggerType> m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * Risk level
1: High-risk.
2: Medium-risk.
3: Low risk.
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Account group ID.
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * Input parameters
                     */
                    std::vector<InputParameter> m_inputParameter;
                    bool m_inputParameterHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Associated regions.
                     */
                    std::vector<std::string> m_regionScope;
                    bool m_regionScopeHasBeenSet;

                    /**
                     * Associated tag
                     */
                    std::vector<Tag> m_tagsScope;
                    bool m_tagsScopeHasBeenSet;

                    /**
                     * Excluded resource ID.
                     */
                    std::vector<std::string> m_excludeResourceIdsScope;
                    bool m_excludeResourceIdsScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDAGGREGATECONFIGRULEREQUEST_H_
