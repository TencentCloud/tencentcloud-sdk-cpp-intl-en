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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeAccountPrivileges request structure.
                */
                class DescribeAccountPrivilegesRequest : public AbstractModel
                {
                public:
                    DescribeAccountPrivilegesRequest();
                    ~DescribeAccountPrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of dcdbt-ow7t8lmc.
                     * @return InstanceId Instance ID in the format of dcdbt-ow7t8lmc.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of dcdbt-ow7t8lmc.
                     * @param InstanceId Instance ID in the format of dcdbt-ow7t8lmc.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Login username.
                     * @return UserName Login username.
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Login username.
                     * @param UserName Login username.
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Access host allowed for a user. An account is uniquely identified by username and host.
                     * @return Host Access host allowed for a user. An account is uniquely identified by username and host.
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Access host allowed for a user. An account is uniquely identified by username and host.
                     * @param Host Access host allowed for a user. An account is uniquely identified by username and host.
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Database name. `\*` indicates that global permissions will be queried (i.e., `\*.\*`), in which case the `Type` and `Object ` parameters will be ignored.
                     * @return DbName Database name. `\*` indicates that global permissions will be queried (i.e., `\*.\*`), in which case the `Type` and `Object ` parameters will be ignored.
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name. `\*` indicates that global permissions will be queried (i.e., `\*.\*`), in which case the `Type` and `Object ` parameters will be ignored.
                     * @param DbName Database name. `\*` indicates that global permissions will be queried (i.e., `\*.\*`), in which case the `Type` and `Object ` parameters will be ignored.
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Type. Valid values: table, view, proc, func, \*. If `DbName` is a specific database name and `Type` is `\*`, the permissions of the database will be queried (i.e., `db.\*`), in which case the `Object` parameter will be ignored.
                     * @return Type Type. Valid values: table, view, proc, func, \*. If `DbName` is a specific database name and `Type` is `\*`, the permissions of the database will be queried (i.e., `db.\*`), in which case the `Object` parameter will be ignored.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type. Valid values: table, view, proc, func, \*. If `DbName` is a specific database name and `Type` is `\*`, the permissions of the database will be queried (i.e., `db.\*`), in which case the `Object` parameter will be ignored.
                     * @param Type Type. Valid values: table, view, proc, func, \*. If `DbName` is a specific database name and `Type` is `\*`, the permissions of the database will be queried (i.e., `db.\*`), in which case the `Object` parameter will be ignored.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Type name. For example, if `Type` is `table`, `Object` indicates a specific table name; if both `DbName` and `Type` are specific names, it indicates a specific object name and cannot be `\*` or empty.
                     * @return Object Type name. For example, if `Type` is `table`, `Object` indicates a specific table name; if both `DbName` and `Type` are specific names, it indicates a specific object name and cannot be `\*` or empty.
                     */
                    std::string GetObject() const;

                    /**
                     * 设置Type name. For example, if `Type` is `table`, `Object` indicates a specific table name; if both `DbName` and `Type` are specific names, it indicates a specific object name and cannot be `\*` or empty.
                     * @param Object Type name. For example, if `Type` is `table`, `Object` indicates a specific table name; if both `DbName` and `Type` are specific names, it indicates a specific object name and cannot be `\*` or empty.
                     */
                    void SetObject(const std::string& _object);

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     */
                    bool ObjectHasBeenSet() const;

                    /**
                     * 获取If `Type` is `table` and `ColName` is `\*`, the permissions of the table will be queried; if `ColName` is a specific field name, the permissions of the corresponding field will be queried.
                     * @return ColName If `Type` is `table` and `ColName` is `\*`, the permissions of the table will be queried; if `ColName` is a specific field name, the permissions of the corresponding field will be queried.
                     */
                    std::string GetColName() const;

                    /**
                     * 设置If `Type` is `table` and `ColName` is `\*`, the permissions of the table will be queried; if `ColName` is a specific field name, the permissions of the corresponding field will be queried.
                     * @param ColName If `Type` is `table` and `ColName` is `\*`, the permissions of the table will be queried; if `ColName` is a specific field name, the permissions of the corresponding field will be queried.
                     */
                    void SetColName(const std::string& _colName);

                    /**
                     * 判断参数 ColName 是否已赋值
                     * @return ColName 是否已赋值
                     */
                    bool ColNameHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of dcdbt-ow7t8lmc.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Login username.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Access host allowed for a user. An account is uniquely identified by username and host.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Database name. `\*` indicates that global permissions will be queried (i.e., `\*.\*`), in which case the `Type` and `Object ` parameters will be ignored.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Type. Valid values: table, view, proc, func, \*. If `DbName` is a specific database name and `Type` is `\*`, the permissions of the database will be queried (i.e., `db.\*`), in which case the `Object` parameter will be ignored.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Type name. For example, if `Type` is `table`, `Object` indicates a specific table name; if both `DbName` and `Type` are specific names, it indicates a specific object name and cannot be `\*` or empty.
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

                    /**
                     * If `Type` is `table` and `ColName` is `\*`, the permissions of the table will be queried; if `ColName` is a specific field name, the permissions of the corresponding field will be queried.
                     */
                    std::string m_colName;
                    bool m_colNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_
