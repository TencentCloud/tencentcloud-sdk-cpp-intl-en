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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESTORESTATUS_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESTORESTATUS_H_

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
                * Recover the task information
                */
                class RestoreStatus : public AbstractModel
                {
                public:
                    RestoreStatus();
                    ~RestoreStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recover the task ID
                     * @return JobId Recover the task ID
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置Recover the task ID
                     * @param _jobId Recover the task ID
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
                     * 获取Recover the task tag
                     * @return Label Recover the task tag
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Recover the task tag
                     * @param _label Recover the task tag
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取Recover the task timestamp
                     * @return Timestamp Recover the task timestamp
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置Recover the task timestamp
                     * @param _timestamp Recover the task timestamp
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
                     * 获取Recover the database where the task is located
                     * @return DbName Recover the database where the task is located
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Recover the database where the task is located
                     * @param _dbName Recover the database where the task is located
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
                     * 获取Recover the task status
                     * @return State Recover the task status
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Recover the task status
                     * @param _state Recover the task status
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
                     * 获取Whether to allow import during recovery
                     * @return AllowLoad Whether to allow import during recovery
                     * 
                     */
                    bool GetAllowLoad() const;

                    /**
                     * 设置Whether to allow import during recovery
                     * @param _allowLoad Whether to allow import during recovery
                     * 
                     */
                    void SetAllowLoad(const bool& _allowLoad);

                    /**
                     * 判断参数 AllowLoad 是否已赋值
                     * @return AllowLoad 是否已赋值
                     * 
                     */
                    bool AllowLoadHasBeenSet() const;

                    /**
                     * 获取Number of replicas
                     * @return ReplicationNum Number of replicas
                     * 
                     */
                    std::string GetReplicationNum() const;

                    /**
                     * 设置Number of replicas
                     * @param _replicationNum Number of replicas
                     * 
                     */
                    void SetReplicationNum(const std::string& _replicationNum);

                    /**
                     * 判断参数 ReplicationNum 是否已赋值
                     * @return ReplicationNum 是否已赋值
                     * 
                     */
                    bool ReplicationNumHasBeenSet() const;

                    /**
                     * 获取Number of replicas
                     * @return ReplicaAllocation Number of replicas
                     * 
                     */
                    std::string GetReplicaAllocation() const;

                    /**
                     * 设置Number of replicas
                     * @param _replicaAllocation Number of replicas
                     * 
                     */
                    void SetReplicaAllocation(const std::string& _replicaAllocation);

                    /**
                     * 判断参数 ReplicaAllocation 是否已赋值
                     * @return ReplicaAllocation 是否已赋值
                     * 
                     */
                    bool ReplicaAllocationHasBeenSet() const;

                    /**
                     * 获取Recover object
                     * @return RestoreObjects Recover object
                     * 
                     */
                    std::string GetRestoreObjects() const;

                    /**
                     * 设置Recover object
                     * @param _restoreObjects Recover object
                     * 
                     */
                    void SetRestoreObjects(const std::string& _restoreObjects);

                    /**
                     * 判断参数 RestoreObjects 是否已赋值
                     * @return RestoreObjects 是否已赋值
                     * 
                     */
                    bool RestoreObjectsHasBeenSet() const;

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
                     * 获取Metadata preparation time
                     * @return MetaPreparedTime Metadata preparation time
                     * 
                     */
                    std::string GetMetaPreparedTime() const;

                    /**
                     * 设置Metadata preparation time
                     * @param _metaPreparedTime Metadata preparation time
                     * 
                     */
                    void SetMetaPreparedTime(const std::string& _metaPreparedTime);

                    /**
                     * 判断参数 MetaPreparedTime 是否已赋值
                     * @return MetaPreparedTime 是否已赋值
                     * 
                     */
                    bool MetaPreparedTimeHasBeenSet() const;

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
                     * 获取Download end time
                     * @return DownloadFinishedTime Download end time
                     * 
                     */
                    std::string GetDownloadFinishedTime() const;

                    /**
                     * 设置Download end time
                     * @param _downloadFinishedTime Download end time
                     * 
                     */
                    void SetDownloadFinishedTime(const std::string& _downloadFinishedTime);

                    /**
                     * 判断参数 DownloadFinishedTime 是否已赋值
                     * @return DownloadFinishedTime 是否已赋值
                     * 
                     */
                    bool DownloadFinishedTimeHasBeenSet() const;

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
                     * 获取Operation timeout period
                     * @return Timeout Operation timeout period
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Operation timeout period
                     * @param _timeout Operation timeout period
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
                     * 获取Whether to maintain the number of replicas in the source table
                     * @return ReserveReplica Whether to maintain the number of replicas in the source table
                     * 
                     */
                    bool GetReserveReplica() const;

                    /**
                     * 设置Whether to maintain the number of replicas in the source table
                     * @param _reserveReplica Whether to maintain the number of replicas in the source table
                     * 
                     */
                    void SetReserveReplica(const bool& _reserveReplica);

                    /**
                     * 判断参数 ReserveReplica 是否已赋值
                     * @return ReserveReplica 是否已赋值
                     * 
                     */
                    bool ReserveReplicaHasBeenSet() const;

                    /**
                     * 获取Whether to maintain dynamic partitions in the source table
                     * @return ReserveDynamicPartitionEnable Whether to maintain dynamic partitions in the source table
                     * 
                     */
                    bool GetReserveDynamicPartitionEnable() const;

                    /**
                     * 设置Whether to maintain dynamic partitions in the source table
                     * @param _reserveDynamicPartitionEnable Whether to maintain dynamic partitions in the source table
                     * 
                     */
                    void SetReserveDynamicPartitionEnable(const bool& _reserveDynamicPartitionEnable);

                    /**
                     * 判断参数 ReserveDynamicPartitionEnable 是否已赋值
                     * @return ReserveDynamicPartitionEnable 是否已赋值
                     * 
                     */
                    bool ReserveDynamicPartitionEnableHasBeenSet() const;

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
                     * 获取ID of the snapshot corresponding to the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId ID of the snapshot corresponding to the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置ID of the snapshot corresponding to the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskId ID of the snapshot corresponding to the instance
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
                     * Recover the task ID
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Recover the task tag
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Recover the task timestamp
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Recover the database where the task is located
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Recover the task status
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Whether to allow import during recovery
                     */
                    bool m_allowLoad;
                    bool m_allowLoadHasBeenSet;

                    /**
                     * Number of replicas
                     */
                    std::string m_replicationNum;
                    bool m_replicationNumHasBeenSet;

                    /**
                     * Number of replicas
                     */
                    std::string m_replicaAllocation;
                    bool m_replicaAllocationHasBeenSet;

                    /**
                     * Recover object
                     */
                    std::string m_restoreObjects;
                    bool m_restoreObjectsHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Metadata preparation time
                     */
                    std::string m_metaPreparedTime;
                    bool m_metaPreparedTimeHasBeenSet;

                    /**
                     * Snapshot end time
                     */
                    std::string m_snapshotFinishedTime;
                    bool m_snapshotFinishedTimeHasBeenSet;

                    /**
                     * Download end time
                     */
                    std::string m_downloadFinishedTime;
                    bool m_downloadFinishedTimeHasBeenSet;

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
                     * Operation timeout period
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Whether to maintain the number of replicas in the source table
                     */
                    bool m_reserveReplica;
                    bool m_reserveReplicaHasBeenSet;

                    /**
                     * Whether to maintain dynamic partitions in the source table
                     */
                    bool m_reserveDynamicPartitionEnable;
                    bool m_reserveDynamicPartitionEnableHasBeenSet;

                    /**
                     * Backup instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_backupJobId;
                    bool m_backupJobIdHasBeenSet;

                    /**
                     * ID of the snapshot corresponding to the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESTORESTATUS_H_
