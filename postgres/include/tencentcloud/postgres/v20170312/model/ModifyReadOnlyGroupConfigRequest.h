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
                     * 获取Read-Only group ID.
                     * @return ReadOnlyGroupId Read-Only group ID.
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置Read-Only group ID.
                     * @param _readOnlyGroupId Read-Only group ID.
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取Read-Only group name. only supports chinese, english, digits, "_", or "-" with length less than 60.
                     * @return ReadOnlyGroupName Read-Only group name. only supports chinese, english, digits, "_", or "-" with length less than 60.
                     * 
                     */
                    std::string GetReadOnlyGroupName() const;

                    /**
                     * 设置Read-Only group name. only supports chinese, english, digits, "_", or "-" with length less than 60.
                     * @param _readOnlyGroupName Read-Only group name. only supports chinese, english, digits, "_", or "-" with length less than 60.
                     * 
                     */
                    void SetReadOnlyGroupName(const std::string& _readOnlyGroupName);

                    /**
                     * 判断参数 ReadOnlyGroupName 是否已赋值
                     * @return ReadOnlyGroupName 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupNameHasBeenSet() const;

                    /**
                     * 获取Whether to remove a read-only replica from an RO group if the delay between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * @return ReplayLagEliminate Whether to remove a read-only replica from an RO group if the delay between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * 
                     */
                    uint64_t GetReplayLagEliminate() const;

                    /**
                     * 设置Whether to remove a read-only replica from an RO group if the delay between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * @param _replayLagEliminate Whether to remove a read-only replica from an RO group if the delay between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * 
                     */
                    void SetReplayLagEliminate(const uint64_t& _replayLagEliminate);

                    /**
                     * 判断参数 ReplayLagEliminate 是否已赋值
                     * @return ReplayLagEliminate 是否已赋值
                     * 
                     */
                    bool ReplayLagEliminateHasBeenSet() const;

                    /**
                     * 获取Whether to remove a read-only replica from an RO group if the sync log size difference between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * @return ReplayLatencyEliminate Whether to remove a read-only replica from an RO group if the sync log size difference between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * 
                     */
                    uint64_t GetReplayLatencyEliminate() const;

                    /**
                     * 设置Whether to remove a read-only replica from an RO group if the sync log size difference between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * @param _replayLatencyEliminate Whether to remove a read-only replica from an RO group if the sync log size difference between the read-only replica and the primary instance exceeds the threshold. Valid values: `0` (no), `1` (yes).
                     * 
                     */
                    void SetReplayLatencyEliminate(const uint64_t& _replayLatencyEliminate);

                    /**
                     * 判断参数 ReplayLatencyEliminate 是否已赋值
                     * @return ReplayLatencyEliminate 是否已赋值
                     * 
                     */
                    bool ReplayLatencyEliminateHasBeenSet() const;

                    /**
                     * 获取Delay log size threshold in MB. specifies a positive integer when enabling the delay log size configuration.
                     * @return MaxReplayLatency Delay log size threshold in MB. specifies a positive integer when enabling the delay log size configuration.
                     * 
                     */
                    uint64_t GetMaxReplayLatency() const;

                    /**
                     * 设置Delay log size threshold in MB. specifies a positive integer when enabling the delay log size configuration.
                     * @param _maxReplayLatency Delay log size threshold in MB. specifies a positive integer when enabling the delay log size configuration.
                     * 
                     */
                    void SetMaxReplayLatency(const uint64_t& _maxReplayLatency);

                    /**
                     * 判断参数 MaxReplayLatency 是否已赋值
                     * @return MaxReplayLatency 是否已赋值
                     * 
                     */
                    bool MaxReplayLatencyHasBeenSet() const;

                    /**
                     * 获取Delay time size threshold, unit: s. when enabling the delay time configuration, manually input a positive integer.
                     * @return MaxReplayLag Delay time size threshold, unit: s. when enabling the delay time configuration, manually input a positive integer.
                     * 
                     */
                    uint64_t GetMaxReplayLag() const;

                    /**
                     * 设置Delay time size threshold, unit: s. when enabling the delay time configuration, manually input a positive integer.
                     * @param _maxReplayLag Delay time size threshold, unit: s. when enabling the delay time configuration, manually input a positive integer.
                     * 
                     */
                    void SetMaxReplayLag(const uint64_t& _maxReplayLag);

                    /**
                     * 判断参数 MaxReplayLag 是否已赋值
                     * @return MaxReplayLag 是否已赋值
                     * 
                     */
                    bool MaxReplayLagHasBeenSet() const;

                    /**
                     * 获取Whether to enable automatic load balancing. Valid values: `0` (disable), `1` (enable).
                     * @return Rebalance Whether to enable automatic load balancing. Valid values: `0` (disable), `1` (enable).
                     * 
                     */
                    uint64_t GetRebalance() const;

                    /**
                     * 设置Whether to enable automatic load balancing. Valid values: `0` (disable), `1` (enable).
                     * @param _rebalance Whether to enable automatic load balancing. Valid values: `0` (disable), `1` (enable).
                     * 
                     */
                    void SetRebalance(const uint64_t& _rebalance);

                    /**
                     * 判断参数 Rebalance 是否已赋值
                     * @return Rebalance 是否已赋值
                     * 
                     */
                    bool RebalanceHasBeenSet() const;

                    /**
                     * 获取Specifies the minimum number of instances to retain with delay removal. value range [0,100].
                     * @return MinDelayEliminateReserve Specifies the minimum number of instances to retain with delay removal. value range [0,100].
                     * 
                     */
                    uint64_t GetMinDelayEliminateReserve() const;

                    /**
                     * 设置Specifies the minimum number of instances to retain with delay removal. value range [0,100].
                     * @param _minDelayEliminateReserve Specifies the minimum number of instances to retain with delay removal. value range [0,100].
                     * 
                     */
                    void SetMinDelayEliminateReserve(const uint64_t& _minDelayEliminateReserve);

                    /**
                     * 判断参数 MinDelayEliminateReserve 是否已赋值
                     * @return MinDelayEliminateReserve 是否已赋值
                     * 
                     */
                    bool MinDelayEliminateReserveHasBeenSet() const;

                private:

                    /**
                     * Read-Only group ID.
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * Read-Only group name. only supports chinese, english, digits, "_", or "-" with length less than 60.
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
                     * Delay log size threshold in MB. specifies a positive integer when enabling the delay log size configuration.
                     */
                    uint64_t m_maxReplayLatency;
                    bool m_maxReplayLatencyHasBeenSet;

                    /**
                     * Delay time size threshold, unit: s. when enabling the delay time configuration, manually input a positive integer.
                     */
                    uint64_t m_maxReplayLag;
                    bool m_maxReplayLagHasBeenSet;

                    /**
                     * Whether to enable automatic load balancing. Valid values: `0` (disable), `1` (enable).
                     */
                    uint64_t m_rebalance;
                    bool m_rebalanceHasBeenSet;

                    /**
                     * Specifies the minimum number of instances to retain with delay removal. value range [0,100].
                     */
                    uint64_t m_minDelayEliminateReserve;
                    bool m_minDelayEliminateReserveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYREADONLYGROUPCONFIGREQUEST_H_
