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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCEACCOUNTREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * CreateInstanceAccount request structure.
                */
                class CreateInstanceAccountRequest : public AbstractModel
                {
                public:
                    CreateInstanceAccountRequest();
                    ~CreateInstanceAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @return InstanceId <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @param _instanceId <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Custom account name for accessing the database.</p><ul><li>Consist of letters, digits, underscores, and hyphens only.</li><li>Length cannot be greater than 32.</li></ul>
                     * @return AccountName <p>Custom account name for accessing the database.</p><ul><li>Consist of letters, digits, underscores, and hyphens only.</li><li>Length cannot be greater than 32.</li></ul>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>Custom account name for accessing the database.</p><ul><li>Consist of letters, digits, underscores, and hyphens only.</li><li>Length cannot be greater than 32.</li></ul>
                     * @param _accountName <p>Custom account name for accessing the database.</p><ul><li>Consist of letters, digits, underscores, and hyphens only.</li><li>Length cannot be greater than 32.</li></ul>
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>Set a password for the customized account. The password complexity requirements are as follows:</p><ul><li>Character count: [8,64].</li><li>Contain at least two kinds of lowercase letters, uppercase letters, digits and characters ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/.</li><li>Cannot start with "/".</li></ul>
                     * @return AccountPassword <p>Set a password for the customized account. The password complexity requirements are as follows:</p><ul><li>Character count: [8,64].</li><li>Contain at least two kinds of lowercase letters, uppercase letters, digits and characters ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/.</li><li>Cannot start with "/".</li></ul>
                     * 
                     */
                    std::string GetAccountPassword() const;

                    /**
                     * 设置<p>Set a password for the customized account. The password complexity requirements are as follows:</p><ul><li>Character count: [8,64].</li><li>Contain at least two kinds of lowercase letters, uppercase letters, digits and characters ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/.</li><li>Cannot start with "/".</li></ul>
                     * @param _accountPassword <p>Set a password for the customized account. The password complexity requirements are as follows:</p><ul><li>Character count: [8,64].</li><li>Contain at least two kinds of lowercase letters, uppercase letters, digits and characters ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/.</li><li>Cannot start with "/".</li></ul>
                     * 
                     */
                    void SetAccountPassword(const std::string& _accountPassword);

                    /**
                     * 判断参数 AccountPassword 是否已赋值
                     * @return AccountPassword 是否已赋值
                     * 
                     */
                    bool AccountPasswordHasBeenSet() const;

                    /**
                     * 获取<p>Read requests for the designated account are routed to the primary node or replica node. Read-only replica is not enabled, and selection of replica nodes is not supported.</p><ul><li>master: primary node</li><li>replication: replica node</li></ul>
                     * @return ReadonlyPolicy <p>Read requests for the designated account are routed to the primary node or replica node. Read-only replica is not enabled, and selection of replica nodes is not supported.</p><ul><li>master: primary node</li><li>replication: replica node</li></ul>
                     * 
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置<p>Read requests for the designated account are routed to the primary node or replica node. Read-only replica is not enabled, and selection of replica nodes is not supported.</p><ul><li>master: primary node</li><li>replication: replica node</li></ul>
                     * @param _readonlyPolicy <p>Read requests for the designated account are routed to the primary node or replica node. Read-only replica is not enabled, and selection of replica nodes is not supported.</p><ul><li>master: primary node</li><li>replication: replica node</li></ul>
                     * 
                     */
                    void SetReadonlyPolicy(const std::vector<std::string>& _readonlyPolicy);

                    /**
                     * 判断参数 ReadonlyPolicy 是否已赋值
                     * @return ReadonlyPolicy 是否已赋值
                     * 
                     */
                    bool ReadonlyPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Account read/write permission supports selecting read-only or read-write permission.</p><ul><li>r: Read-only.</li><li>rw: Read-write.</li></ul>
                     * @return Privilege <p>Account read/write permission supports selecting read-only or read-write permission.</p><ul><li>r: Read-only.</li><li>rw: Read-write.</li></ul>
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置<p>Account read/write permission supports selecting read-only or read-write permission.</p><ul><li>r: Read-only.</li><li>rw: Read-write.</li></ul>
                     * @param _privilege <p>Account read/write permission supports selecting read-only or read-write permission.</p><ul><li>r: Read-only.</li><li>rw: Read-write.</li></ul>
                     * 
                     */
                    void SetPrivilege(const std::string& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取<p>Description information about account remarks, with a length of [0, 64] bytes.</p>
                     * @return Remark <p>Description information about account remarks, with a length of [0, 64] bytes.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Description information about account remarks, with a length of [0, 64] bytes.</p>
                     * @param _remark <p>Description information about account remarks, with a length of [0, 64] bytes.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable password encryption for transmission.</p><ul><li>true: Encrypted.</li><li>false: Not encrypted (default value).</li></ul>
                     * @return EncryptPassword <p>Whether to enable password encryption for transmission.</p><ul><li>true: Encrypted.</li><li>false: Not encrypted (default value).</li></ul>
                     * 
                     */
                    bool GetEncryptPassword() const;

                    /**
                     * 设置<p>Whether to enable password encryption for transmission.</p><ul><li>true: Encrypted.</li><li>false: Not encrypted (default value).</li></ul>
                     * @param _encryptPassword <p>Whether to enable password encryption for transmission.</p><ul><li>true: Encrypted.</li><li>false: Not encrypted (default value).</li></ul>
                     * 
                     */
                    void SetEncryptPassword(const bool& _encryptPassword);

                    /**
                     * 判断参数 EncryptPassword 是否已赋值
                     * @return EncryptPassword 是否已赋值
                     * 
                     */
                    bool EncryptPasswordHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Custom account name for accessing the database.</p><ul><li>Consist of letters, digits, underscores, and hyphens only.</li><li>Length cannot be greater than 32.</li></ul>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>Set a password for the customized account. The password complexity requirements are as follows:</p><ul><li>Character count: [8,64].</li><li>Contain at least two kinds of lowercase letters, uppercase letters, digits and characters ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/.</li><li>Cannot start with "/".</li></ul>
                     */
                    std::string m_accountPassword;
                    bool m_accountPasswordHasBeenSet;

                    /**
                     * <p>Read requests for the designated account are routed to the primary node or replica node. Read-only replica is not enabled, and selection of replica nodes is not supported.</p><ul><li>master: primary node</li><li>replication: replica node</li></ul>
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                    /**
                     * <p>Account read/write permission supports selecting read-only or read-write permission.</p><ul><li>r: Read-only.</li><li>rw: Read-write.</li></ul>
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * <p>Description information about account remarks, with a length of [0, 64] bytes.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Whether to enable password encryption for transmission.</p><ul><li>true: Encrypted.</li><li>false: Not encrypted (default value).</li></ul>
                     */
                    bool m_encryptPassword;
                    bool m_encryptPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCEACCOUNTREQUEST_H_
