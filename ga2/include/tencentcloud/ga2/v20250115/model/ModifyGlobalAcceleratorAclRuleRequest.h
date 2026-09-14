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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORACLRULEREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyGlobalAcceleratorAclRule request structure.
                */
                class ModifyGlobalAcceleratorAclRuleRequest : public AbstractModel
                {
                public:
                    ModifyGlobalAcceleratorAclRuleRequest();
                    ~ModifyGlobalAcceleratorAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Global acceleration instance ID.</p>
                     * @return GlobalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>Global acceleration instance ID.</p>
                     * @param _globalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>Security policy ID</p>
                     * @return GlobalAcceleratorAclPolicyId <p>Security policy ID</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorAclPolicyId() const;

                    /**
                     * 设置<p>Security policy ID</p>
                     * @param _globalAcceleratorAclPolicyId <p>Security policy ID</p>
                     * 
                     */
                    void SetGlobalAcceleratorAclPolicyId(const std::string& _globalAcceleratorAclPolicyId);

                    /**
                     * 判断参数 GlobalAcceleratorAclPolicyId 是否已赋值
                     * @return GlobalAcceleratorAclPolicyId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorAclPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>Acl rule ID.</p>
                     * @return GlobalAcceleratorAclRuleId <p>Acl rule ID.</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorAclRuleId() const;

                    /**
                     * 设置<p>Acl rule ID.</p>
                     * @param _globalAcceleratorAclRuleId <p>Acl rule ID.</p>
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
                     * 获取<p>Protocol.</p><p>Input parameter limit: support selecting 'TCP', 'UDP'.</p>
                     * @return Protocol <p>Protocol.</p><p>Input parameter limit: support selecting 'TCP', 'UDP'.</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>Protocol.</p><p>Input parameter limit: support selecting 'TCP', 'UDP'.</p>
                     * @param _protocol <p>Protocol.</p><p>Input parameter limit: support selecting 'TCP', 'UDP'.</p>
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
                     * 获取<p>Port.</p>
                     * @return Port <p>Port.</p>
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置<p>Port.</p>
                     * @param _port <p>Port.</p>
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
                     * 获取<p>IP range.</p>
                     * @return SourceCidrBlock <p>IP range.</p>
                     * 
                     */
                    std::string GetSourceCidrBlock() const;

                    /**
                     * 设置<p>IP range.</p>
                     * @param _sourceCidrBlock <p>IP range.</p>
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
                     * 获取<p>Action.</p><p>Input parameter limit: support selecting 'ACCEPT', 'DROP'.</p><p>Enumeration values:</p><ul><li>ACCEPT: permission.</li><li>DROP: deny.</li></ul>
                     * @return Policy <p>Action.</p><p>Input parameter limit: support selecting 'ACCEPT', 'DROP'.</p><p>Enumeration values:</p><ul><li>ACCEPT: permission.</li><li>DROP: deny.</li></ul>
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置<p>Action.</p><p>Input parameter limit: support selecting 'ACCEPT', 'DROP'.</p><p>Enumeration values:</p><ul><li>ACCEPT: permission.</li><li>DROP: deny.</li></ul>
                     * @param _policy <p>Action.</p><p>Input parameter limit: support selecting 'ACCEPT', 'DROP'.</p><p>Enumeration values:</p><ul><li>ACCEPT: permission.</li><li>DROP: deny.</li></ul>
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
                     * 获取<p>Description. Maximum length cannot exceed 100 bytes.</p>
                     * @return Description <p>Description. Maximum length cannot exceed 100 bytes.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description. Maximum length cannot exceed 100 bytes.</p>
                     * @param _description <p>Description. Maximum length cannot exceed 100 bytes.</p>
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
                     * <p>Global acceleration instance ID.</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>Security policy ID</p>
                     */
                    std::string m_globalAcceleratorAclPolicyId;
                    bool m_globalAcceleratorAclPolicyIdHasBeenSet;

                    /**
                     * <p>Acl rule ID.</p>
                     */
                    std::string m_globalAcceleratorAclRuleId;
                    bool m_globalAcceleratorAclRuleIdHasBeenSet;

                    /**
                     * <p>Protocol.</p><p>Input parameter limit: support selecting 'TCP', 'UDP'.</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>Port.</p>
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>IP range.</p>
                     */
                    std::string m_sourceCidrBlock;
                    bool m_sourceCidrBlockHasBeenSet;

                    /**
                     * <p>Action.</p><p>Input parameter limit: support selecting 'ACCEPT', 'DROP'.</p><p>Enumeration values:</p><ul><li>ACCEPT: permission.</li><li>DROP: deny.</li></ul>
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * <p>Description. Maximum length cannot exceed 100 bytes.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORACLRULEREQUEST_H_
