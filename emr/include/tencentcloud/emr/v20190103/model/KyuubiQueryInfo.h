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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_KYUUBIQUERYINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_KYUUBIQUERYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Kyuubi query information.
                */
                class KyuubiQueryInfo : public AbstractModel
                {
                public:
                    KyuubiQueryInfo();
                    ~KyuubiQueryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Submitter IP address.
                     * @return ClientIP Submitter IP address.
                     * 
                     */
                    std::string GetClientIP() const;

                    /**
                     * 设置Submitter IP address.
                     * @param _clientIP Submitter IP address.
                     * 
                     */
                    void SetClientIP(const std::string& _clientIP);

                    /**
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     * 
                     */
                    bool ClientIPHasBeenSet() const;

                    /**
                     * 获取Execution duration.
                     * @return Duration Execution duration.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Execution duration.
                     * @param _duration Execution duration.
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Engine Id
                     * @return EngineID Engine Id
                     * 
                     */
                    std::string GetEngineID() const;

                    /**
                     * 设置Engine Id
                     * @param _engineID Engine Id
                     * 
                     */
                    void SetEngineID(const std::string& _engineID);

                    /**
                     * 判断参数 EngineID 是否已赋值
                     * @return EngineID 是否已赋值
                     * 
                     */
                    bool EngineIDHasBeenSet() const;

                    /**
                     * 获取Computing engine.
                     * @return EngineType Computing engine.
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置Computing engine.
                     * @param _engineType Computing engine.
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取ID
                     * @return Id ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID
                     * @param _id ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Session Id
                     * @return SessionID Session Id
                     * 
                     */
                    std::string GetSessionID() const;

                    /**
                     * 设置Session Id
                     * @param _sessionID Session Id
                     * 
                     */
                    void SetSessionID(const std::string& _sessionID);

                    /**
                     * 判断参数 SessionID 是否已赋值
                     * @return SessionID 是否已赋值
                     * 
                     */
                    bool SessionIDHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return BeginTime Start time.
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置Start time.
                     * @param _beginTime Start time.
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取Execution status.
                     * @return ExecutionState Execution status.
                     * 
                     */
                    std::string GetExecutionState() const;

                    /**
                     * 设置Execution status.
                     * @param _executionState Execution status.
                     * 
                     */
                    void SetExecutionState(const std::string& _executionState);

                    /**
                     * 判断参数 ExecutionState 是否已赋值
                     * @return ExecutionState 是否已赋值
                     * 
                     */
                    bool ExecutionStateHasBeenSet() const;

                    /**
                     * 获取Execution statement.
                     * @return ExecutionStatement Execution statement.
                     * 
                     */
                    std::string GetExecutionStatement() const;

                    /**
                     * 设置Execution statement.
                     * @param _executionStatement Execution statement.
                     * 
                     */
                    void SetExecutionStatement(const std::string& _executionStatement);

                    /**
                     * 判断参数 ExecutionStatement 是否已赋值
                     * @return ExecutionStatement 是否已赋值
                     * 
                     */
                    bool ExecutionStatementHasBeenSet() const;

                    /**
                     * 获取Statement Id
                     * @return StatementID Statement Id
                     * 
                     */
                    std::string GetStatementID() const;

                    /**
                     * 设置Statement Id
                     * @param _statementID Statement Id
                     * 
                     */
                    void SetStatementID(const std::string& _statementID);

                    /**
                     * 判断参数 StatementID 是否已赋值
                     * @return StatementID 是否已赋值
                     * 
                     */
                    bool StatementIDHasBeenSet() const;

                    /**
                     * 获取User who submits requests.
                     * @return User User who submits requests.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置User who submits requests.
                     * @param _user User who submits requests.
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
                     * Submitter IP address.
                     */
                    std::string m_clientIP;
                    bool m_clientIPHasBeenSet;

                    /**
                     * Execution duration.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * End time.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Engine Id
                     */
                    std::string m_engineID;
                    bool m_engineIDHasBeenSet;

                    /**
                     * Computing engine.
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Session Id
                     */
                    std::string m_sessionID;
                    bool m_sessionIDHasBeenSet;

                    /**
                     * Start time.
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * Execution status.
                     */
                    std::string m_executionState;
                    bool m_executionStateHasBeenSet;

                    /**
                     * Execution statement.
                     */
                    std::string m_executionStatement;
                    bool m_executionStatementHasBeenSet;

                    /**
                     * Statement Id
                     */
                    std::string m_statementID;
                    bool m_statementIDHasBeenSet;

                    /**
                     * User who submits requests.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_KYUUBIQUERYINFO_H_
