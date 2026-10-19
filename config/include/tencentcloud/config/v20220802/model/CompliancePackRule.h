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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCEPACKRULE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCEPACKRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/InputParameter.h>


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
                class CompliancePackRule : public AbstractModel
                {
                public:
                    CompliancePackRule();
                    ~CompliancePackRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>Risk level.</p>
                     * @return RiskLevel <p>Risk level.</p>
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置<p>Risk level.</p>
                     * @param _riskLevel <p>Risk level.</p>
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
                     * 获取<p>Input parameters.</p>
                     * @return InputParameter <p>Input parameters.</p>
                     * 
                     */
                    std::vector<InputParameter> GetInputParameter() const;

                    /**
                     * 设置<p>Input parameters.</p>
                     * @param _inputParameter <p>Input parameters.</p>
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
                     * 获取<p>Rule ID</p>
                     * @return Identifier <p>Rule ID</p>
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置<p>Rule ID</p>
                     * @param _identifier <p>Rule ID</p>
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
                     * 获取<p>Preset rule identifier</p>
                     * @return ManagedRuleIdentifier <p>Preset rule identifier</p>
                     * 
                     */
                    std::string GetManagedRuleIdentifier() const;

                    /**
                     * 设置<p>Preset rule identifier</p>
                     * @param _managedRuleIdentifier <p>Preset rule identifier</p>
                     * 
                     */
                    void SetManagedRuleIdentifier(const std::string& _managedRuleIdentifier);

                    /**
                     * 判断参数 ManagedRuleIdentifier 是否已赋值
                     * @return ManagedRuleIdentifier 是否已赋值
                     * 
                     */
                    bool ManagedRuleIdentifierHasBeenSet() const;

                    /**
                     * 获取<p>Rule ID.</p>
                     * @return ConfigRuleId <p>Rule ID.</p>
                     * 
                     */
                    std::string GetConfigRuleId() const;

                    /**
                     * 设置<p>Rule ID.</p>
                     * @param _configRuleId <p>Rule ID.</p>
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
                     * 获取<p>Compliance package ID.</p>
                     * @return CompliancePackId <p>Compliance package ID.</p>
                     * 
                     */
                    std::string GetCompliancePackId() const;

                    /**
                     * 设置<p>Compliance package ID.</p>
                     * @param _compliancePackId <p>Compliance package ID.</p>
                     * 
                     */
                    void SetCompliancePackId(const std::string& _compliancePackId);

                    /**
                     * 判断参数 CompliancePackId 是否已赋值
                     * @return CompliancePackId 是否已赋值
                     * 
                     */
                    bool CompliancePackIdHasBeenSet() const;

                private:

                    /**
                     * <p>rule name</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Risk level.</p>
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Input parameters.</p>
                     */
                    std::vector<InputParameter> m_inputParameter;
                    bool m_inputParameterHasBeenSet;

                    /**
                     * <p>Rule ID</p>
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Preset rule identifier</p>
                     */
                    std::string m_managedRuleIdentifier;
                    bool m_managedRuleIdentifierHasBeenSet;

                    /**
                     * <p>Rule ID.</p>
                     */
                    std::string m_configRuleId;
                    bool m_configRuleIdHasBeenSet;

                    /**
                     * <p>Compliance package ID.</p>
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCEPACKRULE_H_
