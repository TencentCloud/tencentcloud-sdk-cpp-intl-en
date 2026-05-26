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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_ERRLOGDETAIL_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_ERRLOGDETAIL_H_

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
                * Error log details
                */
                class ErrLogDetail : public AbstractModel
                {
                public:
                    ErrLogDetail();
                    ~ErrLogDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>userName</p>
                     * @return UserName <p>userName</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>userName</p>
                     * @param _userName <p>userName</p>
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
                     * 获取<p>Database name</p>
                     * @return Database <p>Database name</p>
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>Database name</p>
                     * @param _database <p>Database name</p>
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
                     * 获取<p>Error occurrence time</p>
                     * @return ErrTime <p>Error occurrence time</p>
                     * 
                     */
                    std::string GetErrTime() const;

                    /**
                     * 设置<p>Error occurrence time</p>
                     * @param _errTime <p>Error occurrence time</p>
                     * 
                     */
                    void SetErrTime(const std::string& _errTime);

                    /**
                     * 判断参数 ErrTime 是否已赋值
                     * @return ErrTime 是否已赋值
                     * 
                     */
                    bool ErrTimeHasBeenSet() const;

                    /**
                     * 获取<p>Error message</p>
                     * @return ErrMsg <p>Error message</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>Error message</p>
                     * @param _errMsg <p>Error message</p>
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取<p>Process ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessId <p>Process ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProcessId() const;

                    /**
                     * 设置<p>Process ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _processId <p>Process ID</p>
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
                     * 获取<p>client address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientAddr <p>client address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClientAddr() const;

                    /**
                     * 设置<p>client address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clientAddr <p>client address</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Session ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SessionId <p>Session ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Session ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sessionId <p>Session ID</p>
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
                     * 获取<p>Session start time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SessionStartTime <p>Session start time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSessionStartTime() const;

                    /**
                     * 设置<p>Session start time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sessionStartTime <p>Session start time</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Virtual transaction ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VirtualTransactionId <p>Virtual transaction ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVirtualTransactionId() const;

                    /**
                     * 设置<p>Virtual transaction ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _virtualTransactionId <p>Virtual transaction ID</p>
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
                     * 获取<p>SQLSTATE error code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SqlStateCode <p>SQLSTATE error code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSqlStateCode() const;

                    /**
                     * 设置<p>SQLSTATE error code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sqlStateCode <p>SQLSTATE error code</p>
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
                     * 获取<p>client application name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationName <p>client application name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>client application name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationName <p>client application name</p>
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
                     * <p>userName</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Database name</p>
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>Error occurrence time</p>
                     */
                    std::string m_errTime;
                    bool m_errTimeHasBeenSet;

                    /**
                     * <p>Error message</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * <p>Process ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * <p>client address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientAddr;
                    bool m_clientAddrHasBeenSet;

                    /**
                     * <p>Session ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Session start time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sessionStartTime;
                    bool m_sessionStartTimeHasBeenSet;

                    /**
                     * <p>Virtual transaction ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_virtualTransactionId;
                    bool m_virtualTransactionIdHasBeenSet;

                    /**
                     * <p>SQLSTATE error code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sqlStateCode;
                    bool m_sqlStateCodeHasBeenSet;

                    /**
                     * <p>client application name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_ERRLOGDETAIL_H_
