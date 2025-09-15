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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_HIVEQUERY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_HIVEQUERY_H_

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
                * Hive query details
                */
                class HiveQuery : public AbstractModel
                {
                public:
                    HiveQuery();
                    ~HiveQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Query statement.
                     * @return Statement Query statement.
                     * 
                     */
                    std::string GetStatement() const;

                    /**
                     * 设置Query statement.
                     * @param _statement Query statement.
                     * 
                     */
                    void SetStatement(const std::string& _statement);

                    /**
                     * 判断参数 Statement 是否已赋值
                     * @return Statement 是否已赋值
                     * 
                     */
                    bool StatementHasBeenSet() const;

                    /**
                     * 获取Execution duration.
                     * @return Duration Execution duration.
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置Execution duration.
                     * @param _duration Execution duration.
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Start time in milliseconds.
                     * @return StartTime Start time in milliseconds.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time in milliseconds.
                     * @param _startTime Start time in milliseconds.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time in milliseconds.
                     * @return EndTime End time in milliseconds.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time in milliseconds.
                     * @param _endTime End time in milliseconds.
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
                     * 获取Status.
                     * @return State Status.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Status.
                     * @param _state Status.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取User.
                     * @return User User.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置User.
                     * @param _user User.
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
                     * 获取AppId List
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobIds AppId List
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetJobIds() const;

                    /**
                     * 设置AppId List
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobIds AppId List
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJobIds(const std::vector<std::string>& _jobIds);

                    /**
                     * 判断参数 JobIds 是否已赋值
                     * @return JobIds 是否已赋值
                     * 
                     */
                    bool JobIdsHasBeenSet() const;

                    /**
                     * 获取Execution engine.
                     * @return ExecutionEngine Execution engine.
                     * 
                     */
                    std::string GetExecutionEngine() const;

                    /**
                     * 设置Execution engine.
                     * @param _executionEngine Execution engine.
                     * 
                     */
                    void SetExecutionEngine(const std::string& _executionEngine);

                    /**
                     * 判断参数 ExecutionEngine 是否已赋值
                     * @return ExecutionEngine 是否已赋值
                     * 
                     */
                    bool ExecutionEngineHasBeenSet() const;

                    /**
                     * 获取Query ID.
                     * @return Id Query ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Query ID.
                     * @param _id Query ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Query statement.
                     */
                    std::string m_statement;
                    bool m_statementHasBeenSet;

                    /**
                     * Execution duration.
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Start time in milliseconds.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in milliseconds.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Status.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * User.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * AppId List
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_jobIds;
                    bool m_jobIdsHasBeenSet;

                    /**
                     * Execution engine.
                     */
                    std::string m_executionEngine;
                    bool m_executionEngineHasBeenSet;

                    /**
                     * Query ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_HIVEQUERY_H_
