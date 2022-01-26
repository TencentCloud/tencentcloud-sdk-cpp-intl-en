/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYSECURITYRULEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYSECURITYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * ModifySecurityRule request structure.
                */
                class ModifySecurityRuleRequest : public AbstractModel
                {
                public:
                    ModifySecurityRuleRequest();
                    ~ModifySecurityRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param RuleId Rule ID
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule name: up to 30 characters. The extra characters will be truncated.
                     * @return AliasName Rule name: up to 30 characters. The extra characters will be truncated.
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置Rule name: up to 30 characters. The extra characters will be truncated.
                     * @param AliasName Rule name: up to 30 characters. The extra characters will be truncated.
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取Security policy ID
                     * @return PolicyId Security policy ID
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Security policy ID
                     * @param PolicyId Security policy ID
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Security rule action
                     * @return RuleAction Security rule action
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置Security rule action
                     * @param RuleAction Security rule action
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取A CIDR IP address associated with the rule
                     * @return SourceCidr A CIDR IP address associated with the rule
                     */
                    std::string GetSourceCidr() const;

                    /**
                     * 设置A CIDR IP address associated with the rule
                     * @param SourceCidr A CIDR IP address associated with the rule
                     */
                    void SetSourceCidr(const std::string& _sourceCidr);

                    /**
                     * 判断参数 SourceCidr 是否已赋值
                     * @return SourceCidr 是否已赋值
                     */
                    bool SourceCidrHasBeenSet() const;

                    /**
                     * 获取Protocol type
                     * @return Protocol Protocol type
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol type
                     * @param Protocol Protocol type
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Port range. Valid values:
A single port: 80
Multiple ports: 80 and 443
Consecutive ports: 3306-20000
All ports: ALL
                     * @return DestPortRange Port range. Valid values:
A single port: 80
Multiple ports: 80 and 443
Consecutive ports: 3306-20000
All ports: ALL
                     */
                    std::string GetDestPortRange() const;

                    /**
                     * 设置Port range. Valid values:
A single port: 80
Multiple ports: 80 and 443
Consecutive ports: 3306-20000
All ports: ALL
                     * @param DestPortRange Port range. Valid values:
A single port: 80
Multiple ports: 80 and 443
Consecutive ports: 3306-20000
All ports: ALL
                     */
                    void SetDestPortRange(const std::string& _destPortRange);

                    /**
                     * 判断参数 DestPortRange 是否已赋值
                     * @return DestPortRange 是否已赋值
                     */
                    bool DestPortRangeHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule name: up to 30 characters. The extra characters will be truncated.
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * Security policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Security rule action
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * A CIDR IP address associated with the rule
                     */
                    std::string m_sourceCidr;
                    bool m_sourceCidrHasBeenSet;

                    /**
                     * Protocol type
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Port range. Valid values:
A single port: 80
Multiple ports: 80 and 443
Consecutive ports: 3306-20000
All ports: ALL
                     */
                    std::string m_destPortRange;
                    bool m_destPortRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYSECURITYRULEREQUEST_H_
