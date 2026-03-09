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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/CreateTriggerTaskBaseAttribute.h>
#include <tencentcloud/wedata/v20250806/model/CreateTriggerTaskConfiguration.h>
#include <tencentcloud/wedata/v20250806/model/CreateTriggerTaskSchedulerConfiguration.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * CreateTriggerTask request structure.
                */
                class CreateTriggerTaskRequest : public AbstractModel
                {
                public:
                    CreateTriggerTaskRequest();
                    ~CreateTriggerTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Task basic attributes.
                     * @return TriggerTaskBaseAttribute Task basic attributes.
                     * 
                     */
                    CreateTriggerTaskBaseAttribute GetTriggerTaskBaseAttribute() const;

                    /**
                     * 设置Task basic attributes.
                     * @param _triggerTaskBaseAttribute Task basic attributes.
                     * 
                     */
                    void SetTriggerTaskBaseAttribute(const CreateTriggerTaskBaseAttribute& _triggerTaskBaseAttribute);

                    /**
                     * 判断参数 TriggerTaskBaseAttribute 是否已赋值
                     * @return TriggerTaskBaseAttribute 是否已赋值
                     * 
                     */
                    bool TriggerTaskBaseAttributeHasBeenSet() const;

                    /**
                     * 获取Task configurations.
                     * @return TriggerTaskConfiguration Task configurations.
                     * 
                     */
                    CreateTriggerTaskConfiguration GetTriggerTaskConfiguration() const;

                    /**
                     * 设置Task configurations.
                     * @param _triggerTaskConfiguration Task configurations.
                     * 
                     */
                    void SetTriggerTaskConfiguration(const CreateTriggerTaskConfiguration& _triggerTaskConfiguration);

                    /**
                     * 判断参数 TriggerTaskConfiguration 是否已赋值
                     * @return TriggerTaskConfiguration 是否已赋值
                     * 
                     */
                    bool TriggerTaskConfigurationHasBeenSet() const;

                    /**
                     * 获取Task scheduling configuration.
                     * @return TriggerTaskSchedulerConfiguration Task scheduling configuration.
                     * 
                     */
                    CreateTriggerTaskSchedulerConfiguration GetTriggerTaskSchedulerConfiguration() const;

                    /**
                     * 设置Task scheduling configuration.
                     * @param _triggerTaskSchedulerConfiguration Task scheduling configuration.
                     * 
                     */
                    void SetTriggerTaskSchedulerConfiguration(const CreateTriggerTaskSchedulerConfiguration& _triggerTaskSchedulerConfiguration);

                    /**
                     * 判断参数 TriggerTaskSchedulerConfiguration 是否已赋值
                     * @return TriggerTaskSchedulerConfiguration 是否已赋值
                     * 
                     */
                    bool TriggerTaskSchedulerConfigurationHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task basic attributes.
                     */
                    CreateTriggerTaskBaseAttribute m_triggerTaskBaseAttribute;
                    bool m_triggerTaskBaseAttributeHasBeenSet;

                    /**
                     * Task configurations.
                     */
                    CreateTriggerTaskConfiguration m_triggerTaskConfiguration;
                    bool m_triggerTaskConfigurationHasBeenSet;

                    /**
                     * Task scheduling configuration.
                     */
                    CreateTriggerTaskSchedulerConfiguration m_triggerTaskSchedulerConfiguration;
                    bool m_triggerTaskSchedulerConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERTASKREQUEST_H_
