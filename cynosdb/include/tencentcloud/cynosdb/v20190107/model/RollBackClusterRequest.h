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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKCLUSTERREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackDatabase.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackTable.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * RollBackCluster request structure.
                */
                class RollBackClusterRequest : public AbstractModel
                {
                public:
                    RollBackClusterRequest();
                    ~RollBackClusterRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Rollback policy. timeRollback - roll back by time point; snapRollback - roll back by backup file.
                     * @return RollbackStrategy Rollback policy. timeRollback - roll back by time point; snapRollback - roll back by backup file.
                     * 
                     */
                    std::string GetRollbackStrategy() const;

                    /**
                     * 设置Rollback policy. timeRollback - roll back by time point; snapRollback - roll back by backup file.
                     * @param _rollbackStrategy Rollback policy. timeRollback - roll back by time point; snapRollback - roll back by backup file.
                     * 
                     */
                    void SetRollbackStrategy(const std::string& _rollbackStrategy);

                    /**
                     * 判断参数 RollbackStrategy 是否已赋值
                     * @return RollbackStrategy 是否已赋值
                     * 
                     */
                    bool RollbackStrategyHasBeenSet() const;

                    /**
                     * 获取Backup file ID. This parameter is required when the rollback policy is rolling back by backup file.
                     * @return RollbackId Backup file ID. This parameter is required when the rollback policy is rolling back by backup file.
                     * 
                     */
                    uint64_t GetRollbackId() const;

                    /**
                     * 设置Backup file ID. This parameter is required when the rollback policy is rolling back by backup file.
                     * @param _rollbackId Backup file ID. This parameter is required when the rollback policy is rolling back by backup file.
                     * 
                     */
                    void SetRollbackId(const uint64_t& _rollbackId);

                    /**
                     * 判断参数 RollbackId 是否已赋值
                     * @return RollbackId 是否已赋值
                     * 
                     */
                    bool RollbackIdHasBeenSet() const;

                    /**
                     * 获取Expected rollback time. This parameter is required when the rollback policy is timeRollback (roll back by time point).
                     * @return ExpectTime Expected rollback time. This parameter is required when the rollback policy is timeRollback (roll back by time point).
                     * 
                     */
                    std::string GetExpectTime() const;

                    /**
                     * 设置Expected rollback time. This parameter is required when the rollback policy is timeRollback (roll back by time point).
                     * @param _expectTime Expected rollback time. This parameter is required when the rollback policy is timeRollback (roll back by time point).
                     * 
                     */
                    void SetExpectTime(const std::string& _expectTime);

                    /**
                     * 判断参数 ExpectTime 是否已赋值
                     * @return ExpectTime 是否已赋值
                     * 
                     */
                    bool ExpectTimeHasBeenSet() const;

                    /**
                     * 获取Expected threshold (deprecated).
                     * @return ExpectTimeThresh Expected threshold (deprecated).
                     * 
                     */
                    uint64_t GetExpectTimeThresh() const;

                    /**
                     * 设置Expected threshold (deprecated).
                     * @param _expectTimeThresh Expected threshold (deprecated).
                     * 
                     */
                    void SetExpectTimeThresh(const uint64_t& _expectTimeThresh);

                    /**
                     * 判断参数 ExpectTimeThresh 是否已赋值
                     * @return ExpectTimeThresh 是否已赋值
                     * 
                     */
                    bool ExpectTimeThreshHasBeenSet() const;

                    /**
                     * 获取List of rollback databases.
                     * @return RollbackDatabases List of rollback databases.
                     * 
                     */
                    std::vector<RollbackDatabase> GetRollbackDatabases() const;

                    /**
                     * 设置List of rollback databases.
                     * @param _rollbackDatabases List of rollback databases.
                     * 
                     */
                    void SetRollbackDatabases(const std::vector<RollbackDatabase>& _rollbackDatabases);

                    /**
                     * 判断参数 RollbackDatabases 是否已赋值
                     * @return RollbackDatabases 是否已赋值
                     * 
                     */
                    bool RollbackDatabasesHasBeenSet() const;

                    /**
                     * 获取List of rollback databases and tables.
                     * @return RollbackTables List of rollback databases and tables.
                     * 
                     */
                    std::vector<RollbackTable> GetRollbackTables() const;

                    /**
                     * 设置List of rollback databases and tables.
                     * @param _rollbackTables List of rollback databases and tables.
                     * 
                     */
                    void SetRollbackTables(const std::vector<RollbackTable>& _rollbackTables);

                    /**
                     * 判断参数 RollbackTables 是否已赋值
                     * @return RollbackTables 是否已赋值
                     * 
                     */
                    bool RollbackTablesHasBeenSet() const;

                    /**
                     * 获取Mode of rolling back by time point. full: normal; db: fast; table: ultra-fast (the default value is normal).
                     * @return RollbackMode Mode of rolling back by time point. full: normal; db: fast; table: ultra-fast (the default value is normal).
                     * 
                     */
                    std::string GetRollbackMode() const;

                    /**
                     * 设置Mode of rolling back by time point. full: normal; db: fast; table: ultra-fast (the default value is normal).
                     * @param _rollbackMode Mode of rolling back by time point. full: normal; db: fast; table: ultra-fast (the default value is normal).
                     * 
                     */
                    void SetRollbackMode(const std::string& _rollbackMode);

                    /**
                     * 判断参数 RollbackMode 是否已赋值
                     * @return RollbackMode 是否已赋值
                     * 
                     */
                    bool RollbackModeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Rollback policy. timeRollback - roll back by time point; snapRollback - roll back by backup file.
                     */
                    std::string m_rollbackStrategy;
                    bool m_rollbackStrategyHasBeenSet;

                    /**
                     * Backup file ID. This parameter is required when the rollback policy is rolling back by backup file.
                     */
                    uint64_t m_rollbackId;
                    bool m_rollbackIdHasBeenSet;

                    /**
                     * Expected rollback time. This parameter is required when the rollback policy is timeRollback (roll back by time point).
                     */
                    std::string m_expectTime;
                    bool m_expectTimeHasBeenSet;

                    /**
                     * Expected threshold (deprecated).
                     */
                    uint64_t m_expectTimeThresh;
                    bool m_expectTimeThreshHasBeenSet;

                    /**
                     * List of rollback databases.
                     */
                    std::vector<RollbackDatabase> m_rollbackDatabases;
                    bool m_rollbackDatabasesHasBeenSet;

                    /**
                     * List of rollback databases and tables.
                     */
                    std::vector<RollbackTable> m_rollbackTables;
                    bool m_rollbackTablesHasBeenSet;

                    /**
                     * Mode of rolling back by time point. full: normal; db: fast; table: ultra-fast (the default value is normal).
                     */
                    std::string m_rollbackMode;
                    bool m_rollbackModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKCLUSTERREQUEST_H_
