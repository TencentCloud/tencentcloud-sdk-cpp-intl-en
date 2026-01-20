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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEROTATIONPASSWORDREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEROTATIONPASSWORDREQUEST_H_

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
                * CreateRotationPassword request structure.
                */
                class CreateRotationPasswordRequest : public AbstractModel
                {
                public:
                    CreateRotationPasswordRequest();
                    ~CreateRotationPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed on the TencentDB for MySQL console page.
                     * @return InstanceId Instance ID, in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed on the TencentDB for MySQL console page.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed on the TencentDB for MySQL console page.
                     * @param _instanceId Instance ID, in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed on the TencentDB for MySQL console page.
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
                     * 获取Information about the account for which password rotation needs to be enabled. The account and host names are included.
                     * @return Accounts Information about the account for which password rotation needs to be enabled. The account and host names are included.
                     * 
                     */
                    std::vector<Account> GetAccounts() const;

                    /**
                     * 设置Information about the account for which password rotation needs to be enabled. The account and host names are included.
                     * @param _accounts Information about the account for which password rotation needs to be enabled. The account and host names are included.
                     * 
                     */
                    void SetAccounts(const std::vector<Account>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                private:

                    /**
                     * Instance ID, in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed on the TencentDB for MySQL console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Information about the account for which password rotation needs to be enabled. The account and host names are included.
                     */
                    std::vector<Account> m_accounts;
                    bool m_accountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEROTATIONPASSWORDREQUEST_H_
