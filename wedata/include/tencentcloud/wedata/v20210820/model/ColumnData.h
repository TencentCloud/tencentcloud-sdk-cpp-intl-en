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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNDATA_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * ColumnItem
                */
                class ColumnData : public AbstractModel
                {
                public:
                    ColumnData();
                    ~ColumnData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ColumnName1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EventName ColumnName1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置ColumnName1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _eventName ColumnName1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取ColumnName1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EventProjectName ColumnName1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEventProjectName() const;

                    /**
                     * 设置ColumnName1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _eventProjectName ColumnName1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEventProjectName(const std::string& _eventProjectName);

                    /**
                     * 判断参数 EventProjectName 是否已赋值
                     * @return EventProjectName 是否已赋值
                     * 
                     */
                    bool EventProjectNameHasBeenSet() const;

                    /**
                     * 获取1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Type 1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _type 1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CurRunDate 1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _curRunDate 1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskId 1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskId 1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return State 1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _state 1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EventType 1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _eventType 1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskName Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskName Task NameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectName Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectName Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * ColumnName1
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * ColumnName1
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_eventProjectName;
                    bool m_eventProjectNameHasBeenSet;

                    /**
                     * 1
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 1
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 1
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 1
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 1
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNDATA_H_
