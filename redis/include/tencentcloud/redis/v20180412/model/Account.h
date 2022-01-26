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
                     * 获取Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceId Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Account name (`root` for a root account)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccountName Account name (`root` for a root account)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置Account name (`root` for a root account)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AccountName Account name (`root` for a root account)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取Account description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Account description information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Account description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Remark Account description information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Read/write policy. r: read-only; w: write-only; rw: read/write
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Privilege Read/write policy. r: read-only; w: write-only; rw: read/write
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置Read/write policy. r: read-only; w: write-only; rw: read/write
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Privilege Read/write policy. r: read-only; w: write-only; rw: read/write
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPrivilege(const std::string& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取Routing policy. master: master node; replication: secondary node
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReadonlyPolicy Routing policy. master: master node; replication: secondary node
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置Routing policy. master: master node; replication: secondary node
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ReadonlyPolicy Routing policy. master: master node; replication: secondary node
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetReadonlyPolicy(const std::vector<std::string>& _readonlyPolicy);

                    /**
                     * 判断参数 ReadonlyPolicy 是否已赋值
                     * @return ReadonlyPolicy 是否已赋值
                     */
                    bool ReadonlyPolicyHasBeenSet() const;

                    /**
                     * 获取Sub-account status. 1: account is being changed; 2: account is valid; -4: account has been deleted
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Sub-account status. 1: account is being changed; 2: account is valid; -4: account has been deleted
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Sub-account status. 1: account is being changed; 2: account is valid; -4: account has been deleted
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Status Sub-account status. 1: account is being changed; 2: account is valid; -4: account has been deleted
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Account name (`root` for a root account)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * Account description information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Read/write policy. r: read-only; w: write-only; rw: read/write
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * Routing policy. master: master node; replication: secondary node
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                    /**
                     * Sub-account status. 1: account is being changed; 2: account is valid; -4: account has been deleted
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_ACCOUNT_H_
