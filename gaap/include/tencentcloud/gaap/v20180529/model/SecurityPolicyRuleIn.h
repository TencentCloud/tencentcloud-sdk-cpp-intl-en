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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_SECURITYPOLICYRULEIN_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_SECURITYPOLICYRULEIN_H_

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
                * Security policy rule (input parameter)
                */
                class SecurityPolicyRuleIn : public AbstractModel
                {
                public:
                    SecurityPolicyRuleIn();
                    ~SecurityPolicyRuleIn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Protocol: TCP or UDP. ALL indicates all protocols.
                     * @return Protocol Protocol: TCP or UDP. ALL indicates all protocols.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol: TCP or UDP. ALL indicates all protocols.
                     * @param _protocol Protocol: TCP or UDP. ALL indicates all protocols.
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
                     * 获取Target port. Formatting examples:
Single port: 80
Multiple ports: 80, 443
Consecutive ports: 3306-20000
All ports: ALL
                     * @return DestPortRange Target port. Formatting examples:
Single port: 80
Multiple ports: 80, 443
Consecutive ports: 3306-20000
All ports: ALL
                     * 
                     */
                    std::string GetDestPortRange() const;

                    /**
                     * 设置Target port. Formatting examples:
Single port: 80
Multiple ports: 80, 443
Consecutive ports: 3306-20000
All ports: ALL
                     * @param _destPortRange Target port. Formatting examples:
Single port: 80
Multiple ports: 80, 443
Consecutive ports: 3306-20000
All ports: ALL
                     * 
                     */
                    void SetDestPortRange(const std::string& _destPortRange);

                    /**
                     * 判断参数 DestPortRange 是否已赋值
                     * @return DestPortRange 是否已赋值
                     * 
                     */
                    bool DestPortRangeHasBeenSet() const;

                private:

                    /**
                     * Source IP or IP range of the request.
                     */
                    std::string m_sourceCidr;
                    bool m_sourceCidrHasBeenSet;

                    /**
                     * Policy: Allow (ACCEPT) or reject (DROP).
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Rule alias
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * Protocol: TCP or UDP. ALL indicates all protocols.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Target port. Formatting examples:
Single port: 80
Multiple ports: 80, 443
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

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_SECURITYPOLICYRULEIN_H_
