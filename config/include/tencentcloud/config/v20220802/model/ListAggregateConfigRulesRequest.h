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
                     * 获取Specifies the limit per page.
                     * @return Limit Specifies the limit per page.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Specifies the limit per page.
                     * @param _limit Specifies the limit per page.
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
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
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
                     * 获取Account group ID
                     * @return AccountGroupId Account group ID
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置Account group ID
                     * @param _accountGroupId Account group ID
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
                     * 获取Sort type, descending: desc, ascending: asc.
                     * @return OrderType Sort type, descending: desc, ascending: asc.
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置Sort type, descending: desc, ascending: asc.
                     * @param _orderType Sort type, descending: desc, ascending: asc.
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
                     * 获取Risk level

1: High risk.
2: Medium risk.
3: Low risk.
                     * @return RiskLevel Risk level

1: High risk.
2: Medium risk.
3: Low risk.
                     * 
                     */
                    std::vector<uint64_t> GetRiskLevel() const;

                    /**
                     * 设置Risk level

1: High risk.
2: Medium risk.
3: Low risk.
                     * @param _riskLevel Risk level

1: High risk.
2: Medium risk.
3: Low risk.
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
                     * 获取Rule status
                     * @return State Rule status
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Rule status
                     * @param _state Rule status
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
                     * 获取Evaluation result
                     * @return ComplianceResult Evaluation result
                     * 
                     */
                    std::vector<std::string> GetComplianceResult() const;

                    /**
                     * 设置Evaluation result
                     * @param _complianceResult Evaluation result
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
                     * 获取Name of the rule
                     * @return RuleName Name of the rule
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Name of the rule
                     * @param _ruleName Name of the rule
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
                     * 获取Rule ownership account ID
                     * @return RuleOwnerId Rule ownership account ID
                     * 
                     */
                    uint64_t GetRuleOwnerId() const;

                    /**
                     * 设置Rule ownership account ID
                     * @param _ruleOwnerId Rule ownership account ID
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
                     * Specifies the limit per page.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Account group ID
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * Sort type, descending: desc, ascending: asc.
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * Risk level

1: High risk.
2: Medium risk.
3: Low risk.
                     */
                    std::vector<uint64_t> m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Rule status
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Evaluation result
                     */
                    std::vector<std::string> m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * Name of the rule
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule ownership account ID
                     */
                    uint64_t m_ruleOwnerId;
                    bool m_ruleOwnerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECONFIGRULESREQUEST_H_
