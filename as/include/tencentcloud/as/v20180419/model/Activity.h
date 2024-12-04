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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_ACTIVITY_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_ACTIVITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/ActivtyRelatedInstance.h>
#include <tencentcloud/as/v20180419/model/LifecycleActionResultInfo.h>
#include <tencentcloud/as/v20180419/model/DetailedStatusMessage.h>
#include <tencentcloud/as/v20180419/model/InvocationResult.h>
#include <tencentcloud/as/v20180419/model/RelatedInstance.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Information on eligible scaling activities.
                */
                class Activity : public AbstractModel
                {
                public:
                    Activity();
                    ~Activity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Auto scaling group ID.
                     * @return AutoScalingGroupId Auto scaling group ID.
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Auto scaling group ID.
                     * @param _autoScalingGroupId Auto scaling group ID.
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取Scaling activity ID.
                     * @return ActivityId Scaling activity ID.
                     * 
                     */
                    std::string GetActivityId() const;

                    /**
                     * 设置Scaling activity ID.
                     * @param _activityId Scaling activity ID.
                     * 
                     */
                    void SetActivityId(const std::string& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取Scaling activity type. Valid values:
<li>SCALE_OUT: Scale out an instance.</li>
<li>SCALE_IN: Scale in an instance.</li>
<li>ATTACH_INSTANCES: Add an instance.</li>
<li>REMOVE_INSTANCES: Terminate an instance.</li>
<li>DETACH_INSTANCES: Remove an instance.</li>
<li>TERMINATE_INSTANCES_UNEXPECTEDLY: Terminate an instance in the CVM console.</li>
<li>REPLACE_UNHEALTHY_INSTANCE: Replace an unhealthy instance.</li>
<li>START_INSTANCES: Start an instance.</li>
<li>STOP_INSTANCES: Stop an instance.</li>
<li>INVOKE_COMMAND: Execute a command.</li>
                     * @return ActivityType Scaling activity type. Valid values:
<li>SCALE_OUT: Scale out an instance.</li>
<li>SCALE_IN: Scale in an instance.</li>
<li>ATTACH_INSTANCES: Add an instance.</li>
<li>REMOVE_INSTANCES: Terminate an instance.</li>
<li>DETACH_INSTANCES: Remove an instance.</li>
<li>TERMINATE_INSTANCES_UNEXPECTEDLY: Terminate an instance in the CVM console.</li>
<li>REPLACE_UNHEALTHY_INSTANCE: Replace an unhealthy instance.</li>
<li>START_INSTANCES: Start an instance.</li>
<li>STOP_INSTANCES: Stop an instance.</li>
<li>INVOKE_COMMAND: Execute a command.</li>
                     * 
                     */
                    std::string GetActivityType() const;

                    /**
                     * 设置Scaling activity type. Valid values:
<li>SCALE_OUT: Scale out an instance.</li>
<li>SCALE_IN: Scale in an instance.</li>
<li>ATTACH_INSTANCES: Add an instance.</li>
<li>REMOVE_INSTANCES: Terminate an instance.</li>
<li>DETACH_INSTANCES: Remove an instance.</li>
<li>TERMINATE_INSTANCES_UNEXPECTEDLY: Terminate an instance in the CVM console.</li>
<li>REPLACE_UNHEALTHY_INSTANCE: Replace an unhealthy instance.</li>
<li>START_INSTANCES: Start an instance.</li>
<li>STOP_INSTANCES: Stop an instance.</li>
<li>INVOKE_COMMAND: Execute a command.</li>
                     * @param _activityType Scaling activity type. Valid values:
<li>SCALE_OUT: Scale out an instance.</li>
<li>SCALE_IN: Scale in an instance.</li>
<li>ATTACH_INSTANCES: Add an instance.</li>
<li>REMOVE_INSTANCES: Terminate an instance.</li>
<li>DETACH_INSTANCES: Remove an instance.</li>
<li>TERMINATE_INSTANCES_UNEXPECTEDLY: Terminate an instance in the CVM console.</li>
<li>REPLACE_UNHEALTHY_INSTANCE: Replace an unhealthy instance.</li>
<li>START_INSTANCES: Start an instance.</li>
<li>STOP_INSTANCES: Stop an instance.</li>
<li>INVOKE_COMMAND: Execute a command.</li>
                     * 
                     */
                    void SetActivityType(const std::string& _activityType);

                    /**
                     * 判断参数 ActivityType 是否已赋值
                     * @return ActivityType 是否已赋值
                     * 
                     */
                    bool ActivityTypeHasBeenSet() const;

                    /**
                     * 获取Scaling activity status. Valid values:
<li>INIT: initializing.</li>
<li>RUNNING: running.</li>
<li>SUCCESSFUL: successful.</li>
<li>PARTIALLY_SUCCESSFUL: partially successful.</li>
<li>FAILED: failed.</li>
<li>CANCELLED: canceled.</li>
                     * @return StatusCode Scaling activity status. Valid values:
<li>INIT: initializing.</li>
<li>RUNNING: running.</li>
<li>SUCCESSFUL: successful.</li>
<li>PARTIALLY_SUCCESSFUL: partially successful.</li>
<li>FAILED: failed.</li>
<li>CANCELLED: canceled.</li>
                     * 
                     */
                    std::string GetStatusCode() const;

                    /**
                     * 设置Scaling activity status. Valid values:
<li>INIT: initializing.</li>
<li>RUNNING: running.</li>
<li>SUCCESSFUL: successful.</li>
<li>PARTIALLY_SUCCESSFUL: partially successful.</li>
<li>FAILED: failed.</li>
<li>CANCELLED: canceled.</li>
                     * @param _statusCode Scaling activity status. Valid values:
<li>INIT: initializing.</li>
<li>RUNNING: running.</li>
<li>SUCCESSFUL: successful.</li>
<li>PARTIALLY_SUCCESSFUL: partially successful.</li>
<li>FAILED: failed.</li>
<li>CANCELLED: canceled.</li>
                     * 
                     */
                    void SetStatusCode(const std::string& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取Description of the scaling activity status.
                     * @return StatusMessage Description of the scaling activity status.
                     * 
                     */
                    std::string GetStatusMessage() const;

                    /**
                     * 设置Description of the scaling activity status.
                     * @param _statusMessage Description of the scaling activity status.
                     * 
                     */
                    void SetStatusMessage(const std::string& _statusMessage);

                    /**
                     * 判断参数 StatusMessage 是否已赋值
                     * @return StatusMessage 是否已赋值
                     * 
                     */
                    bool StatusMessageHasBeenSet() const;

                    /**
                     * 获取Cause of the scaling activity.
                     * @return Cause Cause of the scaling activity.
                     * 
                     */
                    std::string GetCause() const;

                    /**
                     * 设置Cause of the scaling activity.
                     * @param _cause Cause of the scaling activity.
                     * 
                     */
                    void SetCause(const std::string& _cause);

                    /**
                     * 判断参数 Cause 是否已赋值
                     * @return Cause 是否已赋值
                     * 
                     */
                    bool CauseHasBeenSet() const;

                    /**
                     * 获取Description of the scaling activity.
                     * @return Description Description of the scaling activity.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of the scaling activity.
                     * @param _description Description of the scaling activity.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Start time of the scaling activity.
                     * @return StartTime Start time of the scaling activity.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the scaling activity.
                     * @param _startTime Start time of the scaling activity.
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
                     * 获取End time of the scaling activity.
                     * @return EndTime End time of the scaling activity.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the scaling activity.
                     * @param _endTime End time of the scaling activity.
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
                     * 获取Creation time of the scaling activity.
                     * @return CreatedTime Creation time of the scaling activity.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time of the scaling activity.
                     * @param _createdTime Creation time of the scaling activity.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取This parameter has been deprecated.
                     * @return ActivityRelatedInstanceSet This parameter has been deprecated.
                     * @deprecated
                     */
                    std::vector<ActivtyRelatedInstance> GetActivityRelatedInstanceSet() const;

                    /**
                     * 设置This parameter has been deprecated.
                     * @param _activityRelatedInstanceSet This parameter has been deprecated.
                     * @deprecated
                     */
                    void SetActivityRelatedInstanceSet(const std::vector<ActivtyRelatedInstance>& _activityRelatedInstanceSet);

                    /**
                     * 判断参数 ActivityRelatedInstanceSet 是否已赋值
                     * @return ActivityRelatedInstanceSet 是否已赋值
                     * @deprecated
                     */
                    bool ActivityRelatedInstanceSetHasBeenSet() const;

                    /**
                     * 获取Brief description of the scaling activity status.
                     * @return StatusMessageSimplified Brief description of the scaling activity status.
                     * 
                     */
                    std::string GetStatusMessageSimplified() const;

                    /**
                     * 设置Brief description of the scaling activity status.
                     * @param _statusMessageSimplified Brief description of the scaling activity status.
                     * 
                     */
                    void SetStatusMessageSimplified(const std::string& _statusMessageSimplified);

                    /**
                     * 判断参数 StatusMessageSimplified 是否已赋值
                     * @return StatusMessageSimplified 是否已赋值
                     * 
                     */
                    bool StatusMessageSimplifiedHasBeenSet() const;

                    /**
                     * 获取Result of the lifecycle hook action in the scaling activity
                     * @return LifecycleActionResultSet Result of the lifecycle hook action in the scaling activity
                     * 
                     */
                    std::vector<LifecycleActionResultInfo> GetLifecycleActionResultSet() const;

                    /**
                     * 设置Result of the lifecycle hook action in the scaling activity
                     * @param _lifecycleActionResultSet Result of the lifecycle hook action in the scaling activity
                     * 
                     */
                    void SetLifecycleActionResultSet(const std::vector<LifecycleActionResultInfo>& _lifecycleActionResultSet);

                    /**
                     * 判断参数 LifecycleActionResultSet 是否已赋值
                     * @return LifecycleActionResultSet 是否已赋值
                     * 
                     */
                    bool LifecycleActionResultSetHasBeenSet() const;

                    /**
                     * 获取Detailed description of scaling activity status
                     * @return DetailedStatusMessageSet Detailed description of scaling activity status
                     * 
                     */
                    std::vector<DetailedStatusMessage> GetDetailedStatusMessageSet() const;

                    /**
                     * 设置Detailed description of scaling activity status
                     * @param _detailedStatusMessageSet Detailed description of scaling activity status
                     * 
                     */
                    void SetDetailedStatusMessageSet(const std::vector<DetailedStatusMessage>& _detailedStatusMessageSet);

                    /**
                     * 判断参数 DetailedStatusMessageSet 是否已赋值
                     * @return DetailedStatusMessageSet 是否已赋值
                     * 
                     */
                    bool DetailedStatusMessageSetHasBeenSet() const;

                    /**
                     * 获取Result of the command execution
                     * @return InvocationResultSet Result of the command execution
                     * 
                     */
                    std::vector<InvocationResult> GetInvocationResultSet() const;

                    /**
                     * 设置Result of the command execution
                     * @param _invocationResultSet Result of the command execution
                     * 
                     */
                    void SetInvocationResultSet(const std::vector<InvocationResult>& _invocationResultSet);

                    /**
                     * 判断参数 InvocationResultSet 是否已赋值
                     * @return InvocationResultSet 是否已赋值
                     * 
                     */
                    bool InvocationResultSetHasBeenSet() const;

                    /**
                     * 获取Information set of the instances related to the scaling activity.
                     * @return RelatedInstanceSet Information set of the instances related to the scaling activity.
                     * 
                     */
                    std::vector<RelatedInstance> GetRelatedInstanceSet() const;

                    /**
                     * 设置Information set of the instances related to the scaling activity.
                     * @param _relatedInstanceSet Information set of the instances related to the scaling activity.
                     * 
                     */
                    void SetRelatedInstanceSet(const std::vector<RelatedInstance>& _relatedInstanceSet);

                    /**
                     * 判断参数 RelatedInstanceSet 是否已赋值
                     * @return RelatedInstanceSet 是否已赋值
                     * 
                     */
                    bool RelatedInstanceSetHasBeenSet() const;

                private:

                    /**
                     * Auto scaling group ID.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Scaling activity ID.
                     */
                    std::string m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * Scaling activity type. Valid values:
<li>SCALE_OUT: Scale out an instance.</li>
<li>SCALE_IN: Scale in an instance.</li>
<li>ATTACH_INSTANCES: Add an instance.</li>
<li>REMOVE_INSTANCES: Terminate an instance.</li>
<li>DETACH_INSTANCES: Remove an instance.</li>
<li>TERMINATE_INSTANCES_UNEXPECTEDLY: Terminate an instance in the CVM console.</li>
<li>REPLACE_UNHEALTHY_INSTANCE: Replace an unhealthy instance.</li>
<li>START_INSTANCES: Start an instance.</li>
<li>STOP_INSTANCES: Stop an instance.</li>
<li>INVOKE_COMMAND: Execute a command.</li>
                     */
                    std::string m_activityType;
                    bool m_activityTypeHasBeenSet;

                    /**
                     * Scaling activity status. Valid values:
<li>INIT: initializing.</li>
<li>RUNNING: running.</li>
<li>SUCCESSFUL: successful.</li>
<li>PARTIALLY_SUCCESSFUL: partially successful.</li>
<li>FAILED: failed.</li>
<li>CANCELLED: canceled.</li>
                     */
                    std::string m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * Description of the scaling activity status.
                     */
                    std::string m_statusMessage;
                    bool m_statusMessageHasBeenSet;

                    /**
                     * Cause of the scaling activity.
                     */
                    std::string m_cause;
                    bool m_causeHasBeenSet;

                    /**
                     * Description of the scaling activity.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Start time of the scaling activity.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the scaling activity.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Creation time of the scaling activity.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * This parameter has been deprecated.
                     */
                    std::vector<ActivtyRelatedInstance> m_activityRelatedInstanceSet;
                    bool m_activityRelatedInstanceSetHasBeenSet;

                    /**
                     * Brief description of the scaling activity status.
                     */
                    std::string m_statusMessageSimplified;
                    bool m_statusMessageSimplifiedHasBeenSet;

                    /**
                     * Result of the lifecycle hook action in the scaling activity
                     */
                    std::vector<LifecycleActionResultInfo> m_lifecycleActionResultSet;
                    bool m_lifecycleActionResultSetHasBeenSet;

                    /**
                     * Detailed description of scaling activity status
                     */
                    std::vector<DetailedStatusMessage> m_detailedStatusMessageSet;
                    bool m_detailedStatusMessageSetHasBeenSet;

                    /**
                     * Result of the command execution
                     */
                    std::vector<InvocationResult> m_invocationResultSet;
                    bool m_invocationResultSetHasBeenSet;

                    /**
                     * Information set of the instances related to the scaling activity.
                     */
                    std::vector<RelatedInstance> m_relatedInstanceSet;
                    bool m_relatedInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_ACTIVITY_H_
