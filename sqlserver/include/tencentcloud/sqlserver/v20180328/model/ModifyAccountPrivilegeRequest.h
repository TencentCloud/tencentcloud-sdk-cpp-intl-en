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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYACCOUNTPRIVILEGEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYACCOUNTPRIVILEGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/AccountPrivilegeModifyInfo.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyAccountPrivilege request structure.
                */
                class ModifyAccountPrivilegeRequest : public AbstractModel
                {
                public:
                    ModifyAccountPrivilegeRequest();
                    ~ModifyAccountPrivilegeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database instance ID in the format of mssql-njj2mtpl
                     * @return InstanceId Database instance ID in the format of mssql-njj2mtpl
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Database instance ID in the format of mssql-njj2mtpl
                     * @param _instanceId Database instance ID in the format of mssql-njj2mtpl
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
                     * 获取Account permission change information
                     * @return Accounts Account permission change information
                     * 
                     */
                    std::vector<AccountPrivilegeModifyInfo> GetAccounts() const;

                    /**
                     * 设置Account permission change information
                     * @param _accounts Account permission change information
                     * 
                     */
                    void SetAccounts(const std::vector<AccountPrivilegeModifyInfo>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                private:

                    /**
                     * Database instance ID in the format of mssql-njj2mtpl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Account permission change information
                     */
                    std::vector<AccountPrivilegeModifyInfo> m_accounts;
                    bool m_accountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYACCOUNTPRIVILEGEREQUEST_H_
