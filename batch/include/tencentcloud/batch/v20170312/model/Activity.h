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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_ACTIVITY_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_ACTIVITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Information of the creation/termination activity of a compute node
                */
                class Activity : public AbstractModel
                {
                public:
                    Activity();
                    ~Activity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Activity ID
                     * @return ActivityId Activity ID
                     */
                    std::string GetActivityId() const;

                    /**
                     * 设置Activity ID
                     * @param ActivityId Activity ID
                     */
                    void SetActivityId(const std::string& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取Compute node ID
                     * @return ComputeNodeId Compute node ID
                     */
                    std::string GetComputeNodeId() const;

                    /**
                     * 设置Compute node ID
                     * @param ComputeNodeId Compute node ID
                     */
                    void SetComputeNodeId(const std::string& _computeNodeId);

                    /**
                     * 判断参数 ComputeNodeId 是否已赋值
                     * @return ComputeNodeId 是否已赋值
                     */
                    bool ComputeNodeIdHasBeenSet() const;

                    /**
                     * 获取Activity type. Values: `CREATE_COMPUTE_NODE`, `TERMINATE_COMPUTE_NODE`
                     * @return ComputeNodeActivityType Activity type. Values: `CREATE_COMPUTE_NODE`, `TERMINATE_COMPUTE_NODE`
                     */
                    std::string GetComputeNodeActivityType() const;

                    /**
                     * 设置Activity type. Values: `CREATE_COMPUTE_NODE`, `TERMINATE_COMPUTE_NODE`
                     * @param ComputeNodeActivityType Activity type. Values: `CREATE_COMPUTE_NODE`, `TERMINATE_COMPUTE_NODE`
                     */
                    void SetComputeNodeActivityType(const std::string& _computeNodeActivityType);

                    /**
                     * 判断参数 ComputeNodeActivityType 是否已赋值
                     * @return ComputeNodeActivityType 是否已赋值
                     */
                    bool ComputeNodeActivityTypeHasBeenSet() const;

                    /**
                     * 获取Compute environment ID
                     * @return EnvId Compute environment ID
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置Compute environment ID
                     * @param EnvId Compute environment ID
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取Cause of the activity
                     * @return Cause Cause of the activity
                     */
                    std::string GetCause() const;

                    /**
                     * 设置Cause of the activity
                     * @param Cause Cause of the activity
                     */
                    void SetCause(const std::string& _cause);

                    /**
                     * 判断参数 Cause 是否已赋值
                     * @return Cause 是否已赋值
                     */
                    bool CauseHasBeenSet() const;

                    /**
                     * 获取Activity state
                     * @return ActivityState Activity state
                     */
                    std::string GetActivityState() const;

                    /**
                     * 设置Activity state
                     * @param ActivityState Activity state
                     */
                    void SetActivityState(const std::string& _activityState);

                    /**
                     * 判断参数 ActivityState 是否已赋值
                     * @return ActivityState 是否已赋值
                     */
                    bool ActivityStateHasBeenSet() const;

                    /**
                     * 获取Reason of going to this state
                     * @return StateReason Reason of going to this state
                     */
                    std::string GetStateReason() const;

                    /**
                     * 设置Reason of going to this state
                     * @param StateReason Reason of going to this state
                     */
                    void SetStateReason(const std::string& _stateReason);

                    /**
                     * 判断参数 StateReason 是否已赋值
                     * @return StateReason 是否已赋值
                     */
                    bool StateReasonHasBeenSet() const;

                    /**
                     * 获取Activity start time
                     * @return StartTime Activity start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Activity start time
                     * @param StartTime Activity start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Activity end time
Note: This field may return `null`, indicating that no valid value was found.
                     * @return EndTime Activity end time
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Activity end time
Note: This field may return `null`, indicating that no valid value was found.
                     * @param EndTime Activity end time
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取CVM instance ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @return InstanceId CVM instance ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置CVM instance ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @param InstanceId CVM instance ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Activity ID
                     */
                    std::string m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * Compute node ID
                     */
                    std::string m_computeNodeId;
                    bool m_computeNodeIdHasBeenSet;

                    /**
                     * Activity type. Values: `CREATE_COMPUTE_NODE`, `TERMINATE_COMPUTE_NODE`
                     */
                    std::string m_computeNodeActivityType;
                    bool m_computeNodeActivityTypeHasBeenSet;

                    /**
                     * Compute environment ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * Cause of the activity
                     */
                    std::string m_cause;
                    bool m_causeHasBeenSet;

                    /**
                     * Activity state
                     */
                    std::string m_activityState;
                    bool m_activityStateHasBeenSet;

                    /**
                     * Reason of going to this state
                     */
                    std::string m_stateReason;
                    bool m_stateReasonHasBeenSet;

                    /**
                     * Activity start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Activity end time
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * CVM instance ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_ACTIVITY_H_
