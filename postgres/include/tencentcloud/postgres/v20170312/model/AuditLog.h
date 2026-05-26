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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITLOG_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
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
                     * 获取<p>Log time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Timestamp <p>Log time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置<p>Log time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timestamp <p>Log time</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Number of affected rows</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AffectRows <p>Number of affected rows</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAffectRows() const;

                    /**
                     * 设置<p>Number of affected rows</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _affectRows <p>Number of affected rows</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Database</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DBName <p>Database</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置<p>Database</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dBName <p>Database</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Error code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrCode <p>Error code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置<p>Error code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errCode <p>Error code</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Error message</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorMessage <p>Error message</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>Error message</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorMessage <p>Error message</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>Execution time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecTime <p>Execution time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置<p>Execution time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _execTime <p>Execution time</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Origin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Host <p>Origin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>Origin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _host <p>Origin</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Instance Id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId <p>Instance Id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance Id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId <p>Instance Id</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Object name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ObjectName <p>Object name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetObjectName() const;

                    /**
                     * 设置<p>Object name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _objectName <p>Object name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetObjectName(const std::string& _objectName);

                    /**
                     * 判断参数 ObjectName 是否已赋值
                     * @return ObjectName 是否已赋值
                     * 
                     */
                    bool ObjectNameHasBeenSet() const;

                    /**
                     * 获取<p>Object type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ObjectType <p>Object type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置<p>Object type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _objectType <p>Object type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetObjectType(const std::string& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                    /**
                     * 获取<p>sql</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sql <p>sql</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置<p>sql</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sql <p>sql</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>sql type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SqlType <p>sql type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置<p>sql type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sqlType <p>sql type</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>thread ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ThreadId <p>thread ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetThreadId() const;

                    /**
                     * 设置<p>thread ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _threadId <p>thread ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>User</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return User <p>User</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>User</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _user <p>User</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                private:

                    /**
                     * <p>Log time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>Number of affected rows</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * <p>Database</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * <p>Error code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>Error message</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>Execution time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * <p>Origin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>Instance Id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Object name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_objectName;
                    bool m_objectNameHasBeenSet;

                    /**
                     * <p>Object type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * <p>sql</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * <p>sql type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * <p>thread ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * <p>User</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITLOG_H_
