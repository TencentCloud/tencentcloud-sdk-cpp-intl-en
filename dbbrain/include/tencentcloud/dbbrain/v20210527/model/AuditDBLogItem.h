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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITDBLOGITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITDBLOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * A single audit log detail at the DB layer. The fields are output by DruidCommonUtil#changeLogsTdsqlDB and BusinessCodeUtils. When LogType=All, FlowTime is added.
                */
                class AuditDBLogItem : public AbstractModel
                {
                public:
                    AuditDBLogItem();
                    ~AuditDBLogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Time point of SQL execution (format string, yyyy-MM-dd HH:mm:ss).</p>
                     * @return Timestamp <p>Time point of SQL execution (format string, yyyy-MM-dd HH:mm:ss).</p>
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置<p>Time point of SQL execution (format string, yyyy-MM-dd HH:mm:ss).</p>
                     * @param _timestamp <p>Time point of SQL execution (format string, yyyy-MM-dd HH:mm:ss).</p>
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
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
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
                     * 获取<p>Number of affected rows.</p>
                     * @return AffectRows <p>Number of affected rows.</p>
                     * 
                     */
                    int64_t GetAffectRows() const;

                    /**
                     * 设置<p>Number of affected rows.</p>
                     * @param _affectRows <p>Number of affected rows.</p>
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
                     * 获取<p>Number of scanned rows.</p>
                     * @return CheckRows <p>Number of scanned rows.</p>
                     * 
                     */
                    int64_t GetCheckRows() const;

                    /**
                     * 设置<p>Number of scanned rows.</p>
                     * @param _checkRows <p>Number of scanned rows.</p>
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
                     * 获取<p>CPU time (µs).</p>
                     * @return CpuTime <p>CPU time (µs).</p>
                     * 
                     */
                    int64_t GetCpuTime() const;

                    /**
                     * 设置<p>CPU time (µs).</p>
                     * @param _cpuTime <p>CPU time (µs).</p>
                     * 
                     */
                    void SetCpuTime(const int64_t& _cpuTime);

                    /**
                     * 判断参数 CpuTime 是否已赋值
                     * @return CpuTime 是否已赋值
                     * 
                     */
                    bool CpuTimeHasBeenSet() const;

                    /**
                     * 获取<p>Backend Set Host (source field dbHost).</p>
                     * @return SetHost <p>Backend Set Host (source field dbHost).</p>
                     * 
                     */
                    std::string GetSetHost() const;

                    /**
                     * 设置<p>Backend Set Host (source field dbHost).</p>
                     * @param _setHost <p>Backend Set Host (source field dbHost).</p>
                     * 
                     */
                    void SetSetHost(const std::string& _setHost);

                    /**
                     * 判断参数 SetHost 是否已赋值
                     * @return SetHost 是否已赋值
                     * 
                     */
                    bool SetHostHasBeenSet() const;

                    /**
                     * 获取<p>Database name where the SQL is executed.</p>
                     * @return DBName <p>Database name where the SQL is executed.</p>
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置<p>Database name where the SQL is executed.</p>
                     * @param _dBName <p>Database name where the SQL is executed.</p>
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
                     * 获取<p>Error code returned by SQL execution. 0 indicates success.</p>
                     * @return ErrCode <p>Error code returned by SQL execution. 0 indicates success.</p>
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置<p>Error code returned by SQL execution. 0 indicates success.</p>
                     * @param _errCode <p>Error code returned by SQL execution. 0 indicates success.</p>
                     * 
                     */
                    void SetErrCode(const std::string& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取<p>SQL execution time (µs).</p>
                     * @return ExecTime <p>SQL execution time (µs).</p>
                     * 
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置<p>SQL execution time (µs).</p>
                     * @param _execTime <p>SQL execution time (µs).</p>
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
                     * 获取<p>Client source IP.</p>
                     * @return Host <p>Client source IP.</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>Client source IP.</p>
                     * @param _host <p>Client source IP.</p>
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
                     * 获取<p>Set Name (source field instanceId).</p>
                     * @return SetName <p>Set Name (source field instanceId).</p>
                     * 
                     */
                    std::string GetSetName() const;

                    /**
                     * 设置<p>Set Name (source field instanceId).</p>
                     * @param _setName <p>Set Name (source field instanceId).</p>
                     * 
                     */
                    void SetSetName(const std::string& _setName);

                    /**
                     * 判断参数 SetName 是否已赋值
                     * @return SetName 是否已赋值
                     * 
                     */
                    bool SetNameHasBeenSet() const;

                    /**
                     * 获取<p>IO wait time (µs).</p>
                     * @return IoWaitTime <p>IO wait time (µs).</p>
                     * 
                     */
                    int64_t GetIoWaitTime() const;

                    /**
                     * 设置<p>IO wait time (µs).</p>
                     * @param _ioWaitTime <p>IO wait time (µs).</p>
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
                     * 获取<p>Lock waiting time (µs).</p>
                     * @return LockWaitTime <p>Lock waiting time (µs).</p>
                     * 
                     */
                    int64_t GetLockWaitTime() const;

                    /**
                     * 设置<p>Lock waiting time (µs).</p>
                     * @param _lockWaitTime <p>Lock waiting time (µs).</p>
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
                     * 获取<p>SQL start time (nanosecond timestamp).</p>
                     * @return SqlStartTimeNs <p>SQL start time (nanosecond timestamp).</p>
                     * 
                     */
                    int64_t GetSqlStartTimeNs() const;

                    /**
                     * 设置<p>SQL start time (nanosecond timestamp).</p>
                     * @param _sqlStartTimeNs <p>SQL start time (nanosecond timestamp).</p>
                     * 
                     */
                    void SetSqlStartTimeNs(const int64_t& _sqlStartTimeNs);

                    /**
                     * 判断参数 SqlStartTimeNs 是否已赋值
                     * @return SqlStartTimeNs 是否已赋值
                     * 
                     */
                    bool SqlStartTimeNsHasBeenSet() const;

                    /**
                     * 获取<p>Query ID (used for join queries).</p>
                     * @return QueryId <p>Query ID (used for join queries).</p>
                     * 
                     */
                    std::string GetQueryId() const;

                    /**
                     * 设置<p>Query ID (used for join queries).</p>
                     * @param _queryId <p>Query ID (used for join queries).</p>
                     * 
                     */
                    void SetQueryId(const std::string& _queryId);

                    /**
                     * 判断参数 QueryId 是否已赋值
                     * @return QueryId 是否已赋值
                     * 
                     */
                    bool QueryIdHasBeenSet() const;

                    /**
                     * 获取<p>Serial number for queries (serial number of SQL in the same transaction).</p>
                     * @return QueryNo <p>Serial number for queries (serial number of SQL in the same transaction).</p>
                     * 
                     */
                    int64_t GetQueryNo() const;

                    /**
                     * 设置<p>Serial number for queries (serial number of SQL in the same transaction).</p>
                     * @param _queryNo <p>Serial number for queries (serial number of SQL in the same transaction).</p>
                     * 
                     */
                    void SetQueryNo(const int64_t& _queryNo);

                    /**
                     * 判断参数 QueryNo 是否已赋值
                     * @return QueryNo 是否已赋值
                     * 
                     */
                    bool QueryNoHasBeenSet() const;

                    /**
                     * 获取<p>Number of rows returned (rows in the scanning result set).</p>
                     * @return SentRows <p>Number of rows returned (rows in the scanning result set).</p>
                     * 
                     */
                    int64_t GetSentRows() const;

                    /**
                     * 设置<p>Number of rows returned (rows in the scanning result set).</p>
                     * @param _sentRows <p>Number of rows returned (rows in the scanning result set).</p>
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
                     * 获取<p>Original executed SQL statement.</p>
                     * @return Sql <p>Original executed SQL statement.</p>
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置<p>Original executed SQL statement.</p>
                     * @param _sql <p>Original executed SQL statement.</p>
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
                     * 获取<p>SQL Template ID.</p>
                     * @return SqlTemplateId <p>SQL Template ID.</p>
                     * 
                     */
                    std::string GetSqlTemplateId() const;

                    /**
                     * 设置<p>SQL Template ID.</p>
                     * @param _sqlTemplateId <p>SQL Template ID.</p>
                     * 
                     */
                    void SetSqlTemplateId(const std::string& _sqlTemplateId);

                    /**
                     * 判断参数 SqlTemplateId 是否已赋值
                     * @return SqlTemplateId 是否已赋值
                     * 
                     */
                    bool SqlTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>SQL type (for example, Select, Insert, Update, Delete).</p>
                     * @return SqlType <p>SQL type (for example, Select, Insert, Update, Delete).</p>
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置<p>SQL type (for example, Select, Insert, Update, Delete).</p>
                     * @param _sqlType <p>SQL type (for example, Select, Insert, Update, Delete).</p>
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
                     * 获取<p>Tables involved.</p>
                     * @return Tables <p>Tables involved.</p>
                     * 
                     */
                    std::string GetTables() const;

                    /**
                     * 设置<p>Tables involved.</p>
                     * @param _tables <p>Tables involved.</p>
                     * 
                     */
                    void SetTables(const std::string& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取<p>Thread ID.</p>
                     * @return ThreadId <p>Thread ID.</p>
                     * 
                     */
                    std::string GetThreadId() const;

                    /**
                     * 设置<p>Thread ID.</p>
                     * @param _threadId <p>Thread ID.</p>
                     * 
                     */
                    void SetThreadId(const std::string& _threadId);

                    /**
                     * 判断参数 ThreadId 是否已赋值
                     * @return ThreadId 是否已赋值
                     * 
                     */
                    bool ThreadIdHasBeenSet() const;

                    /**
                     * 获取<p>SQL start time (millisecond-level timestamp).</p>
                     * @return SqlStartTime <p>SQL start time (millisecond-level timestamp).</p>
                     * 
                     */
                    int64_t GetSqlStartTime() const;

                    /**
                     * 设置<p>SQL start time (millisecond-level timestamp).</p>
                     * @param _sqlStartTime <p>SQL start time (millisecond-level timestamp).</p>
                     * 
                     */
                    void SetSqlStartTime(const int64_t& _sqlStartTime);

                    /**
                     * 判断参数 SqlStartTime 是否已赋值
                     * @return SqlStartTime 是否已赋值
                     * 
                     */
                    bool SqlStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Transaction time to live (µs).</p>
                     * @return TrxLivingTime <p>Transaction time to live (µs).</p>
                     * 
                     */
                    int64_t GetTrxLivingTime() const;

                    /**
                     * 设置<p>Transaction time to live (µs).</p>
                     * @param _trxLivingTime <p>Transaction time to live (µs).</p>
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
                     * 获取<p>Database username that executes the SQL.</p>
                     * @return User <p>Database username that executes the SQL.</p>
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>Database username that executes the SQL.</p>
                     * @param _user <p>Database username that executes the SQL.</p>
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
                     * 获取<p>Transaction ID.</p>
                     * @return TrxId <p>Transaction ID.</p>
                     * 
                     */
                    std::string GetTrxId() const;

                    /**
                     * 设置<p>Transaction ID.</p>
                     * @param _trxId <p>Transaction ID.</p>
                     * 
                     */
                    void SetTrxId(const std::string& _trxId);

                    /**
                     * 判断参数 TrxId 是否已赋值
                     * @return TrxId 是否已赋值
                     * 
                     */
                    bool TrxIdHasBeenSet() const;

                    /**
                     * 获取<p>Internal XID.</p>
                     * @return InternalXId <p>Internal XID.</p>
                     * 
                     */
                    std::string GetInternalXId() const;

                    /**
                     * 设置<p>Internal XID.</p>
                     * @param _internalXId <p>Internal XID.</p>
                     * 
                     */
                    void SetInternalXId(const std::string& _internalXId);

                    /**
                     * 判断参数 InternalXId 是否已赋值
                     * @return InternalXId 是否已赋值
                     * 
                     */
                    bool InternalXIdHasBeenSet() const;

                    /**
                     * 获取<p>Business code (extracted from i/o/p and other KV in business-side SQL annotations).</p>
                     * @return BusinessCode <p>Business code (extracted from i/o/p and other KV in business-side SQL annotations).</p>
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置<p>Business code (extracted from i/o/p and other KV in business-side SQL annotations).</p>
                     * @param _businessCode <p>Business code (extracted from i/o/p and other KV in business-side SQL annotations).</p>
                     * 
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     * 
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取<p>Gateway circulation duration (ms). It is returned only when LogType=All after gateway log association. When LogType=DB, this field is not delivered.</p>
                     * @return FlowTime <p>Gateway circulation duration (ms). It is returned only when LogType=All after gateway log association. When LogType=DB, this field is not delivered.</p>
                     * 
                     */
                    int64_t GetFlowTime() const;

                    /**
                     * 设置<p>Gateway circulation duration (ms). It is returned only when LogType=All after gateway log association. When LogType=DB, this field is not delivered.</p>
                     * @param _flowTime <p>Gateway circulation duration (ms). It is returned only when LogType=All after gateway log association. When LogType=DB, this field is not delivered.</p>
                     * 
                     */
                    void SetFlowTime(const int64_t& _flowTime);

                    /**
                     * 判断参数 FlowTime 是否已赋值
                     * @return FlowTime 是否已赋值
                     * 
                     */
                    bool FlowTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Time point of SQL execution (format string, yyyy-MM-dd HH:mm:ss).</p>
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Number of affected rows.</p>
                     */
                    int64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * <p>Number of scanned rows.</p>
                     */
                    int64_t m_checkRows;
                    bool m_checkRowsHasBeenSet;

                    /**
                     * <p>CPU time (µs).</p>
                     */
                    int64_t m_cpuTime;
                    bool m_cpuTimeHasBeenSet;

                    /**
                     * <p>Backend Set Host (source field dbHost).</p>
                     */
                    std::string m_setHost;
                    bool m_setHostHasBeenSet;

                    /**
                     * <p>Database name where the SQL is executed.</p>
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * <p>Error code returned by SQL execution. 0 indicates success.</p>
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>SQL execution time (µs).</p>
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * <p>Client source IP.</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>Set Name (source field instanceId).</p>
                     */
                    std::string m_setName;
                    bool m_setNameHasBeenSet;

                    /**
                     * <p>IO wait time (µs).</p>
                     */
                    int64_t m_ioWaitTime;
                    bool m_ioWaitTimeHasBeenSet;

                    /**
                     * <p>Lock waiting time (µs).</p>
                     */
                    int64_t m_lockWaitTime;
                    bool m_lockWaitTimeHasBeenSet;

                    /**
                     * <p>SQL start time (nanosecond timestamp).</p>
                     */
                    int64_t m_sqlStartTimeNs;
                    bool m_sqlStartTimeNsHasBeenSet;

                    /**
                     * <p>Query ID (used for join queries).</p>
                     */
                    std::string m_queryId;
                    bool m_queryIdHasBeenSet;

                    /**
                     * <p>Serial number for queries (serial number of SQL in the same transaction).</p>
                     */
                    int64_t m_queryNo;
                    bool m_queryNoHasBeenSet;

                    /**
                     * <p>Number of rows returned (rows in the scanning result set).</p>
                     */
                    int64_t m_sentRows;
                    bool m_sentRowsHasBeenSet;

                    /**
                     * <p>Original executed SQL statement.</p>
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * <p>SQL Template ID.</p>
                     */
                    std::string m_sqlTemplateId;
                    bool m_sqlTemplateIdHasBeenSet;

                    /**
                     * <p>SQL type (for example, Select, Insert, Update, Delete).</p>
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * <p>Tables involved.</p>
                     */
                    std::string m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * <p>Thread ID.</p>
                     */
                    std::string m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * <p>SQL start time (millisecond-level timestamp).</p>
                     */
                    int64_t m_sqlStartTime;
                    bool m_sqlStartTimeHasBeenSet;

                    /**
                     * <p>Transaction time to live (µs).</p>
                     */
                    int64_t m_trxLivingTime;
                    bool m_trxLivingTimeHasBeenSet;

                    /**
                     * <p>Database username that executes the SQL.</p>
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>Transaction ID.</p>
                     */
                    std::string m_trxId;
                    bool m_trxIdHasBeenSet;

                    /**
                     * <p>Internal XID.</p>
                     */
                    std::string m_internalXId;
                    bool m_internalXIdHasBeenSet;

                    /**
                     * <p>Business code (extracted from i/o/p and other KV in business-side SQL annotations).</p>
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * <p>Gateway circulation duration (ms). It is returned only when LogType=All after gateway log association. When LogType=DB, this field is not delivered.</p>
                     */
                    int64_t m_flowTime;
                    bool m_flowTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITDBLOGITEM_H_
