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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEINCREMENTALMIGRATIONREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEINCREMENTALMIGRATIONREQUEST_H_

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
                * DeleteIncrementalMigration request structure.
                */
                class DeleteIncrementalMigrationRequest : public AbstractModel
                {
                public:
                    DeleteIncrementalMigrationRequest();
                    ~DeleteIncrementalMigrationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Target instance ID.
                     * @return InstanceId Target instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Target instance ID.
                     * @param _instanceId Target instance ID.
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
                     * 获取Backup import task ID, which is returned through the `CreateBackupMigration` API
                     * @return BackupMigrationId Backup import task ID, which is returned through the `CreateBackupMigration` API
                     * 
                     */
                    std::string GetBackupMigrationId() const;

                    /**
                     * 设置Backup import task ID, which is returned through the `CreateBackupMigration` API
                     * @param _backupMigrationId Backup import task ID, which is returned through the `CreateBackupMigration` API
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
                     * 获取Incremental backup import task ID, which is returned through the `CreateIncrementalMigration` API
                     * @return IncrementalMigrationId Incremental backup import task ID, which is returned through the `CreateIncrementalMigration` API
                     * 
                     */
                    std::string GetIncrementalMigrationId() const;

                    /**
                     * 设置Incremental backup import task ID, which is returned through the `CreateIncrementalMigration` API
                     * @param _incrementalMigrationId Incremental backup import task ID, which is returned through the `CreateIncrementalMigration` API
                     * 
                     */
                    void SetIncrementalMigrationId(const std::string& _incrementalMigrationId);

                    /**
                     * 判断参数 IncrementalMigrationId 是否已赋值
                     * @return IncrementalMigrationId 是否已赋值
                     * 
                     */
                    bool IncrementalMigrationIdHasBeenSet() const;

                private:

                    /**
                     * Target instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup import task ID, which is returned through the `CreateBackupMigration` API
                     */
                    std::string m_backupMigrationId;
                    bool m_backupMigrationIdHasBeenSet;

                    /**
                     * Incremental backup import task ID, which is returned through the `CreateIncrementalMigration` API
                     */
                    std::string m_incrementalMigrationId;
                    bool m_incrementalMigrationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEINCREMENTALMIGRATIONREQUEST_H_
