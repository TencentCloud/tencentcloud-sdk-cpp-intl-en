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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDCOMPLIANCEPACKREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDCOMPLIANCEPACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/CompliancePackRule.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * AddCompliancePack request structure.
                */
                class AddCompliancePackRequest : public AbstractModel
                {
                public:
                    AddCompliancePackRequest();
                    ~AddCompliancePackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Compliance package rules.</p>
                     * @return ConfigRules <p>Compliance package rules.</p>
                     * 
                     */
                    std::vector<CompliancePackRule> GetConfigRules() const;

                    /**
                     * 设置<p>Compliance package rules.</p>
                     * @param _configRules <p>Compliance package rules.</p>
                     * 
                     */
                    void SetConfigRules(const std::vector<CompliancePackRule>& _configRules);

                    /**
                     * 判断参数 ConfigRules 是否已赋值
                     * @return ConfigRules 是否已赋值
                     * 
                     */
                    bool ConfigRulesHasBeenSet() const;

                    /**
                     * 获取<p>Risk level. Valid values:<br>1: high-risk<br>2: medium-risk<br>3: low risk</p>
                     * @return RiskLevel <p>Risk level. Valid values:<br>1: high-risk<br>2: medium-risk<br>3: low risk</p>
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置<p>Risk level. Valid values:<br>1: high-risk<br>2: medium-risk<br>3: low risk</p>
                     * @param _riskLevel <p>Risk level. Valid values:<br>1: high-risk<br>2: medium-risk<br>3: low risk</p>
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
                     * 获取<p>Compliance package name.</p>
                     * @return CompliancePackName <p>Compliance package name.</p>
                     * 
                     */
                    std::string GetCompliancePackName() const;

                    /**
                     * 设置<p>Compliance package name.</p>
                     * @param _compliancePackName <p>Compliance package name.</p>
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

                private:

                    /**
                     * <p>Compliance package rules.</p>
                     */
                    std::vector<CompliancePackRule> m_configRules;
                    bool m_configRulesHasBeenSet;

                    /**
                     * <p>Risk level. Valid values:<br>1: high-risk<br>2: medium-risk<br>3: low risk</p>
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Compliance package name.</p>
                     */
                    std::string m_compliancePackName;
                    bool m_compliancePackNameHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDCOMPLIANCEPACKREQUEST_H_
