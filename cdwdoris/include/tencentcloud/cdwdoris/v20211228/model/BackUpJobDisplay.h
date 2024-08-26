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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPJOBDISPLAY_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPJOBDISPLAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/DorisSourceInfo.h>
#include <tencentcloud/cdwdoris/v20211228/model/BackupCosInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Backup instance details
                */
                class BackUpJobDisplay : public AbstractModel
                {
                public:
                    BackUpJobDisplay();
                    ~BackUpJobDisplay() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backup instance ID
                     * @return JobId Backup instance ID
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置Backup instance ID
                     * @param _jobId Backup instance ID
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
                     * 获取Backup instance name
                     * @return Snapshot Backup instance name
                     * 
                     */
                    std::string GetSnapshot() const;

                    /**
                     * 设置Backup instance name
                     * @param _snapshot Backup instance name
                     * 
                     */
                    void SetSnapshot(const std::string& _snapshot);

                    /**
                     * 判断参数 Snapshot 是否已赋值
                     * @return Snapshot 是否已赋值
                     * 
                     */
                    bool SnapshotHasBeenSet() const;

                    /**
                     * 获取Backup data volume
                     * @return BackUpSize Backup data volume
                     * 
                     */
                    int64_t GetBackUpSize() const;

                    /**
                     * 设置Backup data volume
                     * @param _backUpSize Backup data volume
                     * 
                     */
                    void SetBackUpSize(const int64_t& _backUpSize);

                    /**
                     * 判断参数 BackUpSize 是否已赋值
                     * @return BackUpSize 是否已赋值
                     * 
                     */
                    bool BackUpSizeHasBeenSet() const;

                    /**
                     * 获取Backup single replica data volume
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackUpSingleSize Backup single replica data volume
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBackUpSingleSize() const;

                    /**
                     * 设置Backup single replica data volume
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backUpSingleSize Backup single replica data volume
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackUpSingleSize(const int64_t& _backUpSingleSize);

                    /**
                     * 判断参数 BackUpSingleSize 是否已赋值
                     * @return BackUpSingleSize 是否已赋值
                     * 
                     */
                    bool BackUpSingleSizeHasBeenSet() const;

                    /**
                     * 获取Instance creation time
                     * @return BackUpTime Instance creation time
                     * 
                     */
                    std::string GetBackUpTime() const;

                    /**
                     * 设置Instance creation time
                     * @param _backUpTime Instance creation time
                     * 
                     */
                    void SetBackUpTime(const std::string& _backUpTime);

                    /**
                     * 判断参数 BackUpTime 是否已赋值
                     * @return BackUpTime 是否已赋值
                     * 
                     */
                    bool BackUpTimeHasBeenSet() const;

                    /**
                     * 获取Instance expiration time
                     * @return ExpireTime Instance expiration time
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Instance expiration time
                     * @param _expireTime Instance expiration time
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Instance status
                     * @return JobStatus Instance status
                     * 
                     */
                    std::string GetJobStatus() const;

                    /**
                     * 设置Instance status
                     * @param _jobStatus Instance status
                     * 
                     */
                    void SetJobStatus(const std::string& _jobStatus);

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     * 
                     */
                    bool JobStatusHasBeenSet() const;

                    /**
                     * 获取0: default; 1: one-time backup for the remote Doris
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupType 0: default; 1: one-time backup for the remote Doris
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBackupType() const;

                    /**
                     * 设置0: default; 1: one-time backup for the remote Doris
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupType 0: default; 1: one-time backup for the remote Doris
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupType(const int64_t& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取0: default; 1: immediate backup; 2: migration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupTimeType 0: default; 1: immediate backup; 2: migration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBackupTimeType() const;

                    /**
                     * 设置0: default; 1: immediate backup; 2: migration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupTimeType 0: default; 1: immediate backup; 2: migration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupTimeType(const int64_t& _backupTimeType);

                    /**
                     * 判断参数 BackupTimeType 是否已赋值
                     * @return BackupTimeType 是否已赋值
                     * 
                     */
                    bool BackupTimeTypeHasBeenSet() const;

                    /**
                     * 获取Connection information of the remote Doris
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DorisSourceInfo Connection information of the remote Doris
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DorisSourceInfo GetDorisSourceInfo() const;

                    /**
                     * 设置Connection information of the remote Doris
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dorisSourceInfo Connection information of the remote Doris
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDorisSourceInfo(const DorisSourceInfo& _dorisSourceInfo);

                    /**
                     * 判断参数 DorisSourceInfo 是否已赋值
                     * @return DorisSourceInfo 是否已赋值
                     * 
                     */
                    bool DorisSourceInfoHasBeenSet() const;

                    /**
                     * 获取The value corresponding to the instance status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobStatusNum The value corresponding to the instance status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetJobStatusNum() const;

                    /**
                     * 设置The value corresponding to the instance status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobStatusNum The value corresponding to the instance status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJobStatusNum(const int64_t& _jobStatusNum);

                    /**
                     * 判断参数 JobStatusNum 是否已赋值
                     * @return JobStatusNum 是否已赋值
                     * 
                     */
                    bool JobStatusNumHasBeenSet() const;

                    /**
                     * 获取Information about cos in the backup instance	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupCosInfo Information about cos in the backup instance	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BackupCosInfo GetBackupCosInfo() const;

                    /**
                     * 设置Information about cos in the backup instance	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupCosInfo Information about cos in the backup instance	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupCosInfo(const BackupCosInfo& _backupCosInfo);

                    /**
                     * 判断参数 BackupCosInfo 是否已赋值
                     * @return BackupCosInfo 是否已赋值
                     * 
                     */
                    bool BackupCosInfoHasBeenSet() const;

                private:

                    /**
                     * Backup instance ID
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Backup instance name
                     */
                    std::string m_snapshot;
                    bool m_snapshotHasBeenSet;

                    /**
                     * Backup data volume
                     */
                    int64_t m_backUpSize;
                    bool m_backUpSizeHasBeenSet;

                    /**
                     * Backup single replica data volume
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_backUpSingleSize;
                    bool m_backUpSingleSizeHasBeenSet;

                    /**
                     * Instance creation time
                     */
                    std::string m_backUpTime;
                    bool m_backUpTimeHasBeenSet;

                    /**
                     * Instance expiration time
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Instance status
                     */
                    std::string m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                    /**
                     * 0: default; 1: one-time backup for the remote Doris
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 0: default; 1: immediate backup; 2: migration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_backupTimeType;
                    bool m_backupTimeTypeHasBeenSet;

                    /**
                     * Connection information of the remote Doris
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DorisSourceInfo m_dorisSourceInfo;
                    bool m_dorisSourceInfoHasBeenSet;

                    /**
                     * The value corresponding to the instance status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_jobStatusNum;
                    bool m_jobStatusNumHasBeenSet;

                    /**
                     * Information about cos in the backup instance	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BackupCosInfo m_backupCosInfo;
                    bool m_backupCosInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPJOBDISPLAY_H_
