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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCEPACKRULEFORMANAGE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCEPACKRULEFORMANAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/CompliancePackRules.h>
#include <tencentcloud/config/v20220802/model/Control.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * System compliance package rules on the operation side.
                */
                class CompliancePackRuleForManage : public AbstractModel
                {
                public:
                    CompliancePackRuleForManage();
                    ~CompliancePackRuleForManage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Unique rule ID.</p>
                     * @return Identifier <p>Unique rule ID.</p>
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置<p>Unique rule ID.</p>
                     * @param _identifier <p>Unique rule ID.</p>
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
                     * 获取<p>Risk level.</p><p>Valid values: 1 (high risk), 2 (medium risk), and 3 (low risk).</p>
                     * @return RiskLevel <p>Risk level.</p><p>Valid values: 1 (high risk), 2 (medium risk), and 3 (low risk).</p>
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置<p>Risk level.</p><p>Valid values: 1 (high risk), 2 (medium risk), and 3 (low risk).</p>
                     * @param _riskLevel <p>Risk level.</p><p>Valid values: 1 (high risk), 2 (medium risk), and 3 (low risk).</p>
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
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
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
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateTime <p>Update time.</p>
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
                     * 获取<p>Compliance package rules.</p>
                     * @return CompliancePackRules <p>Compliance package rules.</p>
                     * 
                     */
                    std::vector<CompliancePackRules> GetCompliancePackRules() const;

                    /**
                     * 设置<p>Compliance package rules.</p>
                     * @param _compliancePackRules <p>Compliance package rules.</p>
                     * 
                     */
                    void SetCompliancePackRules(const std::vector<CompliancePackRules>& _compliancePackRules);

                    /**
                     * 判断参数 CompliancePackRules 是否已赋值
                     * @return CompliancePackRules 是否已赋值
                     * 
                     */
                    bool CompliancePackRulesHasBeenSet() const;

                    /**
                     * 获取<p>Rule number information.</p>
                     * @return Control <p>Rule number information.</p>
                     * 
                     */
                    std::vector<Control> GetControl() const;

                    /**
                     * 设置<p>Rule number information.</p>
                     * @param _control <p>Rule number information.</p>
                     * 
                     */
                    void SetControl(const std::vector<Control>& _control);

                    /**
                     * 判断参数 Control 是否已赋值
                     * @return Control 是否已赋值
                     * 
                     */
                    bool ControlHasBeenSet() const;

                    /**
                     * 获取<p>Resource type.</p>
                     * @return ResourceTypes <p>Resource type.</p>
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置<p>Resource type.</p>
                     * @param _resourceTypes <p>Resource type.</p>
                     * 
                     */
                    void SetResourceTypes(const std::vector<std::string>& _resourceTypes);

                    /**
                     * 判断参数 ResourceTypes 是否已赋值
                     * @return ResourceTypes 是否已赋值
                     * 
                     */
                    bool ResourceTypesHasBeenSet() const;

                private:

                    /**
                     * <p>Unique rule ID.</p>
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

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
                     * <p>Risk level.</p><p>Valid values: 1 (high risk), 2 (medium risk), and 3 (low risk).</p>
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Compliance package rules.</p>
                     */
                    std::vector<CompliancePackRules> m_compliancePackRules;
                    bool m_compliancePackRulesHasBeenSet;

                    /**
                     * <p>Rule number information.</p>
                     */
                    std::vector<Control> m_control;
                    bool m_controlHasBeenSet;

                    /**
                     * <p>Resource type.</p>
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCEPACKRULEFORMANAGE_H_
