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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_PERMISSIONHOSTINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_PERMISSIONHOSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/DatabasePermissions.h>
#include <tencentcloud/cdwdoris/v20211228/model/TablePermissions.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Permission overview
                */
                class PermissionHostInfo : public AbstractModel
                {
                public:
                    PermissionHostInfo();
                    ~PermissionHostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取A list of user permissions in the global scope, which can be applied to all databases and tables.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GlobalPermissions A list of user permissions in the global scope, which can be applied to all databases and tables.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetGlobalPermissions() const;

                    /**
                     * 设置A list of user permissions in the global scope, which can be applied to all databases and tables.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _globalPermissions A list of user permissions in the global scope, which can be applied to all databases and tables.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGlobalPermissions(const std::vector<std::string>& _globalPermissions);

                    /**
                     * 判断参数 GlobalPermissions 是否已赋值
                     * @return GlobalPermissions 是否已赋值
                     * 
                     */
                    bool GlobalPermissionsHasBeenSet() const;

                    /**
                     * 获取The key is the database name, and the value is the permission list of the user on the database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatabasePermissions The key is the database name, and the value is the permission list of the user on the database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DatabasePermissions> GetDatabasePermissions() const;

                    /**
                     * 设置The key is the database name, and the value is the permission list of the user on the database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _databasePermissions The key is the database name, and the value is the permission list of the user on the database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatabasePermissions(const std::vector<DatabasePermissions>& _databasePermissions);

                    /**
                     * 判断参数 DatabasePermissions 是否已赋值
                     * @return DatabasePermissions 是否已赋值
                     * 
                     */
                    bool DatabasePermissionsHasBeenSet() const;

                    /**
                     * 获取The key is the full name of the table, and the value is the permission list of the user on the table.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TablePermissions The key is the full name of the table, and the value is the permission list of the user on the table.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TablePermissions> GetTablePermissions() const;

                    /**
                     * 设置The key is the full name of the table, and the value is the permission list of the user on the table.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tablePermissions The key is the full name of the table, and the value is the permission list of the user on the table.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTablePermissions(const std::vector<TablePermissions>& _tablePermissions);

                    /**
                     * 判断参数 TablePermissions 是否已赋值
                     * @return TablePermissions 是否已赋值
                     * 
                     */
                    bool TablePermissionsHasBeenSet() const;

                private:

                    /**
                     * A list of user permissions in the global scope, which can be applied to all databases and tables.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_globalPermissions;
                    bool m_globalPermissionsHasBeenSet;

                    /**
                     * The key is the database name, and the value is the permission list of the user on the database.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DatabasePermissions> m_databasePermissions;
                    bool m_databasePermissionsHasBeenSet;

                    /**
                     * The key is the full name of the table, and the value is the permission list of the user on the table.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TablePermissions> m_tablePermissions;
                    bool m_tablePermissionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_PERMISSIONHOSTINFO_H_
