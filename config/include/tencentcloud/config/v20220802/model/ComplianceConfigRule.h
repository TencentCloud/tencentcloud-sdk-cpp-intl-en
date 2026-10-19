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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCECONFIGRULE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCECONFIGRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/InputParameter.h>
#include <tencentcloud/config/v20220802/model/SourceConditionForManage.h>
#include <tencentcloud/config/v20220802/model/InputParameterForManage.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * Compliance package rule information.
                */
                class ComplianceConfigRule : public AbstractModel
                {
                public:
                    ComplianceConfigRule();
                    ~ComplianceConfigRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Risk level
                     * @return RiskLevel Risk level
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置Risk level
                     * @param _riskLevel Risk level
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
                     * 获取Rule status
                     * @return Status Rule status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Rule status
                     * @param _status Rule status
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
                     * 获取Assessment result
Compliant: 'COMPLIANT'
Non-compliant: 'NON_COMPLIANT'
                     * @return ComplianceResult Assessment result
Compliant: 'COMPLIANT'
Non-compliant: 'NON_COMPLIANT'
                     * 
                     */
                    std::string GetComplianceResult() const;

                    /**
                     * 设置Assessment result
Compliant: 'COMPLIANT'
Non-compliant: 'NON_COMPLIANT'
                     * @param _complianceResult Assessment result
Compliant: 'COMPLIANT'
Non-compliant: 'NON_COMPLIANT'
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
                     * 获取Keyword.
                     * @return Labels Keyword.
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置Keyword.
                     * @param _labels Keyword.
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
                     * 获取Parameter format.
                     * @return SourceCondition Parameter format.
                     * 
                     */
                    std::vector<SourceConditionForManage> GetSourceCondition() const;

                    /**
                     * 设置Parameter format.
                     * @param _sourceCondition Parameter format.
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
                     * 获取Creation method. Valid values: user, compliancePack, and system.
                     * @return CreateByType Creation method. Valid values: user, compliancePack, and system.
                     * 
                     */
                    std::string GetCreateByType() const;

                    /**
                     * 设置Creation method. Valid values: user, compliancePack, and system.
                     * @param _createByType Creation method. Valid values: user, compliancePack, and system.
                     * 
                     */
                    void SetCreateByType(const std::string& _createByType);

                    /**
                     * 判断参数 CreateByType 是否已赋值
                     * @return CreateByType 是否已赋值
                     * 
                     */
                    bool CreateByTypeHasBeenSet() const;

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
                     * 获取Parameter description
                     * @return ManageInputParameter Parameter description
                     * 
                     */
                    std::vector<InputParameterForManage> GetManageInputParameter() const;

                    /**
                     * 设置Parameter description
                     * @param _manageInputParameter Parameter description
                     * 
                     */
                    void SetManageInputParameter(const std::vector<InputParameterForManage>& _manageInputParameter);

                    /**
                     * 判断参数 ManageInputParameter 是否已赋值
                     * @return ManageInputParameter 是否已赋值
                     * 
                     */
                    bool ManageInputParameterHasBeenSet() const;

                private:

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Risk level
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Rule status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::string m_configRuleId;
                    bool m_configRuleIdHasBeenSet;

                    /**
                     * Assessment result
Compliant: 'COMPLIANT'
Non-compliant: 'NON_COMPLIANT'
                     */
                    std::string m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * Keyword.
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Input parameters
                     */
                    std::vector<InputParameter> m_inputParameter;
                    bool m_inputParameterHasBeenSet;

                    /**
                     * Parameter format.
                     */
                    std::vector<SourceConditionForManage> m_sourceCondition;
                    bool m_sourceConditionHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * Creation method. Valid values: user, compliancePack, and system.
                     */
                    std::string m_createByType;
                    bool m_createByTypeHasBeenSet;

                    /**
                     * Rule description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Parameter description
                     */
                    std::vector<InputParameterForManage> m_manageInputParameter;
                    bool m_manageInputParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCECONFIGRULE_H_
