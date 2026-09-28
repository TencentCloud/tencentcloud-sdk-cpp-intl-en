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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERSLAVEZONEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERSLAVEZONEREQUEST_H_

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
                * ModifyClusterSlaveZone request structure.
                */
                class ModifyClusterSlaveZoneRequest : public AbstractModel
                {
                public:
                    ModifyClusterSlaveZoneRequest();
                    ~ModifyClusterSlaveZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Cluster Id.</p>
                     * @return ClusterId <p>Cluster Id.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster Id.</p>
                     * @param _clusterId <p>Cluster Id.</p>
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
                     * 获取<p>Old secondary AZ</p>
                     * @return OldSlaveZone <p>Old secondary AZ</p>
                     * 
                     */
                    std::string GetOldSlaveZone() const;

                    /**
                     * 设置<p>Old secondary AZ</p>
                     * @param _oldSlaveZone <p>Old secondary AZ</p>
                     * 
                     */
                    void SetOldSlaveZone(const std::string& _oldSlaveZone);

                    /**
                     * 判断参数 OldSlaveZone 是否已赋值
                     * @return OldSlaveZone 是否已赋值
                     * 
                     */
                    bool OldSlaveZoneHasBeenSet() const;

                    /**
                     * 获取<p>New secondary AZ</p>
                     * @return NewSlaveZone <p>New secondary AZ</p>
                     * 
                     */
                    std::string GetNewSlaveZone() const;

                    /**
                     * 设置<p>New secondary AZ</p>
                     * @param _newSlaveZone <p>New secondary AZ</p>
                     * 
                     */
                    void SetNewSlaveZone(const std::string& _newSlaveZone);

                    /**
                     * 判断参数 NewSlaveZone 是否已赋值
                     * @return NewSlaveZone 是否已赋值
                     * 
                     */
                    bool NewSlaveZoneHasBeenSet() const;

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
                     * 获取<p>Semi-sync timeout period, in milliseconds. To ensure business stability, semi-sync replication has a degradation logic. If the primary AZ cluster exceeds this timeout period while waiting for the standby AZ cluster to confirm a transaction, the replication method degrades to asynchronous replication. The minimum is set to 1000 ms, with support up to 4294967295 ms. Default: 10000 ms.</p>
                     * @return SemiSyncTimeout <p>Semi-sync timeout period, in milliseconds. To ensure business stability, semi-sync replication has a degradation logic. If the primary AZ cluster exceeds this timeout period while waiting for the standby AZ cluster to confirm a transaction, the replication method degrades to asynchronous replication. The minimum is set to 1000 ms, with support up to 4294967295 ms. Default: 10000 ms.</p>
                     * 
                     */
                    int64_t GetSemiSyncTimeout() const;

                    /**
                     * 设置<p>Semi-sync timeout period, in milliseconds. To ensure business stability, semi-sync replication has a degradation logic. If the primary AZ cluster exceeds this timeout period while waiting for the standby AZ cluster to confirm a transaction, the replication method degrades to asynchronous replication. The minimum is set to 1000 ms, with support up to 4294967295 ms. Default: 10000 ms.</p>
                     * @param _semiSyncTimeout <p>Semi-sync timeout period, in milliseconds. To ensure business stability, semi-sync replication has a degradation logic. If the primary AZ cluster exceeds this timeout period while waiting for the standby AZ cluster to confirm a transaction, the replication method degrades to asynchronous replication. The minimum is set to 1000 ms, with support up to 4294967295 ms. Default: 10000 ms.</p>
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
                     * <p>Cluster Id.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Old secondary AZ</p>
                     */
                    std::string m_oldSlaveZone;
                    bool m_oldSlaveZoneHasBeenSet;

                    /**
                     * <p>New secondary AZ</p>
                     */
                    std::string m_newSlaveZone;
                    bool m_newSlaveZoneHasBeenSet;

                    /**
                     * <p>binlog synchronization mode. Default value: async. Available values: sync, semisync, async</p>
                     */
                    std::string m_binlogSyncWay;
                    bool m_binlogSyncWayHasBeenSet;

                    /**
                     * <p>Semi-sync timeout period, in milliseconds. To ensure business stability, semi-sync replication has a degradation logic. If the primary AZ cluster exceeds this timeout period while waiting for the standby AZ cluster to confirm a transaction, the replication method degrades to asynchronous replication. The minimum is set to 1000 ms, with support up to 4294967295 ms. Default: 10000 ms.</p>
                     */
                    int64_t m_semiSyncTimeout;
                    bool m_semiSyncTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERSLAVEZONEREQUEST_H_
