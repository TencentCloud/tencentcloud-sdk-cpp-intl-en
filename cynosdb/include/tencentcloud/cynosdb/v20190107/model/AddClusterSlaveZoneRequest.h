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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDCLUSTERSLAVEZONEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDCLUSTERSLAVEZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * AddClusterSlaveZone request structure.
                */
                class AddClusterSlaveZoneRequest : public AbstractModel
                {
                public:
                    AddClusterSlaveZoneRequest();
                    ~AddClusterSlaveZoneRequest() = default;
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
                     * 获取Replica AZ.
                     * @return SlaveZone Replica AZ.
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置Replica AZ.
                     * @param _slaveZone Replica AZ.
                     * 
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取Binlog sync mode. Default value: async. Optional values: sync, semisync, async.
                     * @return BinlogSyncWay Binlog sync mode. Default value: async. Optional values: sync, semisync, async.
                     * 
                     */
                    std::string GetBinlogSyncWay() const;

                    /**
                     * 设置Binlog sync mode. Default value: async. Optional values: sync, semisync, async.
                     * @param _binlogSyncWay Binlog sync mode. Default value: async. Optional values: sync, semisync, async.
                     * 
                     */
                    void SetBinlogSyncWay(const std::string& _binlogSyncWay);

                    /**
                     * 判断参数 BinlogSyncWay 是否已赋值
                     * @return BinlogSyncWay 是否已赋值
                     * 
                     */
                    bool BinlogSyncWayHasBeenSet() const;

                    /**
                     * 获取Semi-sync timeout period in milliseconds. To ensure business stability, semi-sync replication has a degradation logic. When the primary availability zone cluster waits for the secondary availability zone cluster to confirm a transaction and exceeds the timeout period, the replication method will degrade to asynchronous replication. The minimum value is set to 1000 ms, support up to 4294967295 ms, and defaults to 10000 ms.
                     * @return SemiSyncTimeout Semi-sync timeout period in milliseconds. To ensure business stability, semi-sync replication has a degradation logic. When the primary availability zone cluster waits for the secondary availability zone cluster to confirm a transaction and exceeds the timeout period, the replication method will degrade to asynchronous replication. The minimum value is set to 1000 ms, support up to 4294967295 ms, and defaults to 10000 ms.
                     * 
                     */
                    int64_t GetSemiSyncTimeout() const;

                    /**
                     * 设置Semi-sync timeout period in milliseconds. To ensure business stability, semi-sync replication has a degradation logic. When the primary availability zone cluster waits for the secondary availability zone cluster to confirm a transaction and exceeds the timeout period, the replication method will degrade to asynchronous replication. The minimum value is set to 1000 ms, support up to 4294967295 ms, and defaults to 10000 ms.
                     * @param _semiSyncTimeout Semi-sync timeout period in milliseconds. To ensure business stability, semi-sync replication has a degradation logic. When the primary availability zone cluster waits for the secondary availability zone cluster to confirm a transaction and exceeds the timeout period, the replication method will degrade to asynchronous replication. The minimum value is set to 1000 ms, support up to 4294967295 ms, and defaults to 10000 ms.
                     * 
                     */
                    void SetSemiSyncTimeout(const int64_t& _semiSyncTimeout);

                    /**
                     * 判断参数 SemiSyncTimeout 是否已赋值
                     * @return SemiSyncTimeout 是否已赋值
                     * 
                     */
                    bool SemiSyncTimeoutHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Replica AZ.
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * Binlog sync mode. Default value: async. Optional values: sync, semisync, async.
                     */
                    std::string m_binlogSyncWay;
                    bool m_binlogSyncWayHasBeenSet;

                    /**
                     * Semi-sync timeout period in milliseconds. To ensure business stability, semi-sync replication has a degradation logic. When the primary availability zone cluster waits for the secondary availability zone cluster to confirm a transaction and exceeds the timeout period, the replication method will degrade to asynchronous replication. The minimum value is set to 1000 ms, support up to 4294967295 ms, and defaults to 10000 ms.
                     */
                    int64_t m_semiSyncTimeout;
                    bool m_semiSyncTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDCLUSTERSLAVEZONEREQUEST_H_
