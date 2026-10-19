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
                     * 获取Rule ID
                     * @return Identifier Rule ID
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置Rule ID
                     * @param _identifier Rule ID
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
                     * 获取Rule Name
                     * @return RuleName Rule Name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule Name
                     * @param _ruleName Rule Name
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
                     * @return InputParameter Rule parameters
                     * 
                     */
                    std::vector<InputParameter> GetInputParameter() const;

                    /**
                     * 设置Rule parameters
                     * @param _inputParameter Rule parameters
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
                     * @return SourceCondition Rule trigger condition.
                     * 
                     */
                    std::vector<SourceConditionForManage> GetSourceCondition() const;

                    /**
                     * 设置Rule trigger condition.
                     * @param _sourceCondition Rule trigger condition.
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
                     * 获取Resource types supported by the rule. The rule applies only to resources of the specified resource types.
                     * @return ResourceType Resource types supported by the rule. The rule applies only to resources of the specified resource types.
                     * 
                     */
                    std::vector<std::string> GetResourceType() const;

                    /**
                     * 设置Resource types supported by the rule. The rule applies only to resources of the specified resource types.
                     * @param _resourceType Resource types supported by the rule. The rule applies only to resources of the specified resource types.
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
                     * 获取Rule tags.
                     * @return Labels Rule tags.
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置Rule tags.
                     * @param _labels Rule tags.
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
                     * 获取Rule risk level.
1: Low risk
2: Medium-risk
3: High-risk
                     * @return RiskLevel Rule risk level.
1: Low risk
2: Medium-risk
3: High-risk
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置Rule risk level.
1: Low risk
2: Medium-risk
3: High-risk
                     * @param _riskLevel Rule risk level.
1: Low risk
2: Medium-risk
3: High-risk
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
                     * 获取Function corresponding to the rule.
                     * @return ServiceFunction Function corresponding to the rule.
                     * 
                     */
                    std::string GetServiceFunction() const;

                    /**
                     * 设置Function corresponding to the rule.
                     * @param _serviceFunction Function corresponding to the rule.
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
                     * 获取Creation time.
Format: YYYY-MM-DD h:i:s
                     * @return CreateTime Creation time.
Format: YYYY-MM-DD h:i:s
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
Format: YYYY-MM-DD h:i:s
                     * @param _createTime Creation time.
Format: YYYY-MM-DD h:i:s
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
                     * 获取ACTIVE: enable
NO_ACTIVE: Disabled
                     * @return Status ACTIVE: enable
NO_ACTIVE: Disabled
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置ACTIVE: enable
NO_ACTIVE: Disabled
                     * @param _status ACTIVE: enable
NO_ACTIVE: Disabled
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
                     * 获取Compliant: 'COMPLIANT'
Non-compliance: 'NON_COMPLIANT'
Unable to apply rule: 'NOT_APPLICABLE'
                     * @return ComplianceResult Compliant: 'COMPLIANT'
Non-compliance: 'NON_COMPLIANT'
Unable to apply rule: 'NOT_APPLICABLE'
                     * 
                     */
                    std::string GetComplianceResult() const;

                    /**
                     * 设置Compliant: 'COMPLIANT'
Non-compliance: 'NON_COMPLIANT'
Unable to apply rule: 'NOT_APPLICABLE'
                     * @param _complianceResult Compliant: 'COMPLIANT'
Non-compliance: 'NON_COMPLIANT'
Unable to apply rule: 'NOT_APPLICABLE'
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
                     * @return Annotation ["",""]
                     * 
                     */
                    Annotation GetAnnotation() const;

                    /**
                     * 设置["",""]
                     * @param _annotation ["",""]
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

                     * @return ConfigRuleInvokedTime Rule evaluation time
Format: YYYY-MM-DD h:i:s

                     * 
                     */
                    std::string GetConfigRuleInvokedTime() const;

                    /**
                     * 设置Rule evaluation time
Format: YYYY-MM-DD h:i:s

                     * @param _configRuleInvokedTime Rule evaluation time
Format: YYYY-MM-DD h:i:s

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
                     * @return ConfigRuleId Rule ID
                     * 
                     */
                    std::string GetConfigRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _configRuleId Rule ID
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
                     * 获取CUSTOMIZE: custom rule
SYSTEM: managed rule
                     * @return IdentifierType CUSTOMIZE: custom rule
