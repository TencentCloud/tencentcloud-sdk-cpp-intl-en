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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_RAWSLOWQUERY_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_RAWSLOWQUERY_H_

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
                * The list of slow query details returned by the `DescribeSlowQueryList` API
                */
                class RawSlowQuery : public AbstractModel
                {
                public:
                    RawSlowQuery();
                    ~RawSlowQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Slow SQL statement</p>
                     * @return RawQuery <p>Slow SQL statement</p>
                     * 
                     */
                    std::string GetRawQuery() const;

                    /**
                     * 设置<p>Slow SQL statement</p>
                     * @param _rawQuery <p>Slow SQL statement</p>
                     * 
                     */
                    void SetRawQuery(const std::string& _rawQuery);

                    /**
                     * 判断参数 RawQuery 是否已赋值
                     * @return RawQuery 是否已赋值
                     * 
                     */
                    bool RawQueryHasBeenSet() const;

                    /**
                     * 获取<p>Database for slow SQL queries</p>
                     * @return DatabaseName <p>Database for slow SQL queries</p>
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置<p>Database for slow SQL queries</p>
                     * @param _databaseName <p>Database for slow SQL queries</p>
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取<p>Slow SQL execution duration</p>
                     * @return Duration <p>Slow SQL execution duration</p>
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置<p>Slow SQL execution duration</p>
                     * @param _duration <p>Slow SQL execution duration</p>
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>Client that executes Slow SQL</p>
                     * @return ClientAddr <p>Client that executes Slow SQL</p>
                     * 
                     */
                    std::string GetClientAddr() const;

                    /**
                     * 设置<p>Client that executes Slow SQL</p>
                     * @param _clientAddr <p>Client that executes Slow SQL</p>
                     * 
                     */
                    void SetClientAddr(const std::string& _clientAddr);

                    /**
                     * 判断参数 ClientAddr 是否已赋值
                     * @return ClientAddr 是否已赋值
                     * 
                     */
                    bool ClientAddrHasBeenSet() const;

                    /**
                     * 获取<p>userName that executes slow SQL</p>
                     * @return UserName <p>userName that executes slow SQL</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>userName that executes slow SQL</p>
                     * @param _userName <p>userName that executes slow SQL</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>Start time of Slow SQL execution</p>
                     * @return SessionStartTime <p>Start time of Slow SQL execution</p>
                     * 
                     */
                    std::string GetSessionStartTime() const;

                    /**
                     * 设置<p>Start time of Slow SQL execution</p>
                     * @param _sessionStartTime <p>Start time of Slow SQL execution</p>
                     * 
                     */
                    void SetSessionStartTime(const std::string& _sessionStartTime);

                    /**
                     * 判断参数 SessionStartTime 是否已赋值
                     * @return SessionStartTime 是否已赋值
                     * 
                     */
                    bool SessionStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Process ID of the slow SQL being executed</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessId <p>Process ID of the slow SQL being executed</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProcessId() const;

                    /**
                     * 设置<p>Process ID of the slow SQL being executed</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _processId <p>Process ID of the slow SQL being executed</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProcessId(const int64_t& _processId);

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取<p>Session ID that executes slow SQL.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SessionId <p>Session ID that executes slow SQL.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Session ID that executes slow SQL.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sessionId <p>Session ID that executes slow SQL.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>Transaction ID of the executed slow SQL</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VirtualTransactionId <p>Transaction ID of the executed slow SQL</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVirtualTransactionId() const;

                    /**
                     * 设置<p>Transaction ID of the executed slow SQL</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _virtualTransactionId <p>Transaction ID of the executed slow SQL</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVirtualTransactionId(const std::string& _virtualTransactionId);

                    /**
                     * 判断参数 VirtualTransactionId 是否已赋值
                     * @return VirtualTransactionId 是否已赋值
                     * 
                     */
                    bool VirtualTransactionIdHasBeenSet() const;

                    /**
                     * 获取<p>Status code for executing slow SQL</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SqlStateCode <p>Status code for executing slow SQL</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSqlStateCode() const;

                    /**
                     * 设置<p>Status code for executing slow SQL</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sqlStateCode <p>Status code for executing slow SQL</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSqlStateCode(const std::string& _sqlStateCode);

                    /**
                     * 判断参数 SqlStateCode 是否已赋值
                     * @return SqlStateCode 是否已赋值
                     * 
                     */
                    bool SqlStateCodeHasBeenSet() const;

                    /**
                     * 获取<p>client name that executes slow SQL</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationName <p>client name that executes slow SQL</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>client name that executes slow SQL</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationName <p>client name that executes slow SQL</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                private:

                    /**
                     * <p>Slow SQL statement</p>
                     */
                    std::string m_rawQuery;
                    bool m_rawQueryHasBeenSet;

                    /**
                     * <p>Database for slow SQL queries</p>
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * <p>Slow SQL execution duration</p>
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>Client that executes Slow SQL</p>
                     */
                    std::string m_clientAddr;
                    bool m_clientAddrHasBeenSet;

                    /**
                     * <p>userName that executes slow SQL</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Start time of Slow SQL execution</p>
                     */
                    std::string m_sessionStartTime;
                    bool m_sessionStartTimeHasBeenSet;

                    /**
                     * <p>Process ID of the slow SQL being executed</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * <p>Session ID that executes slow SQL.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Transaction ID of the executed slow SQL</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_virtualTransactionId;
                    bool m_virtualTransactionIdHasBeenSet;

                    /**
                     * <p>Status code for executing slow SQL</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sqlStateCode;
                    bool m_sqlStateCodeHasBeenSet;

                    /**
                     * <p>client name that executes slow SQL</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_RAWSLOWQUERY_H_
