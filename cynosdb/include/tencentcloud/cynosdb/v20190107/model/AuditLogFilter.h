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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITLOGFILTER_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITLOGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Audit log filter criteria. When querying audit logs, filter the returned audit logs by user.
                */
                class AuditLogFilter : public AbstractModel
                {
                public:
                    AuditLogFilter();
                    ~AuditLogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client address.
                     * @return Host Client address.
                     * 
                     */
                    std::vector<std::string> GetHost() const;

                    /**
                     * 设置Client address.
                     * @param _host Client address.
                     * 
                     */
                    void SetHost(const std::vector<std::string>& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Username.
                     * @return User Username.
                     * 
                     */
                    std::vector<std::string> GetUser() const;

                    /**
                     * 设置Username.
                     * @param _user Username.
                     * 
                     */
                    void SetUser(const std::vector<std::string>& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Database name.
                     * @return DBName Database name.
                     * 
                     */
                    std::vector<std::string> GetDBName() const;

                    /**
                     * 设置Database name.
                     * @param _dBName Database name.
                     * 
                     */
                    void SetDBName(const std::vector<std::string>& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取Table name.
                     * @return TableName Table name.
                     * 
                     */
                    std::vector<std::string> GetTableName() const;

                    /**
                     * 设置Table name.
                     * @param _tableName Table name.
                     * 
                     */
                    void SetTableName(const std::vector<std::string>& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Audit policy name.
                     * @return PolicyName Audit policy name.
                     * 
                     */
                    std::vector<std::string> GetPolicyName() const;

                    /**
                     * 设置Audit policy name.
                     * @param _policyName Audit policy name.
                     * 
                     */
                    void SetPolicyName(const std::vector<std::string>& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取SQL statement. Fuzzy matching supported.
                     * @return Sql SQL statement. Fuzzy matching supported.
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置SQL statement. Fuzzy matching supported.
                     * @param _sql SQL statement. Fuzzy matching supported.
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取SQL type. Currently supports: "SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE".
                     * @return SqlType SQL type. Currently supports: "SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE".
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置SQL type. Currently supports: "SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE".
                     * @param _sqlType SQL type. Currently supports: "SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE".
                     * 
                     */
                    void SetSqlType(const std::string& _sqlType);

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     * 
                     */
                    bool SqlTypeHasBeenSet() const;

                    /**
                     * 获取Execution time. Unit: ms. Filter audit logs with an execution time more than this value.
                     * @return ExecTime Execution time. Unit: ms. Filter audit logs with an execution time more than this value.
                     * 
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置Execution time. Unit: ms. Filter audit logs with an execution time more than this value.
                     * @param _execTime Execution time. Unit: ms. Filter audit logs with an execution time more than this value.
                     * 
                     */
                    void SetExecTime(const int64_t& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取Number of affected rows. Filter audit logs where the number of affected rows is more than this value.
                     * @return AffectRows Number of affected rows. Filter audit logs where the number of affected rows is more than this value.
                     * 
                     */
                    int64_t GetAffectRows() const;

                    /**
                     * 设置Number of affected rows. Filter audit logs where the number of affected rows is more than this value.
                     * @param _affectRows Number of affected rows. Filter audit logs where the number of affected rows is more than this value.
                     * 
                     */
                    void SetAffectRows(const int64_t& _affectRows);

                    /**
                     * 判断参数 AffectRows 是否已赋值
                     * @return AffectRows 是否已赋值
                     * 
                     */
                    bool AffectRowsHasBeenSet() const;

                    /**
                     * 获取SQL type. Supports simultaneous query of multiple types. Currently supports: "SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE".
                     * @return SqlTypes SQL type. Supports simultaneous query of multiple types. Currently supports: "SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE".
                     * 
                     */
                    std::vector<std::string> GetSqlTypes() const;

                    /**
                     * 设置SQL type. Supports simultaneous query of multiple types. Currently supports: "SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE".
                     * @param _sqlTypes SQL type. Supports simultaneous query of multiple types. Currently supports: "SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE".
                     * 
                     */
                    void SetSqlTypes(const std::vector<std::string>& _sqlTypes);

                    /**
                     * 判断参数 SqlTypes 是否已赋值
                     * @return SqlTypes 是否已赋值
                     * 
                     */
                    bool SqlTypesHasBeenSet() const;

                    /**
                     * 获取SQL statement. Supports transmission of multiple sql statements.
                     * @return Sqls SQL statement. Supports transmission of multiple sql statements.
                     * 
                     */
                    std::vector<std::string> GetSqls() const;

                    /**
                     * 设置SQL statement. Supports transmission of multiple sql statements.
                     * @param _sqls SQL statement. Supports transmission of multiple sql statements.
                     * 
                     */
                    void SetSqls(const std::vector<std::string>& _sqls);

                    /**
                     * 判断参数 Sqls 是否已赋值
                     * @return Sqls 是否已赋值
                     * 
                     */
                    bool SqlsHasBeenSet() const;

                    /**
                     * 获取Number of rows returned.
                     * @return SentRows Number of rows returned.
                     * 
                     */
                    uint64_t GetSentRows() const;

                    /**
                     * 设置Number of rows returned.
                     * @param _sentRows Number of rows returned.
                     * 
                     */
                    void SetSentRows(const uint64_t& _sentRows);

                    /**
                     * 判断参数 SentRows 是否已赋值
                     * @return SentRows 是否已赋值
                     * 
                     */
                    bool SentRowsHasBeenSet() const;

                    /**
                     * 获取Thread ID.
                     * @return ThreadId Thread ID.
                     * 
                     */
                    std::vector<std::string> GetThreadId() const;

                    /**
                     * 设置Thread ID.
                     * @param _threadId Thread ID.
                     * 
                     */
                    void SetThreadId(const std::vector<std::string>& _threadId);

                    /**
                     * 判断参数 ThreadId 是否已赋值
                     * @return ThreadId 是否已赋值
                     * 
                     */
                    bool ThreadIdHasBeenSet() const;

                private:

                    /**
                     * Client address.
                     */
                    std::vector<std::string> m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Username.
                     */
                    std::vector<std::string> m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Database name.
                     */
                    std::vector<std::string> m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * Table name.
                     */
                    std::vector<std::string> m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Audit policy name.
                     */
                    std::vector<std::string> m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * SQL statement. Fuzzy matching supported.
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * SQL type. Currently supports: "SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE".
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * Execution time. Unit: ms. Filter audit logs with an execution time more than this value.
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * Number of affected rows. Filter audit logs where the number of affected rows is more than this value.
                     */
                    int64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * SQL type. Supports simultaneous query of multiple types. Currently supports: "SELECT", "INSERT", "UPDATE", "DELETE", "CREATE", "DROP", "ALTER", "SET", "REPLACE", "EXECUTE".
                     */
                    std::vector<std::string> m_sqlTypes;
                    bool m_sqlTypesHasBeenSet;

                    /**
                     * SQL statement. Supports transmission of multiple sql statements.
                     */
                    std::vector<std::string> m_sqls;
                    bool m_sqlsHasBeenSet;

                    /**
                     * Number of rows returned.
                     */
                    uint64_t m_sentRows;
                    bool m_sentRowsHasBeenSet;

                    /**
                     * Thread ID.
                     */
                    std::vector<std::string> m_threadId;
                    bool m_threadIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITLOGFILTER_H_
