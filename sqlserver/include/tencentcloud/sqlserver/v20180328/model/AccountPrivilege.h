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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTPRIVILEGE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTPRIVILEGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Database account permission information, which is set when the database is created
                */
                class AccountPrivilege : public AbstractModel
                {
                public:
                    AccountPrivilege();
                    ~AccountPrivilege() = default;
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
                     * 获取Database permission. Valid values: `ReadWrite` (read-write), `ReadOnly` (read-only), `Delete` (delete the database permissions of this account), `DBOwner` (owner).
                     * @return Privilege Database permission. Valid values: `ReadWrite` (read-write), `ReadOnly` (read-only), `Delete` (delete the database permissions of this account), `DBOwner` (owner).
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置Database permission. Valid values: `ReadWrite` (read-write), `ReadOnly` (read-only), `Delete` (delete the database permissions of this account), `DBOwner` (owner).
                     * @param _privilege Database permission. Valid values: `ReadWrite` (read-write), `ReadOnly` (read-only), `Delete` (delete the database permissions of this account), `DBOwner` (owner).
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
                     * 获取Account name. Valid values: `L0` (admin account, only for basic edition), `L1` (privileged account), `L2` (designated account), `L3` (standard account).
                     * @return AccountType Account name. Valid values: `L0` (admin account, only for basic edition), `L1` (privileged account), `L2` (designated account), `L3` (standard account).
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置Account name. Valid values: `L0` (admin account, only for basic edition), `L1` (privileged account), `L2` (designated account), `L3` (standard account).
                     * @param _accountType Account name. Valid values: `L0` (admin account, only for basic edition), `L1` (privileged account), `L2` (designated account), `L3` (standard account).
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
                     * Database permission. Valid values: `ReadWrite` (read-write), `ReadOnly` (read-only), `Delete` (delete the database permissions of this account), `DBOwner` (owner).
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * Account name. Valid values: `L0` (admin account, only for basic edition), `L1` (privileged account), `L2` (designated account), `L3` (standard account).
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTPRIVILEGE_H_
