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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_TASKINSTANCEVIEW_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_TASKINSTANCEVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/RedirectInfo.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Task instance view information
                */
                class TaskInstanceView : public AbstractModel
                {
                public:
                    TaskInstanceView();
                    ~TaskInstanceView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task instance index
                     * @return TaskInstanceIndex Task instance index
                     * 
                     */
                    int64_t GetTaskInstanceIndex() const;

                    /**
                     * 设置Task instance index
                     * @param _taskInstanceIndex Task instance index
                     * 
                     */
                    void SetTaskInstanceIndex(const int64_t& _taskInstanceIndex);

                    /**
                     * 判断参数 TaskInstanceIndex 是否已赋值
                     * @return TaskInstanceIndex 是否已赋值
                     * 
                     */
                    bool TaskInstanceIndexHasBeenSet() const;

                    /**
                     * 获取Task instance state
                     * @return TaskInstanceState Task instance state
                     * 
                     */
                    std::string GetTaskInstanceState() const;

                    /**
                     * 设置Task instance state
                     * @param _taskInstanceState Task instance state
                     * 
                     */
                    void SetTaskInstanceState(const std::string& _taskInstanceState);

                    /**
                     * 判断参数 TaskInstanceState 是否已赋值
                     * @return TaskInstanceState 是否已赋值
                     * 
                     */
                    bool TaskInstanceStateHasBeenSet() const;

                    /**
                     * 获取Exit code after application execution is completed
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ExitCode Exit code after application execution is completed
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetExitCode() const;

                    /**
                     * 设置Exit code after application execution is completed
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _exitCode Exit code after application execution is completed
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetExitCode(const int64_t& _exitCode);

                    /**
                     * 判断参数 ExitCode 是否已赋值
                     * @return ExitCode 是否已赋值
                     * 
                     */
                    bool ExitCodeHasBeenSet() const;

                    /**
                     * 获取Task instance state reason. If the task instance fails, the reason for the failure will be logged.
                     * @return StateReason Task instance state reason. If the task instance fails, the reason for the failure will be logged.
                     * 
                     */
                    std::string GetStateReason() const;

                    /**
                     * 设置Task instance state reason. If the task instance fails, the reason for the failure will be logged.
                     * @param _stateReason Task instance state reason. If the task instance fails, the reason for the failure will be logged.
                     * 
                     */
                    void SetStateReason(const std::string& _stateReason);

                    /**
                     * 判断参数 StateReason 是否已赋值
                     * @return StateReason 是否已赋值
                     * 
                     */
                    bool StateReasonHasBeenSet() const;

                    /**
                     * 获取The `InstanceId` of the compute node (e.g., CVM instance) where the task instance is running. This field is empty if the task instance is not running or has already been completed and will change when the task instance is retried.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ComputeNodeInstanceId The `InstanceId` of the compute node (e.g., CVM instance) where the task instance is running. This field is empty if the task instance is not running or has already been completed and will change when the task instance is retried.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetComputeNodeInstanceId() const;

                    /**
                     * 设置The `InstanceId` of the compute node (e.g., CVM instance) where the task instance is running. This field is empty if the task instance is not running or has already been completed and will change when the task instance is retried.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _computeNodeInstanceId The `InstanceId` of the compute node (e.g., CVM instance) where the task instance is running. This field is empty if the task instance is not running or has already been completed and will change when the task instance is retried.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetComputeNodeInstanceId(const std::string& _computeNodeInstanceId);

                    /**
                     * 判断参数 ComputeNodeInstanceId 是否已赋值
                     * @return ComputeNodeInstanceId 是否已赋值
                     * 
                     */
                    bool ComputeNodeInstanceIdHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Start time
Note: This field may return `null`, indicating that no valid value was found.
                     * @return LaunchTime Start time
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetLaunchTime() const;

                    /**
                     * 设置Start time
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _launchTime Start time
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetLaunchTime(const std::string& _launchTime);

                    /**
                     * 判断参数 LaunchTime 是否已赋值
                     * @return LaunchTime 是否已赋值
                     * 
                     */
                    bool LaunchTimeHasBeenSet() const;

                    /**
                     * 获取Running start time
Note: This field may return `null`, indicating that no valid value was found.
                     * @return RunningTime Running start time
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetRunningTime() const;

                    /**
                     * 设置Running start time
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _runningTime Running start time
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetRunningTime(const std::string& _runningTime);

                    /**
                     * 判断参数 RunningTime 是否已赋值
                     * @return RunningTime 是否已赋值
                     * 
                     */
                    bool RunningTimeHasBeenSet() const;

                    /**
                     * 获取Task end time
Note: This field may return `null`, indicating that no valid value was found.
                     * @return EndTime Task end time
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task end time
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _endTime Task end time
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取Redirection information
                     * @return RedirectInfo Redirection information
                     * 
                     */
                    RedirectInfo GetRedirectInfo() const;

                    /**
                     * 设置Redirection information
                     * @param _redirectInfo Redirection information
                     * 
                     */
                    void SetRedirectInfo(const RedirectInfo& _redirectInfo);

                    /**
                     * 判断参数 RedirectInfo 是否已赋值
                     * @return RedirectInfo 是否已赋值
                     * 
                     */
                    bool RedirectInfoHasBeenSet() const;

                    /**
                     * 获取Task instance state reason details. If the task instance fails, the reason for the failure will be logged
                     * @return StateDetailedReason Task instance state reason details. If the task instance fails, the reason for the failure will be logged
                     * 
                     */
                    std::string GetStateDetailedReason() const;

                    /**
                     * 设置Task instance state reason details. If the task instance fails, the reason for the failure will be logged
                     * @param _stateDetailedReason Task instance state reason details. If the task instance fails, the reason for the failure will be logged
                     * 
                     */
                    void SetStateDetailedReason(const std::string& _stateDetailedReason);

                    /**
                     * 判断参数 StateDetailedReason 是否已赋值
                     * @return StateDetailedReason 是否已赋值
                     * 
                     */
                    bool StateDetailedReasonHasBeenSet() const;

                private:

                    /**
                     * Task instance index
                     */
                    int64_t m_taskInstanceIndex;
                    bool m_taskInstanceIndexHasBeenSet;

                    /**
                     * Task instance state
                     */
                    std::string m_taskInstanceState;
                    bool m_taskInstanceStateHasBeenSet;

                    /**
                     * Exit code after application execution is completed
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_exitCode;
                    bool m_exitCodeHasBeenSet;

                    /**
                     * Task instance state reason. If the task instance fails, the reason for the failure will be logged.
                     */
                    std::string m_stateReason;
                    bool m_stateReasonHasBeenSet;

                    /**
                     * The `InstanceId` of the compute node (e.g., CVM instance) where the task instance is running. This field is empty if the task instance is not running or has already been completed and will change when the task instance is retried.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_computeNodeInstanceId;
                    bool m_computeNodeInstanceIdHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Start time
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_launchTime;
                    bool m_launchTimeHasBeenSet;

                    /**
                     * Running start time
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_runningTime;
                    bool m_runningTimeHasBeenSet;

                    /**
                     * Task end time
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Redirection information
                     */
                    RedirectInfo m_redirectInfo;
                    bool m_redirectInfoHasBeenSet;

                    /**
                     * Task instance state reason details. If the task instance fails, the reason for the failure will be logged
                     */
                    std::string m_stateDetailedReason;
                    bool m_stateDetailedReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_TASKINSTANCEVIEW_H_
