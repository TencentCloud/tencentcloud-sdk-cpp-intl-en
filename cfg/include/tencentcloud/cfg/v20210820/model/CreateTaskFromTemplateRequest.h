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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_CREATETASKFROMTEMPLATEREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_CREATETASKFROMTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TaskConfig.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateTaskFromTemplate request structure.
                */
                class CreateTaskFromTemplateRequest : public AbstractModel
                {
                public:
                    CreateTaskFromTemplateRequest();
                    ~CreateTaskFromTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template ID retrieved from the template library
                     * @return TemplateId Template ID retrieved from the template library
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置Template ID retrieved from the template library
                     * @param _templateId Template ID retrieved from the template library
                     * 
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Experiment configuration parameters
                     * @return TaskConfig Experiment configuration parameters
                     * 
                     */
                    TaskConfig GetTaskConfig() const;

                    /**
                     * 设置Experiment configuration parameters
                     * @param _taskConfig Experiment configuration parameters
                     * 
                     */
                    void SetTaskConfig(const TaskConfig& _taskConfig);

                    /**
                     * 判断参数 TaskConfig 是否已赋值
                     * @return TaskConfig 是否已赋值
                     * 
                     */
                    bool TaskConfigHasBeenSet() const;

                private:

                    /**
                     * Template ID retrieved from the template library
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Experiment configuration parameters
                     */
                    TaskConfig m_taskConfig;
                    bool m_taskConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_CREATETASKFROMTEMPLATEREQUEST_H_
