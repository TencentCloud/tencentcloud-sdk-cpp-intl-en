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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_TASKDETAIL_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_TASKDETAIL_H_

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
                * Details of an instance task
                */
                class TaskDetail : public AbstractModel
                {
                public:
                    TaskDetail();
                    ~TaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Error code.
                     * @return Code Error code.
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置Error code.
                     * @param _code Error code.
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Error message.
                     * @return Message Error message.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
                     * @param _message Error message.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取ID of an instance task.
                     * @return JobId ID of an instance task.
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置ID of an instance task.
                     * @param _jobId ID of an instance task.
                     * 
                     */
                    void SetJobId(const int64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Instance task progress.
                     * @return Progress Instance task progress.
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Instance task progress.
                     * @param _progress Instance task progress.
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Instance task status. Valid values:
"UNDEFINED" - undefined;
"INITIAL" - initializing;
"RUNNING" - running;
"SUCCEED" - succeeded;
"FAILED" - failed;
"KILLED" - terminated;
"REMOVED" - deleted;
"PAUSED" - paused.
"WAITING" - waiting (which can be canceled)
                     * @return TaskStatus Instance task status. Valid values:
"UNDEFINED" - undefined;
"INITIAL" - initializing;
"RUNNING" - running;
"SUCCEED" - succeeded;
"FAILED" - failed;
"KILLED" - terminated;
"REMOVED" - deleted;
"PAUSED" - paused.
"WAITING" - waiting (which can be canceled)
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置Instance task status. Valid values:
"UNDEFINED" - undefined;
"INITIAL" - initializing;
"RUNNING" - running;
"SUCCEED" - succeeded;
"FAILED" - failed;
"KILLED" - terminated;
"REMOVED" - deleted;
"PAUSED" - paused.
"WAITING" - waiting (which can be canceled)
                     * @param _taskStatus Instance task status. Valid values:
"UNDEFINED" - undefined;
"INITIAL" - initializing;
"RUNNING" - running;
"SUCCEED" - succeeded;
"FAILED" - failed;
"KILLED" - terminated;
"REMOVED" - deleted;
"PAUSED" - paused.
"WAITING" - waiting (which can be canceled)
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Instance task type. Valid values:
"ROLLBACK" - rolling back a database;
"SQL OPERATION" - performing an SQL operation;
"IMPORT DATA" - importing data;
"MODIFY PARAM" - setting a parameter;
"INITIAL" - initializing a TencentDB instance;
"REBOOT" - restarting a TencentDB instance;
"OPEN GTID" - enabling GTID of a TencentDB instance;
"UPGRADE RO" - upgrading a read-only instance;
"BATCH ROLLBACK" - rolling back databases in batches;
"UPGRADE MASTER" - upgrading a primary instance;
"DROP TABLES" - dropping a TencentDB table;
"SWITCH DR TO MASTER" - promoting a disaster recovery instance.
                     * @return TaskType Instance task type. Valid values:
"ROLLBACK" - rolling back a database;
"SQL OPERATION" - performing an SQL operation;
"IMPORT DATA" - importing data;
"MODIFY PARAM" - setting a parameter;
"INITIAL" - initializing a TencentDB instance;
"REBOOT" - restarting a TencentDB instance;
"OPEN GTID" - enabling GTID of a TencentDB instance;
"UPGRADE RO" - upgrading a read-only instance;
"BATCH ROLLBACK" - rolling back databases in batches;
"UPGRADE MASTER" - upgrading a primary instance;
"DROP TABLES" - dropping a TencentDB table;
"SWITCH DR TO MASTER" - promoting a disaster recovery instance.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Instance task type. Valid values:
"ROLLBACK" - rolling back a database;
"SQL OPERATION" - performing an SQL operation;
"IMPORT DATA" - importing data;
"MODIFY PARAM" - setting a parameter;
"INITIAL" - initializing a TencentDB instance;
"REBOOT" - restarting a TencentDB instance;
"OPEN GTID" - enabling GTID of a TencentDB instance;
"UPGRADE RO" - upgrading a read-only instance;
"BATCH ROLLBACK" - rolling back databases in batches;
"UPGRADE MASTER" - upgrading a primary instance;
"DROP TABLES" - dropping a TencentDB table;
"SWITCH DR TO MASTER" - promoting a disaster recovery instance.
                     * @param _taskType Instance task type. Valid values:
"ROLLBACK" - rolling back a database;
"SQL OPERATION" - performing an SQL operation;
"IMPORT DATA" - importing data;
"MODIFY PARAM" - setting a parameter;
"INITIAL" - initializing a TencentDB instance;
"REBOOT" - restarting a TencentDB instance;
"OPEN GTID" - enabling GTID of a TencentDB instance;
"UPGRADE RO" - upgrading a read-only instance;
"BATCH ROLLBACK" - rolling back databases in batches;
"UPGRADE MASTER" - upgrading a primary instance;
"DROP TABLES" - dropping a TencentDB table;
"SWITCH DR TO MASTER" - promoting a disaster recovery instance.
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Instance task start time.
                     * @return StartTime Instance task start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Instance task start time.
                     * @param _startTime Instance task start time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Instance task end time.
                     * @return EndTime Instance task end time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Instance task end time.
                     * @param _endTime Instance task end time.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取ID of an instance associated with a task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceIds ID of an instance associated with a task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置ID of an instance associated with a task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceIds ID of an instance associated with a task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Async task request ID.
                     * @return AsyncRequestId Async task request ID.
                     * 
                     */
                    std::string GetAsyncRequestId() const;

                    /**
                     * 设置Async task request ID.
                     * @param _asyncRequestId Async task request ID.
                     * 
                     */
                    void SetAsyncRequestId(const std::string& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                private:

                    /**
                     * Error code.
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * ID of an instance task.
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Instance task progress.
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Instance task status. Valid values:
"UNDEFINED" - undefined;
"INITIAL" - initializing;
"RUNNING" - running;
"SUCCEED" - succeeded;
"FAILED" - failed;
"KILLED" - terminated;
"REMOVED" - deleted;
"PAUSED" - paused.
"WAITING" - waiting (which can be canceled)
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Instance task type. Valid values:
"ROLLBACK" - rolling back a database;
"SQL OPERATION" - performing an SQL operation;
"IMPORT DATA" - importing data;
"MODIFY PARAM" - setting a parameter;
"INITIAL" - initializing a TencentDB instance;
"REBOOT" - restarting a TencentDB instance;
"OPEN GTID" - enabling GTID of a TencentDB instance;
"UPGRADE RO" - upgrading a read-only instance;
"BATCH ROLLBACK" - rolling back databases in batches;
"UPGRADE MASTER" - upgrading a primary instance;
"DROP TABLES" - dropping a TencentDB table;
"SWITCH DR TO MASTER" - promoting a disaster recovery instance.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Instance task start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Instance task end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * ID of an instance associated with a task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Async task request ID.
                     */
                    std::string m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_TASKDETAIL_H_
