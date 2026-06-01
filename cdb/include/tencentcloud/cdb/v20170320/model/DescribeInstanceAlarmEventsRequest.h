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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEALARMEVENTSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEALARMEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeInstanceAlarmEvents request structure.
                */
                class DescribeInstanceAlarmEventsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceAlarmEventsRequest();
                    ~DescribeInstanceAlarmEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @return InstanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @param _instanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
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
                     * 获取Event query range start time, closed interval.
                     * @return StartTime Event query range start time, closed interval.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Event query range start time, closed interval.
                     * @param _startTime Event query range start time, closed interval.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the event query range, closed interval.
                     * @return EndTime End time of the event query range, closed interval.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the event query range, closed interval.
                     * @param _endTime End time of the event query range, closed interval.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Event name. Outofmemory - Memory OOM (status event); Switch - primary-secondary switch (status event); Roremove - read-only instance removal (status event); MemoryUsedHigh - high memory utilization (status event); CPUExpansion - CPU performance scale-out (stateless event); CPUExpansionFailed - CPU performance scale-out failed (stateless event); CPUContraction - CPU performance scale-in (stateless event); Restart - instance restart (status event); ServerFailureNodeMigration - ServerFailureNodeMigration (status event); PlannedSwitch - planned active/standby switch (stateless event); OverusedReadonlySet - instance will be locked (stateless event); OverusedReadWriteSet - instance unlock (stateless event).
                     * @return EventName Event name. Outofmemory - Memory OOM (status event); Switch - primary-secondary switch (status event); Roremove - read-only instance removal (status event); MemoryUsedHigh - high memory utilization (status event); CPUExpansion - CPU performance scale-out (stateless event); CPUExpansionFailed - CPU performance scale-out failed (stateless event); CPUContraction - CPU performance scale-in (stateless event); Restart - instance restart (status event); ServerFailureNodeMigration - ServerFailureNodeMigration (status event); PlannedSwitch - planned active/standby switch (stateless event); OverusedReadonlySet - instance will be locked (stateless event); OverusedReadWriteSet - instance unlock (stateless event).
                     * 
                     */
                    std::vector<std::string> GetEventName() const;

                    /**
                     * 设置Event name. Outofmemory - Memory OOM (status event); Switch - primary-secondary switch (status event); Roremove - read-only instance removal (status event); MemoryUsedHigh - high memory utilization (status event); CPUExpansion - CPU performance scale-out (stateless event); CPUExpansionFailed - CPU performance scale-out failed (stateless event); CPUContraction - CPU performance scale-in (stateless event); Restart - instance restart (status event); ServerFailureNodeMigration - ServerFailureNodeMigration (status event); PlannedSwitch - planned active/standby switch (stateless event); OverusedReadonlySet - instance will be locked (stateless event); OverusedReadWriteSet - instance unlock (stateless event).
                     * @param _eventName Event name. Outofmemory - Memory OOM (status event); Switch - primary-secondary switch (status event); Roremove - read-only instance removal (status event); MemoryUsedHigh - high memory utilization (status event); CPUExpansion - CPU performance scale-out (stateless event); CPUExpansionFailed - CPU performance scale-out failed (stateless event); CPUContraction - CPU performance scale-in (stateless event); Restart - instance restart (status event); ServerFailureNodeMigration - ServerFailureNodeMigration (status event); PlannedSwitch - planned active/standby switch (stateless event); OverusedReadonlySet - instance will be locked (stateless event); OverusedReadWriteSet - instance unlock (stateless event).
                     * 
                     */
                    void SetEventName(const std::vector<std::string>& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取Event status. "1" - Event; "0" - Recovery event; "-" - Stateless event.
                     * @return EventStatus Event status. "1" - Event; "0" - Recovery event; "-" - Stateless event.
                     * 
                     */
                    std::string GetEventStatus() const;

                    /**
                     * 设置Event status. "1" - Event; "0" - Recovery event; "-" - Stateless event.
                     * @param _eventStatus Event status. "1" - Event; "0" - Recovery event; "-" - Stateless event.
                     * 
                     */
                    void SetEventStatus(const std::string& _eventStatus);

                    /**
                     * 判断参数 EventStatus 是否已赋值
                     * @return EventStatus 是否已赋值
                     * 
                     */
                    bool EventStatusHasBeenSet() const;

                    /**
                     * 获取Sorting method. Sort by event occurrence. "DESC" - inverted; "ASC" - in order. Default is inverted.
                     * @return Order Sorting method. Sort by event occurrence. "DESC" - inverted; "ASC" - in order. Default is inverted.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method. Sort by event occurrence. "DESC" - inverted; "ASC" - in order. Default is inverted.
                     * @param _order Sorting method. Sort by event occurrence. "DESC" - inverted; "ASC" - in order. Default is inverted.
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Number of displayed events. Default is 100, maximum is 200.
                     * @return Limit Number of displayed events. Default is 100, maximum is 200.
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置Number of displayed events. Default is 100, maximum is 200.
                     * @param _limit Number of displayed events. Default is 100, maximum is 200.
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Node ID.
                     * @return NodeId Node ID.
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Node ID.
                     * @param _nodeId Node ID.
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Event query range start time, closed interval.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the event query range, closed interval.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Event name. Outofmemory - Memory OOM (status event); Switch - primary-secondary switch (status event); Roremove - read-only instance removal (status event); MemoryUsedHigh - high memory utilization (status event); CPUExpansion - CPU performance scale-out (stateless event); CPUExpansionFailed - CPU performance scale-out failed (stateless event); CPUContraction - CPU performance scale-in (stateless event); Restart - instance restart (status event); ServerFailureNodeMigration - ServerFailureNodeMigration (status event); PlannedSwitch - planned active/standby switch (stateless event); OverusedReadonlySet - instance will be locked (stateless event); OverusedReadWriteSet - instance unlock (stateless event).
                     */
                    std::vector<std::string> m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Event status. "1" - Event; "0" - Recovery event; "-" - Stateless event.
                     */
                    std::string m_eventStatus;
                    bool m_eventStatusHasBeenSet;

                    /**
                     * Sorting method. Sort by event occurrence. "DESC" - inverted; "ASC" - in order. Default is inverted.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Number of displayed events. Default is 100, maximum is 200.
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset.
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Node ID.
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEALARMEVENTSREQUEST_H_
