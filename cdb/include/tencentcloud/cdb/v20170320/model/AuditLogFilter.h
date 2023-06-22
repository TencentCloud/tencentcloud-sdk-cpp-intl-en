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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_AUDITLOGFILTER_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_AUDITLOGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Filter condition for an audit log, which is used by users to filter the returned audit logs when querying them.
                */
                class AuditLogFilter : public AbstractModel
                {
                public:
                    AuditLogFilter();
                    ~AuditLogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client address
                     * @return Host Client address
                     * 
                     */
                    std::vector<std::string> GetHost() const;

                    /**
                     * 设置Client address
                     * @param _host Client address
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
                     * 获取Username
                     * @return User Username
                     * 
                     */
                    std::vector<std::string> GetUser() const;

                    /**
                     * 设置Username
                     * @param _user Username
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
                     * 获取
                     * @return DBName 
                     * 
                     */
                    std::vector<std::string> GetDBName() const;

                    /**
                     * 设置
                     * @param _dBName 
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
                     * 获取Table name
                     * @return TableName Table name
                     * 
                     */
                    std::vector<std::string> GetTableName() const;

                    /**
                     * 设置Table name
                     * @param _tableName Table name
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
                     * 获取Audit policy name
                     * @return PolicyName Audit policy name
                     * 
                     */
                    std::vector<std::string> GetPolicyName() const;

                    /**
                     * 设置Audit policy name
                     * @param _policyName Audit policy name
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
                     * 获取
                     * @return Sql 
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置
                     * @param _sql 
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
                     * 获取
                     * @return SqlType 
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置
                     * @param _sqlType 
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
                     * 获取Execution time in ms, which is used to filter the audit log with execution time greater than this value.
                     * @return ExecTime Execution time in ms, which is used to filter the audit log with execution time greater than this value.
                     * 
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置Execution time in ms, which is used to filter the audit log with execution time greater than this value.
                     * @param _execTime Execution time in ms, which is used to filter the audit log with execution time greater than this value.
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
                     * 获取Number of affected rows, which is used to filter the audit log with affected rows greater than this value.
                     * @return AffectRows Number of affected rows, which is used to filter the audit log with affected rows greater than this value.
                     * 
                     */
                    int64_t GetAffectRows() const;

                    /**
                     * 设置Number of affected rows, which is used to filter the audit log with affected rows greater than this value.
                     * @param _affectRows Number of affected rows, which is used to filter the audit log with affected rows greater than this value.
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
                     * 获取SQL type (Multiple types can be queried at same time). Valid values: `SELECT`, `INSERT`, `UPDATE`, `DELETE`, `CREATE`, `DROP`, `ALTER`, `SET`, `REPLACE`, `EXECUTE`.
                     * @return SqlTypes SQL type (Multiple types can be queried at same time). Valid values: `SELECT`, `INSERT`, `UPDATE`, `DELETE`, `CREATE`, `DROP`, `ALTER`, `SET`, `REPLACE`, `EXECUTE`.
                     * 
                     */
                    std::vector<std::string> GetSqlTypes() const;

                    /**
                     * 设置SQL type (Multiple types can be queried at same time). Valid values: `SELECT`, `INSERT`, `UPDATE`, `DELETE`, `CREATE`, `DROP`, `ALTER`, `SET`, `REPLACE`, `EXECUTE`.
                     * @param _sqlTypes SQL type (Multiple types can be queried at same time). Valid values: `SELECT`, `INSERT`, `UPDATE`, `DELETE`, `CREATE`, `DROP`, `ALTER`, `SET`, `REPLACE`, `EXECUTE`.
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
                     * 获取SQL statement. Multiple SQL statements can be passed in.
                     * @return Sqls SQL statement. Multiple SQL statements can be passed in.
                     * 
                     */
                    std::vector<std::string> GetSqls() const;

                    /**
                     * 设置SQL statement. Multiple SQL statements can be passed in.
                     * @param _sqls SQL statement. Multiple SQL statements can be passed in.
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
                     * 获取Number of rows affected in the format of M-N, such as 10-200.
                     * @return AffectRowsSection Number of rows affected in the format of M-N, such as 10-200.
                     * 
                     */
                    std::string GetAffectRowsSection() const;

                    /**
                     * 设置Number of rows affected in the format of M-N, such as 10-200.
                     * @param _affectRowsSection Number of rows affected in the format of M-N, such as 10-200.
                     * 
                     */
                    void SetAffectRowsSection(const std::string& _affectRowsSection);

                    /**
                     * 判断参数 AffectRowsSection 是否已赋值
                     * @return AffectRowsSection 是否已赋值
                     * 
                     */
                    bool AffectRowsSectionHasBeenSet() const;

                    /**
                     * 获取Number of rows returned in the format of M-N, such as 10-200.
                     * @return SentRowsSection Number of rows returned in the format of M-N, such as 10-200.
                     * 
                     */
                    std::string GetSentRowsSection() const;

                    /**
                     * 设置Number of rows returned in the format of M-N, such as 10-200.
                     * @param _sentRowsSection Number of rows returned in the format of M-N, such as 10-200.
                     * 
                     */
                    void SetSentRowsSection(const std::string& _sentRowsSection);

                    /**
                     * 判断参数 SentRowsSection 是否已赋值
                     * @return SentRowsSection 是否已赋值
                     * 
                     */
                    bool SentRowsSectionHasBeenSet() const;

                    /**
                     * 获取Execution time in the format of M-N, such as 10-200.
                     * @return ExecTimeSection Execution time in the format of M-N, such as 10-200.
                     * 
                     */
                    std::string GetExecTimeSection() const;

                    /**
                     * 设置Execution time in the format of M-N, such as 10-200.
                     * @param _execTimeSection Execution time in the format of M-N, such as 10-200.
                     * 
                     */
                    void SetExecTimeSection(const std::string& _execTimeSection);

                    /**
                     * 判断参数 ExecTimeSection 是否已赋值
                     * @return ExecTimeSection 是否已赋值
                     * 
                     */
                    bool ExecTimeSectionHasBeenSet() const;

                    /**
                     * 获取Lock wait time in the format of M-N, such as 10-200.
                     * @return LockWaitTimeSection Lock wait time in the format of M-N, such as 10-200.
                     * 
                     */
                    std::string GetLockWaitTimeSection() const;

                    /**
                     * 设置Lock wait time in the format of M-N, such as 10-200.
                     * @param _lockWaitTimeSection Lock wait time in the format of M-N, such as 10-200.
                     * 
                     */
                    void SetLockWaitTimeSection(const std::string& _lockWaitTimeSection);

                    /**
                     * 判断参数 LockWaitTimeSection 是否已赋值
                     * @return LockWaitTimeSection 是否已赋值
                     * 
                     */
                    bool LockWaitTimeSectionHasBeenSet() const;

                    /**
                     * 获取IO wait time in the format of M-N, such as 10-200.
                     * @return IoWaitTimeSection IO wait time in the format of M-N, such as 10-200.
                     * 
                     */
                    std::string GetIoWaitTimeSection() const;

                    /**
                     * 设置IO wait time in the format of M-N, such as 10-200.
                     * @param _ioWaitTimeSection IO wait time in the format of M-N, such as 10-200.
                     * 
                     */
                    void SetIoWaitTimeSection(const std::string& _ioWaitTimeSection);

                    /**
                     * 判断参数 IoWaitTimeSection 是否已赋值
                     * @return IoWaitTimeSection 是否已赋值
                     * 
                     */
                    bool IoWaitTimeSectionHasBeenSet() const;

                    /**
                     * 获取Transaction duration in the format of M-N, such as 10-200.
                     * @return TransactionLivingTimeSection Transaction duration in the format of M-N, such as 10-200.
                     * 
                     */
                    std::string GetTransactionLivingTimeSection() const;

                    /**
                     * 设置Transaction duration in the format of M-N, such as 10-200.
                     * @param _transactionLivingTimeSection Transaction duration in the format of M-N, such as 10-200.
                     * 
                     */
                    void SetTransactionLivingTimeSection(const std::string& _transactionLivingTimeSection);

                    /**
                     * 判断参数 TransactionLivingTimeSection 是否已赋值
                     * @return TransactionLivingTimeSection 是否已赋值
                     * 
                     */
                    bool TransactionLivingTimeSectionHasBeenSet() const;

                    /**
                     * 获取Thread ID
                     * @return ThreadId Thread ID
                     * 
                     */
                    std::vector<std::string> GetThreadId() const;

                    /**
                     * 设置Thread ID
                     * @param _threadId Thread ID
                     * 
                     */
                    void SetThreadId(const std::vector<std::string>& _threadId);

                    /**
                     * 判断参数 ThreadId 是否已赋值
                     * @return ThreadId 是否已赋值
                     * 
                     */
                    bool ThreadIdHasBeenSet() const;

                    /**
                     * 获取Number of returned rows,  which is used to filter the audit log with affected rows greater than this value.
                     * @return SentRows Number of returned rows,  which is used to filter the audit log with affected rows greater than this value.
                     * 
                     */
                    int64_t GetSentRows() const;

                    /**
                     * 设置Number of returned rows,  which is used to filter the audit log with affected rows greater than this value.
                     * @param _sentRows Number of returned rows,  which is used to filter the audit log with affected rows greater than this value.
                     * 
                     */
                    void SetSentRows(const int64_t& _sentRows);

                    /**
                     * 判断参数 SentRows 是否已赋值
                     * @return SentRows 是否已赋值
                     * 
                     */
                    bool SentRowsHasBeenSet() const;

                    /**
                     * 获取MySQL error codes
                     * @return ErrCode MySQL error codes
                     * 
                     */
                    std::vector<int64_t> GetErrCode() const;

                    /**
                     * 设置MySQL error codes
                     * @param _errCode MySQL error codes
                     * 
                     */
                    void SetErrCode(const std::vector<int64_t>& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                private:

                    /**
                     * Client address
                     */
                    std::vector<std::string> m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Username
                     */
                    std::vector<std::string> m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * Table name
                     */
                    std::vector<std::string> m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Audit policy name
                     */
                    std::vector<std::string> m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * Execution time in ms, which is used to filter the audit log with execution time greater than this value.
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * Number of affected rows, which is used to filter the audit log with affected rows greater than this value.
                     */
                    int64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * SQL type (Multiple types can be queried at same time). Valid values: `SELECT`, `INSERT`, `UPDATE`, `DELETE`, `CREATE`, `DROP`, `ALTER`, `SET`, `REPLACE`, `EXECUTE`.
                     */
                    std::vector<std::string> m_sqlTypes;
                    bool m_sqlTypesHasBeenSet;

                    /**
                     * SQL statement. Multiple SQL statements can be passed in.
                     */
                    std::vector<std::string> m_sqls;
                    bool m_sqlsHasBeenSet;

                    /**
                     * Number of rows affected in the format of M-N, such as 10-200.
                     */
                    std::string m_affectRowsSection;
                    bool m_affectRowsSectionHasBeenSet;

                    /**
                     * Number of rows returned in the format of M-N, such as 10-200.
                     */
                    std::string m_sentRowsSection;
                    bool m_sentRowsSectionHasBeenSet;

                    /**
                     * Execution time in the format of M-N, such as 10-200.
                     */
                    std::string m_execTimeSection;
                    bool m_execTimeSectionHasBeenSet;

                    /**
                     * Lock wait time in the format of M-N, such as 10-200.
                     */
                    std::string m_lockWaitTimeSection;
                    bool m_lockWaitTimeSectionHasBeenSet;

                    /**
                     * IO wait time in the format of M-N, such as 10-200.
                     */
                    std::string m_ioWaitTimeSection;
                    bool m_ioWaitTimeSectionHasBeenSet;

                    /**
                     * Transaction duration in the format of M-N, such as 10-200.
                     */
                    std::string m_transactionLivingTimeSection;
                    bool m_transactionLivingTimeSectionHasBeenSet;

                    /**
                     * Thread ID
                     */
                    std::vector<std::string> m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * Number of returned rows,  which is used to filter the audit log with affected rows greater than this value.
                     */
                    int64_t m_sentRows;
                    bool m_sentRowsHasBeenSet;

                    /**
                     * MySQL error codes
                     */
                    std::vector<int64_t> m_errCode;
                    bool m_errCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_AUDITLOGFILTER_H_
