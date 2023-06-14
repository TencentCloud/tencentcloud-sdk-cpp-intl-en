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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTPRIVILEGEMODIFYINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTPRIVILEGEMODIFYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DBPrivilegeModifyInfo.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Database account permission change information
                */
                class AccountPrivilegeModifyInfo : public AbstractModel
                {
                public:
                    AccountPrivilegeModifyInfo();
                    ~AccountPrivilegeModifyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database username
                     * @return UserName Database username
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Database username
                     * @param _userName Database username
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Account permission change information
                     * @return DBPrivileges Account permission change information
                     * 
                     */
                    std::vector<DBPrivilegeModifyInfo> GetDBPrivileges() const;

                    /**
                     * 设置Account permission change information
                     * @param _dBPrivileges Account permission change information
                     * 
                     */
                    void SetDBPrivileges(const std::vector<DBPrivilegeModifyInfo>& _dBPrivileges);

                    /**
                     * 判断参数 DBPrivileges 是否已赋值
                     * @return DBPrivileges 是否已赋值
                     * 
                     */
                    bool DBPrivilegesHasBeenSet() const;

                    /**
                     * 获取Whether the account has the admin permission. Valid values: `true` (Yes. It is an admin account when the instance is a basic edition type and `AccountType` is `L0`; it is a privileged account when the instance is a dual-server high availability edition type and `AccountType` is `L1`.), `false` (No. The admin permission is disabled by default).
                     * @return IsAdmin Whether the account has the admin permission. Valid values: `true` (Yes. It is an admin account when the instance is a basic edition type and `AccountType` is `L0`; it is a privileged account when the instance is a dual-server high availability edition type and `AccountType` is `L1`.), `false` (No. The admin permission is disabled by default).
                     * 
                     */
                    bool GetIsAdmin() const;

                    /**
                     * 设置Whether the account has the admin permission. Valid values: `true` (Yes. It is an admin account when the instance is a basic edition type and `AccountType` is `L0`; it is a privileged account when the instance is a dual-server high availability edition type and `AccountType` is `L1`.), `false` (No. The admin permission is disabled by default).
                     * @param _isAdmin Whether the account has the admin permission. Valid values: `true` (Yes. It is an admin account when the instance is a basic edition type and `AccountType` is `L0`; it is a privileged account when the instance is a dual-server high availability edition type and `AccountType` is `L1`.), `false` (No. The admin permission is disabled by default).
                     * 
                     */
                    void SetIsAdmin(const bool& _isAdmin);

                    /**
                     * 判断参数 IsAdmin 是否已赋值
                     * @return IsAdmin 是否已赋值
                     * 
                     */
                    bool IsAdminHasBeenSet() const;

                    /**
                     * 获取Account type, which is an extension field of `IsAdmin`. Valid values: `L0` (admin account, only for basic edition), `L1` (privileged account), `L2` (designated account), `L3` (standard account, default)
                     * @return AccountType Account type, which is an extension field of `IsAdmin`. Valid values: `L0` (admin account, only for basic edition), `L1` (privileged account), `L2` (designated account), `L3` (standard account, default)
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置Account type, which is an extension field of `IsAdmin`. Valid values: `L0` (admin account, only for basic edition), `L1` (privileged account), `L2` (designated account), `L3` (standard account, default)
                     * @param _accountType Account type, which is an extension field of `IsAdmin`. Valid values: `L0` (admin account, only for basic edition), `L1` (privileged account), `L2` (designated account), `L3` (standard account, default)
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                private:

                    /**
                     * Database username
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Account permission change information
                     */
                    std::vector<DBPrivilegeModifyInfo> m_dBPrivileges;
                    bool m_dBPrivilegesHasBeenSet;

                    /**
                     * Whether the account has the admin permission. Valid values: `true` (Yes. It is an admin account when the instance is a basic edition type and `AccountType` is `L0`; it is a privileged account when the instance is a dual-server high availability edition type and `AccountType` is `L1`.), `false` (No. The admin permission is disabled by default).
                     */
                    bool m_isAdmin;
                    bool m_isAdminHasBeenSet;

                    /**
                     * Account type, which is an extension field of `IsAdmin`. Valid values: `L0` (admin account, only for basic edition), `L1` (privileged account), `L2` (designated account), `L3` (standard account, default)
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTPRIVILEGEMODIFYINFO_H_
