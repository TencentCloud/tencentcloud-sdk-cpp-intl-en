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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_PRODUCTPRIVILEGEUNIT_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_PRODUCTPRIVILEGEUNIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * Permission granted when the credential is associated with the service
                */
                class ProductPrivilegeUnit : public AbstractModel
                {
                public:
                    ProductPrivilegeUnit();
                    ~ProductPrivilegeUnit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Permission name. Valid values:
GlobalPrivileges
DatabasePrivileges
TablePrivileges
ColumnPrivileges

When the permission is `DatabasePrivileges`, the database name must be specified by the `Database` parameter;

When the permission is `TablePrivileges`, the database name and the table name in the database must be specified by the `Database` and `TableName` parameters;

When the permission is `ColumnPrivileges`, the database name, table name in the database, and column name in the table must be specified by the `Database`, `TableName`, and `ColumnName` parameters.
                     * @return PrivilegeName Permission name. Valid values:
GlobalPrivileges
DatabasePrivileges
TablePrivileges
ColumnPrivileges

When the permission is `DatabasePrivileges`, the database name must be specified by the `Database` parameter;

When the permission is `TablePrivileges`, the database name and the table name in the database must be specified by the `Database` and `TableName` parameters;

When the permission is `ColumnPrivileges`, the database name, table name in the database, and column name in the table must be specified by the `Database`, `TableName`, and `ColumnName` parameters.
                     * 
                     */
                    std::string GetPrivilegeName() const;

                    /**
                     * 设置Permission name. Valid values:
GlobalPrivileges
DatabasePrivileges
TablePrivileges
ColumnPrivileges

When the permission is `DatabasePrivileges`, the database name must be specified by the `Database` parameter;

When the permission is `TablePrivileges`, the database name and the table name in the database must be specified by the `Database` and `TableName` parameters;

When the permission is `ColumnPrivileges`, the database name, table name in the database, and column name in the table must be specified by the `Database`, `TableName`, and `ColumnName` parameters.
                     * @param _privilegeName Permission name. Valid values:
GlobalPrivileges
DatabasePrivileges
TablePrivileges
ColumnPrivileges

When the permission is `DatabasePrivileges`, the database name must be specified by the `Database` parameter;

When the permission is `TablePrivileges`, the database name and the table name in the database must be specified by the `Database` and `TableName` parameters;

When the permission is `ColumnPrivileges`, the database name, table name in the database, and column name in the table must be specified by the `Database`, `TableName`, and `ColumnName` parameters.
                     * 
                     */
                    void SetPrivilegeName(const std::string& _privilegeName);

                    /**
                     * 判断参数 PrivilegeName 是否已赋值
                     * @return PrivilegeName 是否已赋值
                     * 
                     */
                    bool PrivilegeNameHasBeenSet() const;

                    /**
                     * 获取Permission list.
For the `Mysql` service, optional permission values are:

1. Valid values of `GlobalPrivileges`: "SELECT","INSERT","UPDATE","DELETE","CREATE", "PROCESS", "DROP","REFERENCES","INDEX","ALTER","SHOW DATABASES","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER".
Note: if this parameter is not passed in, it means to clear the permission.

2. Valid values of `DatabasePrivileges`: "SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER".
Note: if this parameter is not passed in, it means to clear the permission.

3. Valid values of `TablePrivileges`: "SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER".
Note: if this parameter is not passed in, it means to clear the permission.

4. Valid values of `ColumnPrivileges`: "SELECT","INSERT","UPDATE","REFERENCES".
Note: if this parameter is not passed in, it means to clear the permission.
                     * @return Privileges Permission list.
For the `Mysql` service, optional permission values are:

1. Valid values of `GlobalPrivileges`: "SELECT","INSERT","UPDATE","DELETE","CREATE", "PROCESS", "DROP","REFERENCES","INDEX","ALTER","SHOW DATABASES","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER".
Note: if this parameter is not passed in, it means to clear the permission.

2. Valid values of `DatabasePrivileges`: "SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER".
Note: if this parameter is not passed in, it means to clear the permission.

3. Valid values of `TablePrivileges`: "SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER".
Note: if this parameter is not passed in, it means to clear the permission.

4. Valid values of `ColumnPrivileges`: "SELECT","INSERT","UPDATE","REFERENCES".
Note: if this parameter is not passed in, it means to clear the permission.
                     * 
                     */
                    std::vector<std::string> GetPrivileges() const;

                    /**
                     * 设置Permission list.
For the `Mysql` service, optional permission values are:

1. Valid values of `GlobalPrivileges`: "SELECT","INSERT","UPDATE","DELETE","CREATE", "PROCESS", "DROP","REFERENCES","INDEX","ALTER","SHOW DATABASES","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER".
Note: if this parameter is not passed in, it means to clear the permission.

2. Valid values of `DatabasePrivileges`: "SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER".
Note: if this parameter is not passed in, it means to clear the permission.

3. Valid values of `TablePrivileges`: "SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER".
Note: if this parameter is not passed in, it means to clear the permission.

4. Valid values of `ColumnPrivileges`: "SELECT","INSERT","UPDATE","REFERENCES".
Note: if this parameter is not passed in, it means to clear the permission.
                     * @param _privileges Permission list.
For the `Mysql` service, optional permission values are:

1. Valid values of `GlobalPrivileges`: "SELECT","INSERT","UPDATE","DELETE","CREATE", "PROCESS", "DROP","REFERENCES","INDEX","ALTER","SHOW DATABASES","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER".
Note: if this parameter is not passed in, it means to clear the permission.

2. Valid values of `DatabasePrivileges`: "SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER".
Note: if this parameter is not passed in, it means to clear the permission.

3. Valid values of `TablePrivileges`: "SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER".
Note: if this parameter is not passed in, it means to clear the permission.

4. Valid values of `ColumnPrivileges`: "SELECT","INSERT","UPDATE","REFERENCES".
Note: if this parameter is not passed in, it means to clear the permission.
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
                     * 获取This value takes effect only when `PrivilegeName` is `DatabasePrivileges`.
                     * @return Database This value takes effect only when `PrivilegeName` is `DatabasePrivileges`.
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置This value takes effect only when `PrivilegeName` is `DatabasePrivileges`.
                     * @param _database This value takes effect only when `PrivilegeName` is `DatabasePrivileges`.
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
                     * 获取This value takes effect only when `PrivilegeName` is `TablePrivileges`, and the `Database` parameter is required in this case to explicitly indicate the database instance.
                     * @return TableName This value takes effect only when `PrivilegeName` is `TablePrivileges`, and the `Database` parameter is required in this case to explicitly indicate the database instance.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置This value takes effect only when `PrivilegeName` is `TablePrivileges`, and the `Database` parameter is required in this case to explicitly indicate the database instance.
                     * @param _tableName This value takes effect only when `PrivilegeName` is `TablePrivileges`, and the `Database` parameter is required in this case to explicitly indicate the database instance.
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取This value takes effect only when `PrivilegeName` is `ColumnPrivileges`, and the following parameters are required in this case:
Database: explicitly indicate the database instance.
TableName: explicitly indicate the table
                     * @return ColumnName This value takes effect only when `PrivilegeName` is `ColumnPrivileges`, and the following parameters are required in this case:
Database: explicitly indicate the database instance.
TableName: explicitly indicate the table
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置This value takes effect only when `PrivilegeName` is `ColumnPrivileges`, and the following parameters are required in this case:
Database: explicitly indicate the database instance.
TableName: explicitly indicate the table
                     * @param _columnName This value takes effect only when `PrivilegeName` is `ColumnPrivileges`, and the following parameters are required in this case:
Database: explicitly indicate the database instance.
TableName: explicitly indicate the table
                     * 
                     */
                    void SetColumnName(const std::string& _columnName);

                    /**
                     * 判断参数 ColumnName 是否已赋值
                     * @return ColumnName 是否已赋值
                     * 
                     */
                    bool ColumnNameHasBeenSet() const;

                private:

                    /**
                     * Permission name. Valid values:
GlobalPrivileges
DatabasePrivileges
TablePrivileges
ColumnPrivileges

When the permission is `DatabasePrivileges`, the database name must be specified by the `Database` parameter;

When the permission is `TablePrivileges`, the database name and the table name in the database must be specified by the `Database` and `TableName` parameters;

When the permission is `ColumnPrivileges`, the database name, table name in the database, and column name in the table must be specified by the `Database`, `TableName`, and `ColumnName` parameters.
                     */
                    std::string m_privilegeName;
                    bool m_privilegeNameHasBeenSet;

                    /**
                     * Permission list.
For the `Mysql` service, optional permission values are:

1. Valid values of `GlobalPrivileges`: "SELECT","INSERT","UPDATE","DELETE","CREATE", "PROCESS", "DROP","REFERENCES","INDEX","ALTER","SHOW DATABASES","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER".
Note: if this parameter is not passed in, it means to clear the permission.

2. Valid values of `DatabasePrivileges`: "SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER".
Note: if this parameter is not passed in, it means to clear the permission.

3. Valid values of `TablePrivileges`: "SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER".
Note: if this parameter is not passed in, it means to clear the permission.

4. Valid values of `ColumnPrivileges`: "SELECT","INSERT","UPDATE","REFERENCES".
Note: if this parameter is not passed in, it means to clear the permission.
                     */
                    std::vector<std::string> m_privileges;
                    bool m_privilegesHasBeenSet;

                    /**
                     * This value takes effect only when `PrivilegeName` is `DatabasePrivileges`.
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * This value takes effect only when `PrivilegeName` is `TablePrivileges`, and the `Database` parameter is required in this case to explicitly indicate the database instance.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * This value takes effect only when `PrivilegeName` is `ColumnPrivileges`, and the following parameters are required in this case:
Database: explicitly indicate the database instance.
TableName: explicitly indicate the table
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_PRODUCTPRIVILEGEUNIT_H_
