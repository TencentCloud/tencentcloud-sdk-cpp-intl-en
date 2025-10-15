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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASK_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TaskBaseAttribute.h>
#include <tencentcloud/wedata/v20250806/model/TaskConfiguration.h>
#include <tencentcloud/wedata/v20250806/model/TaskSchedulerConfiguration.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Task object.
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Describes the basic attributes of the task.
                     * @return TaskBaseAttribute Describes the basic attributes of the task.
                     * 
                     */
                    TaskBaseAttribute GetTaskBaseAttribute() const;

                    /**
                     * 设置Describes the basic attributes of the task.
                     * @param _taskBaseAttribute Describes the basic attributes of the task.
                     * 
                     */
                    void SetTaskBaseAttribute(const TaskBaseAttribute& _taskBaseAttribute);

                    /**
                     * 判断参数 TaskBaseAttribute 是否已赋值
                     * @return TaskBaseAttribute 是否已赋值
                     * 
                     */
                    bool TaskBaseAttributeHasBeenSet() const;

                    /**
                     * 获取Task configurations.

                     * @return TaskConfiguration Task configurations.

                     * 
                     */
                    TaskConfiguration GetTaskConfiguration() const;

                    /**
                     * 设置Task configurations.

                     * @param _taskConfiguration Task configurations.

                     * 
                     */
                    void SetTaskConfiguration(const TaskConfiguration& _taskConfiguration);

                    /**
                     * 判断参数 TaskConfiguration 是否已赋值
                     * @return TaskConfiguration 是否已赋值
                     * 
                     */
                    bool TaskConfigurationHasBeenSet() const;

                    /**
                     * 获取Specifies task scheduling configuration.

                     * @return TaskSchedulerConfiguration Specifies task scheduling configuration.

                     * 
                     */
                    TaskSchedulerConfiguration GetTaskSchedulerConfiguration() const;

                    /**
                     * 设置Specifies task scheduling configuration.

                     * @param _taskSchedulerConfiguration Specifies task scheduling configuration.

                     * 
                     */
                    void SetTaskSchedulerConfiguration(const TaskSchedulerConfiguration& _taskSchedulerConfiguration);

                    /**
                     * 判断参数 TaskSchedulerConfiguration 是否已赋值
                     * @return TaskSchedulerConfiguration 是否已赋值
                     * 
                     */
                    bool TaskSchedulerConfigurationHasBeenSet() const;

                private:

                    /**
                     * Describes the basic attributes of the task.
                     */
                    TaskBaseAttribute m_taskBaseAttribute;
                    bool m_taskBaseAttributeHasBeenSet;

                    /**
                     * Task configurations.

                     */
                    TaskConfiguration m_taskConfiguration;
                    bool m_taskConfigurationHasBeenSet;

                    /**
                     * Specifies task scheduling configuration.

                     */
                    TaskSchedulerConfiguration m_taskSchedulerConfiguration;
                    bool m_taskSchedulerConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASK_H_
