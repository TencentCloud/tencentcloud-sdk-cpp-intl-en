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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_AUDITLOG_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_AUDITLOG_H_

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
                     * 获取Number of affected rows
                     * @return AffectRows Number of affected rows
                     * 
                     */
                    int64_t GetAffectRows() const;

                    /**
                     * 设置Number of affected rows
                     * @param _affectRows Number of affected rows
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
                     * 获取The error code
                     * @return ErrCode The error code
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置The error code
                     * @param _errCode The error code
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
                     * 获取Audit policy name, which will be unavailable soon.
                     * @return PolicyName Audit policy name, which will be unavailable soon.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Audit policy name, which will be unavailable soon.
                     * @param _policyName Audit policy name, which will be unavailable soon.
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
                     * 获取
                     * @return DBName 
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置
                     * @param _dBName 
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
                     * 获取Client address
                     * @return Host Client address
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Client address
                     * @param _host Client address
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
                     * 获取Username
                     * @return User Username
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Username
                     * @param _user Username
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
                     * 获取Execution time (μs)
                     * @return ExecTime Execution time (μs)
                     * 
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置Execution time (μs)
                     * @param _execTime Execution time (μs)
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
                     * 获取Time
                     * @return Timestamp Time
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置Time
                     * @param _timestamp Time
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
                     * 获取Number of returned rows
                     * @return SentRows Number of returned rows
                     * 
                     */
                    int64_t GetSentRows() const;

                    /**
                     * 设置Number of returned rows
                     * @param _sentRows Number of returned rows
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
                     * 获取Thread ID
                     * @return ThreadId Thread ID
                     * 
                     */
                    int64_t GetThreadId() const;

                    /**
                     * 设置Thread ID
                     * @param _threadId Thread ID
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
                     * 获取Number of scanned rows
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return CheckRows Number of scanned rows
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCheckRows() const;

                    /**
                     * 设置Number of scanned rows
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _checkRows Number of scanned rows
Note: u200dThis field may return null, indicating that no valid values can be obtained.
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
                     * 获取CPU u200dexecution time (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return CpuTime CPU u200dexecution time (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetCpuTime() const;

                    /**
                     * 设置CPU u200dexecution time (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _cpuTime CPU u200dexecution time (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
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
                     * 获取IO wait time (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return IoWaitTime IO wait time (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIoWaitTime() const;

                    /**
                     * 设置IO wait time (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _ioWaitTime IO wait time (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIoWaitTime(const uint64_t& _ioWaitTime);

                    /**
                     * 判断参数 IoWaitTime 是否已赋值
                     * @return IoWaitTime 是否已赋值
                     * 
                     */
                    bool IoWaitTimeHasBeenSet() const;

                    /**
                     * 获取Lock wait time (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return LockWaitTime Lock wait time (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLockWaitTime() const;

                    /**
                     * 设置Lock wait time (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _lockWaitTime Lock wait time (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLockWaitTime(const uint64_t& _lockWaitTime);

                    /**
                     * 判断参数 LockWaitTime 是否已赋值
                     * @return LockWaitTime 是否已赋值
                     * 
                     */
                    bool LockWaitTimeHasBeenSet() const;

                    /**
                     * 获取Start time, which forms a time accurate to nanoseconds with·`timestamp`.
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return NsTime Start time, which forms a time accurate to nanoseconds with·`timestamp`.
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetNsTime() const;

                    /**
                     * 设置Start time, which forms a time accurate to nanoseconds with·`timestamp`.
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _nsTime Start time, which forms a time accurate to nanoseconds with·`timestamp`.
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNsTime(const uint64_t& _nsTime);

                    /**
                     * 判断参数 NsTime 是否已赋值
                     * @return NsTime 是否已赋值
                     * 
                     */
                    bool NsTimeHasBeenSet() const;

                    /**
                     * 获取Transaction u200dduration (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return TrxLivingTime Transaction u200dduration (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTrxLivingTime() const;

                    /**
                     * 设置Transaction u200dduration (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _trxLivingTime Transaction u200dduration (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTrxLivingTime(const uint64_t& _trxLivingTime);

                    /**
                     * 判断参数 TrxLivingTime 是否已赋值
                     * @return TrxLivingTime 是否已赋值
                     * 
                     */
                    bool TrxLivingTimeHasBeenSet() const;

                private:

                    /**
                     * Number of affected rows
                     */
                    int64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * The error code
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * Audit policy name, which will be unavailable soon.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * Client address
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Username
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Execution time (μs)
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * Time
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Number of returned rows
                     */
                    int64_t m_sentRows;
                    bool m_sentRowsHasBeenSet;

                    /**
                     * Thread ID
                     */
                    int64_t m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * Number of scanned rows
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_checkRows;
                    bool m_checkRowsHasBeenSet;

                    /**
                     * CPU u200dexecution time (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    double m_cpuTime;
                    bool m_cpuTimeHasBeenSet;

                    /**
                     * IO wait time (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ioWaitTime;
                    bool m_ioWaitTimeHasBeenSet;

                    /**
                     * Lock wait time (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_lockWaitTime;
                    bool m_lockWaitTimeHasBeenSet;

                    /**
                     * Start time, which forms a time accurate to nanoseconds with·`timestamp`.
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_nsTime;
                    bool m_nsTimeHasBeenSet;

                    /**
                     * Transaction u200dduration (μs)
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_trxLivingTime;
                    bool m_trxLivingTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_AUDITLOG_H_
