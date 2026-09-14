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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORACLRULESET_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORACLRULESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * Acl rule information
                */
                class GlobalAcceleratorAclRuleSet : public AbstractModel
                {
                public:
                    GlobalAcceleratorAclRuleSet();
                    ~GlobalAcceleratorAclRuleSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access control policy ID.
                     * @return GlobalAcceleratorPolicyId Access control policy ID.
                     * 
                     */
                    std::string GetGlobalAcceleratorPolicyId() const;

                    /**
                     * 设置Access control policy ID.
                     * @param _globalAcceleratorPolicyId Access control policy ID.
                     * 
                     */
                    void SetGlobalAcceleratorPolicyId(const std::string& _globalAcceleratorPolicyId);

                    /**
                     * 判断参数 GlobalAcceleratorPolicyId 是否已赋值
                     * @return GlobalAcceleratorPolicyId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorPolicyIdHasBeenSet() const;

                    /**
                     * 获取Acl rule ID.
                     * @return GlobalAcceleratorAclRuleId Acl rule ID.
                     * 
                     */
                    std::string GetGlobalAcceleratorAclRuleId() const;

                    /**
                     * 设置Acl rule ID.
                     * @param _globalAcceleratorAclRuleId Acl rule ID.
                     * 
                     */
                    void SetGlobalAcceleratorAclRuleId(const std::string& _globalAcceleratorAclRuleId);

                    /**
                     * 判断参数 GlobalAcceleratorAclRuleId 是否已赋值
                     * @return GlobalAcceleratorAclRuleId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorAclRuleIdHasBeenSet() const;

                    /**
                     * 获取Protocol.
                     * @return Protocol Protocol.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol.
                     * @param _protocol Protocol.
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
                     * 获取Port.
                     * @return Port Port.
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port.
                     * @param _port Port.
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取IP range.
                     * @return SourceCidrBlock IP range.
                     * 
                     */
                    std::string GetSourceCidrBlock() const;

                    /**
                     * 设置IP range.
                     * @param _sourceCidrBlock IP range.
                     * 
                     */
                    void SetSourceCidrBlock(const std::string& _sourceCidrBlock);

                    /**
                     * 判断参数 SourceCidrBlock 是否已赋值
                     * @return SourceCidrBlock 是否已赋值
                     * 
                     */
                    bool SourceCidrBlockHasBeenSet() const;

                    /**
                     * 获取Action.
                     * @return Policy Action.
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置Action.
                     * @param _policy Action.
                     * 
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取Description.
                     * @return Description Description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.
                     * @param _description Description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Access control policy ID.
                     */
                    std::string m_globalAcceleratorPolicyId;
                    bool m_globalAcceleratorPolicyIdHasBeenSet;

                    /**
                     * Acl rule ID.
                     */
                    std::string m_globalAcceleratorAclRuleId;
                    bool m_globalAcceleratorAclRuleIdHasBeenSet;

                    /**
                     * Protocol.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Port.
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * IP range.
                     */
                    std::string m_sourceCidrBlock;
                    bool m_sourceCidrBlockHasBeenSet;

                    /**
                     * Action.
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * Description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORACLRULESET_H_
