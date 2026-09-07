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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
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
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Account name
                     * @return AccountName Account name
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置Account name
                     * @param _accountName Account name
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取Host
                     * @return Host Host
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host
                     * @param _host Host
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Database name. If it is `*`, Type/TableName are ignored, which means querying the user's global permission. If not passed, it defaults to `*`.
                     * @return Db Database name. If it is `*`, Type/TableName are ignored, which means querying the user's global permission. If not passed, it defaults to `*`.
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置Database name. If it is `*`, Type/TableName are ignored, which means querying the user's global permission. If not passed, it defaults to `*`.
                     * @param _db Database name. If it is `*`, Type/TableName are ignored, which means querying the user's global permission. If not passed, it defaults to `*`.
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取Specific object types under the designated database. Options: "table", "*". Defaults to * if not specified. TableName must be specified when Type is table.
                     * @return Type Specific object types under the designated database. Options: "table", "*". Defaults to * if not specified. TableName must be specified when Type is table.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Specific object types under the designated database. Options: "table", "*". Defaults to * if not specified. TableName must be specified when Type is table.
                     * @param _type Specific object types under the designated database. Options: "table", "*". Defaults to * if not specified. TableName must be specified when Type is table.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取When Type is "table", it is used to specify the table name. Required when Type is "table".
                     * @return TableName When Type is "table", it is used to specify the table name. Required when Type is "table".
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置When Type is "table", it is used to specify the table name. Required when Type is "table".
                     * @param _tableName When Type is "table", it is used to specify the table name. Required when Type is "table".
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Account name
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * Host
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Database name. If it is `*`, Type/TableName are ignored, which means querying the user's global permission. If not passed, it defaults to `*`.
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * Specific object types under the designated database. Options: "table", "*". Defaults to * if not specified. TableName must be specified when Type is table.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * When Type is "table", it is used to specify the table name. Required when Type is "table".
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_
