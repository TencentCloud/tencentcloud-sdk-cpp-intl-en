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
                     * 获取Sub-account name. If you want to change it to the root account, fill in root.
                     * @return AccountName Sub-account name. If you want to change it to the root account, fill in root.
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置Sub-account name. If you want to change it to the root account, fill in root.
                     * @param _accountName Sub-account name. If you want to change it to the root account, fill in root.
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
                     * 获取Sub-account password.
                     * @return AccountPassword Sub-account password.
                     * 
                     */
                    std::string GetAccountPassword() const;

                    /**
                     * 设置Sub-account password.
                     * @param _accountPassword Sub-account password.
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
                     * 获取Sub-account description information
                     * @return Remark Sub-account description information
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Sub-account description information
                     * @param _remark Sub-account description information
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
                     * 获取Account read/write routing policy.
- master: primary node.
- replication: secondary node.
                     * @return ReadonlyPolicy Account read/write routing policy.
- master: primary node.
- replication: secondary node.
                     * 
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置Account read/write routing policy.
- master: primary node.
- replication: secondary node.
                     * @param _readonlyPolicy Account read/write routing policy.
- master: primary node.
- replication: secondary node.
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
                     * 获取Sub-account read/write policy.
- r: read-only.
- w: write-only.
- rw: read/write.
                     * @return Privilege Sub-account read/write policy.
- r: read-only.
- w: write-only.
- rw: read/write.
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置Sub-account read/write policy.
- r: read-only.
- w: write-only.
- rw: read/write.
                     * @param _privilege Sub-account read/write policy.
- r: read-only.
- w: write-only.
- rw: read/write.
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
                     * 获取Whether to switch the root account to a password-free account. This applies only to the root account. Sub-accounts do not support password-free access.
- true: Switch the root account to a password-free account.
- false: Do not switch it.
                     * @return NoAuth Whether to switch the root account to a password-free account. This applies only to the root account. Sub-accounts do not support password-free access.
- true: Switch the root account to a password-free account.
- false: Do not switch it.
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置Whether to switch the root account to a password-free account. This applies only to the root account. Sub-accounts do not support password-free access.
- true: Switch the root account to a password-free account.
- false: Do not switch it.
                     * @param _noAuth Whether to switch the root account to a password-free account. This applies only to the root account. Sub-accounts do not support password-free access.
- true: Switch the root account to a password-free account.
- false: Do not switch it.
                     * 
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     * 
                     */
                    bool NoAuthHasBeenSet() const;

                private:

                    /**
                     * Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Sub-account name. If you want to change it to the root account, fill in root.
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * Sub-account password.
                     */
                    std::string m_accountPassword;
                    bool m_accountPasswordHasBeenSet;

                    /**
                     * Sub-account description information
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Account read/write routing policy.
- master: primary node.
- replication: secondary node.
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                    /**
                     * Sub-account read/write policy.
- r: read-only.
- w: write-only.
- rw: read/write.
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * Whether to switch the root account to a password-free account. This applies only to the root account. Sub-accounts do not support password-free access.
- true: Switch the root account to a password-free account.
- false: Do not switch it.
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEACCOUNTREQUEST_H_
