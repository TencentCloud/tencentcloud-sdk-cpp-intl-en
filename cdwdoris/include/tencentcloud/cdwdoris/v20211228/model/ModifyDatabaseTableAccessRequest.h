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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYDATABASETABLEACCESSREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYDATABASETABLEACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ModifyDatabaseTableAccess request structure.
                */
                class ModifyDatabaseTableAccessRequest : public AbstractModel
                {
                public:
                    ModifyDatabaseTableAccessRequest();
                    ~ModifyDatabaseTableAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database name
                     * @return Database Database name
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database name
                     * @param _database Database name
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取Permission list
                     * @return Privileges Permission list
                     * 
                     */
                    std::vector<std::string> GetPrivileges() const;

                    /**
                     * 设置Permission list
                     * @param _privileges Permission list
                     * 
                     */
                    void SetPrivileges(const std::vector<std::string>& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                    /**
                     * 获取Operation type: GRANT or REVOKE
                     * @return GrantOrRevoke Operation type: GRANT or REVOKE
                     * 
                     */
                    std::string GetGrantOrRevoke() const;

                    /**
                     * 设置Operation type: GRANT or REVOKE
                     * @param _grantOrRevoke Operation type: GRANT or REVOKE
                     * 
                     */
                    void SetGrantOrRevoke(const std::string& _grantOrRevoke);

                    /**
                     * 判断参数 GrantOrRevoke 是否已赋值
                     * @return GrantOrRevoke 是否已赋值
                     * 
                     */
                    bool GrantOrRevokeHasBeenSet() const;

                    /**
                     * 获取InstanceId
                     * @return InstanceId InstanceId
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置InstanceId
                     * @param _instanceId InstanceId
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
                     * 获取Table name. If it is null, it indicates that the entire database is authorized.
                     * @return Table Table name. If it is null, it indicates that the entire database is authorized.
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Table name. If it is null, it indicates that the entire database is authorized.
                     * @param _table Table name. If it is null, it indicates that the entire database is authorized.
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取Role name, if authorized to the role
                     * @return Role Role name, if authorized to the role
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Role name, if authorized to the role
                     * @param _role Role name, if authorized to the role
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * @return UserName Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * @param _userName Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
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
                     * 获取Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * @return PassWord Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * 
                     */
                    std::string GetPassWord() const;

                    /**
                     * 设置Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * @param _passWord Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * 
                     */
                    void SetPassWord(const std::string& _passWord);

                    /**
                     * 判断参数 PassWord 是否已赋值
                     * @return PassWord 是否已赋值
                     * 
                     */
                    bool PassWordHasBeenSet() const;

                    /**
                     * 获取Catalog name, defaults to internal if not specified.
                     * @return CatalogName Catalog name, defaults to internal if not specified.
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置Catalog name, defaults to internal if not specified.
                     * @param _catalogName Catalog name, defaults to internal if not specified.
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取Machine Group, defaults to % if not specified.
                     * @return WhiteHost Machine Group, defaults to % if not specified.
                     * 
                     */
                    std::string GetWhiteHost() const;

                    /**
                     * 设置Machine Group, defaults to % if not specified.
                     * @param _whiteHost Machine Group, defaults to % if not specified.
                     * 
                     */
                    void SetWhiteHost(const std::string& _whiteHost);

                    /**
                     * 判断参数 WhiteHost 是否已赋值
                     * @return WhiteHost 是否已赋值
                     * 
                     */
                    bool WhiteHostHasBeenSet() const;

                private:

                    /**
                     * Database name
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Permission list
                     */
                    std::vector<std::string> m_privileges;
                    bool m_privilegesHasBeenSet;

                    /**
                     * Operation type: GRANT or REVOKE
                     */
                    std::string m_grantOrRevoke;
                    bool m_grantOrRevokeHasBeenSet;

                    /**
                     * InstanceId
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Table name. If it is null, it indicates that the entire database is authorized.
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * Role name, if authorized to the role
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     */
                    std::string m_passWord;
                    bool m_passWordHasBeenSet;

                    /**
                     * Catalog name, defaults to internal if not specified.
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * Machine Group, defaults to % if not specified.
                     */
                    std::string m_whiteHost;
                    bool m_whiteHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYDATABASETABLEACCESSREQUEST_H_
