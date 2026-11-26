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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPTABLERULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPTABLERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Custom rule - basic access control configuration.
                */
                class IpTableRule : public AbstractModel
                {
                public:
                    IpTableRule();
                    ~IpTableRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Action. Valid values:
<li> drop: block;</li>
<li> trans: release;</li>
<li>monitor: observation.</li>
                     * @return Action Action. Valid values:
<li> drop: block;</li>
<li> trans: release;</li>
<li>monitor: observation.</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action. Valid values:
<li> drop: block;</li>
<li> trans: release;</li>
<li>monitor: observation.</li>
                     * @param _action Action. Valid values:
<li> drop: block;</li>
<li> trans: release;</li>
<li>monitor: observation.</li>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取According to type matching. Valid values:
<li>ip: Match by client IP;</li>
<li>area: match by client IP region;</li>
<li>asn: Match the autonomous system to which the client belongs;</li>
<li>referer: match the Referer request header;</li>
<li>ua: match the User-Agent request header;</li>
<li>url: Request URL for matching.</li>
                     * @return MatchFrom According to type matching. Valid values:
<li>ip: Match by client IP;</li>
<li>area: match by client IP region;</li>
<li>asn: Match the autonomous system to which the client belongs;</li>
<li>referer: match the Referer request header;</li>
<li>ua: match the User-Agent request header;</li>
<li>url: Request URL for matching.</li>
                     * 
                     */
                    std::string GetMatchFrom() const;

                    /**
                     * 设置According to type matching. Valid values:
<li>ip: Match by client IP;</li>
<li>area: match by client IP region;</li>
<li>asn: Match the autonomous system to which the client belongs;</li>
<li>referer: match the Referer request header;</li>
<li>ua: match the User-Agent request header;</li>
<li>url: Request URL for matching.</li>
                     * @param _matchFrom According to type matching. Valid values:
<li>ip: Match by client IP;</li>
<li>area: match by client IP region;</li>
<li>asn: Match the autonomous system to which the client belongs;</li>
<li>referer: match the Referer request header;</li>
<li>ua: match the User-Agent request header;</li>
<li>url: Request URL for matching.</li>
                     * 
                     */
                    void SetMatchFrom(const std::string& _matchFrom);

                    /**
                     * 判断参数 MatchFrom 是否已赋值
                     * @return MatchFrom 是否已赋值
                     * 
                     */
                    bool MatchFromHasBeenSet() const;

                    /**
                     * 获取Match method of the rule. Valid values:
<li> match: match, suitable for MatchFrom as ip;</li>
<li> not_match: Not match, suitable for when MatchFrom is ip;</li>
<li> include_area: region inclusion, suitable for MatchFrom as area;</li>
<li> not_include_area: Regions excluded, applicable to MatchFrom as area;</li>
<li> asn_match: ASN contains, suitable for MatchFrom as asn;</li>
<li> asn_not_match: ASN not contained, applicable to MatchFrom as asn;</li>
<li> equal: equal, suitable for MatchFrom being ua, referer;</li>
<li> not_equal: Not equal to, applicable to MatchFrom being ua, referer;</li>
<li> include: wildcard match, suitable for MatchFrom being ua, referer, url;</li>
<li> not_include: wildcard mismatch, suitable for MatchFrom being ua, referer;</li>
<li> is_emty: The configuration content is empty, suitable for MatchFrom being ua or referer;</li>
<li> not_exists: The configuration content does not exist. This is applicable when MatchFrom is ua or referer.</li>
                     * @return Operator Match method of the rule. Valid values:
<li> match: match, suitable for MatchFrom as ip;</li>
<li> not_match: Not match, suitable for when MatchFrom is ip;</li>
<li> include_area: region inclusion, suitable for MatchFrom as area;</li>
<li> not_include_area: Regions excluded, applicable to MatchFrom as area;</li>
<li> asn_match: ASN contains, suitable for MatchFrom as asn;</li>
<li> asn_not_match: ASN not contained, applicable to MatchFrom as asn;</li>
<li> equal: equal, suitable for MatchFrom being ua, referer;</li>
<li> not_equal: Not equal to, applicable to MatchFrom being ua, referer;</li>
<li> include: wildcard match, suitable for MatchFrom being ua, referer, url;</li>
<li> not_include: wildcard mismatch, suitable for MatchFrom being ua, referer;</li>
<li> is_emty: The configuration content is empty, suitable for MatchFrom being ua or referer;</li>
<li> not_exists: The configuration content does not exist. This is applicable when MatchFrom is ua or referer.</li>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Match method of the rule. Valid values:
<li> match: match, suitable for MatchFrom as ip;</li>
<li> not_match: Not match, suitable for when MatchFrom is ip;</li>
<li> include_area: region inclusion, suitable for MatchFrom as area;</li>
<li> not_include_area: Regions excluded, applicable to MatchFrom as area;</li>
<li> asn_match: ASN contains, suitable for MatchFrom as asn;</li>
<li> asn_not_match: ASN not contained, applicable to MatchFrom as asn;</li>
<li> equal: equal, suitable for MatchFrom being ua, referer;</li>
<li> not_equal: Not equal to, applicable to MatchFrom being ua, referer;</li>
<li> include: wildcard match, suitable for MatchFrom being ua, referer, url;</li>
<li> not_include: wildcard mismatch, suitable for MatchFrom being ua, referer;</li>
<li> is_emty: The configuration content is empty, suitable for MatchFrom being ua or referer;</li>
<li> not_exists: The configuration content does not exist. This is applicable when MatchFrom is ua or referer.</li>
                     * @param _operator Match method of the rule. Valid values:
<li> match: match, suitable for MatchFrom as ip;</li>
<li> not_match: Not match, suitable for when MatchFrom is ip;</li>
<li> include_area: region inclusion, suitable for MatchFrom as area;</li>
<li> not_include_area: Regions excluded, applicable to MatchFrom as area;</li>
<li> asn_match: ASN contains, suitable for MatchFrom as asn;</li>
<li> asn_not_match: ASN not contained, applicable to MatchFrom as asn;</li>
<li> equal: equal, suitable for MatchFrom being ua, referer;</li>
<li> not_equal: Not equal to, applicable to MatchFrom being ua, referer;</li>
<li> include: wildcard match, suitable for MatchFrom being ua, referer, url;</li>
<li> not_include: wildcard mismatch, suitable for MatchFrom being ua, referer;</li>
<li> is_emty: The configuration content is empty, suitable for MatchFrom being ua or referer;</li>
<li> not_exists: The configuration content does not exist. This is applicable when MatchFrom is ua or referer.</li>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Rule id. Output only.
                     * @return RuleID Rule id. Output only.
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置Rule id. Output only.
                     * @param _ruleID Rule id. Output only.
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取Update time. For output usage only.
                     * @return UpdateTime Update time. For output usage only.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time. For output usage only.
                     * @param _updateTime Update time. For output usage only.
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
                     * 获取Rule enablement status. Valid values:
<li>`on`: Enable;</li>
<li> off: Disabled.</li>
If the input parameter is not specified, the value defaults to `on`.
                     * @return Status Rule enablement status. Valid values:
<li>`on`: Enable;</li>
<li> off: Disabled.</li>
If the input parameter is not specified, the value defaults to `on`.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Rule enablement status. Valid values:
<li>`on`: Enable;</li>
<li> off: Disabled.</li>
If the input parameter is not specified, the value defaults to `on`.
                     * @param _status Rule enablement status. Valid values:
<li>`on`: Enable;</li>
<li> off: Disabled.</li>
If the input parameter is not specified, the value defaults to `on`.
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
                     * 获取Rule name.
                     * @return RuleName Rule name.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name.
                     * @param _ruleName Rule name.
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
                     * 获取Matching content. Multi-value input is supported.
<li>When entering multiple matching values, please separate them with English commas;</li>
<li>When MatchFrom is ua, multi-value input is not supported;</li>
<li>When Operator is is_empty or not_exists, the input value of this field is invalid.</li>
                     * @return MatchContent Matching content. Multi-value input is supported.
<li>When entering multiple matching values, please separate them with English commas;</li>
<li>When MatchFrom is ua, multi-value input is not supported;</li>
<li>When Operator is is_empty or not_exists, the input value of this field is invalid.</li>
                     * 
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置Matching content. Multi-value input is supported.
<li>When entering multiple matching values, please separate them with English commas;</li>
<li>When MatchFrom is ua, multi-value input is not supported;</li>
<li>When Operator is is_empty or not_exists, the input value of this field is invalid.</li>
                     * @param _matchContent Matching content. Multi-value input is supported.
<li>When entering multiple matching values, please separate them with English commas;</li>
<li>When MatchFrom is ua, multi-value input is not supported;</li>
<li>When Operator is is_empty or not_exists, the input value of this field is invalid.</li>
                     * 
                     */
                    void SetMatchContent(const std::string& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     * 
                     */
                    bool MatchContentHasBeenSet() const;

                private:

                    /**
                     * Action. Valid values:
<li> drop: block;</li>
<li> trans: release;</li>
<li>monitor: observation.</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * According to type matching. Valid values:
<li>ip: Match by client IP;</li>
<li>area: match by client IP region;</li>
<li>asn: Match the autonomous system to which the client belongs;</li>
<li>referer: match the Referer request header;</li>
<li>ua: match the User-Agent request header;</li>
<li>url: Request URL for matching.</li>
                     */
                    std::string m_matchFrom;
                    bool m_matchFromHasBeenSet;

                    /**
                     * Match method of the rule. Valid values:
<li> match: match, suitable for MatchFrom as ip;</li>
<li> not_match: Not match, suitable for when MatchFrom is ip;</li>
<li> include_area: region inclusion, suitable for MatchFrom as area;</li>
<li> not_include_area: Regions excluded, applicable to MatchFrom as area;</li>
<li> asn_match: ASN contains, suitable for MatchFrom as asn;</li>
<li> asn_not_match: ASN not contained, applicable to MatchFrom as asn;</li>
<li> equal: equal, suitable for MatchFrom being ua, referer;</li>
<li> not_equal: Not equal to, applicable to MatchFrom being ua, referer;</li>
<li> include: wildcard match, suitable for MatchFrom being ua, referer, url;</li>
<li> not_include: wildcard mismatch, suitable for MatchFrom being ua, referer;</li>
<li> is_emty: The configuration content is empty, suitable for MatchFrom being ua or referer;</li>
<li> not_exists: The configuration content does not exist. This is applicable when MatchFrom is ua or referer.</li>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Rule id. Output only.
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Update time. For output usage only.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Rule enablement status. Valid values:
<li>`on`: Enable;</li>
<li> off: Disabled.</li>
If the input parameter is not specified, the value defaults to `on`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Rule name.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Matching content. Multi-value input is supported.
<li>When entering multiple matching values, please separate them with English commas;</li>
<li>When MatchFrom is ua, multi-value input is not supported;</li>
<li>When Operator is is_empty or not_exists, the input value of this field is invalid.</li>
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPTABLERULE_H_
