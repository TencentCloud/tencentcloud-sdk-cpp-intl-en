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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RELATETASK_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RELATETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/BriefTask.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Task info of data source.
                */
                class RelateTask : public AbstractModel
                {
                public:
                    RelateTask();
                    ~RelateTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task type

-OfflineIntegration --- offline integration task.
-RealtimeIntegration --- real-time integration task.
-DataDevelopment - data development task.
-DataQuality - data quality tasks.
-DataService - data service task.
-MetadataCollection --- metadata collection task.
                     * @return TaskType Task type

-OfflineIntegration --- offline integration task.
-RealtimeIntegration --- real-time integration task.
-DataDevelopment - data development task.
-DataQuality - data quality tasks.
-DataService - data service task.
-MetadataCollection --- metadata collection task.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type

-OfflineIntegration --- offline integration task.
-RealtimeIntegration --- real-time integration task.
-DataDevelopment - data development task.
-DataQuality - data quality tasks.
-DataService - data service task.
-MetadataCollection --- metadata collection task.
                     * @param _taskType Task type

-OfflineIntegration --- offline integration task.
-RealtimeIntegration --- real-time integration task.
-DataDevelopment - data development task.
-DataQuality - data quality tasks.
-DataService - data service task.
-MetadataCollection --- metadata collection task.
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Number of Tasks
                     * @return TaskNum Number of Tasks
                     * 
                     */
                    int64_t GetTaskNum() const;

                    /**
                     * 设置Number of Tasks
                     * @param _taskNum Number of Tasks
                     * 
                     */
                    void SetTaskNum(const int64_t& _taskNum);

                    /**
                     * 判断参数 TaskNum 是否已赋值
                     * @return TaskNum 是否已赋值
                     * 
                     */
                    bool TaskNumHasBeenSet() const;

                    /**
                     * 获取Task details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskList Task details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BriefTask> GetTaskList() const;

                    /**
                     * 设置Task details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskList Task details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskList(const std::vector<BriefTask>& _taskList);

                    /**
                     * 判断参数 TaskList 是否已赋值
                     * @return TaskList 是否已赋值
                     * 
                     */
                    bool TaskListHasBeenSet() const;

                private:

                    /**
                     * Task type

-OfflineIntegration --- offline integration task.
-RealtimeIntegration --- real-time integration task.
-DataDevelopment - data development task.
-DataQuality - data quality tasks.
-DataService - data service task.
-MetadataCollection --- metadata collection task.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Number of Tasks
                     */
                    int64_t m_taskNum;
                    bool m_taskNumHasBeenSet;

                    /**
                     * Task details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BriefTask> m_taskList;
                    bool m_taskListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RELATETASK_H_
