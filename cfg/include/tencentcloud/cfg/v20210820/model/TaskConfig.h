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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKCONFIG_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TaskGroupConfig.h>
#include <tencentcloud/cfg/v20210820/model/TagWithCreate.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task parameters that need to be configured when an experiment is created by using a template
                */
                class TaskConfig : public AbstractModel
                {
                public:
                    TaskConfig();
                    ~TaskConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Action group configurations. The number of configured action groups needs to be consistent with that in the template.
                     * @return TaskGroupsConfig Action group configurations. The number of configured action groups needs to be consistent with that in the template.
                     * 
                     */
                    std::vector<TaskGroupConfig> GetTaskGroupsConfig() const;

                    /**
                     * 设置Action group configurations. The number of configured action groups needs to be consistent with that in the template.
                     * @param _taskGroupsConfig Action group configurations. The number of configured action groups needs to be consistent with that in the template.
                     * 
                     */
                    void SetTaskGroupsConfig(const std::vector<TaskGroupConfig>& _taskGroupsConfig);

                    /**
                     * 判断参数 TaskGroupsConfig 是否已赋值
                     * @return TaskGroupsConfig 是否已赋值
                     * 
                     */
                    bool TaskGroupsConfigHasBeenSet() const;

                    /**
                     * 获取Experiment name after change. If this parameter is left blank, the template name is used by default.
                     * @return TaskTitle Experiment name after change. If this parameter is left blank, the template name is used by default.
                     * 
                     */
                    std::string GetTaskTitle() const;

                    /**
                     * 设置Experiment name after change. If this parameter is left blank, the template name is used by default.
                     * @param _taskTitle Experiment name after change. If this parameter is left blank, the template name is used by default.
                     * 
                     */
                    void SetTaskTitle(const std::string& _taskTitle);

                    /**
                     * 判断参数 TaskTitle 是否已赋值
                     * @return TaskTitle 是否已赋值
                     * 
                     */
                    bool TaskTitleHasBeenSet() const;

                    /**
                     * 获取Experiment description after change. If this parameter is left blank, the template description is used by default.
                     * @return TaskDescription Experiment description after change. If this parameter is left blank, the template description is used by default.
                     * 
                     */
                    std::string GetTaskDescription() const;

                    /**
                     * 设置Experiment description after change. If this parameter is left blank, the template description is used by default.
                     * @param _taskDescription Experiment description after change. If this parameter is left blank, the template description is used by default.
                     * 
                     */
                    void SetTaskDescription(const std::string& _taskDescription);

                    /**
                     * 判断参数 TaskDescription 是否已赋值
                     * @return TaskDescription 是否已赋值
                     * 
                     */
                    bool TaskDescriptionHasBeenSet() const;

                    /**
                     * 获取Experiment execution mode. 1: manual execution; 2: automatic execution. If this parameter is left blank, the template execution mode is used by default.
                     * @return TaskMode Experiment execution mode. 1: manual execution; 2: automatic execution. If this parameter is left blank, the template execution mode is used by default.
                     * 
                     */
                    uint64_t GetTaskMode() const;

                    /**
                     * 设置Experiment execution mode. 1: manual execution; 2: automatic execution. If this parameter is left blank, the template execution mode is used by default.
                     * @param _taskMode Experiment execution mode. 1: manual execution; 2: automatic execution. If this parameter is left blank, the template execution mode is used by default.
                     * 
                     */
                    void SetTaskMode(const uint64_t& _taskMode);

                    /**
                     * 判断参数 TaskMode 是否已赋值
                     * @return TaskMode 是否已赋值
                     * 
                     */
                    bool TaskModeHasBeenSet() const;

                    /**
                     * 获取Automatic pause time of the experiment, in minutes. If this parameter is left blank, the automatic pause time of the template is used by default.
                     * @return TaskPauseDuration Automatic pause time of the experiment, in minutes. If this parameter is left blank, the automatic pause time of the template is used by default.
                     * 
                     */
                    uint64_t GetTaskPauseDuration() const;

                    /**
                     * 设置Automatic pause time of the experiment, in minutes. If this parameter is left blank, the automatic pause time of the template is used by default.
                     * @param _taskPauseDuration Automatic pause time of the experiment, in minutes. If this parameter is left blank, the automatic pause time of the template is used by default.
                     * 
                     */
                    void SetTaskPauseDuration(const uint64_t& _taskPauseDuration);

                    /**
                     * 判断参数 TaskPauseDuration 是否已赋值
                     * @return TaskPauseDuration 是否已赋值
                     * 
                     */
                    bool TaskPauseDurationHasBeenSet() const;

                    /**
                     * 获取Experiment tag. If this parameter is left blank, the template tag is used by default.
                     * @return Tags Experiment tag. If this parameter is left blank, the template tag is used by default.
                     * 
                     */
                    std::vector<TagWithCreate> GetTags() const;

                    /**
                     * 设置Experiment tag. If this parameter is left blank, the template tag is used by default.
                     * @param _tags Experiment tag. If this parameter is left blank, the template tag is used by default.
                     * 
                     */
                    void SetTags(const std::vector<TagWithCreate>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Guardrail processing method. 1: roll back sequentially; 2: pause experiment.
                     * @return PolicyDealType Guardrail processing method. 1: roll back sequentially; 2: pause experiment.
                     * 
                     */
                    int64_t GetPolicyDealType() const;

                    /**
                     * 设置Guardrail processing method. 1: roll back sequentially; 2: pause experiment.
                     * @param _policyDealType Guardrail processing method. 1: roll back sequentially; 2: pause experiment.
                     * 
                     */
                    void SetPolicyDealType(const int64_t& _policyDealType);

                    /**
                     * 判断参数 PolicyDealType 是否已赋值
                     * @return PolicyDealType 是否已赋值
                     * 
                     */
                    bool PolicyDealTypeHasBeenSet() const;

                private:

                    /**
                     * Action group configurations. The number of configured action groups needs to be consistent with that in the template.
                     */
                    std::vector<TaskGroupConfig> m_taskGroupsConfig;
                    bool m_taskGroupsConfigHasBeenSet;

                    /**
                     * Experiment name after change. If this parameter is left blank, the template name is used by default.
                     */
                    std::string m_taskTitle;
                    bool m_taskTitleHasBeenSet;

                    /**
                     * Experiment description after change. If this parameter is left blank, the template description is used by default.
                     */
                    std::string m_taskDescription;
                    bool m_taskDescriptionHasBeenSet;

                    /**
                     * Experiment execution mode. 1: manual execution; 2: automatic execution. If this parameter is left blank, the template execution mode is used by default.
                     */
                    uint64_t m_taskMode;
                    bool m_taskModeHasBeenSet;

                    /**
                     * Automatic pause time of the experiment, in minutes. If this parameter is left blank, the automatic pause time of the template is used by default.
                     */
                    uint64_t m_taskPauseDuration;
                    bool m_taskPauseDurationHasBeenSet;

                    /**
                     * Experiment tag. If this parameter is left blank, the template tag is used by default.
                     */
                    std::vector<TagWithCreate> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Guardrail processing method. 1: roll back sequentially; 2: pause experiment.
                     */
                    int64_t m_policyDealType;
                    bool m_policyDealTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKCONFIG_H_
