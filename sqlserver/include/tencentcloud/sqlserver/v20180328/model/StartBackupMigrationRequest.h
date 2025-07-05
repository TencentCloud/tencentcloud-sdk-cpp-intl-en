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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_STARTBACKUPMIGRATIONREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_STARTBACKUPMIGRATIONREQUEST_H_

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
                * StartBackupMigration request structure.
                */
                class StartBackupMigrationRequest : public AbstractModel
                {
                public:
                    StartBackupMigrationRequest();
                    ~StartBackupMigrationRequest() = default;
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_STARTBACKUPMIGRATIONREQUEST_H_
