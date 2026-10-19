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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECONFIGRULESREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECONFIGRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * ListAggregateConfigRules request structure.
                */
                class ListAggregateConfigRulesRequest : public AbstractModel
                {
                public:
                    ListAggregateConfigRulesRequest();
                    ~ListAggregateConfigRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Number of items per page.</p>
                     * @return Limit <p>Number of items per page.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of items per page.</p>
                     * @param _limit <p>Number of items per page.</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Offset.</p>
                     * @return Offset <p>Offset.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Offset.</p>
                     * @param _offset <p>Offset.</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Account group ID.</p>
                     * @return AccountGroupId <p>Account group ID.</p>
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置<p>Account group ID.</p>
                     * @param _accountGroupId <p>Account group ID.</p>
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
                     * 获取<p>Sorting type. Valid values: desc (descending) and asc (ascending).</p>
                     * @return OrderType <p>Sorting type. Valid values: desc (descending) and asc (ascending).</p>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>Sorting type. Valid values: desc (descending) and asc (ascending).</p>
                     * @param _orderType <p>Sorting type. Valid values: desc (descending) and asc (ascending).</p>
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>Risk level. Valid values:<br>1: high-risk<br>2: medium-risk<br>3: low risk</p>
                     * @return RiskLevel <p>Risk level. Valid values:<br>1: high-risk<br>2: medium-risk<br>3: low risk</p>
                     * 
                     */
                    std::vector<uint64_t> GetRiskLevel() const;

                    /**
                     * 设置<p>Risk level. Valid values:<br>1: high-risk<br>2: medium-risk<br>3: low risk</p>
                     * @param _riskLevel <p>Risk level. Valid values:<br>1: high-risk<br>2: medium-risk<br>3: low risk</p>
                     * 
                     */
                    void SetRiskLevel(const std::vector<uint64_t>& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>Rule status.</p>
                     * @return State <p>Rule status.</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>Rule status.</p>
                     * @param _state <p>Rule status.</p>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>Evaluation results.</p>
                     * @return ComplianceResult <p>Evaluation results.</p>
                     * 
                     */
                    std::vector<std::string> GetComplianceResult() const;

                    /**
                     * 设置<p>Evaluation results.</p>
                     * @param _complianceResult <p>Evaluation results.</p>
                     * 
                     */
                    void SetComplianceResult(const std::vector<std::string>& _complianceResult);

                    /**
                     * 判断参数 ComplianceResult 是否已赋值
                     * @return ComplianceResult 是否已赋值
                     * 
                     */
                    bool ComplianceResultHasBeenSet() const;

                    /**
                     * 获取<p>Rule name.</p>
                     * @return RuleName <p>Rule name.</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>Rule name.</p>
                     * @param _ruleName <p>Rule name.</p>
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
                     * 获取<p>ID of the account to which the rule belongs.</p>
                     * @return RuleOwnerId <p>ID of the account to which the rule belongs.</p>
                     * 
                     */
                    uint64_t GetRuleOwnerId() const;

                    /**
                     * 设置<p>ID of the account to which the rule belongs.</p>
                     * @param _ruleOwnerId <p>ID of the account to which the rule belongs.</p>
                     * 
                     */
                    void SetRuleOwnerId(const uint64_t& _ruleOwnerId);

                    /**
                     * 判断参数 RuleOwnerId 是否已赋值
                     * @return RuleOwnerId 是否已赋值
                     * 
                     */
                    bool RuleOwnerIdHasBeenSet() const;

                private:

                    /**
                     * <p>Number of items per page.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Account group ID.</p>
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * <p>Sorting type. Valid values: desc (descending) and asc (ascending).</p>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>Risk level. Valid values:<br>1: high-risk<br>2: medium-risk<br>3: low risk</p>
                     */
                    std::vector<uint64_t> m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Rule status.</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>Evaluation results.</p>
                     */
                    std::vector<std::string> m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * <p>Rule name.</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>ID of the account to which the rule belongs.</p>
                     */
                    uint64_t m_ruleOwnerId;
                    bool m_ruleOwnerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECONFIGRULESREQUEST_H_
