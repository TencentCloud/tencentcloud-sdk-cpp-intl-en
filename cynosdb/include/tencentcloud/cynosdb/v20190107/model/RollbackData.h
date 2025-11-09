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
                * 
                */
                class RollbackData : public AbstractModel
                {
                public:
                    RollbackData();
                    ~RollbackData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Cpu 
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置
                     * @param _cpu 
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
                     * 获取
                     * @return Memory 
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置
                     * @param _memory 
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
                     * 获取
                     * @return StorageLimit 
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置
                     * @param _storageLimit 
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
                     * 获取
                     * @return OriginalClusterId 
                     * 
                     */
                    std::string GetOriginalClusterId() const;

                    /**
                     * 设置
                     * @param _originalClusterId 
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
                     * 获取
                     * @return OriginalClusterName 
                     * 
                     */
                    std::string GetOriginalClusterName() const;

                    /**
                     * 设置
                     * @param _originalClusterName 
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
                     * 获取
                     * @return RollbackStrategy 
                     * 
                     */
                    std::string GetRollbackStrategy() const;

                    /**
                     * 设置
                     * @param _rollbackStrategy 
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
                     * 获取
                     * @return SnapshotTime 
                     * 
                     */
                    std::string GetSnapshotTime() const;

                    /**
                     * 设置
                     * @param _snapshotTime 
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
                     * 获取Minimum CPU when rolling back to a serverlessls cluster.
                     * @return MinCpu Minimum CPU when rolling back to a serverlessls cluster.
                     * 
                     */
                    int64_t GetMinCpu() const;

                    /**
                     * 设置Minimum CPU when rolling back to a serverlessls cluster.
                     * @param _minCpu Minimum CPU when rolling back to a serverlessls cluster.
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
                     * 获取Maximum CPU when rolling back to a serverlessls cluster.
                     * @return MaxCpu Maximum CPU when rolling back to a serverlessls cluster.
                     * 
                     */
                    int64_t GetMaxCpu() const;

                    /**
                     * 设置Maximum CPU when rolling back to a serverlessls cluster.
                     * @param _maxCpu Maximum CPU when rolling back to a serverlessls cluster.
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
                     * 获取Snapshot ID.
                     * @return SnapShotId Snapshot ID.
                     * 
                     */
                    uint64_t GetSnapShotId() const;

                    /**
                     * 设置Snapshot ID.
                     * @param _snapShotId Snapshot ID.
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
                     * 获取
                     * @return RollbackDatabases 
                     * 
                     */
                    std::vector<RollbackDatabase> GetRollbackDatabases() const;

                    /**
                     * 设置
                     * @param _rollbackDatabases 
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
                     * 获取
                     * @return RollbackTables 
                     * 
                     */
                    std::vector<RollbackTable> GetRollbackTables() const;

                    /**
                     * 设置
                     * @param _rollbackTables 
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
                     * 获取Specifies the backup file name.
                     * @return BackupFileName Specifies the backup file name.
                     * 
                     */
                    std::string GetBackupFileName() const;

                    /**
                     * 设置Specifies the backup file name.
                     * @param _backupFileName Specifies the backup file name.
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
                     * 获取Rollback process.
                     * @return RollbackProcess Rollback process.
                     * 
                     */
                    RollbackProcessInfo GetRollbackProcess() const;

                    /**
                     * 设置Rollback process.
                     * @param _rollbackProcess Rollback process.
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
                     * 
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_originalClusterId;
                    bool m_originalClusterIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_originalClusterName;
                    bool m_originalClusterNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_rollbackStrategy;
                    bool m_rollbackStrategyHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_snapshotTime;
                    bool m_snapshotTimeHasBeenSet;

                    /**
                     * Minimum CPU when rolling back to a serverlessls cluster.
                     */
                    int64_t m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * Maximum CPU when rolling back to a serverlessls cluster.
                     */
                    int64_t m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * Snapshot ID.
                     */
                    uint64_t m_snapShotId;
                    bool m_snapShotIdHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<RollbackDatabase> m_rollbackDatabases;
                    bool m_rollbackDatabasesHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<RollbackTable> m_rollbackTables;
                    bool m_rollbackTablesHasBeenSet;

                    /**
                     * Specifies the backup file name.
                     */
                    std::string m_backupFileName;
                    bool m_backupFileNameHasBeenSet;

                    /**
                     * Rollback process.
                     */
                    RollbackProcessInfo m_rollbackProcess;
                    bool m_rollbackProcessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKDATA_H_
