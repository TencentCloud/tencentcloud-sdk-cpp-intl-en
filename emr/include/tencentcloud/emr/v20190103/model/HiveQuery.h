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
                     * 获取Query statementNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Statement Query statementNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatement() const;

                    /**
                     * 设置Query statementNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _statement Query statementNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Execution Duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Duration Execution Duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置Execution Duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _duration Execution Duration
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Start Time in Milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Start Time in Milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start Time in Milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Start Time in Milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取End Time in Milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime End Time in Milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End Time in Milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime End Time in Milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取StatusNote: This field may return null, indicating that no valid values can be obtained.
                     * @return State StatusNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置StatusNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _state StatusNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取UserNote: This field may return null, indicating that no valid values can be obtained.
                     * @return User UserNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置UserNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _user UserNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Execution Engine
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionEngine Execution Engine
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionEngine() const;

                    /**
                     * 设置Execution Engine
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionEngine Execution Engine
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Query ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id Query ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Query ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id Query ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Query statementNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_statement;
                    bool m_statementHasBeenSet;

                    /**
                     * Execution Duration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Start Time in Milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End Time in Milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * StatusNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * UserNote: This field may return null, indicating that no valid values can be obtained.
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
                     * Execution Engine
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionEngine;
                    bool m_executionEngineHasBeenSet;

                    /**
                     * Query ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_HIVEQUERY_H_