SYSTEM: managed rule
                     * 
                     */
                    std::string GetIdentifierType() const;

                    /**
                     * 设置CUSTOMIZE: custom rule
SYSTEM: managed rule
                     * @param _identifierType CUSTOMIZE: custom rule
SYSTEM: managed rule
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
                     * 获取Compliance package ID.
                     * @return CompliancePackId Compliance package ID.
                     * 
                     */
                    std::string GetCompliancePackId() const;

                    /**
                     * 设置Compliance package ID.
                     * @param _compliancePackId Compliance package ID.
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
ScheduledNotification: periodic trigger.
ConfigurationItemChangeNotification: Triggered by a change
                     * @return TriggerType Trigger Type
ScheduledNotification: periodic trigger.
ConfigurationItemChangeNotification: Triggered by a change
                     * 
                     */
                    std::vector<TriggerType> GetTriggerType() const;

                    /**
                     * 设置Trigger Type
ScheduledNotification: periodic trigger.
ConfigurationItemChangeNotification: Triggered by a change
                     * @param _triggerType Trigger Type
ScheduledNotification: periodic trigger.
ConfigurationItemChangeNotification: Triggered by a change
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
                     * @return ManageInputParameter Parameter details
                     * 
                     */
                    std::vector<InputParameterForManage> GetManageInputParameter() const;

                    /**
                     * 设置Parameter details
                     * @param _manageInputParameter Parameter details
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
                     * 获取Compliance package name
                     * @return CompliancePackName Compliance package name
                     * 
                     */
                    std::string GetCompliancePackName() const;

                    /**
                     * 设置Compliance package name
                     * @param _compliancePackName Compliance package name
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
                     * 获取Associated regions.
                     * @return RegionsScope Associated regions.
                     * 
                     */
                    std::vector<std::string> GetRegionsScope() const;

                    /**
                     * 设置Associated regions.
                     * @param _regionsScope Associated regions.
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
                     * 获取 The rule is invalid for the specified resource ID, meaning that evaluation will not be performed on this resource.
                     * @return ExcludeResourceIdsScope  The rule is invalid for the specified resource ID, meaning that evaluation will not be performed on this resource.
                     * 
                     */
                    std::vector<std::string> GetExcludeResourceIdsScope() const;

                    /**
                     * 设置 The rule is invalid for the specified resource ID, meaning that evaluation will not be performed on this resource.
                     * @param _excludeResourceIdsScope  The rule is invalid for the specified resource ID, meaning that evaluation will not be performed on this resource.
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
                     * 获取Account group name.
                     * @return AccountGroupName Account group name.
                     * 
                     */
                    std::string GetAccountGroupName() const;

                    /**
                     * 设置Account group name.
                     * @param _accountGroupName Account group name.
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
                     * 获取Rule owner user ID.
                     * @return RuleOwnerId Rule owner user ID.
                     * 
                     */
                    uint64_t GetRuleOwnerId() const;

                    /**
                     * 设置Rule owner user ID.
                     * @param _ruleOwnerId Rule owner user ID.
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
                     * 获取Trigger methods supported by preset rules.
ScheduledNotification: periodic trigger
ConfigurationItemChangeNotification: Triggered by a change
                     * @return ManageTriggerType Trigger methods supported by preset rules.
ScheduledNotification: periodic trigger
ConfigurationItemChangeNotification: Triggered by a change
                     * 
                     */
                    std::vector<std::string> GetManageTriggerType() const;

                    /**
                     * 设置Trigger methods supported by preset rules.
ScheduledNotification: periodic trigger
ConfigurationItemChangeNotification: Triggered by a change
                     * @param _manageTriggerType Trigger methods supported by preset rules.
ScheduledNotification: periodic trigger
ConfigurationItemChangeNotification: Triggered by a change
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
                     * Rule ID
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * Rule Name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule parameters
                     */
                    std::vector<InputParameter> m_inputParameter;
                    bool m_inputParameterHasBeenSet;

                    /**
                     * Rule trigger condition.
                     */
                    std::vector<SourceConditionForManage> m_sourceCondition;
                    bool m_sourceConditionHasBeenSet;

                    /**
                     * Resource types supported by the rule. The rule applies only to resources of the specified resource types.
                     */
                    std::vector<std::string> m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Rule tags.
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Rule risk level.
1: Low risk
2: Medium-risk
3: High-risk
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Function corresponding to the rule.
                     */
                    std::string m_serviceFunction;
                    bool m_serviceFunctionHasBeenSet;

                    /**
                     * Creation time.
Format: YYYY-MM-DD h:i:s
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Rule description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * ACTIVE: enable
NO_ACTIVE: Disabled
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Compliant: 'COMPLIANT'
Non-compliance: 'NON_COMPLIANT'
Unable to apply rule: 'NOT_APPLICABLE'
                     */
                    std::string m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * ["",""]
                     */
                    Annotation m_annotation;
                    bool m_annotationHasBeenSet;

                    /**
                     * Rule evaluation time
Format: YYYY-MM-DD h:i:s

                     */
                    std::string m_configRuleInvokedTime;
                    bool m_configRuleInvokedTimeHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::string m_configRuleId;
                    bool m_configRuleIdHasBeenSet;

                    /**
                     * CUSTOMIZE: custom rule
SYSTEM: managed rule
                     */
                    std::string m_identifierType;
                    bool m_identifierTypeHasBeenSet;

                    /**
                     * Compliance package ID.
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * Trigger Type
ScheduledNotification: periodic trigger.
ConfigurationItemChangeNotification: Triggered by a change
                     */
                    std::vector<TriggerType> m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * Parameter details
                     */
                    std::vector<InputParameterForManage> m_manageInputParameter;
                    bool m_manageInputParameterHasBeenSet;

                    /**
                     * Compliance package name
                     */
                    std::string m_compliancePackName;
                    bool m_compliancePackNameHasBeenSet;

                    /**
                     * Associated regions.
                     */
                    std::vector<std::string> m_regionsScope;
                    bool m_regionsScopeHasBeenSet;

                    /**
                     * Associated tag
                     */
                    std::vector<Tag> m_tagsScope;
                    bool m_tagsScopeHasBeenSet;

                    /**
                     *  The rule is invalid for the specified resource ID, meaning that evaluation will not be performed on this resource.
                     */
                    std::vector<std::string> m_excludeResourceIdsScope;
                    bool m_excludeResourceIdsScopeHasBeenSet;

                    /**
                     * Account group ID.
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * Account group name.
                     */
                    std::string m_accountGroupName;
                    bool m_accountGroupNameHasBeenSet;

                    /**
                     * Rule owner user ID.
                     */
                    uint64_t m_ruleOwnerId;
                    bool m_ruleOwnerIdHasBeenSet;

                    /**
                     * Trigger methods supported by preset rules.
ScheduledNotification: periodic trigger
ConfigurationItemChangeNotification: Triggered by a change
                     */
                    std::vector<std::string> m_manageTriggerType;
                    bool m_manageTriggerTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGRULE_H_
