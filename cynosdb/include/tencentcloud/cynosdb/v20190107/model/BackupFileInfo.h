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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPFILEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/VaultInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Backup file information
                */
                class BackupFileInfo : public AbstractModel
                {
                public:
                    BackupFileInfo();
                    ~BackupFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Snapshot file ID, abandoned, please use BackupId</p>
                     * @return SnapshotId <p>Snapshot file ID, abandoned, please use BackupId</p>
                     * 
                     */
                    uint64_t GetSnapshotId() const;

                    /**
                     * 设置<p>Snapshot file ID, abandoned, please use BackupId</p>
                     * @param _snapshotId <p>Snapshot file ID, abandoned, please use BackupId</p>
                     * 
                     */
                    void SetSnapshotId(const uint64_t& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取<p>Backup file name</p>
                     * @return FileName <p>Backup file name</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>Backup file name</p>
                     * @param _fileName <p>Backup file name</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>Backup file size</p>
                     * @return FileSize <p>Backup file size</p>
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置<p>Backup file size</p>
                     * @param _fileSize <p>Backup file size</p>
                     * 
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取<p>Backup start time.</p>
                     * @return StartTime <p>Backup start time.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Backup start time.</p>
                     * @param _startTime <p>Backup start time.</p>
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
                     * 获取<p>Backup completion time.</p>
                     * @return FinishTime <p>Backup completion time.</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>Backup completion time.</p>
                     * @param _finishTime <p>Backup completion time.</p>
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>Backup type: snapshot, snapshot backup; logic, logical backup</p>
                     * @return BackupType <p>Backup type: snapshot, snapshot backup; logic, logical backup</p>
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置<p>Backup type: snapshot, snapshot backup; logic, logical backup</p>
                     * @param _backupType <p>Backup type: snapshot, snapshot backup; logic, logical backup</p>
                     * 
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取<p>Backup method: auto, automatic backup; manual, manual backup</p>
                     * @return BackupMethod <p>Backup method: auto, automatic backup; manual, manual backup</p>
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置<p>Backup method: auto, automatic backup; manual, manual backup</p>
                     * @param _backupMethod <p>Backup method: auto, automatic backup; manual, manual backup</p>
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取<p>Backup file status: success: backup successful; fail: backup failed; creating: backup file being created; deleting: backup file deleting</p>
                     * @return BackupStatus <p>Backup file status: success: backup successful; fail: backup failed; creating: backup file being created; deleting: backup file deleting</p>
                     * 
                     */
                    std::string GetBackupStatus() const;

                    /**
                     * 设置<p>Backup file status: success: backup successful; fail: backup failed; creating: backup file being created; deleting: backup file deleting</p>
                     * @param _backupStatus <p>Backup file status: success: backup successful; fail: backup failed; creating: backup file being created; deleting: backup file deleting</p>
                     * 
                     */
                    void SetBackupStatus(const std::string& _backupStatus);

                    /**
                     * 判断参数 BackupStatus 是否已赋值
                     * @return BackupStatus 是否已赋值
                     * 
                     */
                    bool BackupStatusHasBeenSet() const;

                    /**
                     * 获取<p>Backup file time</p>
                     * @return SnapshotTime <p>Backup file time</p>
                     * 
                     */
                    std::string GetSnapshotTime() const;

                    /**
                     * 设置<p>Backup file time</p>
                     * @param _snapshotTime <p>Backup file time</p>
                     * 
                     */
                    void SetSnapshotTime(const std::string& _snapshotTime);

                    /**
                     * 判断参数 SnapshotTime 是否已赋值
                     * @return SnapshotTime 是否已赋值
                     * 
                     */
                    bool SnapshotTimeHasBeenSet() const;

                    /**
                     * 获取<p>Backup ID</p>
                     * @return BackupId <p>Backup ID</p>
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置<p>Backup ID</p>
                     * @param _backupId <p>Backup ID</p>
                     * 
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取<p>Snapshot type. Value range: full, full; increment, incremental</p>
                     * @return SnapShotType <p>Snapshot type. Value range: full, full; increment, incremental</p>
                     * 
                     */
                    std::string GetSnapShotType() const;

                    /**
                     * 设置<p>Snapshot type. Value range: full, full; increment, incremental</p>
                     * @param _snapShotType <p>Snapshot type. Value range: full, full; increment, incremental</p>
                     * 
                     */
                    void SetSnapShotType(const std::string& _snapShotType);

                    /**
                     * 判断参数 SnapShotType 是否已赋值
                     * @return SnapShotType 是否已赋值
                     * 
                     */
                    bool SnapShotTypeHasBeenSet() const;

                    /**
                     * 获取<p>Backup file remark</p>
                     * @return BackupName <p>Backup file remark</p>
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置<p>Backup file remark</p>
                     * @param _backupName <p>Backup file remark</p>
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取<p>Delivery status</p>
                     * @return CopyStatus <p>Delivery status</p>
                     * 
                     */
                    std::string GetCopyStatus() const;

                    /**
                     * 设置<p>Delivery status</p>
                     * @param _copyStatus <p>Delivery status</p>
                     * 
                     */
                    void SetCopyStatus(const std::string& _copyStatus);

                    /**
                     * 判断参数 CopyStatus 是否已赋值
                     * @return CopyStatus 是否已赋值
                     * 
                     */
                    bool CopyStatusHasBeenSet() const;

                    /**
                     * 获取<p>Key id</p>
                     * @return EncryptKeyId <p>Key id</p>
                     * 
                     */
                    std::string GetEncryptKeyId() const;

                    /**
                     * 设置<p>Key id</p>
                     * @param _encryptKeyId <p>Key id</p>
                     * 
                     */
                    void SetEncryptKeyId(const std::string& _encryptKeyId);

                    /**
                     * 判断参数 EncryptKeyId 是否已赋值
                     * @return EncryptKeyId 是否已赋值
                     * 
                     */
                    bool EncryptKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>Key region</p>
                     * @return EncryptRegion <p>Key region</p>
                     * 
                     */
                    std::string GetEncryptRegion() const;

                    /**
                     * 设置<p>Key region</p>
                     * @param _encryptRegion <p>Key region</p>
                     * 
                     */
                    void SetEncryptRegion(const std::string& _encryptRegion);

                    /**
                     * 判断参数 EncryptRegion 是否已赋值
                     * @return EncryptRegion 是否已赋值
                     * 
                     */
                    bool EncryptRegionHasBeenSet() const;

                    /**
                     * 获取<p>Safe info</p>
                     * @return VaultInfos <p>Safe info</p>
                     * 
                     */
                    std::vector<VaultInfo> GetVaultInfos() const;

                    /**
                     * 设置<p>Safe info</p>
                     * @param _vaultInfos <p>Safe info</p>
                     * 
                     */
                    void SetVaultInfos(const std::vector<VaultInfo>& _vaultInfos);

                    /**
                     * 判断参数 VaultInfos 是否已赋值
                     * @return VaultInfos 是否已赋值
                     * 
                     */
                    bool VaultInfosHasBeenSet() const;

                    /**
                     * 获取<p>Backup cycle policy</p>
                     * @return BackupPeriodStrategy <p>Backup cycle policy</p>
                     * 
                     */
                    std::string GetBackupPeriodStrategy() const;

                    /**
                     * 设置<p>Backup cycle policy</p>
                     * @param _backupPeriodStrategy <p>Backup cycle policy</p>
                     * 
                     */
                    void SetBackupPeriodStrategy(const std::string& _backupPeriodStrategy);

                    /**
                     * 判断参数 BackupPeriodStrategy 是否已赋值
                     * @return BackupPeriodStrategy 是否已赋值
                     * 
                     */
                    bool BackupPeriodStrategyHasBeenSet() const;

                private:

                    /**
                     * <p>Snapshot file ID, abandoned, please use BackupId</p>
                     */
                    uint64_t m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * <p>Backup file name</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>Backup file size</p>
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>Backup start time.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Backup completion time.</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>Backup type: snapshot, snapshot backup; logic, logical backup</p>
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * <p>Backup method: auto, automatic backup; manual, manual backup</p>
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * <p>Backup file status: success: backup successful; fail: backup failed; creating: backup file being created; deleting: backup file deleting</p>
                     */
                    std::string m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                    /**
                     * <p>Backup file time</p>
                     */
                    std::string m_snapshotTime;
                    bool m_snapshotTimeHasBeenSet;

                    /**
                     * <p>Backup ID</p>
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * <p>Snapshot type. Value range: full, full; increment, incremental</p>
                     */
                    std::string m_snapShotType;
                    bool m_snapShotTypeHasBeenSet;

                    /**
                     * <p>Backup file remark</p>
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * <p>Delivery status</p>
                     */
                    std::string m_copyStatus;
                    bool m_copyStatusHasBeenSet;

                    /**
                     * <p>Key id</p>
                     */
                    std::string m_encryptKeyId;
                    bool m_encryptKeyIdHasBeenSet;

                    /**
                     * <p>Key region</p>
                     */
                    std::string m_encryptRegion;
                    bool m_encryptRegionHasBeenSet;

                    /**
                     * <p>Safe info</p>
                     */
                    std::vector<VaultInfo> m_vaultInfos;
                    bool m_vaultInfosHasBeenSet;

                    /**
                     * <p>Backup cycle policy</p>
                     */
                    std::string m_backupPeriodStrategy;
                    bool m_backupPeriodStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPFILEINFO_H_
