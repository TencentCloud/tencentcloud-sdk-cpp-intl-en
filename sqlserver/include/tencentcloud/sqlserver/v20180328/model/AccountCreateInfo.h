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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTCREATEINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTCREATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DBPrivilege.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Account creation information
                */
                class AccountCreateInfo : public AbstractModel
                {
                public:
                    AccountCreateInfo();
                    ~AccountCreateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance username
                     * @return UserName Instance username
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Instance username
                     * @param UserName Instance username
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Instance password
                     * @return Password Instance password
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Instance password
                     * @param Password Instance password
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取List of database permissions
                     * @return DBPrivileges List of database permissions
                     */
                    std::vector<DBPrivilege> GetDBPrivileges() const;

                    /**
                     * 设置List of database permissions
                     * @param DBPrivileges List of database permissions
                     */
                    void SetDBPrivileges(const std::vector<DBPrivilege>& _dBPrivileges);

                    /**
                     * 判断参数 DBPrivileges 是否已赋值
                     * @return DBPrivileges 是否已赋值
                     */
                    bool DBPrivilegesHasBeenSet() const;

                    /**
                     * 获取Account remarks
                     * @return Remark Account remarks
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Account remarks
                     * @param Remark Account remarks
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Whether it is an admin account. Default value: no
                     * @return IsAdmin Whether it is an admin account. Default value: no
                     */
                    bool GetIsAdmin() const;

                    /**
                     * 设置Whether it is an admin account. Default value: no
                     * @param IsAdmin Whether it is an admin account. Default value: no
                     */
                    void SetIsAdmin(const bool& _isAdmin);

                    /**
                     * 判断参数 IsAdmin 是否已赋值
                     * @return IsAdmin 是否已赋值
                     */
                    bool IsAdminHasBeenSet() const;

                private:

                    /**
                     * Instance username
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Instance password
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * List of database permissions
                     */
                    std::vector<DBPrivilege> m_dBPrivileges;
                    bool m_dBPrivilegesHasBeenSet;

                    /**
                     * Account remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Whether it is an admin account. Default value: no
                     */
                    bool m_isAdmin;
                    bool m_isAdminHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTCREATEINFO_H_
