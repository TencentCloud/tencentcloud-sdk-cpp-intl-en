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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYREADONLYGROUPCONFIGREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYREADONLYGROUPCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyReadOnlyGroupConfig request structure.
                */
                class ModifyReadOnlyGroupConfigRequest : public AbstractModel
                {
                public:
                    ModifyReadOnlyGroupConfigRequest();
                    ~ModifyReadOnlyGroupConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取RO group ID
                     * @return ReadOnlyGroupId RO group ID
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置RO group ID
                     * @param ReadOnlyGroupId RO group ID
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取RO group name
                     * @return ReadOnlyGroupName RO group name
                     */
                    std::string GetReadOnlyGroupName() const;

                    /**
                     * 设置RO group name
                     * @param ReadOnlyGroupName RO group name
                     */
                    void SetReadOnlyGroupName(const std::string& _readOnlyGroupName);

                    /**
                     * 判断参数 ReadOnlyGroupName 是否已赋值
                     * @return ReadOnlyGroupName 是否已赋值
                     */
                    bool ReadOnlyGroupNameHasBeenSet() const;

                    /**
                     * 获取Whether to remove a read-only replica from an RO group if the delay between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * @return ReplayLagEliminate Whether to remove a read-only replica from an RO group if the delay between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     */
                    uint64_t GetReplayLagEliminate() const;

                    /**
                     * 设置Whether to remove a read-only replica from an RO group if the delay between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * @param ReplayLagEliminate Whether to remove a read-only replica from an RO group if the delay between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     */
                    void SetReplayLagEliminate(const uint64_t& _replayLagEliminate);

                    /**
                     * 判断参数 ReplayLagEliminate 是否已赋值
                     * @return ReplayLagEliminate 是否已赋值
                     */
                    bool ReplayLagEliminateHasBeenSet() const;

                    /**
                     * 获取Whether to remove a read-only replica from an RO group if the sync log size difference between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * @return ReplayLatencyEliminate Whether to remove a read-only replica from an RO group if the sync log size difference between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     */
                    uint64_t GetReplayLatencyEliminate() const;

                    /**
                     * 设置Whether to remove a read-only replica from an RO group if the sync log size difference between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * @param ReplayLatencyEliminate Whether to remove a read-only replica from an RO group if the sync log size difference between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     */
                    void SetReplayLatencyEliminate(const uint64_t& _replayLatencyEliminate);

                    /**
                     * 判断参数 ReplayLatencyEliminate 是否已赋值
                     * @return ReplayLatencyEliminate 是否已赋值
                     */
                    bool ReplayLatencyEliminateHasBeenSet() const;

                    /**
                     * 获取Delayed log size threshold in MB
                     * @return MaxReplayLatency Delayed log size threshold in MB
                     */
                    uint64_t GetMaxReplayLatency() const;

                    /**
                     * 设置Delayed log size threshold in MB
                     * @param MaxReplayLatency Delayed log size threshold in MB
                     */
                    void SetMaxReplayLatency(const uint64_t& _maxReplayLatency);

                    /**
                     * 判断参数 MaxReplayLatency 是否已赋值
                     * @return MaxReplayLatency 是否已赋值
                     */
                    bool MaxReplayLatencyHasBeenSet() const;

                    /**
                     * 获取Delay threshold in ms
                     * @return MaxReplayLag Delay threshold in ms
                     */
                    uint64_t GetMaxReplayLag() const;

                    /**
                     * 设置Delay threshold in ms
                     * @param MaxReplayLag Delay threshold in ms
                     */
                    void SetMaxReplayLag(const uint64_t& _maxReplayLag);

                    /**
                     * 判断参数 MaxReplayLag 是否已赋值
                     * @return MaxReplayLag 是否已赋值
                     */
                    bool MaxReplayLagHasBeenSet() const;

                    /**
                     * 获取Whether to enable automatic load balancing. Valid values: `0` (disable), `1` (enable).
                     * @return Rebalance Whether to enable automatic load balancing. Valid values: `0` (disable), `1` (enable).
                     */
                    uint64_t GetRebalance() const;

                    /**
                     * 设置Whether to enable automatic load balancing. Valid values: `0` (disable), `1` (enable).
                     * @param Rebalance Whether to enable automatic load balancing. Valid values: `0` (disable), `1` (enable).
                     */
                    void SetRebalance(const uint64_t& _rebalance);

                    /**
                     * 判断参数 Rebalance 是否已赋值
                     * @return Rebalance 是否已赋值
                     */
                    bool RebalanceHasBeenSet() const;

                    /**
                     * 获取The minimum number of read-only replicas that must be retained in an RO group
                     * @return MinDelayEliminateReserve The minimum number of read-only replicas that must be retained in an RO group
                     */
                    uint64_t GetMinDelayEliminateReserve() const;

                    /**
                     * 设置The minimum number of read-only replicas that must be retained in an RO group
                     * @param MinDelayEliminateReserve The minimum number of read-only replicas that must be retained in an RO group
                     */
                    void SetMinDelayEliminateReserve(const uint64_t& _minDelayEliminateReserve);

                    /**
                     * 判断参数 MinDelayEliminateReserve 是否已赋值
                     * @return MinDelayEliminateReserve 是否已赋值
                     */
                    bool MinDelayEliminateReserveHasBeenSet() const;

                private:

                    /**
                     * RO group ID
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * RO group name
                     */
                    std::string m_readOnlyGroupName;
                    bool m_readOnlyGroupNameHasBeenSet;

                    /**
                     * Whether to remove a read-only replica from an RO group if the delay between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     */
                    uint64_t m_replayLagEliminate;
                    bool m_replayLagEliminateHasBeenSet;

                    /**
                     * Whether to remove a read-only replica from an RO group if the sync log size difference between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     */
                    uint64_t m_replayLatencyEliminate;
                    bool m_replayLatencyEliminateHasBeenSet;

                    /**
                     * Delayed log size threshold in MB
                     */
                    uint64_t m_maxReplayLatency;
                    bool m_maxReplayLatencyHasBeenSet;

                    /**
                     * Delay threshold in ms
                     */
                    uint64_t m_maxReplayLag;
                    bool m_maxReplayLagHasBeenSet;

                    /**
                     * Whether to enable automatic load balancing. Valid values: `0` (disable), `1` (enable).
                     */
                    uint64_t m_rebalance;
                    bool m_rebalanceHasBeenSet;

                    /**
                     * The minimum number of read-only replicas that must be retained in an RO group
                     */
                    uint64_t m_minDelayEliminateReserve;
                    bool m_minDelayEliminateReserveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYREADONLYGROUPCONFIGREQUEST_H_
