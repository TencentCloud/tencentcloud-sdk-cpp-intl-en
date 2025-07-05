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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGRULE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/InputParameter.h>
#include <tencentcloud/config/v20220802/model/SourceConditionForManage.h>
#include <tencentcloud/config/v20220802/model/Annotation.h>
#include <tencentcloud/config/v20220802/model/TriggerType.h>
#include <tencentcloud/config/v20220802/model/InputParameterForManage.h>
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
                * Rule details
                */
                class ConfigRule : public AbstractModel
                {
                public:
                    ConfigRule();
                    ~ConfigRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule identifier
Note: This field may return null, indicating that no valid value is found.
                     * @return Identifier Rule identifier
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置Rule identifier
Note: This field may return null, indicating that no valid value is found.
                     * @param _identifier Rule identifier
Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Name of the rule

Note: This field may return null, indicating that no valid value is found.
                     * @return RuleName Name of the rule

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Name of the rule

Note: This field may return null, indicating that no valid value is found.
                     * @param _ruleName Name of the rule

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Rule parameters
Note: This field may return null, indicating that no valid value is found.
                     * @return InputParameter Rule parameters
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<InputParameter> GetInputParameter() const;

                    /**
                     * 设置Rule parameters
Note: This field may return null, indicating that no valid value is found.
                     * @param _inputParameter Rule parameters
Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Rule trigger condition.

Note: This field may return null, indicating that no valid value is found.
                     * @return SourceCondition Rule trigger condition.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<SourceConditionForManage> GetSourceCondition() const;

                    /**
                     * 设置Rule trigger condition.

Note: This field may return null, indicating that no valid value is found.
                     * @param _sourceCondition Rule trigger condition.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetSourceCondition(const std::vector<SourceConditionForManage>& _sourceCondition);

                    /**
                     * 判断参数 SourceCondition 是否已赋值
                     * @return SourceCondition 是否已赋值
                     * 
                     */
                    bool SourceConditionHasBeenSet() const;

                    /**
                     * 获取Resource types supported by rule. The rule only applies to specified resource types.
Note: This field may return null, indicating that no valid value is found.
                     * @return ResourceType Resource types supported by rule. The rule only applies to specified resource types.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetResourceType() const;

                    /**
                     * 设置Resource types supported by rule. The rule only applies to specified resource types.
Note: This field may return null, indicating that no valid value is found.
                     * @param _resourceType Resource types supported by rule. The rule only applies to specified resource types.
Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Rule ownership tag
Note: This field may return null, indicating that no valid value is found.
                     * @return Labels Rule ownership tag
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置Rule ownership tag
Note: This field may return null, indicating that no valid value is found.
                     * @param _labels Rule ownership tag
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Rule risk level
1: Low risk
2: Medium risk
3: High risk
Note: This field may return null, indicating that no valid value is found.
                     * @return RiskLevel Rule risk level
1: Low risk
2: Medium risk
3: High risk
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置Rule risk level
1: Low risk
2: Medium risk
3: High risk
Note: This field may return null, indicating that no valid value is found.
                     * @param _riskLevel Rule risk level
1: Low risk
2: Medium risk
3: High risk
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetRiskLevel(const int64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Function corresponding to rule
Note: This field may return null, indicating that no valid value is found.
                     * @return ServiceFunction Function corresponding to rule
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetServiceFunction() const;

                    /**
                     * 设置Function corresponding to rule
Note: This field may return null, indicating that no valid value is found.
                     * @param _serviceFunction Function corresponding to rule
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetServiceFunction(const std::string& _serviceFunction);

                    /**
                     * 判断参数 ServiceFunction 是否已赋值
                     * @return ServiceFunction 是否已赋值
                     * 
                     */
                    bool ServiceFunctionHasBeenSet() const;

                    /**
                     * 获取Creation time

Format: YYYY-MM-DD h:i:s
Note: This field may return null, indicating that no valid value is found.
                     * @return CreateTime Creation time

Format: YYYY-MM-DD h:i:s
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time

Format: YYYY-MM-DD h:i:s
Note: This field may return null, indicating that no valid value is found.
                     * @param _createTime Creation time

Format: YYYY-MM-DD h:i:s
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Rule description

Note: This field may return null, indicating that no valid value is found.
                     * @return Description Rule description

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule description

Note: This field may return null, indicating that no valid value is found.
                     * @param _description Rule description

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取ACTIVE: Enabled
NO_ACTIVE: Disabled
Note: This field may return null, indicating that no valid value is found.
                     * @return Status ACTIVE: Enabled
NO_ACTIVE: Disabled
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置ACTIVE: Enabled
NO_ACTIVE: Disabled
Note: This field may return null, indicating that no valid value is found.
                     * @param _status ACTIVE: Enabled
NO_ACTIVE: Disabled
Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Compliance: 'COMPLIANT'
'NON_COMPLIANT'
'NOT_APPLICABLE'
Note: This field may return null, indicating that no valid value is found.
                     * @return ComplianceResult Compliance: 'COMPLIANT'
'NON_COMPLIANT'
'NOT_APPLICABLE'
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetComplianceResult() const;

                    /**
                     * 设置Compliance: 'COMPLIANT'
'NON_COMPLIANT'
'NOT_APPLICABLE'
Note: This field may return null, indicating that no valid value is found.
                     * @param _complianceResult Compliance: 'COMPLIANT'
'NON_COMPLIANT'
'NOT_APPLICABLE'
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetComplianceResult(const std::string& _complianceResult);

                    /**
                     * 判断参数 ComplianceResult 是否已赋值
                     * @return ComplianceResult 是否已赋值
                     * 
                     */
                    bool ComplianceResultHasBeenSet() const;

                    /**
                     * 获取["",""]
Note: This field may return null, indicating that no valid value is found.
                     * @return Annotation ["",""]
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    Annotation GetAnnotation() const;

                    /**
                     * 设置["",""]
Note: This field may return null, indicating that no valid value is found.
                     * @param _annotation ["",""]
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetAnnotation(const Annotation& _annotation);

                    /**
                     * 判断参数 Annotation 是否已赋值
                     * @return Annotation 是否已赋值
                     * 
                     */
                    bool AnnotationHasBeenSet() const;

                    /**
                     * 获取Rule evaluation time
Format: YYYY-MM-DD h:i:s

Note: This field may return null, indicating that no valid value is found.
                     * @return ConfigRuleInvokedTime Rule evaluation time
Format: YYYY-MM-DD h:i:s

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetConfigRuleInvokedTime() const;

                    /**
                     * 设置Rule evaluation time
Format: YYYY-MM-DD h:i:s

Note: This field may return null, indicating that no valid value is found.
                     * @param _configRuleInvokedTime Rule evaluation time
Format: YYYY-MM-DD h:i:s

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetConfigRuleInvokedTime(const std::string& _configRuleInvokedTime);

                    /**
                     * 判断参数 ConfigRuleInvokedTime 是否已赋值
                     * @return ConfigRuleInvokedTime 是否已赋值
                     * 
                     */
                    bool ConfigRuleInvokedTimeHasBeenSet() const;

                    /**
                     * 获取Rule ID

Note: This field may return null, indicating that no valid value is found.
                     * @return ConfigRuleId Rule ID

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetConfigRuleId() const;

                    /**
                     * 设置Rule ID

Note: This field may return null, indicating that no valid value is found.
                     * @param _configRuleId Rule ID

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetConfigRuleId(const std::string& _configRuleId);

                    /**
                     * 判断参数 ConfigRuleId 是否已赋值
                     * @return ConfigRuleId 是否已赋值
                     * 
                     */
                    bool ConfigRuleIdHasBeenSet() const;

                    /**
                     * 获取CUSTOMIZE
Managed rule
Note: This field may return null, indicating that no valid value is found.
                     * @return IdentifierType CUSTOMIZE
Managed rule
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetIdentifierType() const;

                    /**
                     * 设置CUSTOMIZE
Managed rule
Note: This field may return null, indicating that no valid value is found.
                     * @param _identifierType CUSTOMIZE
Managed rule
Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Compliance package ID
Note: This field may return null, indicating that no valid value is found.
                     * @return CompliancePackId Compliance package ID
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetCompliancePackId() const;

                    /**
                     * 设置Compliance package ID
Note: This field may return null, indicating that no valid value is found.
                     * @param _compliancePackId Compliance package ID
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetCompliancePackId(const std::string& _compliancePackId);

                    /**
                     * 判断参数 CompliancePackId 是否已赋值
                     * @return CompliancePackId 是否已赋值
                     * 
                     */
                    bool CompliancePackIdHasBeenSet() const;

                    /**
                     * 获取Trigger Type

Scheduled trigger
Triggered by configuration change
Note: This field may return null, indicating that no valid value is found.
                     * @return TriggerType Trigger Type

Scheduled trigger
Triggered by configuration change
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<TriggerType> GetTriggerType() const;

                    /**
                     * 设置Trigger Type

Scheduled trigger
Triggered by configuration change
Note: This field may return null, indicating that no valid value is found.
                     * @param _triggerType Trigger Type

Scheduled trigger
Triggered by configuration change
Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Parameter details

Note: This field may return null, indicating that no valid value is found.
                     * @return ManageInputParameter Parameter details

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<InputParameterForManage> GetManageInputParameter() const;

                    /**
                     * 设置Parameter details

Note: This field may return null, indicating that no valid value is found.
                     * @param _manageInputParameter Parameter details

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetManageInputParameter(const std::vector<InputParameterForManage>& _manageInputParameter);

                    /**
                     * 判断参数 ManageInputParameter 是否已赋值
                     * @return ManageInputParameter 是否已赋值
                     * 
                     */
                    bool ManageInputParameterHasBeenSet() const;

                    /**
                     * 获取Rule name

Note: This field may return null, indicating that no valid value is found.
                     * @return CompliancePackName Rule name

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetCompliancePackName() const;

                    /**
                     * 设置Rule name

Note: This field may return null, indicating that no valid value is found.
                     * @param _compliancePackName Rule name

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetCompliancePackName(const std::string& _compliancePackName);

                    /**
                     * 判断参数 CompliancePackName 是否已赋值
                     * @return CompliancePackName 是否已赋值
                     * 
                     */
                    bool CompliancePackNameHasBeenSet() const;

                    /**
                     * 获取Associated region
Note: This field may return null, indicating that no valid value is found.
                     * @return RegionsScope Associated region
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetRegionsScope() const;

                    /**
                     * 设置Associated region
Note: This field may return null, indicating that no valid value is found.
                     * @param _regionsScope Associated region
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetRegionsScope(const std::vector<std::string>& _regionsScope);

                    /**
                     * 判断参数 RegionsScope 是否已赋值
                     * @return RegionsScope 是否已赋值
                     * 
                     */
                    bool RegionsScopeHasBeenSet() const;

                    /**
                     * 获取Associate Tag

Note: This field may return null, indicating that no valid value is found.
                     * @return TagsScope Associate Tag

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<Tag> GetTagsScope() const;

                    /**
                     * 设置Associate Tag

Note: This field may return null, indicating that no valid value is found.
                     * @param _tagsScope Associate Tag

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取 The rule is invalid for the specified resource ID, meaning it does not evaluate the resource.
Note: This field may return null, indicating that no valid value is found.
                     * @return ExcludeResourceIdsScope  The rule is invalid for the specified resource ID, meaning it does not evaluate the resource.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetExcludeResourceIdsScope() const;

                    /**
                     * 设置 The rule is invalid for the specified resource ID, meaning it does not evaluate the resource.
Note: This field may return null, indicating that no valid value is found.
                     * @param _excludeResourceIdsScope  The rule is invalid for the specified resource ID, meaning it does not evaluate the resource.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetExcludeResourceIdsScope(const std::vector<std::string>& _excludeResourceIdsScope);

                    /**
                     * 判断参数 ExcludeResourceIdsScope 是否已赋值
                     * @return ExcludeResourceIdsScope 是否已赋值
                     * 
                     */
                    bool ExcludeResourceIdsScopeHasBeenSet() const;

                    /**
                     * 获取Account group ID

Note: This field may return null, indicating that no valid value is found.
                     * @return AccountGroupId Account group ID

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置Account group ID

Note: This field may return null, indicating that no valid value is found.
                     * @param _accountGroupId Account group ID

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Account group name
Note: This field may return null, indicating that no valid value is found.
                     * @return AccountGroupName Account group name
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetAccountGroupName() const;

                    /**
                     * 设置Account group name
Note: This field may return null, indicating that no valid value is found.
                     * @param _accountGroupName Account group name
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetAccountGroupName(const std::string& _accountGroupName);

                    /**
                     * 判断参数 AccountGroupName 是否已赋值
                     * @return AccountGroupName 是否已赋值
                     * 
                     */
                    bool AccountGroupNameHasBeenSet() const;

                    /**
                     * 获取Rule owner user ID
Note: This field may return null, indicating that no valid value is found.
                     * @return RuleOwnerId Rule owner user ID
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    uint64_t GetRuleOwnerId() const;

                    /**
                     * 设置Rule owner user ID
Note: This field may return null, indicating that no valid value is found.
                     * @param _ruleOwnerId Rule owner user ID
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetRuleOwnerId(const uint64_t& _ruleOwnerId);

                    /**
                     * 判断参数 RuleOwnerId 是否已赋值
                     * @return RuleOwnerId 是否已赋值
                     * 
                     */
                    bool RuleOwnerIdHasBeenSet() const;

                    /**
                     * 获取Trigger methods supported by preset rules
Scheduled trigger
Triggered by configuration change
                     * @return ManageTriggerType Trigger methods supported by preset rules
Scheduled trigger
Triggered by configuration change
                     * 
                     */
                    std::vector<std::string> GetManageTriggerType() const;

                    /**
                     * 设置Trigger methods supported by preset rules
Scheduled trigger
Triggered by configuration change
                     * @param _manageTriggerType Trigger methods supported by preset rules
Scheduled trigger
Triggered by configuration change
                     * 
                     */
                    void SetManageTriggerType(const std::vector<std::string>& _manageTriggerType);

                    /**
                     * 判断参数 ManageTriggerType 是否已赋值
                     * @return ManageTriggerType 是否已赋值
                     * 
                     */
                    bool ManageTriggerTypeHasBeenSet() const;

                private:

                    /**
                     * Rule identifier
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * Name of the rule

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule parameters
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<InputParameter> m_inputParameter;
                    bool m_inputParameterHasBeenSet;

                    /**
                     * Rule trigger condition.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<SourceConditionForManage> m_sourceCondition;
                    bool m_sourceConditionHasBeenSet;

                    /**
                     * Resource types supported by rule. The rule only applies to specified resource types.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Rule ownership tag
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Rule risk level
1: Low risk
2: Medium risk
3: High risk
Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Function corresponding to rule
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_serviceFunction;
                    bool m_serviceFunctionHasBeenSet;

                    /**
                     * Creation time

Format: YYYY-MM-DD h:i:s
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Rule description

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * ACTIVE: Enabled
NO_ACTIVE: Disabled
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Compliance: 'COMPLIANT'
'NON_COMPLIANT'
'NOT_APPLICABLE'
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * ["",""]
Note: This field may return null, indicating that no valid value is found.
                     */
                    Annotation m_annotation;
                    bool m_annotationHasBeenSet;

                    /**
                     * Rule evaluation time
Format: YYYY-MM-DD h:i:s

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_configRuleInvokedTime;
                    bool m_configRuleInvokedTimeHasBeenSet;

                    /**
                     * Rule ID

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_configRuleId;
                    bool m_configRuleIdHasBeenSet;

                    /**
                     * CUSTOMIZE
Managed rule
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_identifierType;
                    bool m_identifierTypeHasBeenSet;

                    /**
                     * Compliance package ID
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * Trigger Type

Scheduled trigger
Triggered by configuration change
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<TriggerType> m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * Parameter details

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<InputParameterForManage> m_manageInputParameter;
                    bool m_manageInputParameterHasBeenSet;

                    /**
                     * Rule name

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_compliancePackName;
                    bool m_compliancePackNameHasBeenSet;

                    /**
                     * Associated region
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_regionsScope;
                    bool m_regionsScopeHasBeenSet;

                    /**
                     * Associate Tag

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<Tag> m_tagsScope;
                    bool m_tagsScopeHasBeenSet;

                    /**
                     *  The rule is invalid for the specified resource ID, meaning it does not evaluate the resource.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_excludeResourceIdsScope;
                    bool m_excludeResourceIdsScopeHasBeenSet;

                    /**
                     * Account group ID

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * Account group name
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_accountGroupName;
                    bool m_accountGroupNameHasBeenSet;

                    /**
                     * Rule owner user ID
Note: This field may return null, indicating that no valid value is found.
                     */
                    uint64_t m_ruleOwnerId;
                    bool m_ruleOwnerIdHasBeenSet;

                    /**
                     * Trigger methods supported by preset rules
Scheduled trigger
Triggered by configuration change
                     */
                    std::vector<std::string> m_manageTriggerType;
                    bool m_manageTriggerTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGRULE_H_
