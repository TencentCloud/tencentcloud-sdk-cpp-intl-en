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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_SECURITYPOLICYRULEOUT_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_SECURITYPOLICYRULEOUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Security policy rule (output parameter)
                */
                class SecurityPolicyRuleOut : public AbstractModel
                {
                public:
                    SecurityPolicyRuleOut();
                    ~SecurityPolicyRuleOut() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy: Allow (ACCEPT) or reject (DROP).
                     * @return Action Policy: Allow (ACCEPT) or reject (DROP).
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Policy: Allow (ACCEPT) or reject (DROP).
                     * @param _action Policy: Allow (ACCEPT) or reject (DROP).
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
                     * 获取Source IP or IP range of the request.
                     * @return SourceCidr Source IP or IP range of the request.
                     * 
                     */
                    std::string GetSourceCidr() const;

                    /**
                     * 设置Source IP or IP range of the request.
                     * @param _sourceCidr Source IP or IP range of the request.
                     * 
                     */
                    void SetSourceCidr(const std::string& _sourceCidr);

                    /**
                     * 判断参数 SourceCidr 是否已赋值
                     * @return SourceCidr 是否已赋值
                     * 
                     */
                    bool SourceCidrHasBeenSet() const;

                    /**
                     * 获取Rule alias
                     * @return AliasName Rule alias
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置Rule alias
                     * @param _aliasName Rule alias
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取Target port range
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DestPortRange Target port range
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDestPortRange() const;

                    /**
                     * 设置Target port range
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _destPortRange Target port range
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDestPortRange(const std::string& _destPortRange);

                    /**
                     * 判断参数 DestPortRange 是否已赋值
                     * @return DestPortRange 是否已赋值
                     * 
                     */
                    bool DestPortRangeHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleId Rule ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Protocol type to be matched (TCP/UDP)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Protocol type to be matched (TCP/UDP)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol type to be matched (TCP/UDP)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protocol Protocol type to be matched (TCP/UDP)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Security policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyId Security policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Security policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyId Security policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * Policy: Allow (ACCEPT) or reject (DROP).
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Source IP or IP range of the request.
                     */
                    std::string m_sourceCidr;
                    bool m_sourceCidrHasBeenSet;

                    /**
                     * Rule alias
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * Target port range
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_destPortRange;
                    bool m_destPortRangeHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Protocol type to be matched (TCP/UDP)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Security policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_SECURITYPOLICYRULEOUT_H_
