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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTCONFIGRULESREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTCONFIGRULESREQUEST_H_

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
                * ListConfigRules request structure.
                */
                class ListConfigRulesRequest : public AbstractModel
                {
                public:
                    ListConfigRulesRequest();
                    ~ListConfigRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of entries per page.
Valid values: 1-200
                     * @return Limit Number of entries per page.
Valid values: 1-200
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page.
Valid values: 1-200
                     * @param _limit Number of entries per page.
Valid values: 1-200
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
Value range: minimum value is 0
                     * @return Offset Offset.
Value range: minimum value is 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset.
Value range: minimum value is 0
                     * @param _offset Offset.
Value range: minimum value is 0
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
                     * 获取Sorting type (rule name).
- desc: descending order.
asc: ascending order.
                     * @return OrderType Sorting type (rule name).
- desc: descending order.
asc: ascending order.
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置Sorting type (rule name).
- desc: descending order.
asc: ascending order.
                     * @param _orderType Sorting type (rule name).
- desc: descending order.
asc: ascending order.
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
                     * 获取Risk level.
1: High-risk
2: Medium-risk,
3: Low risk.
                     * @return RiskLevel Risk level.
1: High-risk
2: Medium-risk,
3: Low risk.
                     * 
                     */
                    std::vector<uint64_t> GetRiskLevel() const;

                    /**
                     * 设置Risk level.
1: High-risk
2: Medium-risk,
3: Low risk.
                     * @param _riskLevel Risk level.
1: High-risk
2: Medium-risk,
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
                     * 获取Rule Status.
ACTIVE: enable
UN_ACTIVE: Disabled

                     * @return State Rule Status.
ACTIVE: enable
UN_ACTIVE: Disabled

                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Rule Status.
ACTIVE: enable
UN_ACTIVE: Disabled

                     * @param _state Rule Status.
ACTIVE: enable
UN_ACTIVE: Disabled

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
                     * 获取Assessment result.
COMPLIANT: compliant
NON_COMPLIANT: non-compliance
                     * @return ComplianceResult Assessment result.
COMPLIANT: compliant
NON_COMPLIANT: non-compliance
                     * 
                     */
                    std::vector<std::string> GetComplianceResult() const;

                    /**
                     * 设置Assessment result.
COMPLIANT: compliant
NON_COMPLIANT: non-compliance
                     * @param _complianceResult Assessment result.
COMPLIANT: compliant
NON_COMPLIANT: non-compliance
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

                private:

                    /**
                     * Number of entries per page.
Valid values: 1-200
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset.
Value range: minimum value is 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting type (rule name).
- desc: descending order.
asc: ascending order.
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * Risk level.
1: High-risk
2: Medium-risk,
3: Low risk.
                     */
                    std::vector<uint64_t> m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Rule Status.
ACTIVE: enable
UN_ACTIVE: Disabled

                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Assessment result.
COMPLIANT: compliant
NON_COMPLIANT: non-compliance
                     */
                    std::vector<std::string> m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * Rule Name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTCONFIGRULESREQUEST_H_
