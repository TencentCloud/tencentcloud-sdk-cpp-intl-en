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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_ACCOUNT_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_ACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Sub-account information
                */
                class Account : public AbstractModel
                {
                public:
                    Account();
                    ~Account() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
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
                     * 获取<p>Account name.</p>
                     * @return AccountName <p>Account name.</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>Account name.</p>
                     * @param _accountName <p>Account name.</p>
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
                     * 获取<p>Account description.</p>
                     * @return Remark <p>Account description.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Account description.</p>
                     * @param _remark <p>Account description.</p>
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
                     * 获取<p>Read/write permission policy. - r: read-only. - w: write-only. - rw: read-write.</p>
                     * @return Privilege <p>Read/write permission policy. - r: read-only. - w: write-only. - rw: read-write.</p>
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置<p>Read/write permission policy. - r: read-only. - w: write-only. - rw: read-write.</p>
                     * @param _privilege <p>Read/write permission policy. - r: read-only. - w: write-only. - rw: read-write.</p>
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
                     * 获取<p>Read-only Routing Policy. - master: Master node. - replication: Replica node.</p>
                     * @return ReadonlyPolicy <p>Read-only Routing Policy. - master: Master node. - replication: Replica node.</p>
                     * 
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置<p>Read-only Routing Policy. - master: Master node. - replication: Replica node.</p>
                     * @param _readonlyPolicy <p>Read-only Routing Policy. - master: Master node. - replication: Replica node.</p>
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
                     * 获取<p>Sub-account status. - 1: Account change in progress. - 2: Valid. - 4: Deleted.</p>
                     * @return Status <p>Sub-account status. - 1: Account change in progress. - 2: Valid. - 4: Deleted.</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Sub-account status. - 1: Account change in progress. - 2: Valid. - 4: Deleted.</p>
                     * @param _status <p>Sub-account status. - 1: Account change in progress. - 2: Valid. - 4: Deleted.</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Account creation time.</p><p>If the parameter is an empty string, the account was created in an earlier version where the recording feature was not supported.</p>
                     * @return CreateTime <p>Account creation time.</p><p>If the parameter is an empty string, the account was created in an earlier version where the recording feature was not supported.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Account creation time.</p><p>If the parameter is an empty string, the account was created in an earlier version where the recording feature was not supported.</p>
                     * @param _createTime <p>Account creation time.</p><p>If the parameter is an empty string, the account was created in an earlier version where the recording feature was not supported.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>The time when the account last changed the password.</p><p>If the parameter is an empty string, it means the account was created in an earlier version that did not support the password modification time recording feature.</p>
                     * @return PasswordLastModifiedTime <p>The time when the account last changed the password.</p><p>If the parameter is an empty string, it means the account was created in an earlier version that did not support the password modification time recording feature.</p>
                     * 
                     */
                    std::string GetPasswordLastModifiedTime() const;

                    /**
                     * 设置<p>The time when the account last changed the password.</p><p>If the parameter is an empty string, it means the account was created in an earlier version that did not support the password modification time recording feature.</p>
                     * @param _passwordLastModifiedTime <p>The time when the account last changed the password.</p><p>If the parameter is an empty string, it means the account was created in an earlier version that did not support the password modification time recording feature.</p>
                     * 
                     */
                    void SetPasswordLastModifiedTime(const std::string& _passwordLastModifiedTime);

                    /**
                     * 判断参数 PasswordLastModifiedTime 是否已赋值
                     * @return PasswordLastModifiedTime 是否已赋值
                     * 
                     */
                    bool PasswordLastModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Account name.</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>Account description.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Read/write permission policy. - r: read-only. - w: write-only. - rw: read-write.</p>
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * <p>Read-only Routing Policy. - master: Master node. - replication: Replica node.</p>
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                    /**
                     * <p>Sub-account status. - 1: Account change in progress. - 2: Valid. - 4: Deleted.</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Account creation time.</p><p>If the parameter is an empty string, the account was created in an earlier version where the recording feature was not supported.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>The time when the account last changed the password.</p><p>If the parameter is an empty string, it means the account was created in an earlier version that did not support the password modification time recording feature.</p>
                     */
                    std::string m_passwordLastModifiedTime;
                    bool m_passwordLastModifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_ACCOUNT_H_
