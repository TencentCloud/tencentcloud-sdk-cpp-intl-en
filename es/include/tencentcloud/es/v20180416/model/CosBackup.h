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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_COSBACKUP_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_COSBACKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ES cos auto backup information
                */
                class CosBackup : public AbstractModel
                {
                public:
                    CosBackup();
                    ~CosBackup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether to enable cos automatic backup</p>
                     * @return IsAutoBackup <p>Whether to enable cos automatic backup</p>
                     * 
                     */
                    bool GetIsAutoBackup() const;

                    /**
                     * 设置<p>Whether to enable cos automatic backup</p>
                     * @param _isAutoBackup <p>Whether to enable cos automatic backup</p>
                     * 
                     */
                    void SetIsAutoBackup(const bool& _isAutoBackup);

                    /**
                     * 判断参数 IsAutoBackup 是否已赋值
                     * @return IsAutoBackup 是否已赋值
                     * 
                     */
                    bool IsAutoBackupHasBeenSet() const;

                    /**
                     * 获取<p>Automatic backup execution time (accurate to the hour), e.g. "22:00"</p>
                     * @return BackupTime <p>Automatic backup execution time (accurate to the hour), e.g. "22:00"</p>
                     * 
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 设置<p>Automatic backup execution time (accurate to the hour), e.g. "22:00"</p>
                     * @param _backupTime <p>Automatic backup execution time (accurate to the hour), e.g. "22:00"</p>
                     * 
                     */
                    void SetBackupTime(const std::string& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取<p>Backup snapshot prefix</p>
                     * @return SnapshotName <p>Backup snapshot prefix</p>
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置<p>Backup snapshot prefix</p>
                     * @param _snapshotName <p>Backup snapshot prefix</p>
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
                     * 获取<p>0 (Tencent Cloud repository); 1 (customer repository)</p>
                     * @return EsRepositoryType <p>0 (Tencent Cloud repository); 1 (customer repository)</p>
                     * 
                     */
                    uint64_t GetEsRepositoryType() const;

                    /**
                     * 设置<p>0 (Tencent Cloud repository); 1 (customer repository)</p>
                     * @param _esRepositoryType <p>0 (Tencent Cloud repository); 1 (customer repository)</p>
                     * 
                     */
                    void SetEsRepositoryType(const uint64_t& _esRepositoryType);

                    /**
                     * 判断参数 EsRepositoryType 是否已赋值
                     * @return EsRepositoryType 是否已赋值
                     * 
                     */
                    bool EsRepositoryTypeHasBeenSet() const;

                    /**
                     * 获取<p>Managed snapshot repository name.</p>
                     * @return PaasEsRepository <p>Managed snapshot repository name.</p>
                     * 
                     */
                    std::string GetPaasEsRepository() const;

                    /**
                     * 设置<p>Managed snapshot repository name.</p>
                     * @param _paasEsRepository <p>Managed snapshot repository name.</p>
                     * 
                     */
                    void SetPaasEsRepository(const std::string& _paasEsRepository);

                    /**
                     * 判断参数 PaasEsRepository 是否已赋值
                     * @return PaasEsRepository 是否已赋值
                     * 
                     */
                    bool PaasEsRepositoryHasBeenSet() const;

                    /**
                     * 获取<p>Customer snapshot repository name</p>
                     * @return UserEsRepository <p>Customer snapshot repository name</p>
                     * 
                     */
                    std::string GetUserEsRepository() const;

                    /**
                     * 设置<p>Customer snapshot repository name</p>
                     * @param _userEsRepository <p>Customer snapshot repository name</p>
                     * 
                     */
                    void SetUserEsRepository(const std::string& _userEsRepository);

                    /**
                     * 判断参数 UserEsRepository 是否已赋值
                     * @return UserEsRepository 是否已赋值
                     * 
                     */
                    bool UserEsRepositoryHasBeenSet() const;

                    /**
                     * 获取<p>cos storage folder directory</p>
                     * @return CosBasePath <p>cos storage folder directory</p>
                     * 
                     */
                    std::string GetCosBasePath() const;

                    /**
                     * 设置<p>cos storage folder directory</p>
                     * @param _cosBasePath <p>cos storage folder directory</p>
                     * 
                     */
                    void SetCosBasePath(const std::string& _cosBasePath);

                    /**
                     * 判断参数 CosBasePath 是否已赋值
                     * @return CosBasePath 是否已赋值
                     * 
                     */
                    bool CosBasePathHasBeenSet() const;

                    /**
                     * 获取<p>Snapshot storage cycle in days</p>
                     * @return StorageDuration <p>Snapshot storage cycle in days</p>
                     * 
                     */
                    uint64_t GetStorageDuration() const;

                    /**
                     * 设置<p>Snapshot storage cycle in days</p>
                     * @param _storageDuration <p>Snapshot storage cycle in days</p>
                     * 
                     */
                    void SetStorageDuration(const uint64_t& _storageDuration);

                    /**
                     * 判断参数 StorageDuration 是否已赋值
                     * @return StorageDuration 是否已赋值
                     * 
                     */
                    bool StorageDurationHasBeenSet() const;

                    /**
                     * 获取<p>Auto backup frequency in hours.</p>
                     * @return AutoBackupInterval <p>Auto backup frequency in hours.</p>
                     * 
                     */
                    uint64_t GetAutoBackupInterval() const;

                    /**
                     * 设置<p>Auto backup frequency in hours.</p>
                     * @param _autoBackupInterval <p>Auto backup frequency in hours.</p>
                     * 
                     */
                    void SetAutoBackupInterval(const uint64_t& _autoBackupInterval);

                    /**
                     * 判断参数 AutoBackupInterval 是否已赋值
                     * @return AutoBackupInterval 是否已赋值
                     * 
                     */
                    bool AutoBackupIntervalHasBeenSet() const;

                    /**
                     * 获取<p>Backup lock. Valid values: 0 (not locked) and 1 (locked).</p>
                     * @return CosRetention <p>Backup lock. Valid values: 0 (not locked) and 1 (locked).</p>
                     * 
                     */
                    uint64_t GetCosRetention() const;

                    /**
                     * 设置<p>Backup lock. Valid values: 0 (not locked) and 1 (locked).</p>
                     * @param _cosRetention <p>Backup lock. Valid values: 0 (not locked) and 1 (locked).</p>
                     * 
                     */
                    void SetCosRetention(const uint64_t& _cosRetention);

                    /**
                     * 判断参数 CosRetention 是否已赋值
                     * @return CosRetention 是否已赋值
                     * 
                     */
                    bool CosRetentionHasBeenSet() const;

                    /**
                     * 获取<p>Lock expiration date, such as 2022-12-10T08:34:48.000Z.</p>
                     * @return RetainUntilDate <p>Lock expiration date, such as 2022-12-10T08:34:48.000Z.</p>
                     * 
                     */
                    std::string GetRetainUntilDate() const;

                    /**
                     * 设置<p>Lock expiration date, such as 2022-12-10T08:34:48.000Z.</p>
                     * @param _retainUntilDate <p>Lock expiration date, such as 2022-12-10T08:34:48.000Z.</p>
                     * 
                     */
                    void SetRetainUntilDate(const std::string& _retainUntilDate);

                    /**
                     * 判断参数 RetainUntilDate 是否已赋值
                     * @return RetainUntilDate 是否已赋值
                     * 
                     */
                    bool RetainUntilDateHasBeenSet() const;

                    /**
                     * 获取<p>Lock grace period</p>
                     * @return RetentionGraceTime <p>Lock grace period</p>
                     * 
                     */
                    uint64_t GetRetentionGraceTime() const;

                    /**
                     * 设置<p>Lock grace period</p>
                     * @param _retentionGraceTime <p>Lock grace period</p>
                     * 
                     */
                    void SetRetentionGraceTime(const uint64_t& _retentionGraceTime);

                    /**
                     * 判断参数 RetentionGraceTime 是否已赋值
                     * @return RetentionGraceTime 是否已赋值
                     * 
                     */
                    bool RetentionGraceTimeHasBeenSet() const;

                    /**
                     * 获取<p>Cross-region backup. Valid values: 0 (disabled) and 1 (enabled).</p>
                     * @return RemoteCos <p>Cross-region backup. Valid values: 0 (disabled) and 1 (enabled).</p>
                     * 
                     */
                    uint64_t GetRemoteCos() const;

                    /**
                     * 设置<p>Cross-region backup. Valid values: 0 (disabled) and 1 (enabled).</p>
                     * @param _remoteCos <p>Cross-region backup. Valid values: 0 (disabled) and 1 (enabled).</p>
                     * 
                     */
                    void SetRemoteCos(const uint64_t& _remoteCos);

                    /**
                     * 判断参数 RemoteCos 是否已赋值
                     * @return RemoteCos 是否已赋值
                     * 
                     */
                    bool RemoteCosHasBeenSet() const;

                    /**
                     * 获取<p>Region name for cross-regional backup, such as ap-guangzhou.</p>
                     * @return RemoteCosRegion <p>Region name for cross-regional backup, such as ap-guangzhou.</p>
                     * 
                     */
                    std::string GetRemoteCosRegion() const;

                    /**
                     * 设置<p>Region name for cross-regional backup, such as ap-guangzhou.</p>
                     * @param _remoteCosRegion <p>Region name for cross-regional backup, such as ap-guangzhou.</p>
                     * 
                     */
                    void SetRemoteCosRegion(const std::string& _remoteCosRegion);

                    /**
                     * 判断参数 RemoteCosRegion 是否已赋值
                     * @return RemoteCosRegion 是否已赋值
                     * 
                     */
                    bool RemoteCosRegionHasBeenSet() const;

                    /**
                     * 获取<p>Policy name.</p>
                     * @return StrategyName <p>Policy name.</p>
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置<p>Policy name.</p>
                     * @param _strategyName <p>Policy name.</p>
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取<p>Backup index list. If left empty, it means to back up all indexes.</p>
                     * @return Indices <p>Backup index list. If left empty, it means to back up all indexes.</p>
                     * 
                     */
                    std::string GetIndices() const;

                    /**
                     * 设置<p>Backup index list. If left empty, it means to back up all indexes.</p>
                     * @param _indices <p>Backup index list. If left empty, it means to back up all indexes.</p>
                     * 
                     */
                    void SetIndices(const std::string& _indices);

                    /**
                     * 判断参数 Indices 是否已赋值
                     * @return Indices 是否已赋值
                     * 
                     */
                    bool IndicesHasBeenSet() const;

                    /**
                     * 获取<p>cos multi-AZ backup. 0: single AZ; 1: multi-AZ</p>
                     * @return MultiAz <p>cos multi-AZ backup. 0: single AZ; 1: multi-AZ</p>
                     * 
                     */
                    uint64_t GetMultiAz() const;

                    /**
                     * 设置<p>cos multi-AZ backup. 0: single AZ; 1: multi-AZ</p>
                     * @param _multiAz <p>cos multi-AZ backup. 0: single AZ; 1: multi-AZ</p>
                     * 
                     */
                    void SetMultiAz(const uint64_t& _multiAz);

                    /**
                     * 判断参数 MultiAz 是否已赋值
                     * @return MultiAz 是否已赋值
                     * 
                     */
                    bool MultiAzHasBeenSet() const;

                    /**
                     * 获取<p>Maximum speed of write to the repository per node max_snapshot_bytes_per_sec, default 40m</p>
                     * @return MaxSnapshotPerSec <p>Maximum speed of write to the repository per node max_snapshot_bytes_per_sec, default 40m</p>
                     * 
                     */
                    std::string GetMaxSnapshotPerSec() const;

                    /**
                     * 设置<p>Maximum speed of write to the repository per node max_snapshot_bytes_per_sec, default 40m</p>
                     * @param _maxSnapshotPerSec <p>Maximum speed of write to the repository per node max_snapshot_bytes_per_sec, default 40m</p>
                     * 
                     */
                    void SetMaxSnapshotPerSec(const std::string& _maxSnapshotPerSec);

                    /**
                     * 判断参数 MaxSnapshotPerSec 是否已赋值
                     * @return MaxSnapshotPerSec 是否已赋值
                     * 
                     */
                    bool MaxSnapshotPerSecHasBeenSet() const;

                    /**
                     * 获取<p>Maximum speed of reading the repository per node max_restore_bytes_per_sec. Default is 40m before 710, and default unlimited from 710 onwards</p>
                     * @return MaxRestorePerSec <p>Maximum speed of reading the repository per node max_restore_bytes_per_sec. Default is 40m before 710, and default unlimited from 710 onwards</p>
                     * 
                     */
                    std::string GetMaxRestorePerSec() const;

                    /**
                     * 设置<p>Maximum speed of reading the repository per node max_restore_bytes_per_sec. Default is 40m before 710, and default unlimited from 710 onwards</p>
                     * @param _maxRestorePerSec <p>Maximum speed of reading the repository per node max_restore_bytes_per_sec. Default is 40m before 710, and default unlimited from 710 onwards</p>
                     * 
                     */
                    void SetMaxRestorePerSec(const std::string& _maxRestorePerSec);

                    /**
                     * 判断参数 MaxRestorePerSec 是否已赋值
                     * @return MaxRestorePerSec 是否已赋值
                     * 
                     */
                    bool MaxRestorePerSecHasBeenSet() const;

                    /**
                     * 获取<p>Policy creation time</p>
                     * @return CreateTime <p>Policy creation time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Policy creation time</p>
                     * @param _createTime <p>Policy creation time</p>
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
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to enable cos automatic backup</p>
                     */
                    bool m_isAutoBackup;
                    bool m_isAutoBackupHasBeenSet;

                    /**
                     * <p>Automatic backup execution time (accurate to the hour), e.g. "22:00"</p>
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * <p>Backup snapshot prefix</p>
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * <p>0 (Tencent Cloud repository); 1 (customer repository)</p>
                     */
                    uint64_t m_esRepositoryType;
                    bool m_esRepositoryTypeHasBeenSet;

                    /**
                     * <p>Managed snapshot repository name.</p>
                     */
                    std::string m_paasEsRepository;
                    bool m_paasEsRepositoryHasBeenSet;

                    /**
                     * <p>Customer snapshot repository name</p>
                     */
                    std::string m_userEsRepository;
                    bool m_userEsRepositoryHasBeenSet;

                    /**
                     * <p>cos storage folder directory</p>
                     */
                    std::string m_cosBasePath;
                    bool m_cosBasePathHasBeenSet;

                    /**
                     * <p>Snapshot storage cycle in days</p>
                     */
                    uint64_t m_storageDuration;
                    bool m_storageDurationHasBeenSet;

                    /**
                     * <p>Auto backup frequency in hours.</p>
                     */
                    uint64_t m_autoBackupInterval;
                    bool m_autoBackupIntervalHasBeenSet;

                    /**
                     * <p>Backup lock. Valid values: 0 (not locked) and 1 (locked).</p>
                     */
                    uint64_t m_cosRetention;
                    bool m_cosRetentionHasBeenSet;

                    /**
                     * <p>Lock expiration date, such as 2022-12-10T08:34:48.000Z.</p>
                     */
                    std::string m_retainUntilDate;
                    bool m_retainUntilDateHasBeenSet;

                    /**
                     * <p>Lock grace period</p>
                     */
                    uint64_t m_retentionGraceTime;
                    bool m_retentionGraceTimeHasBeenSet;

                    /**
                     * <p>Cross-region backup. Valid values: 0 (disabled) and 1 (enabled).</p>
                     */
                    uint64_t m_remoteCos;
                    bool m_remoteCosHasBeenSet;

                    /**
                     * <p>Region name for cross-regional backup, such as ap-guangzhou.</p>
                     */
                    std::string m_remoteCosRegion;
                    bool m_remoteCosRegionHasBeenSet;

                    /**
                     * <p>Policy name.</p>
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * <p>Backup index list. If left empty, it means to back up all indexes.</p>
                     */
                    std::string m_indices;
                    bool m_indicesHasBeenSet;

                    /**
                     * <p>cos multi-AZ backup. 0: single AZ; 1: multi-AZ</p>
                     */
                    uint64_t m_multiAz;
                    bool m_multiAzHasBeenSet;

                    /**
                     * <p>Maximum speed of write to the repository per node max_snapshot_bytes_per_sec, default 40m</p>
                     */
                    std::string m_maxSnapshotPerSec;
                    bool m_maxSnapshotPerSecHasBeenSet;

                    /**
                     * <p>Maximum speed of reading the repository per node max_restore_bytes_per_sec. Default is 40m before 710, and default unlimited from 710 onwards</p>
                     */
                    std::string m_maxRestorePerSec;
                    bool m_maxRestorePerSecHasBeenSet;

                    /**
                     * <p>Policy creation time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_COSBACKUP_H_
