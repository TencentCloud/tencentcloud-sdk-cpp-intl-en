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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEINCREMENTALMIGRATIONREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEINCREMENTALMIGRATIONREQUEST_H_

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
                * CreateIncrementalMigration request structure.
                */
                class CreateIncrementalMigrationRequest : public AbstractModel
                {
                public:
                    CreateIncrementalMigrationRequest();
                    ~CreateIncrementalMigrationRequest() = default;
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
                     * 获取Backup import task ID, which is returned through the API CreateBackupMigration.
                     * @return BackupMigrationId Backup import task ID, which is returned through the API CreateBackupMigration.
                     */
                    std::string GetBackupMigrationId() const;

                    /**
                     * 设置Backup import task ID, which is returned through the API CreateBackupMigration.
                     * @param BackupMigrationId Backup import task ID, which is returned through the API CreateBackupMigration.
                     */
                    void SetBackupMigrationId(const std::string& _backupMigrationId);

                    /**
                     * 判断参数 BackupMigrationId 是否已赋值
                     * @return BackupMigrationId 是否已赋值
                     */
                    bool BackupMigrationIdHasBeenSet() const;

                    /**
                     * 获取Incremental backup file. If the UploadType of a full backup file is COS_URL, fill in URL here. If the UploadType is COS_UPLOAD, fill in the name of the backup file here. Only 1 backup file is supported, but a backup file can involve multiple databases.
                     * @return BackupFiles Incremental backup file. If the UploadType of a full backup file is COS_URL, fill in URL here. If the UploadType is COS_UPLOAD, fill in the name of the backup file here. Only 1 backup file is supported, but a backup file can involve multiple databases.
                     */
                    std::vector<std::string> GetBackupFiles() const;

                    /**
                     * 设置Incremental backup file. If the UploadType of a full backup file is COS_URL, fill in URL here. If the UploadType is COS_UPLOAD, fill in the name of the backup file here. Only 1 backup file is supported, but a backup file can involve multiple databases.
                     * @param BackupFiles Incremental backup file. If the UploadType of a full backup file is COS_URL, fill in URL here. If the UploadType is COS_UPLOAD, fill in the name of the backup file here. Only 1 backup file is supported, but a backup file can involve multiple databases.
                     */
                    void SetBackupFiles(const std::vector<std::string>& _backupFiles);

                    /**
                     * 判断参数 BackupFiles 是否已赋值
                     * @return BackupFiles 是否已赋值
                     */
                    bool BackupFilesHasBeenSet() const;

                    /**
                     * 获取Whether restoration is required. No: not required. Yes: required. Not required by default.
                     * @return IsRecovery Whether restoration is required. No: not required. Yes: required. Not required by default.
                     */
                    std::string GetIsRecovery() const;

                    /**
                     * 设置Whether restoration is required. No: not required. Yes: required. Not required by default.
                     * @param IsRecovery Whether restoration is required. No: not required. Yes: required. Not required by default.
                     */
                    void SetIsRecovery(const std::string& _isRecovery);

                    /**
                     * 判断参数 IsRecovery 是否已赋值
                     * @return IsRecovery 是否已赋值
                     */
                    bool IsRecoveryHasBeenSet() const;

                private:

                    /**
                     * ID of imported target instance
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup import task ID, which is returned through the API CreateBackupMigration.
                     */
                    std::string m_backupMigrationId;
                    bool m_backupMigrationIdHasBeenSet;

                    /**
                     * Incremental backup file. If the UploadType of a full backup file is COS_URL, fill in URL here. If the UploadType is COS_UPLOAD, fill in the name of the backup file here. Only 1 backup file is supported, but a backup file can involve multiple databases.
                     */
                    std::vector<std::string> m_backupFiles;
                    bool m_backupFilesHasBeenSet;

                    /**
                     * Whether restoration is required. No: not required. Yes: required. Not required by default.
                     */
                    std::string m_isRecovery;
                    bool m_isRecoveryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEINCREMENTALMIGRATIONREQUEST_H_
