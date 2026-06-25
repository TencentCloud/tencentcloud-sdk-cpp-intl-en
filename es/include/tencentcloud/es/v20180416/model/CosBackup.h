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
                * Auto-backup to COS for ES
                */
                class CosBackup : public AbstractModel
                {
                public:
                    CosBackup();
                    ~CosBackup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable auto-backup to COS
                     * @return IsAutoBackup Whether to enable auto-backup to COS
                     * 
                     */
                    bool GetIsAutoBackup() const;

                    /**
                     * 设置Whether to enable auto-backup to COS
                     * @param _isAutoBackup Whether to enable auto-backup to COS
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
                     * 获取Auto-backup time (accurate down to the hour), such as "22:00"
                     * @return BackupTime Auto-backup time (accurate down to the hour), such as "22:00"
                     * 
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 设置Auto-backup time (accurate down to the hour), such as "22:00"
                     * @param _backupTime Auto-backup time (accurate down to the hour), such as "22:00"
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
                     * 获取Backup snapshot prefix.
                     * @return SnapshotName Backup snapshot prefix.
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置Backup snapshot prefix.
                     * @param _snapshotName Backup snapshot prefix.
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
                     * 获取Valid values: 0 (Tencent Cloud repository) and 1 (customer repository).
                     * @return EsRepositoryType Valid values: 0 (Tencent Cloud repository) and 1 (customer repository).
                     * 
                     */
                    uint64_t GetEsRepositoryType() const;

                    /**
                     * 设置Valid values: 0 (Tencent Cloud repository) and 1 (customer repository).
                     * @param _esRepositoryType Valid values: 0 (Tencent Cloud repository) and 1 (customer repository).
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
                     * 获取Managed snapshot repository name.
                     * @return PaasEsRepository Managed snapshot repository name.
                     * 
                     */
                    std::string GetPaasEsRepository() const;

                    /**
                     * 设置Managed snapshot repository name.
                     * @param _paasEsRepository Managed snapshot repository name.
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
                     * 获取Customer snapshot repository name.
                     * @return UserEsRepository Customer snapshot repository name.
                     * 
                     */
                    std::string GetUserEsRepository() const;

                    /**
                     * 设置Customer snapshot repository name.
                     * @param _userEsRepository Customer snapshot repository name.
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
                     * 获取COS storage folder directory.
                     * @return CosBasePath COS storage folder directory.
                     * 
                     */
                    std::string GetCosBasePath() const;

                    /**
                     * 设置COS storage folder directory.
                     * @param _cosBasePath COS storage folder directory.
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
                     * 获取Snapshot storage cycle in days.
                     * @return StorageDuration Snapshot storage cycle in days.
                     * 
                     */
                    uint64_t GetStorageDuration() const;

                    /**
                     * 设置Snapshot storage cycle in days.
                     * @param _storageDuration Snapshot storage cycle in days.
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
                     * 获取Auto backup frequency in hours.
                     * @return AutoBackupInterval Auto backup frequency in hours.
                     * 
                     */
                    uint64_t GetAutoBackupInterval() const;

                    /**
                     * 设置Auto backup frequency in hours.
                     * @param _autoBackupInterval Auto backup frequency in hours.
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
                     * 获取Backup lock. Valid values: 0 (not locked) and 1 (locked).
                     * @return CosRetention Backup lock. Valid values: 0 (not locked) and 1 (locked).
                     * 
                     */
                    uint64_t GetCosRetention() const;

                    /**
                     * 设置Backup lock. Valid values: 0 (not locked) and 1 (locked).
                     * @param _cosRetention Backup lock. Valid values: 0 (not locked) and 1 (locked).
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
                     * 获取Lock expiration date, such as 2022-12-10T08:34:48.000Z.
                     * @return RetainUntilDate Lock expiration date, such as 2022-12-10T08:34:48.000Z.
                     * 
                     */
                    std::string GetRetainUntilDate() const;

                    /**
                     * 设置Lock expiration date, such as 2022-12-10T08:34:48.000Z.
                     * @param _retainUntilDate Lock expiration date, such as 2022-12-10T08:34:48.000Z.
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
                     * 获取Lock grace period.
                     * @return RetentionGraceTime Lock grace period.
                     * 
                     */
                    uint64_t GetRetentionGraceTime() const;

                    /**
                     * 设置Lock grace period.
                     * @param _retentionGraceTime Lock grace period.
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
                     * 获取Cross-region backup. Valid values: 0 (disabled) and 1 (enabled).
                     * @return RemoteCos Cross-region backup. Valid values: 0 (disabled) and 1 (enabled).
                     * 
                     */
                    uint64_t GetRemoteCos() const;

                    /**
                     * 设置Cross-region backup. Valid values: 0 (disabled) and 1 (enabled).
                     * @param _remoteCos Cross-region backup. Valid values: 0 (disabled) and 1 (enabled).
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
                     * 获取Region name for cross-region backup, such as ap-guangzhou.
                     * @return RemoteCosRegion Region name for cross-region backup, such as ap-guangzhou.
                     * 
                     */
                    std::string GetRemoteCosRegion() const;

                    /**
                     * 设置Region name for cross-region backup, such as ap-guangzhou.
                     * @param _remoteCosRegion Region name for cross-region backup, such as ap-guangzhou.
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
                     * 获取Policy name.
                     * @return StrategyName Policy name.
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Policy name.
                     * @param _strategyName Policy name.
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
                     * 获取Backup index list. If left empty, it means to back up all indexes.
                     * @return Indices Backup index list. If left empty, it means to back up all indexes.
                     * 
                     */
                    std::string GetIndices() const;

                    /**
                     * 设置Backup index list. If left empty, it means to back up all indexes.
                     * @param _indices Backup index list. If left empty, it means to back up all indexes.
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
                     * 获取
                     * @return MultiAz 
                     * 
                     */
                    uint64_t GetMultiAz() const;

                    /**
                     * 设置
                     * @param _multiAz 
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
                     * 获取Policy creation time.
                     * @return CreateTime Policy creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Policy creation time.
                     * @param _createTime Policy creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable auto-backup to COS
                     */
                    bool m_isAutoBackup;
                    bool m_isAutoBackupHasBeenSet;

                    /**
                     * Auto-backup time (accurate down to the hour), such as "22:00"
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * Backup snapshot prefix.
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * Valid values: 0 (Tencent Cloud repository) and 1 (customer repository).
                     */
                    uint64_t m_esRepositoryType;
                    bool m_esRepositoryTypeHasBeenSet;

                    /**
                     * Managed snapshot repository name.
                     */
                    std::string m_paasEsRepository;
                    bool m_paasEsRepositoryHasBeenSet;

                    /**
                     * Customer snapshot repository name.
                     */
                    std::string m_userEsRepository;
                    bool m_userEsRepositoryHasBeenSet;

                    /**
                     * COS storage folder directory.
                     */
                    std::string m_cosBasePath;
                    bool m_cosBasePathHasBeenSet;

                    /**
                     * Snapshot storage cycle in days.
                     */
                    uint64_t m_storageDuration;
                    bool m_storageDurationHasBeenSet;

                    /**
                     * Auto backup frequency in hours.
                     */
                    uint64_t m_autoBackupInterval;
                    bool m_autoBackupIntervalHasBeenSet;

                    /**
                     * Backup lock. Valid values: 0 (not locked) and 1 (locked).
                     */
                    uint64_t m_cosRetention;
                    bool m_cosRetentionHasBeenSet;

                    /**
                     * Lock expiration date, such as 2022-12-10T08:34:48.000Z.
                     */
                    std::string m_retainUntilDate;
                    bool m_retainUntilDateHasBeenSet;

                    /**
                     * Lock grace period.
                     */
                    uint64_t m_retentionGraceTime;
                    bool m_retentionGraceTimeHasBeenSet;

                    /**
                     * Cross-region backup. Valid values: 0 (disabled) and 1 (enabled).
                     */
                    uint64_t m_remoteCos;
                    bool m_remoteCosHasBeenSet;

                    /**
                     * Region name for cross-region backup, such as ap-guangzhou.
                     */
                    std::string m_remoteCosRegion;
                    bool m_remoteCosRegionHasBeenSet;

                    /**
                     * Policy name.
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * Backup index list. If left empty, it means to back up all indexes.
                     */
                    std::string m_indices;
                    bool m_indicesHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_multiAz;
                    bool m_multiAzHasBeenSet;

                    /**
                     * Policy creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_COSBACKUP_H_
