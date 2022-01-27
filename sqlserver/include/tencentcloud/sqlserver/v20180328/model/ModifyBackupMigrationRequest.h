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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPMIGRATIONREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPMIGRATIONREQUEST_H_

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
                * ModifyBackupMigration request structure.
                */
                class ModifyBackupMigrationRequest : public AbstractModel
                {
                public:
                    ModifyBackupMigrationRequest();
                    ~ModifyBackupMigrationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of imported target instance
                     * @return InstanceId ID of imported target instance
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of imported target instance
                     * @param InstanceId ID of imported target instance
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Backup import task ID, which is returned through the API CreateBackupMigration
                     * @return BackupMigrationId Backup import task ID, which is returned through the API CreateBackupMigration
                     */
                    std::string GetBackupMigrationId() const;

                    /**
                     * 设置Backup import task ID, which is returned through the API CreateBackupMigration
                     * @param BackupMigrationId Backup import task ID, which is returned through the API CreateBackupMigration
                     */
                    void SetBackupMigrationId(const std::string& _backupMigrationId);

                    /**
                     * 判断参数 BackupMigrationId 是否已赋值
                     * @return BackupMigrationId 是否已赋值
                     */
                    bool BackupMigrationIdHasBeenSet() const;

                    /**
                     * 获取Task name
                     * @return MigrationName Task name
                     */
                    std::string GetMigrationName() const;

                    /**
                     * 设置Task name
                     * @param MigrationName Task name
                     */
                    void SetMigrationName(const std::string& _migrationName);

                    /**
                     * 判断参数 MigrationName 是否已赋值
                     * @return MigrationName 是否已赋值
                     */
                    bool MigrationNameHasBeenSet() const;

                    /**
                     * 获取Migration task restoration type: FULL,FULL_LOG,FULL_DIFF
                     * @return RecoveryType Migration task restoration type: FULL,FULL_LOG,FULL_DIFF
                     */
                    std::string GetRecoveryType() const;

                    /**
                     * 设置Migration task restoration type: FULL,FULL_LOG,FULL_DIFF
                     * @param RecoveryType Migration task restoration type: FULL,FULL_LOG,FULL_DIFF
                     */
                    void SetRecoveryType(const std::string& _recoveryType);

                    /**
                     * 判断参数 RecoveryType 是否已赋值
                     * @return RecoveryType 是否已赋值
                     */
                    bool RecoveryTypeHasBeenSet() const;

                    /**
                     * 获取COS_URL: the backup is stored in user’s Cloud Object Storage, with URL provided. COS_UPLOAD: the backup is stored in the application’s Cloud Object Storage and needs to be uploaded by the user.
                     * @return UploadType COS_URL: the backup is stored in user’s Cloud Object Storage, with URL provided. COS_UPLOAD: the backup is stored in the application’s Cloud Object Storage and needs to be uploaded by the user.
                     */
                    std::string GetUploadType() const;

                    /**
                     * 设置COS_URL: the backup is stored in user’s Cloud Object Storage, with URL provided. COS_UPLOAD: the backup is stored in the application’s Cloud Object Storage and needs to be uploaded by the user.
                     * @param UploadType COS_URL: the backup is stored in user’s Cloud Object Storage, with URL provided. COS_UPLOAD: the backup is stored in the application’s Cloud Object Storage and needs to be uploaded by the user.
                     */
                    void SetUploadType(const std::string& _uploadType);

                    /**
                     * 判断参数 UploadType 是否已赋值
                     * @return UploadType 是否已赋值
                     */
                    bool UploadTypeHasBeenSet() const;

                    /**
                     * 获取If the UploadType is COS_URL, fill in URL here. If the UploadType is COS_UPLOAD, fill in the name of the backup file here. Only 1 backup file is supported, but a backup file can involve multiple databases.
                     * @return BackupFiles If the UploadType is COS_URL, fill in URL here. If the UploadType is COS_UPLOAD, fill in the name of the backup file here. Only 1 backup file is supported, but a backup file can involve multiple databases.
                     */
                    std::vector<std::string> GetBackupFiles() const;

                    /**
                     * 设置If the UploadType is COS_URL, fill in URL here. If the UploadType is COS_UPLOAD, fill in the name of the backup file here. Only 1 backup file is supported, but a backup file can involve multiple databases.
                     * @param BackupFiles If the UploadType is COS_URL, fill in URL here. If the UploadType is COS_UPLOAD, fill in the name of the backup file here. Only 1 backup file is supported, but a backup file can involve multiple databases.
                     */
                    void SetBackupFiles(const std::vector<std::string>& _backupFiles);

                    /**
                     * 判断参数 BackupFiles 是否已赋值
                     * @return BackupFiles 是否已赋值
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
                     * Task name
                     */
                    std::string m_migrationName;
                    bool m_migrationNameHasBeenSet;

                    /**
                     * Migration task restoration type: FULL,FULL_LOG,FULL_DIFF
                     */
                    std::string m_recoveryType;
                    bool m_recoveryTypeHasBeenSet;

                    /**
                     * COS_URL: the backup is stored in user’s Cloud Object Storage, with URL provided. COS_UPLOAD: the backup is stored in the application’s Cloud Object Storage and needs to be uploaded by the user.
                     */
                    std::string m_uploadType;
                    bool m_uploadTypeHasBeenSet;

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

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPMIGRATIONREQUEST_H_