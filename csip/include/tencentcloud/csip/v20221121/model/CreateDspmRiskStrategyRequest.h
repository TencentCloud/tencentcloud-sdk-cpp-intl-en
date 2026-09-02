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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMRISKSTRATEGYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMRISKSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateDspmRiskStrategy request structure.
                */
                class CreateDspmRiskStrategyRequest : public AbstractModel
                {
                public:
                    CreateDspmRiskStrategyRequest();
                    ~CreateDspmRiskStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Policy name.</p>
                     * @return Name <p>Policy name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Policy name.</p>
                     * @param _name <p>Policy name.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Policy rule, JSON string</p>
                     * @return Rule <p>Policy rule, JSON string</p>
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置<p>Policy rule, JSON string</p>
                     * @param _rule <p>Policy rule, JSON string</p>
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>English policy name.</p>
                     * @return EnName <p>English policy name.</p>
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 设置<p>English policy name.</p>
                     * @param _enName <p>English policy name.</p>
                     * 
                     */
                    void SetEnName(const std::string& _enName);

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * 
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取<p>Policy description.</p>
                     * @return Description <p>Policy description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Policy description.</p>
                     * @param _description <p>Policy description.</p>
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
                     * 获取<p>English strategy description</p>
                     * @return EnDescription <p>English strategy description</p>
                     * 
                     */
                    std::string GetEnDescription() const;

                    /**
                     * 设置<p>English strategy description</p>
                     * @param _enDescription <p>English strategy description</p>
                     * 
                     */
                    void SetEnDescription(const std::string& _enDescription);

                    /**
                     * 判断参数 EnDescription 是否已赋值
                     * @return EnDescription 是否已赋值
                     * 
                     */
                    bool EnDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Risk level. Available values: Info/Low/Medium/High. Default if not passed: Medium</p>
                     * @return RiskLevel <p>Risk level. Available values: Info/Low/Medium/High. Default if not passed: Medium</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>Risk level. Available values: Info/Low/Medium/High. Default if not passed: Medium</p>
                     * @param _riskLevel <p>Risk level. Available values: Info/Low/Medium/High. Default if not passed: Medium</p>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable. 0: disable, 1: enable. If not specified, enabled by default.</p>
                     * @return IsEnabled <p>Whether to enable. 0: disable, 1: enable. If not specified, enabled by default.</p>
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置<p>Whether to enable. 0: disable, 1: enable. If not specified, enabled by default.</p>
                     * @param _isEnabled <p>Whether to enable. 0: disable, 1: enable. If not specified, enabled by default.</p>
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取<p>Risk type. Currently only support alarm, default if not passed: alarm</p>
                     * @return RiskType <p>Risk type. Currently only support alarm, default if not passed: alarm</p>
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置<p>Risk type. Currently only support alarm, default if not passed: alarm</p>
                     * @param _riskType <p>Risk type. Currently only support alarm, default if not passed: alarm</p>
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Policy category. Currently only support SQLOperationAnomaly. If not passed, SQLOperationAnomaly is used by default</p>
                     * @return StrategyCategory <p>Policy category. Currently only support SQLOperationAnomaly. If not passed, SQLOperationAnomaly is used by default</p>
                     * 
                     */
                    std::string GetStrategyCategory() const;

                    /**
                     * 设置<p>Policy category. Currently only support SQLOperationAnomaly. If not passed, SQLOperationAnomaly is used by default</p>
                     * @param _strategyCategory <p>Policy category. Currently only support SQLOperationAnomaly. If not passed, SQLOperationAnomaly is used by default</p>
                     * 
                     */
                    void SetStrategyCategory(const std::string& _strategyCategory);

                    /**
                     * 判断参数 StrategyCategory 是否已赋值
                     * @return StrategyCategory 是否已赋值
                     * 
                     */
                    bool StrategyCategoryHasBeenSet() const;

                private:

                    /**
                     * <p>Policy name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Policy rule, JSON string</p>
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>English policy name.</p>
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * <p>Policy description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>English strategy description</p>
                     */
                    std::string m_enDescription;
                    bool m_enDescriptionHasBeenSet;

                    /**
                     * <p>Risk level. Available values: Info/Low/Medium/High. Default if not passed: Medium</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Whether to enable. 0: disable, 1: enable. If not specified, enabled by default.</p>
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * <p>Risk type. Currently only support alarm, default if not passed: alarm</p>
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * <p>Policy category. Currently only support SQLOperationAnomaly. If not passed, SQLOperationAnomaly is used by default</p>
                     */
                    std::string m_strategyCategory;
                    bool m_strategyCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMRISKSTRATEGYREQUEST_H_
