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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_RESTARTNODESREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_RESTARTNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/EnableScheduleOperationDuration.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * RestartNodes request structure.
                */
                class RestartNodesRequest : public AbstractModel
                {
                public:
                    RestartNodesRequest();
                    ~RestartNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster instance ID.
                     * @return InstanceId Cluster instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster instance ID.
                     * @param _instanceId Cluster instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Node name list
                     * @return NodeNames Node name list
                     * 
                     */
                    std::vector<std::string> GetNodeNames() const;

                    /**
                     * 设置Node name list
                     * @param _nodeNames Node name list
                     * 
                     */
                    void SetNodeNames(const std::vector<std::string>& _nodeNames);

                    /**
                     * 判断参数 NodeNames 是否已赋值
                     * @return NodeNames 是否已赋值
                     * 
                     */
                    bool NodeNamesHasBeenSet() const;

                    /**
                     * 获取Whether to perform forced reboot.
                     * @return ForceRestart Whether to perform forced reboot.
                     * 
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置Whether to perform forced reboot.
                     * @param _forceRestart Whether to perform forced reboot.
                     * 
                     */
                    void SetForceRestart(const bool& _forceRestart);

                    /**
                     * 判断参数 ForceRestart 是否已赋值
                     * @return ForceRestart 是否已赋值
                     * 
                     */
                    bool ForceRestartHasBeenSet() const;

                    /**
                     * 获取Optional restart mode. `in-place`: restart; `blue-green`: blue-green restart. Default value: `in-place`.
                     * @return RestartMode Optional restart mode. `in-place`: restart; `blue-green`: blue-green restart. Default value: `in-place`.
                     * 
                     */
                    std::string GetRestartMode() const;

                    /**
                     * 设置Optional restart mode. `in-place`: restart; `blue-green`: blue-green restart. Default value: `in-place`.
                     * @param _restartMode Optional restart mode. `in-place`: restart; `blue-green`: blue-green restart. Default value: `in-place`.
                     * 
                     */
                    void SetRestartMode(const std::string& _restartMode);

                    /**
                     * 判断参数 RestartMode 是否已赋值
                     * @return RestartMode 是否已赋值
                     * 
                     */
                    bool RestartModeHasBeenSet() const;

                    /**
                     * 获取Node status, for use in blue-green mode; offline node blue/green at risk
                     * @return IsOffline Node status, for use in blue-green mode; offline node blue/green at risk
                     * 
                     */
                    bool GetIsOffline() const;

                    /**
                     * 设置Node status, for use in blue-green mode; offline node blue/green at risk
                     * @param _isOffline Node status, for use in blue-green mode; offline node blue/green at risk
                     * 
                     */
                    void SetIsOffline(const bool& _isOffline);

                    /**
                     * 判断参数 IsOffline 是否已赋值
                     * @return IsOffline 是否已赋值
                     * 
                     */
                    bool IsOfflineHasBeenSet() const;

                    /**
                     * 获取cvm delay listing time
                     * @return CvmDelayOnlineTime cvm delay listing time
                     * 
                     */
                    uint64_t GetCvmDelayOnlineTime() const;

                    /**
                     * 设置cvm delay listing time
                     * @param _cvmDelayOnlineTime cvm delay listing time
                     * 
                     */
                    void SetCvmDelayOnlineTime(const uint64_t& _cvmDelayOnlineTime);

                    /**
                     * 判断参数 CvmDelayOnlineTime 是否已赋值
                     * @return CvmDelayOnlineTime 是否已赋值
                     * 
                     */
                    bool CvmDelayOnlineTimeHasBeenSet() const;

                    /**
                     * 获取Number of concurrent shard migrations
                     * @return ShardAllocationConcurrents Number of concurrent shard migrations
                     * 
                     */
                    uint64_t GetShardAllocationConcurrents() const;

                    /**
                     * 设置Number of concurrent shard migrations
                     * @param _shardAllocationConcurrents Number of concurrent shard migrations
                     * 
                     */
                    void SetShardAllocationConcurrents(const uint64_t& _shardAllocationConcurrents);

                    /**
                     * 判断参数 ShardAllocationConcurrents 是否已赋值
                     * @return ShardAllocationConcurrents 是否已赋值
                     * 
                     */
                    bool ShardAllocationConcurrentsHasBeenSet() const;

                    /**
                     * 获取Shard migration concurrency speed
                     * @return ShardAllocationBytes Shard migration concurrency speed
                     * 
                     */
                    uint64_t GetShardAllocationBytes() const;

                    /**
                     * 设置Shard migration concurrency speed
                     * @param _shardAllocationBytes Shard migration concurrency speed
                     * 
                     */
                    void SetShardAllocationBytes(const uint64_t& _shardAllocationBytes);

                    /**
                     * 判断参数 ShardAllocationBytes 是否已赋值
                     * @return ShardAllocationBytes 是否已赋值
                     * 
                     */
                    bool ShardAllocationBytesHasBeenSet() const;

                    /**
                     * 获取Whether to enable the placement group asynchronous task
                     * @return EnableScheduleRecoverGroup Whether to enable the placement group asynchronous task
                     * 
                     */
                    bool GetEnableScheduleRecoverGroup() const;

                    /**
                     * 设置Whether to enable the placement group asynchronous task
                     * @param _enableScheduleRecoverGroup Whether to enable the placement group asynchronous task
                     * 
                     */
                    void SetEnableScheduleRecoverGroup(const bool& _enableScheduleRecoverGroup);

                    /**
                     * 判断参数 EnableScheduleRecoverGroup 是否已赋值
                     * @return EnableScheduleRecoverGroup 是否已赋值
                     * 
                     */
                    bool EnableScheduleRecoverGroupHasBeenSet() const;

                    /**
                     * 获取Time period of the async task for the placement group
                     * @return EnableScheduleOperationDuration Time period of the async task for the placement group
                     * 
                     */
                    EnableScheduleOperationDuration GetEnableScheduleOperationDuration() const;

                    /**
                     * 设置Time period of the async task for the placement group
                     * @param _enableScheduleOperationDuration Time period of the async task for the placement group
                     * 
                     */
                    void SetEnableScheduleOperationDuration(const EnableScheduleOperationDuration& _enableScheduleOperationDuration);

                    /**
                     * 判断参数 EnableScheduleOperationDuration 是否已赋值
                     * @return EnableScheduleOperationDuration 是否已赋值
                     * 
                     */
                    bool EnableScheduleOperationDurationHasBeenSet() const;

                    /**
                     * 获取Event ID list.
                     * @return EventTypeIds Event ID list.
                     * 
                     */
                    std::vector<std::string> GetEventTypeIds() const;

                    /**
                     * 设置Event ID list.
                     * @param _eventTypeIds Event ID list.
                     * 
                     */
                    void SetEventTypeIds(const std::vector<std::string>& _eventTypeIds);

                    /**
                     * 判断参数 EventTypeIds 是否已赋值
                     * @return EventTypeIds 是否已赋值
                     * 
                     */
                    bool EventTypeIdsHasBeenSet() const;

                private:

                    /**
                     * Cluster instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Node name list
                     */
                    std::vector<std::string> m_nodeNames;
                    bool m_nodeNamesHasBeenSet;

                    /**
                     * Whether to perform forced reboot.
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                    /**
                     * Optional restart mode. `in-place`: restart; `blue-green`: blue-green restart. Default value: `in-place`.
                     */
                    std::string m_restartMode;
                    bool m_restartModeHasBeenSet;

                    /**
                     * Node status, for use in blue-green mode; offline node blue/green at risk
                     */
                    bool m_isOffline;
                    bool m_isOfflineHasBeenSet;

                    /**
                     * cvm delay listing time
                     */
                    uint64_t m_cvmDelayOnlineTime;
                    bool m_cvmDelayOnlineTimeHasBeenSet;

                    /**
                     * Number of concurrent shard migrations
                     */
                    uint64_t m_shardAllocationConcurrents;
                    bool m_shardAllocationConcurrentsHasBeenSet;

                    /**
                     * Shard migration concurrency speed
                     */
                    uint64_t m_shardAllocationBytes;
                    bool m_shardAllocationBytesHasBeenSet;

                    /**
                     * Whether to enable the placement group asynchronous task
                     */
                    bool m_enableScheduleRecoverGroup;
                    bool m_enableScheduleRecoverGroupHasBeenSet;

                    /**
                     * Time period of the async task for the placement group
                     */
                    EnableScheduleOperationDuration m_enableScheduleOperationDuration;
                    bool m_enableScheduleOperationDurationHasBeenSet;

                    /**
                     * Event ID list.
                     */
                    std::vector<std::string> m_eventTypeIds;
                    bool m_eventTypeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_RESTARTNODESREQUEST_H_
