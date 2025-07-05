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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeBackupDetail response structure.
                */
                class DescribeBackupDetailResponse : public AbstractModel
                {
                public:
                    DescribeBackupDetailResponse();
                    ~DescribeBackupDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Backup ID.
                     * @return BackupId Backup ID.
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取Backup start time.
                     * @return StartTime Backup start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Backup end time.
                     * @return EndTime Backup end time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Backup mode.

- 1: manual backup.
- 0: automatic backup.
                     * @return BackupType Backup mode.

- 1: manual backup.
- 0: automatic backup.
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取Backup status.

- 1: The backup is locked by other processes.
- 2: The backup is normal and not locked by any processes.
- -1: The backup has expired.
- 3: The backup is being exported.
- 4: The backup is successfully exported.
                     * @return Status Backup status.

- 1: The backup is locked by other processes.
- 2: The backup is normal and not locked by any processes.
- -1: The backup has expired.
- 3: The backup is being exported.
- 4: The backup is successfully exported.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Backup remarks.
                     * @return Remark Backup remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Whether the backup is locked.

- 0: not locked.
- 1: locked.
                     * @return Locked Whether the backup is locked.

- 0: not locked.
- 1: locked.
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取Backup file size. Unit: byte.
                     * @return BackupSize Backup file size. Unit: byte.
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     * 
                     */
                    bool BackupSizeHasBeenSet() const;

                    /**
                     * 获取Instance type.
                     * @return InstanceType Instance type.
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Memory size of a single shard. Unit: MB.
                     * @return MemSize Memory size of a single shard. Unit: MB.
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取Number of shards.
                     * @return ShardNum Number of shards.
                     * 
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取Number of replicas.
                     * @return ReplicasNum Number of replicas.
                     * 
                     */
                    int64_t GetReplicasNum() const;

                    /**
                     * 判断参数 ReplicasNum 是否已赋值
                     * @return ReplicasNum 是否已赋值
                     * 
                     */
                    bool ReplicasNumHasBeenSet() const;

                private:

                    /**
                     * Backup ID.
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * Backup start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Backup end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Backup mode.

- 1: manual backup.
- 0: automatic backup.
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * Backup status.

- 1: The backup is locked by other processes.
- 2: The backup is normal and not locked by any processes.
- -1: The backup has expired.
- 3: The backup is being exported.
- 4: The backup is successfully exported.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Backup remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Whether the backup is locked.

- 0: not locked.
- 1: locked.
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * Backup file size. Unit: byte.
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * Instance type.
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Memory size of a single shard. Unit: MB.
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Number of shards.
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * Number of replicas.
                     */
                    int64_t m_replicasNum;
                    bool m_replicasNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILRESPONSE_H_
