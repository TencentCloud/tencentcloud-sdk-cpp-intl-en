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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_STARTINTEGRATIONTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_STARTINTEGRATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * StartIntegrationTask request structure.
                */
                class StartIntegrationTaskRequest : public AbstractModel
                {
                public:
                    StartIntegrationTaskRequest();
                    ~StartIntegrationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
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
                     * 获取Event type (START, STOP, SUSPEND, RESUME, COMMIT, TIMESTAMP)
                     * @return Event Event type (START, STOP, SUSPEND, RESUME, COMMIT, TIMESTAMP)
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置Event type (START, STOP, SUSPEND, RESUME, COMMIT, TIMESTAMP)
                     * @param _event Event type (START, STOP, SUSPEND, RESUME, COMMIT, TIMESTAMP)
                     * 
                     */
                    void SetEvent(const std::string& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取Additional parameters
                     * @return ExtConfig Additional parameters
                     * 
                     */
                    std::vector<RecordField> GetExtConfig() const;

                    /**
                     * 设置Additional parameters
                     * @param _extConfig Additional parameters
                     * 
                     */
                    void SetExtConfig(const std::vector<RecordField>& _extConfig);

                    /**
                     * 判断参数 ExtConfig 是否已赋值
                     * @return ExtConfig 是否已赋值
                     * 
                     */
                    bool ExtConfigHasBeenSet() const;

                    /**
                     * 获取Operation Type Description
                     * @return EventDesc Operation Type Description
                     * 
                     */
                    std::string GetEventDesc() const;

                    /**
                     * 设置Operation Type Description
                     * @param _eventDesc Operation Type Description
                     * 
                     */
                    void SetEventDesc(const std::string& _eventDesc);

                    /**
                     * 判断参数 EventDesc 是否已赋值
                     * @return EventDesc 是否已赋值
                     * 
                     */
                    bool EventDescHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Event type (START, STOP, SUSPEND, RESUME, COMMIT, TIMESTAMP)
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * Additional parameters
                     */
                    std::vector<RecordField> m_extConfig;
                    bool m_extConfigHasBeenSet;

                    /**
                     * Operation Type Description
                     */
                    std::string m_eventDesc;
                    bool m_eventDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_STARTINTEGRATIONTASKREQUEST_H_
