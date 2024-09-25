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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_CREATETASKFROMACTIONREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_CREATETASKFROMACTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateTaskFromAction request structure.
                */
                class CreateTaskFromActionRequest : public AbstractModel
                {
                public:
                    CreateTaskFromActionRequest();
                    ~CreateTaskFromActionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Action ID, which can be obtained by using the action list API DescribeActionLibraryList.
                     * @return TaskActionId Action ID, which can be obtained by using the action list API DescribeActionLibraryList.
                     * 
                     */
                    uint64_t GetTaskActionId() const;

                    /**
                     * 设置Action ID, which can be obtained by using the action list API DescribeActionLibraryList.
                     * @param _taskActionId Action ID, which can be obtained by using the action list API DescribeActionLibraryList.
                     * 
                     */
                    void SetTaskActionId(const uint64_t& _taskActionId);

                    /**
                     * 判断参数 TaskActionId 是否已赋值
                     * @return TaskActionId 是否已赋值
                     * 
                     */
                    bool TaskActionIdHasBeenSet() const;

                    /**
                     * 获取ID of the instance participating in the experiment.
                     * @return TaskInstances ID of the instance participating in the experiment.
                     * 
                     */
                    std::vector<std::string> GetTaskInstances() const;

                    /**
                     * 设置ID of the instance participating in the experiment.
                     * @param _taskInstances ID of the instance participating in the experiment.
                     * 
                     */
                    void SetTaskInstances(const std::vector<std::string>& _taskInstances);

                    /**
                     * 判断参数 TaskInstances 是否已赋值
                     * @return TaskInstances 是否已赋值
                     * 
                     */
                    bool TaskInstancesHasBeenSet() const;

                    /**
                     * 获取Experiment name. If this parameter is left blank, the action name is used by default.
                     * @return TaskTitle Experiment name. If this parameter is left blank, the action name is used by default.
                     * 
                     */
                    std::string GetTaskTitle() const;

                    /**
                     * 设置Experiment name. If this parameter is left blank, the action name is used by default.
                     * @param _taskTitle Experiment name. If this parameter is left blank, the action name is used by default.
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
                     * 获取Experiment description. If this parameter is left blank, the action description is used by default.
                     * @return TaskDescription Experiment description. If this parameter is left blank, the action description is used by default.
                     * 
                     */
                    std::string GetTaskDescription() const;

                    /**
                     * 设置Experiment description. If this parameter is left blank, the action description is used by default.
                     * @param _taskDescription Experiment description. If this parameter is left blank, the action description is used by default.
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
                     * 获取General action parameters, which need to be passed in after JSON serialization. The parameters can be obtained by using the action details API DescribeActionFieldConfigList. If this field is left blank, the default action parameters are used by default.
                     * @return TaskActionGeneralConfiguration General action parameters, which need to be passed in after JSON serialization. The parameters can be obtained by using the action details API DescribeActionFieldConfigList. If this field is left blank, the default action parameters are used by default.
                     * 
                     */
                    std::string GetTaskActionGeneralConfiguration() const;

                    /**
                     * 设置General action parameters, which need to be passed in after JSON serialization. The parameters can be obtained by using the action details API DescribeActionFieldConfigList. If this field is left blank, the default action parameters are used by default.
                     * @param _taskActionGeneralConfiguration General action parameters, which need to be passed in after JSON serialization. The parameters can be obtained by using the action details API DescribeActionFieldConfigList. If this field is left blank, the default action parameters are used by default.
                     * 
                     */
                    void SetTaskActionGeneralConfiguration(const std::string& _taskActionGeneralConfiguration);

                    /**
                     * 判断参数 TaskActionGeneralConfiguration 是否已赋值
                     * @return TaskActionGeneralConfiguration 是否已赋值
                     * 
                     */
                    bool TaskActionGeneralConfigurationHasBeenSet() const;

                    /**
                     * 获取Action custom parameters need to be passed in as json serialization. They can be obtained from the action details interface DescribeActionFieldConfigList. If not filled in, the default action parameters will be used. Note: Required parameters have no default values. Be sure to pass in valid values.
                     * @return TaskActionCustomConfiguration Action custom parameters need to be passed in as json serialization. They can be obtained from the action details interface DescribeActionFieldConfigList. If not filled in, the default action parameters will be used. Note: Required parameters have no default values. Be sure to pass in valid values.
                     * 
                     */
                    std::string GetTaskActionCustomConfiguration() const;

                    /**
                     * 设置Action custom parameters need to be passed in as json serialization. They can be obtained from the action details interface DescribeActionFieldConfigList. If not filled in, the default action parameters will be used. Note: Required parameters have no default values. Be sure to pass in valid values.
                     * @param _taskActionCustomConfiguration Action custom parameters need to be passed in as json serialization. They can be obtained from the action details interface DescribeActionFieldConfigList. If not filled in, the default action parameters will be used. Note: Required parameters have no default values. Be sure to pass in valid values.
                     * 
                     */
                    void SetTaskActionCustomConfiguration(const std::string& _taskActionCustomConfiguration);

                    /**
                     * 判断参数 TaskActionCustomConfiguration 是否已赋值
                     * @return TaskActionCustomConfiguration 是否已赋值
                     * 
                     */
                    bool TaskActionCustomConfigurationHasBeenSet() const;

                    /**
                     * 获取Automatic experiment pause time, in minutes. If this parameter is left blank, the default value 60 is used.
                     * @return TaskPauseDuration Automatic experiment pause time, in minutes. If this parameter is left blank, the default value 60 is used.
                     * 
                     */
                    uint64_t GetTaskPauseDuration() const;

                    /**
                     * 设置Automatic experiment pause time, in minutes. If this parameter is left blank, the default value 60 is used.
                     * @param _taskPauseDuration Automatic experiment pause time, in minutes. If this parameter is left blank, the default value 60 is used.
                     * 
                     */
                    void SetTaskPauseDuration(const uint64_t& _taskPauseDuration);

                    /**
                     * 判断参数 TaskPauseDuration 是否已赋值
                     * @return TaskPauseDuration 是否已赋值
                     * 
                     */
                    bool TaskPauseDurationHasBeenSet() const;

                private:

                    /**
                     * Action ID, which can be obtained by using the action list API DescribeActionLibraryList.
                     */
                    uint64_t m_taskActionId;
                    bool m_taskActionIdHasBeenSet;

                    /**
                     * ID of the instance participating in the experiment.
                     */
                    std::vector<std::string> m_taskInstances;
                    bool m_taskInstancesHasBeenSet;

                    /**
                     * Experiment name. If this parameter is left blank, the action name is used by default.
                     */
                    std::string m_taskTitle;
                    bool m_taskTitleHasBeenSet;

                    /**
                     * Experiment description. If this parameter is left blank, the action description is used by default.
                     */
                    std::string m_taskDescription;
                    bool m_taskDescriptionHasBeenSet;

                    /**
                     * General action parameters, which need to be passed in after JSON serialization. The parameters can be obtained by using the action details API DescribeActionFieldConfigList. If this field is left blank, the default action parameters are used by default.
                     */
                    std::string m_taskActionGeneralConfiguration;
                    bool m_taskActionGeneralConfigurationHasBeenSet;

                    /**
                     * Action custom parameters need to be passed in as json serialization. They can be obtained from the action details interface DescribeActionFieldConfigList. If not filled in, the default action parameters will be used. Note: Required parameters have no default values. Be sure to pass in valid values.
                     */
                    std::string m_taskActionCustomConfiguration;
                    bool m_taskActionCustomConfigurationHasBeenSet;

                    /**
                     * Automatic experiment pause time, in minutes. If this parameter is left blank, the default value 60 is used.
                     */
                    uint64_t m_taskPauseDuration;
                    bool m_taskPauseDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_CREATETASKFROMACTIONREQUEST_H_
