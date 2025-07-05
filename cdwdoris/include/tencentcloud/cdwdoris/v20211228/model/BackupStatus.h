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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPSTATUS_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Progress details of the backup task
                */
                class BackupStatus : public AbstractModel
                {
                public:
                    BackupStatus();
                    ~BackupStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backup task ID
                     * @return JobId Backup task ID
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置Backup task ID
                     * @param _jobId Backup task ID
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
                     * 获取Snapshot name
                     * @return SnapshotName Snapshot name
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置Snapshot name
                     * @param _snapshotName Snapshot name
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取Database name
                     * @return DbName Database name
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name
                     * @param _dbName Database name
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return State Status
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Status
                     * @param _state Status
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
                     * 获取Backup object
                     * @return BackupObjects Backup object
                     * 
                     */
                    std::string GetBackupObjects() const;

                    /**
                     * 设置Backup object
                     * @param _backupObjects Backup object
                     * 
                     */
                    void SetBackupObjects(const std::string& _backupObjects);

                    /**
                     * 判断参数 BackupObjects 是否已赋值
                     * @return BackupObjects 是否已赋值
                     * 
                     */
                    bool BackupObjectsHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Snapshot end time
                     * @return SnapshotFinishedTime Snapshot end time
                     * 
                     */
                    std::string GetSnapshotFinishedTime() const;

                    /**
                     * 设置Snapshot end time
                     * @param _snapshotFinishedTime Snapshot end time
                     * 
                     */
                    void SetSnapshotFinishedTime(const std::string& _snapshotFinishedTime);

                    /**
                     * 判断参数 SnapshotFinishedTime 是否已赋值
                     * @return SnapshotFinishedTime 是否已赋值
                     * 
                     */
                    bool SnapshotFinishedTimeHasBeenSet() const;

                    /**
                     * 获取Upload end time
                     * @return UploadFinishedTime Upload end time
                     * 
                     */
                    std::string GetUploadFinishedTime() const;

                    /**
                     * 设置Upload end time
                     * @param _uploadFinishedTime Upload end time
                     * 
                     */
                    void SetUploadFinishedTime(const std::string& _uploadFinishedTime);

                    /**
                     * 判断参数 UploadFinishedTime 是否已赋值
                     * @return UploadFinishedTime 是否已赋值
                     * 
                     */
                    bool UploadFinishedTimeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return FinishedTime End time
                     * 
                     */
                    std::string GetFinishedTime() const;

                    /**
                     * 设置End time
                     * @param _finishedTime End time
                     * 
                     */
                    void SetFinishedTime(const std::string& _finishedTime);

                    /**
                     * 判断参数 FinishedTime 是否已赋值
                     * @return FinishedTime 是否已赋值
                     * 
                     */
                    bool FinishedTimeHasBeenSet() const;

                    /**
                     * 获取Unfinished tasks
                     * @return UnfinishedTasks Unfinished tasks
                     * 
                     */
                    std::string GetUnfinishedTasks() const;

                    /**
                     * 设置Unfinished tasks
                     * @param _unfinishedTasks Unfinished tasks
                     * 
                     */
                    void SetUnfinishedTasks(const std::string& _unfinishedTasks);

                    /**
                     * 判断参数 UnfinishedTasks 是否已赋值
                     * @return UnfinishedTasks 是否已赋值
                     * 
                     */
                    bool UnfinishedTasksHasBeenSet() const;

                    /**
                     * 获取Progress
                     * @return Progress Progress
                     * 
                     */
                    std::string GetProgress() const;

                    /**
                     * 设置Progress
                     * @param _progress Progress
                     * 
                     */
                    void SetProgress(const std::string& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Error message
                     * @return TaskErrMsg Error message
                     * 
                     */
                    std::string GetTaskErrMsg() const;

                    /**
                     * 设置Error message
                     * @param _taskErrMsg Error message
                     * 
                     */
                    void SetTaskErrMsg(const std::string& _taskErrMsg);

                    /**
                     * 判断参数 TaskErrMsg 是否已赋值
                     * @return TaskErrMsg 是否已赋值
                     * 
                     */
                    bool TaskErrMsgHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Timeout information
                     * @return Timeout Timeout information
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Timeout information
                     * @param _timeout Timeout information
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Backup instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupJobId Backup instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBackupJobId() const;

                    /**
                     * 设置Backup instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupJobId Backup instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupJobId(const int64_t& _backupJobId);

                    /**
                     * 判断参数 BackupJobId 是否已赋值
                     * @return BackupJobId 是否已赋值
                     * 
                     */
                    bool BackupJobIdHasBeenSet() const;

                    /**
                     * 获取The ID of the snapshoit corresponding to the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId The ID of the snapshoit corresponding to the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置The ID of the snapshoit corresponding to the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskId The ID of the snapshoit corresponding to the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Backup task ID
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Snapshot name
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Backup object
                     */
                    std::string m_backupObjects;
                    bool m_backupObjectsHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Snapshot end time
                     */
                    std::string m_snapshotFinishedTime;
                    bool m_snapshotFinishedTimeHasBeenSet;

                    /**
                     * Upload end time
                     */
                    std::string m_uploadFinishedTime;
                    bool m_uploadFinishedTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_finishedTime;
                    bool m_finishedTimeHasBeenSet;

                    /**
                     * Unfinished tasks
                     */
                    std::string m_unfinishedTasks;
                    bool m_unfinishedTasksHasBeenSet;

                    /**
                     * Progress
                     */
                    std::string m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_taskErrMsg;
                    bool m_taskErrMsgHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Timeout information
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Backup instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_backupJobId;
                    bool m_backupJobIdHasBeenSet;

                    /**
                     * The ID of the snapshoit corresponding to the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPSTATUS_H_
