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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTSITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>
#include <tencentcloud/cynosdb/v20190107/model/AutoCopyConfig.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Safe info
                */
                class DescribeVaultsItem : public AbstractModel
                {
                public:
                    DescribeVaultsItem();
                    ~DescribeVaultsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Safe ID
                     * @return VaultId Safe ID
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置Safe ID
                     * @param _vaultId Safe ID
                     * 
                     */
                    void SetVaultId(const std::string& _vaultId);

                    /**
                     * 判断参数 VaultId 是否已赋值
                     * @return VaultId 是否已赋值
                     * 
                     */
                    bool VaultIdHasBeenSet() const;

                    /**
                     * 获取Safe name
                     * @return VaultName Safe name
                     * 
                     */
                    std::string GetVaultName() const;

                    /**
                     * 设置Safe name
                     * @param _vaultName Safe name
                     * 
                     */
                    void SetVaultName(const std::string& _vaultName);

                    /**
                     * 判断参数 VaultName 是否已赋值
                     * @return VaultName 是否已赋值
                     * 
                     */
                    bool VaultNameHasBeenSet() const;

                    /**
                     * 获取Safe description
                     * @return VaultDescribe Safe description
                     * 
                     */
                    std::string GetVaultDescribe() const;

                    /**
                     * 设置Safe description
                     * @param _vaultDescribe Safe description
                     * 
                     */
                    void SetVaultDescribe(const std::string& _vaultDescribe);

                    /**
                     * 判断参数 VaultDescribe 是否已赋值
                     * @return VaultDescribe 是否已赋值
                     * 
                     */
                    bool VaultDescribeHasBeenSet() const;

                    /**
                     * 获取Encryption key ID.
                     * @return KeyId Encryption key ID.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Encryption key ID.
                     * @param _keyId Encryption key ID.
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Key region
                     * @return KeyRegion Key region
                     * 
                     */
                    std::string GetKeyRegion() const;

                    /**
                     * 设置Key region
                     * @param _keyRegion Key region
                     * 
                     */
                    void SetKeyRegion(const std::string& _keyRegion);

                    /**
                     * 判断参数 KeyRegion 是否已赋值
                     * @return KeyRegion 是否已赋值
                     * 
                     */
                    bool KeyRegionHasBeenSet() const;

                    /**
                     * 获取Key type
                     * @return KeyType Key type
                     * 
                     */
                    std::string GetKeyType() const;

                    /**
                     * 设置Key type
                     * @param _keyType Key type
                     * 
                     */
                    void SetKeyType(const std::string& _keyType);

                    /**
                     * 判断参数 KeyType 是否已赋值
                     * @return KeyType 是否已赋值
                     * 
                     */
                    bool KeyTypeHasBeenSet() const;

                    /**
                     * 获取Number of backup files
                     * @return BackupFileCount Number of backup files
                     * 
                     */
                    int64_t GetBackupFileCount() const;

                    /**
                     * 设置Number of backup files
                     * @param _backupFileCount Number of backup files
                     * 
                     */
                    void SetBackupFileCount(const int64_t& _backupFileCount);

                    /**
                     * 判断参数 BackupFileCount 是否已赋值
                     * @return BackupFileCount 是否已赋值
                     * 
                     */
                    bool BackupFileCountHasBeenSet() const;

                    /**
                     * 获取Total size of backup files (byte)
                     * @return BackupFileSize Total size of backup files (byte)
                     * 
                     */
                    int64_t GetBackupFileSize() const;

                    /**
                     * 设置Total size of backup files (byte)
                     * @param _backupFileSize Total size of backup files (byte)
                     * 
                     */
                    void SetBackupFileSize(const int64_t& _backupFileSize);

                    /**
                     * 判断参数 BackupFileSize 是否已赋值
                     * @return BackupFileSize 是否已赋值
                     * 
                     */
                    bool BackupFileSizeHasBeenSet() const;

                    /**
                     * 获取Binlog file count
                     * @return BinlogFileCount Binlog file count
                     * 
                     */
                    int64_t GetBinlogFileCount() const;

                    /**
                     * 设置Binlog file count
                     * @param _binlogFileCount Binlog file count
                     * 
                     */
                    void SetBinlogFileCount(const int64_t& _binlogFileCount);

                    /**
                     * 判断参数 BinlogFileCount 是否已赋值
                     * @return BinlogFileCount 是否已赋值
                     * 
                     */
                    bool BinlogFileCountHasBeenSet() const;

                    /**
                     * 获取Total size of the Binlog file (byte)
                     * @return BinlogFileSize Total size of the Binlog file (byte)
                     * 
                     */
                    int64_t GetBinlogFileSize() const;

                    /**
                     * 设置Total size of the Binlog file (byte)
                     * @param _binlogFileSize Total size of the Binlog file (byte)
                     * 
                     */
                    void SetBinlogFileSize(const int64_t& _binlogFileSize);

                    /**
                     * 判断参数 BinlogFileSize 是否已赋值
                     * @return BinlogFileSize 是否已赋值
                     * 
                     */
                    bool BinlogFileSizeHasBeenSet() const;

                    /**
                     * 获取Number of RedoLog files
                     * @return RedoLogFileCount Number of RedoLog files
                     * 
                     */
                    int64_t GetRedoLogFileCount() const;

                    /**
                     * 设置Number of RedoLog files
                     * @param _redoLogFileCount Number of RedoLog files
                     * 
                     */
                    void SetRedoLogFileCount(const int64_t& _redoLogFileCount);

                    /**
                     * 判断参数 RedoLogFileCount 是否已赋值
                     * @return RedoLogFileCount 是否已赋值
                     * 
                     */
                    bool RedoLogFileCountHasBeenSet() const;

                    /**
                     * 获取Total size of RedoLog files (byte)
                     * @return RedoLogFileSize Total size of RedoLog files (byte)
                     * 
                     */
                    int64_t GetRedoLogFileSize() const;

                    /**
                     * 设置Total size of RedoLog files (byte)
                     * @param _redoLogFileSize Total size of RedoLog files (byte)
                     * 
                     */
                    void SetRedoLogFileSize(const int64_t& _redoLogFileSize);

                    /**
                     * 判断参数 RedoLogFileSize 是否已赋值
                     * @return RedoLogFileSize 是否已赋值
                     * 
                     */
                    bool RedoLogFileSizeHasBeenSet() const;

                    /**
                     * 获取Safe status
                     * @return Status Safe status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Safe status
                     * @param _status Safe status
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
                     * 获取Backup retention period (seconds)
                     * @return BackupSaveSeconds Backup retention period (seconds)
                     * 
                     */
                    int64_t GetBackupSaveSeconds() const;

                    /**
                     * 设置Backup retention period (seconds)
                     * @param _backupSaveSeconds Backup retention period (seconds)
                     * 
                     */
                    void SetBackupSaveSeconds(const int64_t& _backupSaveSeconds);

                    /**
                     * 判断参数 BackupSaveSeconds 是否已赋值
                     * @return BackupSaveSeconds 是否已赋值
                     * 
                     */
                    bool BackupSaveSecondsHasBeenSet() const;

                    /**
                     * 获取lock time
                     * @return LockedTime lock time
                     * 
                     */
                    std::string GetLockedTime() const;

                    /**
                     * 设置lock time
                     * @param _lockedTime lock time
                     * 
                     */
                    void SetLockedTime(const std::string& _lockedTime);

                    /**
                     * 判断参数 LockedTime 是否已赋值
                     * @return LockedTime 是否已赋值
                     * 
                     */
                    bool LockedTimeHasBeenSet() const;

                    /**
                     * 获取Associated task list
                     * @return Tasks Associated task list
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置Associated task list
                     * @param _tasks Associated task list
                     * 
                     */
                    void SetTasks(const std::vector<ObjectTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取Safe region
                     * @return VaultRegion Safe region
                     * 
                     */
                    std::string GetVaultRegion() const;

                    /**
                     * 设置Safe region
                     * @param _vaultRegion Safe region
                     * 
                     */
                    void SetVaultRegion(const std::string& _vaultRegion);

                    /**
                     * 判断参数 VaultRegion 是否已赋值
                     * @return VaultRegion 是否已赋值
                     * 
                     */
                    bool VaultRegionHasBeenSet() const;

                    /**
                     * 获取Automatically deliver relationship
                     * @return AutoCopyConfigs Automatically deliver relationship
                     * 
                     */
                    std::vector<AutoCopyConfig> GetAutoCopyConfigs() const;

                    /**
                     * 设置Automatically deliver relationship
                     * @param _autoCopyConfigs Automatically deliver relationship
                     * 
                     */
                    void SetAutoCopyConfigs(const std::vector<AutoCopyConfig>& _autoCopyConfigs);

                    /**
                     * 判断参数 AutoCopyConfigs 是否已赋值
                     * @return AutoCopyConfigs 是否已赋值
                     * 
                     */
                    bool AutoCopyConfigsHasBeenSet() const;

                private:

                    /**
                     * Safe ID
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * Safe name
                     */
                    std::string m_vaultName;
                    bool m_vaultNameHasBeenSet;

                    /**
                     * Safe description
                     */
                    std::string m_vaultDescribe;
                    bool m_vaultDescribeHasBeenSet;

                    /**
                     * Encryption key ID.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Key region
                     */
                    std::string m_keyRegion;
                    bool m_keyRegionHasBeenSet;

                    /**
                     * Key type
                     */
                    std::string m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * Number of backup files
                     */
                    int64_t m_backupFileCount;
                    bool m_backupFileCountHasBeenSet;

                    /**
                     * Total size of backup files (byte)
                     */
                    int64_t m_backupFileSize;
                    bool m_backupFileSizeHasBeenSet;

                    /**
                     * Binlog file count
                     */
                    int64_t m_binlogFileCount;
                    bool m_binlogFileCountHasBeenSet;

                    /**
                     * Total size of the Binlog file (byte)
                     */
                    int64_t m_binlogFileSize;
                    bool m_binlogFileSizeHasBeenSet;

                    /**
                     * Number of RedoLog files
                     */
                    int64_t m_redoLogFileCount;
                    bool m_redoLogFileCountHasBeenSet;

                    /**
                     * Total size of RedoLog files (byte)
                     */
                    int64_t m_redoLogFileSize;
                    bool m_redoLogFileSizeHasBeenSet;

                    /**
                     * Safe status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Backup retention period (seconds)
                     */
                    int64_t m_backupSaveSeconds;
                    bool m_backupSaveSecondsHasBeenSet;

                    /**
                     * lock time
                     */
                    std::string m_lockedTime;
                    bool m_lockedTimeHasBeenSet;

                    /**
                     * Associated task list
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Safe region
                     */
                    std::string m_vaultRegion;
                    bool m_vaultRegionHasBeenSet;

                    /**
                     * Automatically deliver relationship
                     */
                    std::vector<AutoCopyConfig> m_autoCopyConfigs;
                    bool m_autoCopyConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTSITEM_H_
