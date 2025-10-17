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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEACCOUNTREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEACCOUNTREQUEST_H_

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
                * ModifyInstanceAccount request structure.
                */
                class ModifyInstanceAccountRequest : public AbstractModel
                {
                public:
                    ModifyInstanceAccountRequest();
                    ~ModifyInstanceAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @return InstanceId Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @param _instanceId Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
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
                     * 获取Specifies the account that needs modification.
- root: refers to the automatically generated account when a TencentDB for Redis® instance is created. Users cannot modify read-write permissions for the account, but can only modify its request routing policies.
- Custom account: an account manually created by users after successful instance creation. Users can modify read-write permissions and request routing policies for the account at any time.
                     * @return AccountName Specifies the account that needs modification.
- root: refers to the automatically generated account when a TencentDB for Redis® instance is created. Users cannot modify read-write permissions for the account, but can only modify its request routing policies.
- Custom account: an account manually created by users after successful instance creation. Users can modify read-write permissions and request routing policies for the account at any time.
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置Specifies the account that needs modification.
- root: refers to the automatically generated account when a TencentDB for Redis® instance is created. Users cannot modify read-write permissions for the account, but can only modify its request routing policies.
- Custom account: an account manually created by users after successful instance creation. Users can modify read-write permissions and request routing policies for the account at any time.
                     * @param _accountName Specifies the account that needs modification.
- root: refers to the automatically generated account when a TencentDB for Redis® instance is created. Users cannot modify read-write permissions for the account, but can only modify its request routing policies.
- Custom account: an account manually created by users after successful instance creation. Users can modify read-write permissions and request routing policies for the account at any time.
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
                     * 获取Specifies the access password for the account to be modified.
                     * @return AccountPassword Specifies the access password for the account to be modified.
                     * 
                     */
                    std::string GetAccountPassword() const;

                    /**
                     * 设置Specifies the access password for the account to be modified.
                     * @param _accountPassword Specifies the access password for the account to be modified.
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
                     * 获取Account description information.
                     * @return Remark Account description information.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Account description information.
                     * @param _remark Account description information.
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
                     * 获取Specifies the read-write request routing policies for the account to be modified.
- master: read-write request routing to the primary node.
- replication: read-write request routing to the secondary node.
                     * @return ReadonlyPolicy Specifies the read-write request routing policies for the account to be modified.
- master: read-write request routing to the primary node.
- replication: read-write request routing to the secondary node.
                     * 
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置Specifies the read-write request routing policies for the account to be modified.
- master: read-write request routing to the primary node.
- replication: read-write request routing to the secondary node.
                     * @param _readonlyPolicy Specifies the read-write request routing policies for the account to be modified.
- master: read-write request routing to the primary node.
- replication: read-write request routing to the secondary node.
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
                     * 获取Specifies the read-write permissions for the account to be modified.
- r: read-only.
- w: write-only.
- rw: read-write.
                     * @return Privilege Specifies the read-write permissions for the account to be modified.
- r: read-only.
- w: write-only.
- rw: read-write.
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置Specifies the read-write permissions for the account to be modified.
- r: read-only.
- w: write-only.
- rw: read-write.
                     * @param _privilege Specifies the read-write permissions for the account to be modified.
- r: read-only.
- w: write-only.
- rw: read-write.
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
                     * 获取Specifies whether to set the default account (root) to a password-free account. Custom accounts do not support password-free access.
- true: set the default account (root) to a password-free account.
- false: not set the default account (root) to a password-free account.
                     * @return NoAuth Specifies whether to set the default account (root) to a password-free account. Custom accounts do not support password-free access.
- true: set the default account (root) to a password-free account.
- false: not set the default account (root) to a password-free account.
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置Specifies whether to set the default account (root) to a password-free account. Custom accounts do not support password-free access.
- true: set the default account (root) to a password-free account.
- false: not set the default account (root) to a password-free account.
                     * @param _noAuth Specifies whether to set the default account (root) to a password-free account. Custom accounts do not support password-free access.
- true: set the default account (root) to a password-free account.
- false: not set the default account (root) to a password-free account.
                     * 
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     * 
                     */
                    bool NoAuthHasBeenSet() const;

                    /**
                     * 获取Specifies whether to encrypt the password for the account to be modified.
                     * @return EncryptPassword Specifies whether to encrypt the password for the account to be modified.
                     * 
                     */
                    bool GetEncryptPassword() const;

                    /**
                     * 设置Specifies whether to encrypt the password for the account to be modified.
                     * @param _encryptPassword Specifies whether to encrypt the password for the account to be modified.
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
                     * Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the account that needs modification.
- root: refers to the automatically generated account when a TencentDB for Redis® instance is created. Users cannot modify read-write permissions for the account, but can only modify its request routing policies.
- Custom account: an account manually created by users after successful instance creation. Users can modify read-write permissions and request routing policies for the account at any time.
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * Specifies the access password for the account to be modified.
                     */
                    std::string m_accountPassword;
                    bool m_accountPasswordHasBeenSet;

                    /**
                     * Account description information.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Specifies the read-write request routing policies for the account to be modified.
- master: read-write request routing to the primary node.
- replication: read-write request routing to the secondary node.
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                    /**
                     * Specifies the read-write permissions for the account to be modified.
- r: read-only.
- w: write-only.
- rw: read-write.
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * Specifies whether to set the default account (root) to a password-free account. Custom accounts do not support password-free access.
- true: set the default account (root) to a password-free account.
- false: not set the default account (root) to a password-free account.
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * Specifies whether to encrypt the password for the account to be modified.
                     */
                    bool m_encryptPassword;
                    bool m_encryptPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEACCOUNTREQUEST_H_
