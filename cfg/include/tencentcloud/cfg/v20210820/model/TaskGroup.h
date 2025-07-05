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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUP_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TaskGroupAction.h>
#include <tencentcloud/cfg/v20210820/model/TaskGroupInstancesExecuteRules.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task group
                */
                class TaskGroup : public AbstractModel
                {
                public:
                    TaskGroup();
                    ~TaskGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task action ID
                     * @return TaskGroupId Task action ID
                     * 
                     */
                    int64_t GetTaskGroupId() const;

                    /**
                     * 设置Task action ID
                     * @param _taskGroupId Task action ID
                     * 
                     */
                    void SetTaskGroupId(const int64_t& _taskGroupId);

                    /**
                     * 判断参数 TaskGroupId 是否已赋值
                     * @return TaskGroupId 是否已赋值
                     * 
                     */
                    bool TaskGroupIdHasBeenSet() const;

                    /**
                     * 获取Group name
                     * @return TaskGroupTitle Group name
                     * 
                     */
                    std::string GetTaskGroupTitle() const;

                    /**
                     * 设置Group name
                     * @param _taskGroupTitle Group name
                     * 
                     */
                    void SetTaskGroupTitle(const std::string& _taskGroupTitle);

                    /**
                     * 判断参数 TaskGroupTitle 是否已赋值
                     * @return TaskGroupTitle 是否已赋值
                     * 
                     */
                    bool TaskGroupTitleHasBeenSet() const;

                    /**
                     * 获取Group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupDescription Group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskGroupDescription() const;

                    /**
                     * 设置Group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupDescription Group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupDescription(const std::string& _taskGroupDescription);

                    /**
                     * 判断参数 TaskGroupDescription 是否已赋值
                     * @return TaskGroupDescription 是否已赋值
                     * 
                     */
                    bool TaskGroupDescriptionHasBeenSet() const;

                    /**
                     * 获取Task group order
                     * @return TaskGroupOrder Task group order
                     * 
                     */
                    int64_t GetTaskGroupOrder() const;

                    /**
                     * 设置Task group order
                     * @param _taskGroupOrder Task group order
                     * 
                     */
                    void SetTaskGroupOrder(const int64_t& _taskGroupOrder);

                    /**
                     * 判断参数 TaskGroupOrder 是否已赋值
                     * @return TaskGroupOrder 是否已赋值
                     * 
                     */
                    bool TaskGroupOrderHasBeenSet() const;

                    /**
                     * 获取Object type ID
                     * @return ObjectTypeId Object type ID
                     * 
                     */
                    int64_t GetObjectTypeId() const;

                    /**
                     * 设置Object type ID
                     * @param _objectTypeId Object type ID
                     * 
                     */
                    void SetObjectTypeId(const int64_t& _objectTypeId);

                    /**
                     * 判断参数 ObjectTypeId 是否已赋值
                     * @return ObjectTypeId 是否已赋值
                     * 
                     */
                    bool ObjectTypeIdHasBeenSet() const;

                    /**
                     * 获取Task group creation time
                     * @return TaskGroupCreateTime Task group creation time
                     * 
                     */
                    std::string GetTaskGroupCreateTime() const;

                    /**
                     * 设置Task group creation time
                     * @param _taskGroupCreateTime Task group creation time
                     * 
                     */
                    void SetTaskGroupCreateTime(const std::string& _taskGroupCreateTime);

                    /**
                     * 判断参数 TaskGroupCreateTime 是否已赋值
                     * @return TaskGroupCreateTime 是否已赋值
                     * 
                     */
                    bool TaskGroupCreateTimeHasBeenSet() const;

                    /**
                     * 获取Task group update time
                     * @return TaskGroupUpdateTime Task group update time
                     * 
                     */
                    std::string GetTaskGroupUpdateTime() const;

                    /**
                     * 设置Task group update time
                     * @param _taskGroupUpdateTime Task group update time
                     * 
                     */
                    void SetTaskGroupUpdateTime(const std::string& _taskGroupUpdateTime);

                    /**
                     * 判断参数 TaskGroupUpdateTime 是否已赋值
                     * @return TaskGroupUpdateTime 是否已赋值
                     * 
                     */
                    bool TaskGroupUpdateTimeHasBeenSet() const;

                    /**
                     * 获取List of actions in the group
                     * @return TaskGroupActions List of actions in the group
                     * 
                     */
                    std::vector<TaskGroupAction> GetTaskGroupActions() const;

                    /**
                     * 设置List of actions in the group
                     * @param _taskGroupActions List of actions in the group
                     * 
                     */
                    void SetTaskGroupActions(const std::vector<TaskGroupAction>& _taskGroupActions);

                    /**
                     * 判断参数 TaskGroupActions 是否已赋值
                     * @return TaskGroupActions 是否已赋值
                     * 
                     */
                    bool TaskGroupActionsHasBeenSet() const;

                    /**
                     * 获取Instance list
                     * @return TaskGroupInstanceList Instance list
                     * 
                     */
                    std::vector<std::string> GetTaskGroupInstanceList() const;

                    /**
                     * 设置Instance list
                     * @param _taskGroupInstanceList Instance list
                     * 
                     */
                    void SetTaskGroupInstanceList(const std::vector<std::string>& _taskGroupInstanceList);

                    /**
                     * 判断参数 TaskGroupInstanceList 是否已赋值
                     * @return TaskGroupInstanceList 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceListHasBeenSet() const;

                    /**
                     * 获取Execution mode. 1: sequential execution; 2: execution by stage.
                     * @return TaskGroupMode Execution mode. 1: sequential execution; 2: execution by stage.
                     * 
                     */
                    int64_t GetTaskGroupMode() const;

                    /**
                     * 设置Execution mode. 1: sequential execution; 2: execution by stage.
                     * @param _taskGroupMode Execution mode. 1: sequential execution; 2: execution by stage.
                     * 
                     */
                    void SetTaskGroupMode(const int64_t& _taskGroupMode);

                    /**
                     * 判断参数 TaskGroupMode 是否已赋值
                     * @return TaskGroupMode 是否已赋值
                     * 
                     */
                    bool TaskGroupModeHasBeenSet() const;

                    /**
                     * 获取List of instances not involved in the experiment
                     * @return TaskGroupDiscardInstanceList List of instances not involved in the experiment
                     * 
                     */
                    std::vector<std::string> GetTaskGroupDiscardInstanceList() const;

                    /**
                     * 设置List of instances not involved in the experiment
                     * @param _taskGroupDiscardInstanceList List of instances not involved in the experiment
                     * 
                     */
                    void SetTaskGroupDiscardInstanceList(const std::vector<std::string>& _taskGroupDiscardInstanceList);

                    /**
                     * 判断参数 TaskGroupDiscardInstanceList 是否已赋值
                     * @return TaskGroupDiscardInstanceList 是否已赋值
                     * 
                     */
                    bool TaskGroupDiscardInstanceListHasBeenSet() const;

                    /**
                     * 获取List of instances involved in the experiment
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupSelectedInstanceList List of instances involved in the experiment
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTaskGroupSelectedInstanceList() const;

                    /**
                     * 设置List of instances involved in the experiment
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupSelectedInstanceList List of instances involved in the experiment
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupSelectedInstanceList(const std::vector<std::string>& _taskGroupSelectedInstanceList);

                    /**
                     * 判断参数 TaskGroupSelectedInstanceList 是否已赋值
                     * @return TaskGroupSelectedInstanceList 是否已赋值
                     * 
                     */
                    bool TaskGroupSelectedInstanceListHasBeenSet() const;

                    /**
                     * 获取Machine selection rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupInstancesExecuteRule Machine selection rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TaskGroupInstancesExecuteRules> GetTaskGroupInstancesExecuteRule() const;

                    /**
                     * 设置Machine selection rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupInstancesExecuteRule Machine selection rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupInstancesExecuteRule(const std::vector<TaskGroupInstancesExecuteRules>& _taskGroupInstancesExecuteRule);

                    /**
                     * 判断参数 TaskGroupInstancesExecuteRule 是否已赋值
                     * @return TaskGroupInstancesExecuteRule 是否已赋值
                     * 
                     */
                    bool TaskGroupInstancesExecuteRuleHasBeenSet() const;

                private:

                    /**
                     * Task action ID
                     */
                    int64_t m_taskGroupId;
                    bool m_taskGroupIdHasBeenSet;

                    /**
                     * Group name
                     */
                    std::string m_taskGroupTitle;
                    bool m_taskGroupTitleHasBeenSet;

                    /**
                     * Group description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskGroupDescription;
                    bool m_taskGroupDescriptionHasBeenSet;

                    /**
                     * Task group order
                     */
                    int64_t m_taskGroupOrder;
                    bool m_taskGroupOrderHasBeenSet;

                    /**
                     * Object type ID
                     */
                    int64_t m_objectTypeId;
                    bool m_objectTypeIdHasBeenSet;

                    /**
                     * Task group creation time
                     */
                    std::string m_taskGroupCreateTime;
                    bool m_taskGroupCreateTimeHasBeenSet;

                    /**
                     * Task group update time
                     */
                    std::string m_taskGroupUpdateTime;
                    bool m_taskGroupUpdateTimeHasBeenSet;

                    /**
                     * List of actions in the group
                     */
                    std::vector<TaskGroupAction> m_taskGroupActions;
                    bool m_taskGroupActionsHasBeenSet;

                    /**
                     * Instance list
                     */
                    std::vector<std::string> m_taskGroupInstanceList;
                    bool m_taskGroupInstanceListHasBeenSet;

                    /**
                     * Execution mode. 1: sequential execution; 2: execution by stage.
                     */
                    int64_t m_taskGroupMode;
                    bool m_taskGroupModeHasBeenSet;

                    /**
                     * List of instances not involved in the experiment
                     */
                    std::vector<std::string> m_taskGroupDiscardInstanceList;
                    bool m_taskGroupDiscardInstanceListHasBeenSet;

                    /**
                     * List of instances involved in the experiment
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_taskGroupSelectedInstanceList;
                    bool m_taskGroupSelectedInstanceListHasBeenSet;

                    /**
                     * Machine selection rule
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TaskGroupInstancesExecuteRules> m_taskGroupInstancesExecuteRule;
                    bool m_taskGroupInstancesExecuteRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUP_H_
