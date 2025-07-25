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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINCREMENTALMIGRATIONREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINCREMENTALMIGRATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyIncrementalMigration request structure.
                */
                class ModifyIncrementalMigrationRequest : public AbstractModel
                {
                public:
                    ModifyIncrementalMigrationRequest();
                    ~ModifyIncrementalMigrationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of imported target instance
                     * @return InstanceId ID of imported target instance
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of imported target instance
                     * @param _instanceId ID of imported target instance
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Backup import task ID, which is returned through the API CreateBackupMigration
                     * @return BackupMigrationId Backup import task ID, which is returned through the API CreateBackupMigration
                     * 
                     */
                    std::string GetBackupMigrationId() const;

                    /**
                     * 设置Backup import task ID, which is returned through the API CreateBackupMigration
                     * @param _backupMigrationId Backup import task ID, which is returned through the API CreateBackupMigration
                     * 
                     */
                    void SetBackupMigrationId(const std::string& _backupMigrationId);

                    /**
                     * 判断参数 BackupMigrationId 是否已赋值
                     * @return BackupMigrationId 是否已赋值
                     * 
                     */
                    bool BackupMigrationIdHasBeenSet() const;

                    /**
                     * 获取Incremental backup import task ID, which is returned through the `CreateIncrementalMigration` API.
                     * @return IncrementalMigrationId Incremental backup import task ID, which is returned through the `CreateIncrementalMigration` API.
                     * 
                     */
                    std::string GetIncrementalMigrationId() const;

                    /**
                     * 设置Incremental backup import task ID, which is returned through the `CreateIncrementalMigration` API.
                     * @param _incrementalMigrationId Incremental backup import task ID, which is returned through the `CreateIncrementalMigration` API.
                     * 
                     */
                    void SetIncrementalMigrationId(const std::string& _incrementalMigrationId);

                    /**
                     * 判断参数 IncrementalMigrationId 是否已赋值
                     * @return IncrementalMigrationId 是否已赋值
                     * 
                     */
                    bool IncrementalMigrationIdHasBeenSet() const;

                    /**
                     * 获取Whether to restore backups. Valid values: `NO`, `YES`. If this parameter is not specified, current settings will be applied.
                     * @return IsRecovery Whether to restore backups. Valid values: `NO`, `YES`. If this parameter is not specified, current settings will be applied.
                     * 
                     */
                    std::string GetIsRecovery() const;

                    /**
                     * 设置Whether to restore backups. Valid values: `NO`, `YES`. If this parameter is not specified, current settings will be applied.
                     * @param _isRecovery Whether to restore backups. Valid values: `NO`, `YES`. If this parameter is not specified, current settings will be applied.
                     * 
                     */
                    void SetIsRecovery(const std::string& _isRecovery);

                    /**
                     * 判断参数 IsRecovery 是否已赋值
                     * @return IsRecovery 是否已赋值
                     * 
                     */
                    bool IsRecoveryHasBeenSet() const;

                    /**
                     * 获取If the UploadType is COS_URL, fill in URL here. If the UploadType is COS_UPLOAD, fill in the name of the backup file here. Only 1 backup file is supported, but a backup file can involve multiple databases.
                     * @return BackupFiles If the UploadType is COS_URL, fill in URL here. If the UploadType is COS_UPLOAD, fill in the name of the backup file here. Only 1 backup file is supported, but a backup file can involve multiple databases.
                     * 
                     */
                    std::vector<std::string> GetBackupFiles() const;

                    /**
                     * 设置If the UploadType is COS_URL, fill in URL here. If the UploadType is COS_UPLOAD, fill in the name of the backup file here. Only 1 backup file is supported, but a backup file can involve multiple databases.
                     * @param _backupFiles If the UploadType is COS_URL, fill in URL here. If the UploadType is COS_UPLOAD, fill in the name of the backup file here. Only 1 backup file is supported, but a backup file can involve multiple databases.
                     * 
                     */
                    void SetBackupFiles(const std::vector<std::string>& _backupFiles);

                    /**
                     * 判断参数 BackupFiles 是否已赋值
                     * @return BackupFiles 是否已赋值
                     * 
                     */
                    bool BackupFilesHasBeenSet() const;

                private:

                    /**
                     * ID of imported target instance
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup import task ID, which is returned through the API CreateBackupMigration
                     */
                    std::string m_backupMigrationId;
                    bool m_backupMigrationIdHasBeenSet;

                    /**
                     * Incremental backup import task ID, which is returned through the `CreateIncrementalMigration` API.
                     */
                    std::string m_incrementalMigrationId;
                    bool m_incrementalMigrationIdHasBeenSet;

                    /**
                     * Whether to restore backups. Valid values: `NO`, `YES`. If this parameter is not specified, current settings will be applied.
                     */
                    std::string m_isRecovery;
                    bool m_isRecoveryHasBeenSet;

                    /**
                     * If the UploadType is COS_URL, fill in URL here. If the UploadType is COS_UPLOAD, fill in the name of the backup file here. Only 1 backup file is supported, but a backup file can involve multiple databases.
                     */
                    std::vector<std::string> m_backupFiles;
                    bool m_backupFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINCREMENTALMIGRATIONREQUEST_H_
