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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKDATA_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackDatabase.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackTable.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackProcessInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Rollback task information
                */
                class RollbackData : public AbstractModel
                {
                public:
                    RollbackData();
                    ~RollbackData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance CPU
                     * @return Cpu Instance CPU
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Instance CPU
                     * @param _cpu Instance CPU
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Instance memory
                     * @return Memory Instance memory
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory
                     * @param _memory Instance memory
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Cluster storage limit
                     * @return StorageLimit Cluster storage limit
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置Cluster storage limit
                     * @param _storageLimit Cluster storage limit
                     * 
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取Source cluster id
                     * @return OriginalClusterId Source cluster id
                     * 
                     */
                    std::string GetOriginalClusterId() const;

                    /**
                     * 设置Source cluster id
                     * @param _originalClusterId Source cluster id
                     * 
                     */
                    void SetOriginalClusterId(const std::string& _originalClusterId);

                    /**
                     * 判断参数 OriginalClusterId 是否已赋值
                     * @return OriginalClusterId 是否已赋值
                     * 
                     */
                    bool OriginalClusterIdHasBeenSet() const;

                    /**
                     * 获取Source cluster name
                     * @return OriginalClusterName Source cluster name
                     * 
                     */
                    std::string GetOriginalClusterName() const;

                    /**
                     * 设置Source cluster name
                     * @param _originalClusterName Source cluster name
                     * 
                     */
                    void SetOriginalClusterName(const std::string& _originalClusterName);

                    /**
                     * 判断参数 OriginalClusterName 是否已赋值
                     * @return OriginalClusterName 是否已赋值
                     * 
                     */
                    bool OriginalClusterNameHasBeenSet() const;

                    /**
                     * 获取Rollback mode
                     * @return RollbackStrategy Rollback mode
                     * 
                     */
                    std::string GetRollbackStrategy() const;

                    /**
                     * 设置Rollback mode
                     * @param _rollbackStrategy Rollback mode
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
                     * 获取Snapshot time
                     * @return SnapshotTime Snapshot time
                     * 
                     */
                    std::string GetSnapshotTime() const;

                    /**
                     * 设置Snapshot time
                     * @param _snapshotTime Snapshot time
                     * 
                     */
                    void SetSnapshotTime(const std::string& _snapshotTime);

                    /**
                     * 判断参数 SnapshotTime 是否已赋值
                     * @return SnapshotTime 是否已赋值
                     * 
                     */
                    bool SnapshotTimeHasBeenSet() const;

                    /**
                     * 获取Minimum CPU for rollback to a Serverless cluster
                     * @return MinCpu Minimum CPU for rollback to a Serverless cluster
                     * 
                     */
                    int64_t GetMinCpu() const;

                    /**
                     * 设置Minimum CPU for rollback to a Serverless cluster
                     * @param _minCpu Minimum CPU for rollback to a Serverless cluster
                     * 
                     */
                    void SetMinCpu(const int64_t& _minCpu);

                    /**
                     * 判断参数 MinCpu 是否已赋值
                     * @return MinCpu 是否已赋值
                     * 
                     */
                    bool MinCpuHasBeenSet() const;

                    /**
                     * 获取Maximum CPU when rolling back to a Serverless cluster
                     * @return MaxCpu Maximum CPU when rolling back to a Serverless cluster
                     * 
                     */
                    int64_t GetMaxCpu() const;

                    /**
                     * 设置Maximum CPU when rolling back to a Serverless cluster
                     * @param _maxCpu Maximum CPU when rolling back to a Serverless cluster
                     * 
                     */
                    void SetMaxCpu(const int64_t& _maxCpu);

                    /**
                     * 判断参数 MaxCpu 是否已赋值
                     * @return MaxCpu 是否已赋值
                     * 
                     */
                    bool MaxCpuHasBeenSet() const;

                    /**
                     * 获取Snapshot ID
                     * @return SnapShotId Snapshot ID
                     * 
                     */
                    uint64_t GetSnapShotId() const;

                    /**
                     * 设置Snapshot ID
                     * @param _snapShotId Snapshot ID
                     * 
                     */
                    void SetSnapShotId(const uint64_t& _snapShotId);

                    /**
                     * 判断参数 SnapShotId 是否已赋值
                     * @return SnapShotId 是否已赋值
                     * 
                     */
                    bool SnapShotIdHasBeenSet() const;

                    /**
                     * 获取Rollback database
                     * @return RollbackDatabases Rollback database
                     * 
                     */
                    std::vector<RollbackDatabase> GetRollbackDatabases() const;

                    /**
                     * 设置Rollback database
                     * @param _rollbackDatabases Rollback database
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
                     * 获取Rollback data table
                     * @return RollbackTables Rollback data table
                     * 
                     */
                    std::vector<RollbackTable> GetRollbackTables() const;

                    /**
                     * 设置Rollback data table
                     * @param _rollbackTables Rollback data table
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
                     * 获取Backup file name
                     * @return BackupFileName Backup file name
                     * 
                     */
                    std::string GetBackupFileName() const;

                    /**
                     * 设置Backup file name
                     * @param _backupFileName Backup file name
                     * 
                     */
                    void SetBackupFileName(const std::string& _backupFileName);

                    /**
                     * 判断参数 BackupFileName 是否已赋值
                     * @return BackupFileName 是否已赋值
                     * 
                     */
                    bool BackupFileNameHasBeenSet() const;

                    /**
                     * 获取Rollback process
                     * @return RollbackProcess Rollback process
                     * 
                     */
                    RollbackProcessInfo GetRollbackProcess() const;

                    /**
                     * 设置Rollback process
                     * @param _rollbackProcess Rollback process
                     * 
                     */
                    void SetRollbackProcess(const RollbackProcessInfo& _rollbackProcess);

                    /**
                     * 判断参数 RollbackProcess 是否已赋值
                     * @return RollbackProcess 是否已赋值
                     * 
                     */
                    bool RollbackProcessHasBeenSet() const;

                private:

                    /**
                     * Instance CPU
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Instance memory
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Cluster storage limit
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * Source cluster id
                     */
                    std::string m_originalClusterId;
                    bool m_originalClusterIdHasBeenSet;

                    /**
                     * Source cluster name
                     */
                    std::string m_originalClusterName;
                    bool m_originalClusterNameHasBeenSet;

                    /**
                     * Rollback mode
                     */
                    std::string m_rollbackStrategy;
                    bool m_rollbackStrategyHasBeenSet;

                    /**
                     * Snapshot time
                     */
                    std::string m_snapshotTime;
                    bool m_snapshotTimeHasBeenSet;

                    /**
                     * Minimum CPU for rollback to a Serverless cluster
                     */
                    int64_t m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * Maximum CPU when rolling back to a Serverless cluster
                     */
                    int64_t m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * Snapshot ID
                     */
                    uint64_t m_snapShotId;
                    bool m_snapShotIdHasBeenSet;

                    /**
                     * Rollback database
                     */
                    std::vector<RollbackDatabase> m_rollbackDatabases;
                    bool m_rollbackDatabasesHasBeenSet;

                    /**
                     * Rollback data table
                     */
                    std::vector<RollbackTable> m_rollbackTables;
                    bool m_rollbackTablesHasBeenSet;

                    /**
                     * Backup file name
                     */
                    std::string m_backupFileName;
                    bool m_backupFileNameHasBeenSet;

                    /**
                     * Rollback process
                     */
                    RollbackProcessInfo m_rollbackProcess;
                    bool m_rollbackProcessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKDATA_H_
