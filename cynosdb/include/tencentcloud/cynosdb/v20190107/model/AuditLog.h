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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITLOG_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/LogRuleTemplateInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Audit log details
                */
                class AuditLog : public AbstractModel
                {
                public:
                    AuditLog();
                    ~AuditLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of affected rows.
                     * @return AffectRows Number of affected rows.
                     * 
                     */
                    int64_t GetAffectRows() const;

                    /**
                     * 设置Number of affected rows.
                     * @param _affectRows Number of affected rows.
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
                     * 获取Error code.
                     * @return ErrCode Error code.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code.
                     * @param _errCode Error code.
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取SQL type.
                     * @return SqlType SQL type.
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置SQL type.
                     * @param _sqlType SQL type.
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
                     * 获取Table name.
                     * @return TableName Table name.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name.
                     * @param _tableName Table name.
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
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Audit policy name.
                     * @return PolicyName Audit policy name.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Audit policy name.
                     * @param _policyName Audit policy name.
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Database name.
                     * @return DBName Database name.
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置Database name.
                     * @param _dBName Database name.
                     * 
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取SQL statement.
                     * @return Sql SQL statement.
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置SQL statement.
                     * @param _sql SQL statement.
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
                     * 获取Client address.
                     * @return Host Client address.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Client address.
                     * @param _host Client address.
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
                     * 获取Username.
                     * @return User Username.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Username.
                     * @param _user Username.
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Execution time, in microseconds.
                     * @return ExecTime Execution time, in microseconds.
                     * 
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置Execution time, in microseconds.
                     * @param _execTime Execution time, in microseconds.
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
                     * 获取Time.
                     * @return Timestamp Time.
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置Time.
                     * @param _timestamp Time.
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Number of rows returned.
                     * @return SentRows Number of rows returned.
                     * 
                     */
                    int64_t GetSentRows() const;

                    /**
                     * 设置Number of rows returned.
                     * @param _sentRows Number of rows returned.
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
                     * 获取Execution thread ID.
                     * @return ThreadId Execution thread ID.
                     * 
                     */
                    int64_t GetThreadId() const;

                    /**
                     * 设置Execution thread ID.
                     * @param _threadId Execution thread ID.
                     * 
                     */
                    void SetThreadId(const int64_t& _threadId);

                    /**
                     * 判断参数 ThreadId 是否已赋值
                     * @return ThreadId 是否已赋值
                     * 
                     */
                    bool ThreadIdHasBeenSet() const;

                    /**
                     * 获取Number of scanned rows.
                     * @return CheckRows Number of scanned rows.
                     * 
                     */
                    int64_t GetCheckRows() const;

                    /**
                     * 设置Number of scanned rows.
                     * @param _checkRows Number of scanned rows.
                     * 
                     */
                    void SetCheckRows(const int64_t& _checkRows);

                    /**
                     * 判断参数 CheckRows 是否已赋值
                     * @return CheckRows 是否已赋值
                     * 
                     */
                    bool CheckRowsHasBeenSet() const;

                    /**
                     * 获取cpu execution time, in microseconds.
                     * @return CpuTime cpu execution time, in microseconds.
                     * 
                     */
                    double GetCpuTime() const;

                    /**
                     * 设置cpu execution time, in microseconds.
                     * @param _cpuTime cpu execution time, in microseconds.
                     * 
                     */
                    void SetCpuTime(const double& _cpuTime);

                    /**
                     * 判断参数 CpuTime 是否已赋值
                     * @return CpuTime 是否已赋值
                     * 
                     */
                    bool CpuTimeHasBeenSet() const;

                    /**
                     * 获取IO wait time, in microseconds.
                     * @return IoWaitTime IO wait time, in microseconds.
                     * 
                     */
                    int64_t GetIoWaitTime() const;

                    /**
                     * 设置IO wait time, in microseconds.
                     * @param _ioWaitTime IO wait time, in microseconds.
                     * 
                     */
                    void SetIoWaitTime(const int64_t& _ioWaitTime);

                    /**
                     * 判断参数 IoWaitTime 是否已赋值
                     * @return IoWaitTime 是否已赋值
                     * 
                     */
                    bool IoWaitTimeHasBeenSet() const;

                    /**
                     * 获取Lock waiting time in microseconds.
                     * @return LockWaitTime Lock waiting time in microseconds.
                     * 
                     */
                    int64_t GetLockWaitTime() const;

                    /**
                     * 设置Lock waiting time in microseconds.
                     * @param _lockWaitTime Lock waiting time in microseconds.
                     * 
                     */
                    void SetLockWaitTime(const int64_t& _lockWaitTime);

                    /**
                     * 判断参数 LockWaitTime 是否已赋值
                     * @return LockWaitTime 是否已赋值
                     * 
                     */
                    bool LockWaitTimeHasBeenSet() const;

                    /**
                     * 获取Transaction continuous waiting time, in µs.
                     * @return TrxLivingTime Transaction continuous waiting time, in µs.
                     * 
                     */
                    int64_t GetTrxLivingTime() const;

                    /**
                     * 设置Transaction continuous waiting time, in µs.
                     * @param _trxLivingTime Transaction continuous waiting time, in µs.
                     * 
                     */
                    void SetTrxLivingTime(const int64_t& _trxLivingTime);

                    /**
                     * 判断参数 TrxLivingTime 是否已赋值
                     * @return TrxLivingTime 是否已赋值
                     * 
                     */
                    bool TrxLivingTimeHasBeenSet() const;

                    /**
                     * 获取Start time. Together with timestamp, it forms a nanosecond-precision time.
                     * @return NsTime Start time. Together with timestamp, it forms a nanosecond-precision time.
                     * 
                     */
                    int64_t GetNsTime() const;

                    /**
                     * 设置Start time. Together with timestamp, it forms a nanosecond-precision time.
                     * @param _nsTime Start time. Together with timestamp, it forms a nanosecond-precision time.
                     * 
                     */
                    void SetNsTime(const int64_t& _nsTime);

                    /**
                     * 判断参数 NsTime 是否已赋值
                     * @return NsTime 是否已赋值
                     * 
                     */
                    bool NsTimeHasBeenSet() const;

                    /**
                     * 获取Basic information of the log hit rule template
                     * @return TemplateInfo Basic information of the log hit rule template
                     * 
                     */
                    std::vector<LogRuleTemplateInfo> GetTemplateInfo() const;

                    /**
                     * 设置Basic information of the log hit rule template
                     * @param _templateInfo Basic information of the log hit rule template
                     * 
                     */
                    void SetTemplateInfo(const std::vector<LogRuleTemplateInfo>& _templateInfo);

                    /**
                     * 判断参数 TemplateInfo 是否已赋值
                     * @return TemplateInfo 是否已赋值
                     * 
                     */
                    bool TemplateInfoHasBeenSet() const;

                    /**
                     * 获取Transaction ID
                     * @return TrxId Transaction ID
                     * 
                     */
                    int64_t GetTrxId() const;

                    /**
                     * 设置Transaction ID
                     * @param _trxId Transaction ID
                     * 
                     */
                    void SetTrxId(const int64_t& _trxId);

                    /**
                     * 判断参数 TrxId 是否已赋值
                     * @return TrxId 是否已赋值
                     * 
                     */
                    bool TrxIdHasBeenSet() const;

                    /**
                     * 获取Client port.
                     * @return ClientPort Client port.
                     * 
                     */
                    int64_t GetClientPort() const;

                    /**
                     * 设置Client port.
                     * @param _clientPort Client port.
                     * 
                     */
                    void SetClientPort(const int64_t& _clientPort);

                    /**
                     * 判断参数 ClientPort 是否已赋值
                     * @return ClientPort 是否已赋值
                     * 
                     */
                    bool ClientPortHasBeenSet() const;

                private:

                    /**
                     * Number of affected rows.
                     */
                    int64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * Error code.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * SQL type.
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * Table name.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Audit policy name.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Database name.
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * SQL statement.
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * Client address.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Username.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Execution time, in microseconds.
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * Time.
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Number of rows returned.
                     */
                    int64_t m_sentRows;
                    bool m_sentRowsHasBeenSet;

                    /**
                     * Execution thread ID.
                     */
                    int64_t m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * Number of scanned rows.
                     */
                    int64_t m_checkRows;
                    bool m_checkRowsHasBeenSet;

                    /**
                     * cpu execution time, in microseconds.
                     */
                    double m_cpuTime;
                    bool m_cpuTimeHasBeenSet;

                    /**
                     * IO wait time, in microseconds.
                     */
                    int64_t m_ioWaitTime;
                    bool m_ioWaitTimeHasBeenSet;

                    /**
                     * Lock waiting time in microseconds.
                     */
                    int64_t m_lockWaitTime;
                    bool m_lockWaitTimeHasBeenSet;

                    /**
                     * Transaction continuous waiting time, in µs.
                     */
                    int64_t m_trxLivingTime;
                    bool m_trxLivingTimeHasBeenSet;

                    /**
                     * Start time. Together with timestamp, it forms a nanosecond-precision time.
                     */
                    int64_t m_nsTime;
                    bool m_nsTimeHasBeenSet;

                    /**
                     * Basic information of the log hit rule template
                     */
                    std::vector<LogRuleTemplateInfo> m_templateInfo;
                    bool m_templateInfoHasBeenSet;

                    /**
                     * Transaction ID
                     */
                    int64_t m_trxId;
                    bool m_trxIdHasBeenSet;

                    /**
                     * Client port.
                     */
                    int64_t m_clientPort;
                    bool m_clientPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITLOG_H_
