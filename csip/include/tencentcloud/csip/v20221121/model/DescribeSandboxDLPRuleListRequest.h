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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESANDBOXDLPRULELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESANDBOXDLPRULELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSandboxDLPRuleList request structure.
                */
                class DescribeSandboxDLPRuleListRequest : public AbstractModel
                {
                public:
                    DescribeSandboxDLPRuleListRequest();
                    ~DescribeSandboxDLPRuleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Number of items per page. Default: 10. Upper limit: 200.
                     * @return Limit Number of items per page. Default: 10. Upper limit: 200.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items per page. Default: 10. Upper limit: 200.
                     * @param _limit Number of items per page. Default: 10. Upper limit: 200.
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
                     * 获取Filter criteria.
Supported filter items:
RuleID: Rule ID, used for querying an individual rule.
RuleName: Search by rule name
Status: Rule status. Available values: ON (Enable) / OFF (Disable)
Level: Rule level. Available values: INFO (notification) / LOW (low risk) / MEDIUM (medium risk) / HIGH (high risk) / CRITICAL (critical)
RuleAction: Rule action. Available values: PASS (Allowlist) / BLOCK (Block and alarm) / MONITOR (Alarm)
BelongAssetType: The asset type to which it belongs. Available values: HOST (host) / CONTAINER (container)
                     * @return Filters Filter criteria.
Supported filter items:
RuleID: Rule ID, used for querying an individual rule.
RuleName: Search by rule name
Status: Rule status. Available values: ON (Enable) / OFF (Disable)
Level: Rule level. Available values: INFO (notification) / LOW (low risk) / MEDIUM (medium risk) / HIGH (high risk) / CRITICAL (critical)
RuleAction: Rule action. Available values: PASS (Allowlist) / BLOCK (Block and alarm) / MONITOR (Alarm)
BelongAssetType: The asset type to which it belongs. Available values: HOST (host) / CONTAINER (container)
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria.
Supported filter items:
RuleID: Rule ID, used for querying an individual rule.
RuleName: Search by rule name
Status: Rule status. Available values: ON (Enable) / OFF (Disable)
Level: Rule level. Available values: INFO (notification) / LOW (low risk) / MEDIUM (medium risk) / HIGH (high risk) / CRITICAL (critical)
RuleAction: Rule action. Available values: PASS (Allowlist) / BLOCK (Block and alarm) / MONITOR (Alarm)
BelongAssetType: The asset type to which it belongs. Available values: HOST (host) / CONTAINER (container)
                     * @param _filters Filter criteria.
Supported filter items:
RuleID: Rule ID, used for querying an individual rule.
RuleName: Search by rule name
Status: Rule status. Available values: ON (Enable) / OFF (Disable)
Level: Rule level. Available values: INFO (notification) / LOW (low risk) / MEDIUM (medium risk) / HIGH (high risk) / CRITICAL (critical)
RuleAction: Rule action. Available values: PASS (Allowlist) / BLOCK (Block and alarm) / MONITOR (Alarm)
BelongAssetType: The asset type to which it belongs. Available values: HOST (host) / CONTAINER (container)
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id.</p>
                     * @return MemberId <p>Group account member id.</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id.</p>
                     * @param _memberId <p>Group account member id.</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items per page. Default: 10. Upper limit: 200.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria.
Supported filter items:
RuleID: Rule ID, used for querying an individual rule.
RuleName: Search by rule name
Status: Rule status. Available values: ON (Enable) / OFF (Disable)
Level: Rule level. Available values: INFO (notification) / LOW (low risk) / MEDIUM (medium risk) / HIGH (high risk) / CRITICAL (critical)
RuleAction: Rule action. Available values: PASS (Allowlist) / BLOCK (Block and alarm) / MONITOR (Alarm)
BelongAssetType: The asset type to which it belongs. Available values: HOST (host) / CONTAINER (container)
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Group account member id.</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESANDBOXDLPRULELISTREQUEST_H_
