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
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
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
                     * 获取<p>Secondary AZ</p>
                     * @return SlaveZone <p>Secondary AZ</p>
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置<p>Secondary AZ</p>
                     * @param _slaveZone <p>Secondary AZ</p>
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
                     * 获取<p>binlog synchronization mode. Default value: async. Available values: sync, semisync, async</p>
                     * @return BinlogSyncWay <p>binlog synchronization mode. Default value: async. Available values: sync, semisync, async</p>
                     * 
                     */
                    std::string GetBinlogSyncWay() const;

                    /**
                     * 设置<p>binlog synchronization mode. Default value: async. Available values: sync, semisync, async</p>
                     * @param _binlogSyncWay <p>binlog synchronization mode. Default value: async. Available values: sync, semisync, async</p>
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
                     * 获取<p>Semi-sync timeout period, in milliseconds. To ensure business stability, semi-synchronous replication has a degradation logic. If the primary availability zone cluster exceeds this timeout period while waiting for the standby availability zone cluster to confirm a transaction, the replication method will degrade to asynchronous replication. The minimum is set to 1000 ms, with support up to 4294967295 ms. Default is 10000 ms.</p>
                     * @return SemiSyncTimeout <p>Semi-sync timeout period, in milliseconds. To ensure business stability, semi-synchronous replication has a degradation logic. If the primary availability zone cluster exceeds this timeout period while waiting for the standby availability zone cluster to confirm a transaction, the replication method will degrade to asynchronous replication. The minimum is set to 1000 ms, with support up to 4294967295 ms. Default is 10000 ms.</p>
                     * 
                     */
                    int64_t GetSemiSyncTimeout() const;

                    /**
                     * 设置<p>Semi-sync timeout period, in milliseconds. To ensure business stability, semi-synchronous replication has a degradation logic. If the primary availability zone cluster exceeds this timeout period while waiting for the standby availability zone cluster to confirm a transaction, the replication method will degrade to asynchronous replication. The minimum is set to 1000 ms, with support up to 4294967295 ms. Default is 10000 ms.</p>
                     * @param _semiSyncTimeout <p>Semi-sync timeout period, in milliseconds. To ensure business stability, semi-synchronous replication has a degradation logic. If the primary availability zone cluster exceeds this timeout period while waiting for the standby availability zone cluster to confirm a transaction, the replication method will degrade to asynchronous replication. The minimum is set to 1000 ms, with support up to 4294967295 ms. Default is 10000 ms.</p>
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
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Secondary AZ</p>
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * <p>binlog synchronization mode. Default value: async. Available values: sync, semisync, async</p>
                     */
                    std::string m_binlogSyncWay;
                    bool m_binlogSyncWayHasBeenSet;

                    /**
                     * <p>Semi-sync timeout period, in milliseconds. To ensure business stability, semi-synchronous replication has a degradation logic. If the primary availability zone cluster exceeds this timeout period while waiting for the standby availability zone cluster to confirm a transaction, the replication method will degrade to asynchronous replication. The minimum is set to 1000 ms, with support up to 4294967295 ms. Default is 10000 ms.</p>
                     */
                    int64_t m_semiSyncTimeout;
                    bool m_semiSyncTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDCLUSTERSLAVEZONEREQUEST_H_
