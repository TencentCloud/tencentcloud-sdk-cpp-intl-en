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
                     * 获取Custom account name for accessing the database.
- It contains only letters, digits, underscores (_), and hyphens (-).
- The length cannot exceed 32 characters.
                     * @return AccountName Custom account name for accessing the database.
- It contains only letters, digits, underscores (_), and hyphens (-).
- The length cannot exceed 32 characters.
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置Custom account name for accessing the database.
- It contains only letters, digits, underscores (_), and hyphens (-).
- The length cannot exceed 32 characters.
                     * @param _accountName Custom account name for accessing the database.
- It contains only letters, digits, underscores (_), and hyphens (-).
- The length cannot exceed 32 characters.
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
                     * 获取Password of the custom account. The password complexity requirements are as follows:
- It can contain 8 to 64 characters.
- It should contain at least two of the following types: lowercase letters, uppercase letters, digits, and special characters (such as ()`~!@#$%^&*-+=_|{}[]:;<>,.?/).
- It cannot start with a forward slash (/).

                     * @return AccountPassword Password of the custom account. The password complexity requirements are as follows:
- It can contain 8 to 64 characters.
- It should contain at least two of the following types: lowercase letters, uppercase letters, digits, and special characters (such as ()`~!@#$%^&*-+=_|{}[]:;<>,.?/).
- It cannot start with a forward slash (/).

                     * 
                     */
                    std::string GetAccountPassword() const;

                    /**
                     * 设置Password of the custom account. The password complexity requirements are as follows:
- It can contain 8 to 64 characters.
- It should contain at least two of the following types: lowercase letters, uppercase letters, digits, and special characters (such as ()`~!@#$%^&*-+=_|{}[]:;<>,.?/).
- It cannot start with a forward slash (/).

                     * @param _accountPassword Password of the custom account. The password complexity requirements are as follows:
- It can contain 8 to 64 characters.
- It should contain at least two of the following types: lowercase letters, uppercase letters, digits, and special characters (such as ()`~!@#$%^&*-+=_|{}[]:;<>,.?/).
- It cannot start with a forward slash (/).

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
                     * 获取The read requests for the designated account are routed to either the master node or replica nodes. If the Read-Only Replica is not enabled, the selection of replica nodes is not supported.
- master: Master node.- replication: Replica node.
                     * @return ReadonlyPolicy The read requests for the designated account are routed to either the master node or replica nodes. If the Read-Only Replica is not enabled, the selection of replica nodes is not supported.
- master: Master node.- replication: Replica node.
                     * 
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置The read requests for the designated account are routed to either the master node or replica nodes. If the Read-Only Replica is not enabled, the selection of replica nodes is not supported.
- master: Master node.- replication: Replica node.
                     * @param _readonlyPolicy The read requests for the designated account are routed to either the master node or replica nodes. If the Read-Only Replica is not enabled, the selection of replica nodes is not supported.
- master: Master node.- replication: Replica node.
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
                     * 获取The read/write permission of the account supports the selection of read-only and read/write permissions.
- r: read-only
- rw: Read/Write permission.
                     * @return Privilege The read/write permission of the account supports the selection of read-only and read/write permissions.
- r: read-only
- rw: Read/Write permission.
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置The read/write permission of the account supports the selection of read-only and read/write permissions.
- r: read-only
- rw: Read/Write permission.
                     * @param _privilege The read/write permission of the account supports the selection of read-only and read/write permissions.
- r: read-only
- rw: Read/Write permission.
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
                     * 获取Sub-account description information, with a length of [0, 64] bytes, supports Chinese characters.
                     * @return Remark Sub-account description information, with a length of [0, 64] bytes, supports Chinese characters.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Sub-account description information, with a length of [0, 64] bytes, supports Chinese characters.
                     * @param _remark Sub-account description information, with a length of [0, 64] bytes, supports Chinese characters.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Custom account name for accessing the database.
- It contains only letters, digits, underscores (_), and hyphens (-).
- The length cannot exceed 32 characters.
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * Password of the custom account. The password complexity requirements are as follows:
- It can contain 8 to 64 characters.
- It should contain at least two of the following types: lowercase letters, uppercase letters, digits, and special characters (such as ()`~!@#$%^&*-+=_|{}[]:;<>,.?/).
- It cannot start with a forward slash (/).

                     */
                    std::string m_accountPassword;
                    bool m_accountPasswordHasBeenSet;

                    /**
                     * The read requests for the designated account are routed to either the master node or replica nodes. If the Read-Only Replica is not enabled, the selection of replica nodes is not supported.
- master: Master node.- replication: Replica node.
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                    /**
                     * The read/write permission of the account supports the selection of read-only and read/write permissions.
- r: read-only
- rw: Read/Write permission.
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * Sub-account description information, with a length of [0, 64] bytes, supports Chinese characters.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCEACCOUNTREQUEST_H_
