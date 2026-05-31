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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SAVEBACKUPCLUSTERINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SAVEBACKUPCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Legacy backup list.
                */
                class SaveBackupClusterInfo : public AbstractModel
                {
                public:
                    SaveBackupClusterInfo();
                    ~SaveBackupClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backup id of the deceased.
                     * @return BackupId Backup id of the deceased.
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置Backup id of the deceased.
                     * @param _backupId Backup id of the deceased.
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
                     * 获取Cluster ID.
                     * @return ClusterId Cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _clusterId Cluster ID.
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
                     * 获取Cluster name.
                     * @return ClusterName Cluster name.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name.
                     * @param _clusterName Cluster name.
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Availability zone
                     * @return Zone Availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
                     * @param _zone Availability zone
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Backup time
                     * @return BackupTime Backup time
                     * 
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 设置Backup time
                     * @param _backupTime Backup time
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
                     * 获取Database version.
                     * @return DbVersion Database version.
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置Database version.
                     * @param _dbVersion Database version.
                     * 
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     * 
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取Db type (NORMAL, SERVERLESS).
                     * @return DbMode Db type (NORMAL, SERVERLESS).
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置Db type (NORMAL, SERVERLESS).
                     * @param _dbMode Db type (NORMAL, SERVERLESS).
                     * 
                     */
                    void SetDbMode(const std::string& _dbMode);

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     * 
                     */
                    bool DbModeHasBeenSet() const;

                    /**
                     * 获取Cluster status.
                     * @return ClusterStatus Cluster status.
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置Cluster status.
                     * @param _clusterStatus Cluster status.
                     * 
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取Task list.
                     * @return Tasks Task list.
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置Task list.
                     * @param _tasks Task list.
                     * 
                     */
                    void SetTasks(const std::vector<ObjectTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                private:

                    /**
                     * Backup id of the deceased.
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Backup time
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * Database version.
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * Db type (NORMAL, SERVERLESS).
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * Cluster status.
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * Task list.
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SAVEBACKUPCLUSTERINFO_H_
