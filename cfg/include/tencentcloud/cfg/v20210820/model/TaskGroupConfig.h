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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPCONFIG_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TaskGroupActionConfig.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Action group configuration item
                */
                class TaskGroupConfig : public AbstractModel
                {
                public:
                    TaskGroupConfig();
                    ~TaskGroupConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance object associated with the action group
                     * @return TaskGroupInstances Instance object associated with the action group
                     * 
                     */
                    std::vector<std::string> GetTaskGroupInstances() const;

                    /**
                     * 设置Instance object associated with the action group
                     * @param _taskGroupInstances Instance object associated with the action group
                     * 
                     */
                    void SetTaskGroupInstances(const std::vector<std::string>& _taskGroupInstances);

                    /**
                     * 判断参数 TaskGroupInstances 是否已赋值
                     * @return TaskGroupInstances 是否已赋值
                     * 
                     */
                    bool TaskGroupInstancesHasBeenSet() const;

                    /**
                     * 获取Action group name. If this parameter is left blank, the action group name in the template is used by default.
                     * @return TaskGroupTitle Action group name. If this parameter is left blank, the action group name in the template is used by default.
                     * 
                     */
                    std::string GetTaskGroupTitle() const;

                    /**
                     * 设置Action group name. If this parameter is left blank, the action group name in the template is used by default.
                     * @param _taskGroupTitle Action group name. If this parameter is left blank, the action group name in the template is used by default.
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
                     * 获取Action group description. If this parameter is left blank, the action group description in the template is used by default.
                     * @return TaskGroupDescription Action group description. If this parameter is left blank, the action group description in the template is used by default.
                     * 
                     */
                    std::string GetTaskGroupDescription() const;

                    /**
                     * 设置Action group description. If this parameter is left blank, the action group description in the template is used by default.
                     * @param _taskGroupDescription Action group description. If this parameter is left blank, the action group description in the template is used by default.
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
                     * 获取Action group execution mode. 1: sequential execution; 2: execution by stage. If this parameter is left blank, the action execution mode in the template is used by default.
                     * @return TaskGroupMode Action group execution mode. 1: sequential execution; 2: execution by stage. If this parameter is left blank, the action execution mode in the template is used by default.
                     * 
                     */
                    uint64_t GetTaskGroupMode() const;

                    /**
                     * 设置Action group execution mode. 1: sequential execution; 2: execution by stage. If this parameter is left blank, the action execution mode in the template is used by default.
                     * @param _taskGroupMode Action group execution mode. 1: sequential execution; 2: execution by stage. If this parameter is left blank, the action execution mode in the template is used by default.
                     * 
                     */
                    void SetTaskGroupMode(const uint64_t& _taskGroupMode);

                    /**
                     * 判断参数 TaskGroupMode 是否已赋值
                     * @return TaskGroupMode 是否已赋值
                     * 
                     */
                    bool TaskGroupModeHasBeenSet() const;

                    /**
                     * 获取Action parameters in the action group. If this field is left blank, the action parameters in the template is used by default. You only need to specify the action whose parameters are to be modified during configuration.
                     * @return TaskGroupActionsConfig Action parameters in the action group. If this field is left blank, the action parameters in the template is used by default. You only need to specify the action whose parameters are to be modified during configuration.
                     * 
                     */
                    std::vector<TaskGroupActionConfig> GetTaskGroupActionsConfig() const;

                    /**
                     * 设置Action parameters in the action group. If this field is left blank, the action parameters in the template is used by default. You only need to specify the action whose parameters are to be modified during configuration.
                     * @param _taskGroupActionsConfig Action parameters in the action group. If this field is left blank, the action parameters in the template is used by default. You only need to specify the action whose parameters are to be modified during configuration.
                     * 
                     */
                    void SetTaskGroupActionsConfig(const std::vector<TaskGroupActionConfig>& _taskGroupActionsConfig);

                    /**
                     * 判断参数 TaskGroupActionsConfig 是否已赋值
                     * @return TaskGroupActionsConfig 是否已赋值
                     * 
                     */
                    bool TaskGroupActionsConfigHasBeenSet() const;

                private:

                    /**
                     * Instance object associated with the action group
                     */
                    std::vector<std::string> m_taskGroupInstances;
                    bool m_taskGroupInstancesHasBeenSet;

                    /**
                     * Action group name. If this parameter is left blank, the action group name in the template is used by default.
                     */
                    std::string m_taskGroupTitle;
                    bool m_taskGroupTitleHasBeenSet;

                    /**
                     * Action group description. If this parameter is left blank, the action group description in the template is used by default.
                     */
                    std::string m_taskGroupDescription;
                    bool m_taskGroupDescriptionHasBeenSet;

                    /**
                     * Action group execution mode. 1: sequential execution; 2: execution by stage. If this parameter is left blank, the action execution mode in the template is used by default.
                     */
                    uint64_t m_taskGroupMode;
                    bool m_taskGroupModeHasBeenSet;

                    /**
                     * Action parameters in the action group. If this field is left blank, the action parameters in the template is used by default. You only need to specify the action whose parameters are to be modified during configuration.
                     */
                    std::vector<TaskGroupActionConfig> m_taskGroupActionsConfig;
                    bool m_taskGroupActionsConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPCONFIG_H_
