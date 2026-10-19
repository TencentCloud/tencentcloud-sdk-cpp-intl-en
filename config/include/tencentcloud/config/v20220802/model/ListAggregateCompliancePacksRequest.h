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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECOMPLIANCEPACKSREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECOMPLIANCEPACKSREQUEST_H_

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
                * ListAggregateCompliancePacks request structure.
                */
                class ListAggregateCompliancePacksRequest : public AbstractModel
                {
                public:
                    ListAggregateCompliancePacksRequest();
                    ~ListAggregateCompliancePacksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Quantity.</p>
                     * @return Limit <p>Quantity.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Quantity.</p>
                     * @param _limit <p>Quantity.</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

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
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset.</p>
                     * @param _offset <p>Offset.</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

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
                     * 获取<p>Compliance package status. Valid values: ACTIVE (active) and NO_ACTIVE (inactive).</p>
                     * @return Status <p>Compliance package status. Valid values: ACTIVE (active) and NO_ACTIVE (inactive).</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Compliance package status. Valid values: ACTIVE (active) and NO_ACTIVE (inactive).</p>
                     * @param _status <p>Compliance package status. Valid values: ACTIVE (active) and NO_ACTIVE (inactive).</p>
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
                     * 获取<p>Evaluation status. Valid values: &#39;COMPLIANT&#39 (compliant)<br>&#39;NON_COMPLIANT&#39 (non-compliant)</p>
                     * @return ComplianceResult <p>Evaluation status. Valid values: &#39;COMPLIANT&#39 (compliant)<br>&#39;NON_COMPLIANT&#39 (non-compliant)</p>
                     * 
                     */
                    std::vector<std::string> GetComplianceResult() const;

                    /**
                     * 设置<p>Evaluation status. Valid values: &#39;COMPLIANT&#39 (compliant)<br>&#39;NON_COMPLIANT&#39 (non-compliant)</p>
                     * @param _complianceResult <p>Evaluation status. Valid values: &#39;COMPLIANT&#39 (compliant)<br>&#39;NON_COMPLIANT&#39 (non-compliant)</p>
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
                     * 获取<p>Compliance package result inclusion definition</p><p>Valid values:</p><ul><li>NO: excluded</li></ul><p>Default value: empty</p><p>This field is newly added. Therefore, leaving it unpassed or passing YES will default to returning compliance result data, and other valid values will be enriched later as appropriate.</p>
                     * @return IncludeCompliancePackRuleResult <p>Compliance package result inclusion definition</p><p>Valid values:</p><ul><li>NO: excluded</li></ul><p>Default value: empty</p><p>This field is newly added. Therefore, leaving it unpassed or passing YES will default to returning compliance result data, and other valid values will be enriched later as appropriate.</p>
                     * 
                     */
                    std::string GetIncludeCompliancePackRuleResult() const;

                    /**
                     * 设置<p>Compliance package result inclusion definition</p><p>Valid values:</p><ul><li>NO: excluded</li></ul><p>Default value: empty</p><p>This field is newly added. Therefore, leaving it unpassed or passing YES will default to returning compliance result data, and other valid values will be enriched later as appropriate.</p>
                     * @param _includeCompliancePackRuleResult <p>Compliance package result inclusion definition</p><p>Valid values:</p><ul><li>NO: excluded</li></ul><p>Default value: empty</p><p>This field is newly added. Therefore, leaving it unpassed or passing YES will default to returning compliance result data, and other valid values will be enriched later as appropriate.</p>
                     * 
                     */
                    void SetIncludeCompliancePackRuleResult(const std::string& _includeCompliancePackRuleResult);

                    /**
                     * 判断参数 IncludeCompliancePackRuleResult 是否已赋值
                     * @return IncludeCompliancePackRuleResult 是否已赋值
                     * 
                     */
                    bool IncludeCompliancePackRuleResultHasBeenSet() const;

                private:

                    /**
                     * <p>Quantity.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Account group ID.</p>
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * <p>Compliance package name.</p>
                     */
                    std::string m_compliancePackName;
                    bool m_compliancePackNameHasBeenSet;

                    /**
                     * <p>Risk level. Valid values:<br>1: high-risk<br>2: medium-risk<br>3: low risk</p>
                     */
                    std::vector<uint64_t> m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Compliance package status. Valid values: ACTIVE (active) and NO_ACTIVE (inactive).</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Evaluation status. Valid values: &#39;COMPLIANT&#39 (compliant)<br>&#39;NON_COMPLIANT&#39 (non-compliant)</p>
                     */
                    std::vector<std::string> m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * <p>Sorting type. Valid values: desc (descending) and asc (ascending).</p>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>Compliance package result inclusion definition</p><p>Valid values:</p><ul><li>NO: excluded</li></ul><p>Default value: empty</p><p>This field is newly added. Therefore, leaving it unpassed or passing YES will default to returning compliance result data, and other valid values will be enriched later as appropriate.</p>
                     */
                    std::string m_includeCompliancePackRuleResult;
                    bool m_includeCompliancePackRuleResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECOMPLIANCEPACKSREQUEST_H_
