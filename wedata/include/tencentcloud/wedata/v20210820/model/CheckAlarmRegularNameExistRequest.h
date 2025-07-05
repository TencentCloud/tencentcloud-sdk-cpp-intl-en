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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKALARMREGULARNAMEEXISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKALARMREGULARNAMEEXISTREQUEST_H_

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
                * CheckAlarmRegularNameExist request structure.
                */
                class CheckAlarmRegularNameExistRequest : public AbstractModel
                {
                public:
                    CheckAlarmRegularNameExistRequest();
                    ~CheckAlarmRegularNameExistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project name
                     * @return ProjectId Project name
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project name
                     * @param _projectId Project name
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
                     * 获取Rule name
                     * @return AlarmRegularName Rule name
                     * 
                     */
                    std::string GetAlarmRegularName() const;

                    /**
                     * 设置Rule name
                     * @param _alarmRegularName Rule name
                     * 
                     */
                    void SetAlarmRegularName(const std::string& _alarmRegularName);

                    /**
                     * 判断参数 AlarmRegularName 是否已赋值
                     * @return AlarmRegularName 是否已赋值
                     * 
                     */
                    bool AlarmRegularNameHasBeenSet() const;

                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * @deprecated
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * @deprecated
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * @deprecated
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Primary key ID
                     * @return Id Primary key ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Primary key ID
                     * @param _id Primary key ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Task type: 201.Real-time, 202.Offline
                     * @return TaskType Task type: 201.Real-time, 202.Offline
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置Task type: 201.Real-time, 202.Offline
                     * @param _taskType Task type: 201.Real-time, 202.Offline
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Monitored Object Type (1: All Tasks, 2: Assigned Task, 3: Designated Responsible Person, 4: Specified Resource Group)
                     * @return MonitorType Monitored Object Type (1: All Tasks, 2: Assigned Task, 3: Designated Responsible Person, 4: Specified Resource Group)
                     * 
                     */
                    uint64_t GetMonitorType() const;

                    /**
                     * 设置Monitored Object Type (1: All Tasks, 2: Assigned Task, 3: Designated Responsible Person, 4: Specified Resource Group)
                     * @param _monitorType Monitored Object Type (1: All Tasks, 2: Assigned Task, 3: Designated Responsible Person, 4: Specified Resource Group)
                     * 
                     */
                    void SetMonitorType(const uint64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                private:

                    /**
                     * Project name
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_alarmRegularName;
                    bool m_alarmRegularNameHasBeenSet;

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Primary key ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Task type: 201.Real-time, 202.Offline
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Monitored Object Type (1: All Tasks, 2: Assigned Task, 3: Designated Responsible Person, 4: Specified Resource Group)
                     */
                    uint64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKALARMREGULARNAMEEXISTREQUEST_H_
