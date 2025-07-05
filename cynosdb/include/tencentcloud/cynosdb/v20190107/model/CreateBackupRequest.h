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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEBACKUPREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/DatabaseTables.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateBackup request structure.
                */
                class CreateBackupRequest : public AbstractModel
                {
                public:
                    CreateBackupRequest();
                    ~CreateBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Backup type. Valid values: `logic` (logic backup), `snapshot` (physical backup)
                     * @return BackupType Backup type. Valid values: `logic` (logic backup), `snapshot` (physical backup)
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置Backup type. Valid values: `logic` (logic backup), `snapshot` (physical backup)
                     * @param _backupType Backup type. Valid values: `logic` (logic backup), `snapshot` (physical backup)
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
                     * 获取Backup database, which is valid when `BackupType` is `logic`.
                     * @return BackupDatabases Backup database, which is valid when `BackupType` is `logic`.
                     * 
                     */
                    std::vector<std::string> GetBackupDatabases() const;

                    /**
                     * 设置Backup database, which is valid when `BackupType` is `logic`.
                     * @param _backupDatabases Backup database, which is valid when `BackupType` is `logic`.
                     * 
                     */
                    void SetBackupDatabases(const std::vector<std::string>& _backupDatabases);

                    /**
                     * 判断参数 BackupDatabases 是否已赋值
                     * @return BackupDatabases 是否已赋值
                     * 
                     */
                    bool BackupDatabasesHasBeenSet() const;

                    /**
                     * 获取Backup table, which is valid when `BackupType` is `logic`.
                     * @return BackupTables Backup table, which is valid when `BackupType` is `logic`.
                     * 
                     */
                    std::vector<DatabaseTables> GetBackupTables() const;

                    /**
                     * 设置Backup table, which is valid when `BackupType` is `logic`.
                     * @param _backupTables Backup table, which is valid when `BackupType` is `logic`.
                     * 
                     */
                    void SetBackupTables(const std::vector<DatabaseTables>& _backupTables);

                    /**
                     * 判断参数 BackupTables 是否已赋值
                     * @return BackupTables 是否已赋值
                     * 
                     */
                    bool BackupTablesHasBeenSet() const;

                    /**
                     * 获取Backup name
                     * @return BackupName Backup name
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置Backup name
                     * @param _backupName Backup name
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Backup type. Valid values: `logic` (logic backup), `snapshot` (physical backup)
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * Backup database, which is valid when `BackupType` is `logic`.
                     */
                    std::vector<std::string> m_backupDatabases;
                    bool m_backupDatabasesHasBeenSet;

                    /**
                     * Backup table, which is valid when `BackupType` is `logic`.
                     */
                    std::vector<DatabaseTables> m_backupTables;
                    bool m_backupTablesHasBeenSet;

                    /**
                     * Backup name
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEBACKUPREQUEST_H_
