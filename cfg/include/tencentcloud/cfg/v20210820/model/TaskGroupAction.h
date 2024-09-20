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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPACTION_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TaskGroupInstance.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task group action
                */
                class TaskGroupAction : public AbstractModel
                {
                public:
                    TaskGroupAction();
                    ~TaskGroupAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task group action ID
                     * @return TaskGroupActionId Task group action ID
                     * 
                     */
                    int64_t GetTaskGroupActionId() const;

                    /**
                     * 设置Task group action ID
                     * @param _taskGroupActionId Task group action ID
                     * 
                     */
                    void SetTaskGroupActionId(const int64_t& _taskGroupActionId);

                    /**
                     * 判断参数 TaskGroupActionId 是否已赋值
                     * @return TaskGroupActionId 是否已赋值
                     * 
                     */
                    bool TaskGroupActionIdHasBeenSet() const;

                    /**
                     * 获取Action instance list of the task group
                     * @return TaskGroupInstances Action instance list of the task group
                     * 
                     */
                    std::vector<TaskGroupInstance> GetTaskGroupInstances() const;

                    /**
                     * 设置Action instance list of the task group
                     * @param _taskGroupInstances Action instance list of the task group
                     * 
                     */
                    void SetTaskGroupInstances(const std::vector<TaskGroupInstance>& _taskGroupInstances);

                    /**
                     * 判断参数 TaskGroupInstances 是否已赋值
                     * @return TaskGroupInstances 是否已赋值
                     * 
                     */
                    bool TaskGroupInstancesHasBeenSet() const;

                    /**
                     * 获取Action ID
                     * @return ActionId Action ID
                     * 
                     */
                    int64_t GetActionId() const;

                    /**
                     * 设置Action ID
                     * @param _actionId Action ID
                     * 
                     */
                    void SetActionId(const int64_t& _actionId);

                    /**
                     * 判断参数 ActionId 是否已赋值
                     * @return ActionId 是否已赋值
                     * 
                     */
                    bool ActionIdHasBeenSet() const;

                    /**
                     * 获取Order of actions in the group
                     * @return TaskGroupActionOrder Order of actions in the group
                     * 
                     */
                    int64_t GetTaskGroupActionOrder() const;

                    /**
                     * 设置Order of actions in the group
                     * @param _taskGroupActionOrder Order of actions in the group
                     * 
                     */
                    void SetTaskGroupActionOrder(const int64_t& _taskGroupActionOrder);

                    /**
                     * 判断参数 TaskGroupActionOrder 是否已赋值
                     * @return TaskGroupActionOrder 是否已赋值
                     * 
                     */
                    bool TaskGroupActionOrderHasBeenSet() const;

                    /**
                     * 获取General configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupActionGeneralConfiguration General configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskGroupActionGeneralConfiguration() const;

                    /**
                     * 设置General configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupActionGeneralConfiguration General configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupActionGeneralConfiguration(const std::string& _taskGroupActionGeneralConfiguration);

                    /**
                     * 判断参数 TaskGroupActionGeneralConfiguration 是否已赋值
                     * @return TaskGroupActionGeneralConfiguration 是否已赋值
                     * 
                     */
                    bool TaskGroupActionGeneralConfigurationHasBeenSet() const;

                    /**
                     * 获取Custom configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupActionCustomConfiguration Custom configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskGroupActionCustomConfiguration() const;

                    /**
                     * 设置Custom configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupActionCustomConfiguration Custom configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupActionCustomConfiguration(const std::string& _taskGroupActionCustomConfiguration);

                    /**
                     * 判断参数 TaskGroupActionCustomConfiguration 是否已赋值
                     * @return TaskGroupActionCustomConfiguration 是否已赋值
                     * 
                     */
                    bool TaskGroupActionCustomConfigurationHasBeenSet() const;

                    /**
                     * 获取Status of actions in the group
                     * @return TaskGroupActionStatus Status of actions in the group
                     * 
                     */
                    int64_t GetTaskGroupActionStatus() const;

                    /**
                     * 设置Status of actions in the group
                     * @param _taskGroupActionStatus Status of actions in the group
                     * 
                     */
                    void SetTaskGroupActionStatus(const int64_t& _taskGroupActionStatus);

                    /**
                     * 判断参数 TaskGroupActionStatus 是否已赋值
                     * @return TaskGroupActionStatus 是否已赋值
                     * 
                     */
                    bool TaskGroupActionStatusHasBeenSet() const;

                    /**
                     * 获取Action group creation time
                     * @return TaskGroupActionCreateTime Action group creation time
                     * 
                     */
                    std::string GetTaskGroupActionCreateTime() const;

                    /**
                     * 设置Action group creation time
                     * @param _taskGroupActionCreateTime Action group creation time
                     * 
                     */
                    void SetTaskGroupActionCreateTime(const std::string& _taskGroupActionCreateTime);

                    /**
                     * 判断参数 TaskGroupActionCreateTime 是否已赋值
                     * @return TaskGroupActionCreateTime 是否已赋值
                     * 
                     */
                    bool TaskGroupActionCreateTimeHasBeenSet() const;

                    /**
                     * 获取Action group update time
                     * @return TaskGroupActionUpdateTime Action group update time
                     * 
                     */
                    std::string GetTaskGroupActionUpdateTime() const;

                    /**
                     * 设置Action group update time
                     * @param _taskGroupActionUpdateTime Action group update time
                     * 
                     */
                    void SetTaskGroupActionUpdateTime(const std::string& _taskGroupActionUpdateTime);

                    /**
                     * 判断参数 TaskGroupActionUpdateTime 是否已赋值
                     * @return TaskGroupActionUpdateTime 是否已赋值
                     * 
                     */
                    bool TaskGroupActionUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Action name
                     * @return ActionTitle Action name
                     * 
                     */
                    std::string GetActionTitle() const;

                    /**
                     * 设置Action name
                     * @param _actionTitle Action name
                     * 
                     */
                    void SetActionTitle(const std::string& _actionTitle);

                    /**
                     * 判断参数 ActionTitle 是否已赋值
                     * @return ActionTitle 是否已赋值
                     * 
                     */
                    bool ActionTitleHasBeenSet() const;

                    /**
                     * 获取Status. 0: no status; 1: successful; 2; failed; 3: terminated; 4: skipped.
                     * @return TaskGroupActionStatusType Status. 0: no status; 1: successful; 2; failed; 3: terminated; 4: skipped.
                     * 
                     */
                    int64_t GetTaskGroupActionStatusType() const;

                    /**
                     * 设置Status. 0: no status; 1: successful; 2; failed; 3: terminated; 4: skipped.
                     * @param _taskGroupActionStatusType Status. 0: no status; 1: successful; 2; failed; 3: terminated; 4: skipped.
                     * 
                     */
                    void SetTaskGroupActionStatusType(const int64_t& _taskGroupActionStatusType);

                    /**
                     * 判断参数 TaskGroupActionStatusType 是否已赋值
                     * @return TaskGroupActionStatusType 是否已赋值
                     * 
                     */
                    bool TaskGroupActionStatusTypeHasBeenSet() const;

                    /**
                     * 获取RandomId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupActionRandomId RandomId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskGroupActionRandomId() const;

                    /**
                     * 设置RandomId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupActionRandomId RandomId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupActionRandomId(const int64_t& _taskGroupActionRandomId);

                    /**
                     * 判断参数 TaskGroupActionRandomId 是否已赋值
                     * @return TaskGroupActionRandomId 是否已赋值
                     * 
                     */
                    bool TaskGroupActionRandomIdHasBeenSet() const;

                    /**
                     * 获取RecoverId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupActionRecoverId RecoverId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskGroupActionRecoverId() const;

                    /**
                     * 设置RecoverId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupActionRecoverId RecoverId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupActionRecoverId(const int64_t& _taskGroupActionRecoverId);

                    /**
                     * 判断参数 TaskGroupActionRecoverId 是否已赋值
                     * @return TaskGroupActionRecoverId 是否已赋值
                     * 
                     */
                    bool TaskGroupActionRecoverIdHasBeenSet() const;

                    /**
                     * 获取ExecuteId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupActionExecuteId ExecuteId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskGroupActionExecuteId() const;

                    /**
                     * 设置ExecuteId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupActionExecuteId ExecuteId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupActionExecuteId(const int64_t& _taskGroupActionExecuteId);

                    /**
                     * 判断参数 TaskGroupActionExecuteId 是否已赋值
                     * @return TaskGroupActionExecuteId 是否已赋值
                     * 
                     */
                    bool TaskGroupActionExecuteIdHasBeenSet() const;

                    /**
                     * 获取Called API type. 0: tat; 1: cloud API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionApiType Called API type. 0: tat; 1: cloud API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetActionApiType() const;

                    /**
                     * 设置Called API type. 0: tat; 1: cloud API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionApiType Called API type. 0: tat; 1: cloud API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActionApiType(const int64_t& _actionApiType);

                    /**
                     * 判断参数 ActionApiType 是否已赋值
                     * @return ActionApiType 是否已赋值
                     * 
                     */
                    bool ActionApiTypeHasBeenSet() const;

                    /**
                     * 获取1: fault; 2: recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionAttribute 1: fault; 2: recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetActionAttribute() const;

                    /**
                     * 设置1: fault; 2: recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionAttribute 1: fault; 2: recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActionAttribute(const int64_t& _actionAttribute);

                    /**
                     * 判断参数 ActionAttribute 是否已赋值
                     * @return ActionAttribute 是否已赋值
                     * 
                     */
                    bool ActionAttributeHasBeenSet() const;

                    /**
                     * 获取Action type: platform and custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionType Action type: platform and custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Action type: platform and custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionType Action type: platform and custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取Whether retry is allowed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsExecuteRedo Whether retry is allowed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsExecuteRedo() const;

                    /**
                     * 设置Whether retry is allowed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isExecuteRedo Whether retry is allowed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsExecuteRedo(const bool& _isExecuteRedo);

                    /**
                     * 判断参数 IsExecuteRedo 是否已赋值
                     * @return IsExecuteRedo 是否已赋值
                     * 
                     */
                    bool IsExecuteRedoHasBeenSet() const;

                    /**
                     * 获取Action risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionRisk Action risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetActionRisk() const;

                    /**
                     * 设置Action risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionRisk Action risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActionRisk(const std::string& _actionRisk);

                    /**
                     * 判断参数 ActionRisk 是否已赋值
                     * @return ActionRisk 是否已赋值
                     * 
                     */
                    bool ActionRiskHasBeenSet() const;

                    /**
                     * 获取Action running time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupActionExecuteTime Action running time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskGroupActionExecuteTime() const;

                    /**
                     * 设置Action running time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupActionExecuteTime Action running time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupActionExecuteTime(const int64_t& _taskGroupActionExecuteTime);

                    /**
                     * 判断参数 TaskGroupActionExecuteTime 是否已赋值
                     * @return TaskGroupActionExecuteTime 是否已赋值
                     * 
                     */
                    bool TaskGroupActionExecuteTimeHasBeenSet() const;

                private:

                    /**
                     * Task group action ID
                     */
                    int64_t m_taskGroupActionId;
                    bool m_taskGroupActionIdHasBeenSet;

                    /**
                     * Action instance list of the task group
                     */
                    std::vector<TaskGroupInstance> m_taskGroupInstances;
                    bool m_taskGroupInstancesHasBeenSet;

                    /**
                     * Action ID
                     */
                    int64_t m_actionId;
                    bool m_actionIdHasBeenSet;

                    /**
                     * Order of actions in the group
                     */
                    int64_t m_taskGroupActionOrder;
                    bool m_taskGroupActionOrderHasBeenSet;

                    /**
                     * General configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskGroupActionGeneralConfiguration;
                    bool m_taskGroupActionGeneralConfigurationHasBeenSet;

                    /**
                     * Custom configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskGroupActionCustomConfiguration;
                    bool m_taskGroupActionCustomConfigurationHasBeenSet;

                    /**
                     * Status of actions in the group
                     */
                    int64_t m_taskGroupActionStatus;
                    bool m_taskGroupActionStatusHasBeenSet;

                    /**
                     * Action group creation time
                     */
                    std::string m_taskGroupActionCreateTime;
                    bool m_taskGroupActionCreateTimeHasBeenSet;

                    /**
                     * Action group update time
                     */
                    std::string m_taskGroupActionUpdateTime;
                    bool m_taskGroupActionUpdateTimeHasBeenSet;

                    /**
                     * Action name
                     */
                    std::string m_actionTitle;
                    bool m_actionTitleHasBeenSet;

                    /**
                     * Status. 0: no status; 1: successful; 2; failed; 3: terminated; 4: skipped.
                     */
                    int64_t m_taskGroupActionStatusType;
                    bool m_taskGroupActionStatusTypeHasBeenSet;

                    /**
                     * RandomId
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskGroupActionRandomId;
                    bool m_taskGroupActionRandomIdHasBeenSet;

                    /**
                     * RecoverId
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskGroupActionRecoverId;
                    bool m_taskGroupActionRecoverIdHasBeenSet;

                    /**
                     * ExecuteId
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskGroupActionExecuteId;
                    bool m_taskGroupActionExecuteIdHasBeenSet;

                    /**
                     * Called API type. 0: tat; 1: cloud API.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_actionApiType;
                    bool m_actionApiTypeHasBeenSet;

                    /**
                     * 1: fault; 2: recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_actionAttribute;
                    bool m_actionAttributeHasBeenSet;

                    /**
                     * Action type: platform and custom
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Whether retry is allowed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isExecuteRedo;
                    bool m_isExecuteRedoHasBeenSet;

                    /**
                     * Action risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_actionRisk;
                    bool m_actionRiskHasBeenSet;

                    /**
                     * Action running time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskGroupActionExecuteTime;
                    bool m_taskGroupActionExecuteTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPACTION_H_
