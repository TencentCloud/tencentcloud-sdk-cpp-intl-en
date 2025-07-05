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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEOFFLINETASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEOFFLINETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateOfflineTask request structure.
                */
                class CreateOfflineTaskRequest : public AbstractModel
                {
                public:
                    CreateOfflineTaskRequest();
                    ~CreateOfflineTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
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
                     * 获取Interval, optional, default is 1. Not null. Default is 1
                     * @return CycleStep Interval, optional, default is 1. Not null. Default is 1
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置Interval, optional, default is 1. Not null. Default is 1
                     * @param _cycleStep Interval, optional, default is 1. Not null. Default is 1
                     * 
                     */
                    void SetCycleStep(const int64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     * 
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取Delayed Execution Time, in minutes
                     * @return DelayTime Delayed Execution Time, in minutes
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置Delayed Execution Time, in minutes
                     * @param _delayTime Delayed Execution Time, in minutes
                     * 
                     */
                    void SetDelayTime(const int64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取Task End Data Time. Not Empty. Default to Current Time
                     * @return EndTime Task End Data Time. Not Empty. Default to Current Time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task End Data Time. Not Empty. Default to Current Time
                     * @param _endTime Task End Data Time. Not Empty. Default to Current Time
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
                     * 获取Remarks
                     * @return Notes Remarks
                     * 
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置Remarks
                     * @param _notes Remarks
                     * 
                     */
                    void SetNotes(const std::string& _notes);

                    /**
                     * 判断参数 Notes 是否已赋值
                     * @return Notes 是否已赋值
                     * 
                     */
                    bool NotesHasBeenSet() const;

                    /**
                     * 获取Current date
                     * @return StartTime Current date
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Current date
                     * @param _startTime Current date
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Task Name
                     * @return TaskName Task Name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task Name
                     * @param _taskName Task Name
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Keep it consistent with the previous call to the scheduling interface 27
                     * @return TypeId Keep it consistent with the previous call to the scheduling interface 27
                     * 
                     */
                    int64_t GetTypeId() const;

                    /**
                     * 设置Keep it consistent with the previous call to the scheduling interface 27
                     * @param _typeId Keep it consistent with the previous call to the scheduling interface 27
                     * 
                     */
                    void SetTypeId(const int64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取Time Specification, for monthly tasks specify days like 1,3, then enter 1,3. Not Empty. Default "" Monthly Task: For specific days like "1,3", specifying the end of the month cannot be combined with specific dates, can only be "L"
                     * @return TaskAction Time Specification, for monthly tasks specify days like 1,3, then enter 1,3. Not Empty. Default "" Monthly Task: For specific days like "1,3", specifying the end of the month cannot be combined with specific dates, can only be "L"
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置Time Specification, for monthly tasks specify days like 1,3, then enter 1,3. Not Empty. Default "" Monthly Task: For specific days like "1,3", specifying the end of the month cannot be combined with specific dates, can only be "L"
                     * @param _taskAction Time Specification, for monthly tasks specify days like 1,3, then enter 1,3. Not Empty. Default "" Monthly Task: For specific days like "1,3", specifying the end of the month cannot be combined with specific dates, can only be "L"
                     * 
                     */
                    void SetTaskAction(const std::string& _taskAction);

                    /**
                     * 判断参数 TaskAction 是否已赋值
                     * @return TaskAction 是否已赋值
                     * 
                     */
                    bool TaskActionHasBeenSet() const;

                    /**
                     * 获取Distinguish between canvas and form
                     * @return TaskMode Distinguish between canvas and form
                     * 
                     */
                    std::string GetTaskMode() const;

                    /**
                     * 设置Distinguish between canvas and form
                     * @param _taskMode Distinguish between canvas and form
                     * 
                     */
                    void SetTaskMode(const std::string& _taskMode);

                    /**
                     * 判断参数 TaskMode 是否已赋值
                     * @return TaskMode 是否已赋值
                     * 
                     */
                    bool TaskModeHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Interval, optional, default is 1. Not null. Default is 1
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * Delayed Execution Time, in minutes
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * Task End Data Time. Not Empty. Default to Current Time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * Current date
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task Name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Keep it consistent with the previous call to the scheduling interface 27
                     */
                    int64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * Time Specification, for monthly tasks specify days like 1,3, then enter 1,3. Not Empty. Default "" Monthly Task: For specific days like "1,3", specifying the end of the month cannot be combined with specific dates, can only be "L"
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * Distinguish between canvas and form
                     */
                    std::string m_taskMode;
                    bool m_taskModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEOFFLINETASKREQUEST_H_
