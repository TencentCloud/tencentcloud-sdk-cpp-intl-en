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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYACCOUNTMAXUSERCONNECTIONSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYACCOUNTMAXUSERCONNECTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/Account.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyAccountMaxUserConnections request structure.
                */
                class ModifyAccountMaxUserConnectionsRequest : public AbstractModel
                {
                public:
                    ModifyAccountMaxUserConnectionsRequest();
                    ~ModifyAccountMaxUserConnectionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of TencentDB accounts
                     * @return Accounts List of TencentDB accounts
                     */
                    std::vector<Account> GetAccounts() const;

                    /**
                     * 设置List of TencentDB accounts
                     * @param Accounts List of TencentDB accounts
                     */
                    void SetAccounts(const std::vector<Account>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     */
                    bool AccountsHasBeenSet() const;

                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * @param InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Maximum connections of the account. Maximum value: `10240`.
                     * @return MaxUserConnections Maximum connections of the account. Maximum value: `10240`.
                     */
                    int64_t GetMaxUserConnections() const;

                    /**
                     * 设置Maximum connections of the account. Maximum value: `10240`.
                     * @param MaxUserConnections Maximum connections of the account. Maximum value: `10240`.
                     */
                    void SetMaxUserConnections(const int64_t& _maxUserConnections);

                    /**
                     * 判断参数 MaxUserConnections 是否已赋值
                     * @return MaxUserConnections 是否已赋值
                     */
                    bool MaxUserConnectionsHasBeenSet() const;

                private:

                    /**
                     * List of TencentDB accounts
                     */
                    std::vector<Account> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Maximum connections of the account. Maximum value: `10240`.
                     */
                    int64_t m_maxUserConnections;
                    bool m_maxUserConnectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYACCOUNTMAXUSERCONNECTIONSREQUEST_H_
