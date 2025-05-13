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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATETASKVERSIONASYNCREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATETASKVERSIONASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BatchCreateTaskVersionDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * BatchCreateTaskVersionAsync request structure.
                */
                class BatchCreateTaskVersionAsyncRequest : public AbstractModel
                {
                public:
                    BatchCreateTaskVersionAsyncRequest();
                    ~BatchCreateTaskVersionAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task information
                     * @return Tasks Task information
                     * 
                     */
                    std::vector<BatchCreateTaskVersionDTO> GetTasks() const;

                    /**
                     * 设置Task information
                     * @param _tasks Task information
                     * 
                     */
                    void SetTasks(const std::vector<BatchCreateTaskVersionDTO>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

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
                     * 获取Specifies whether to run automatically
                     * @return AutoRun Specifies whether to run automatically
                     * 
                     */
                    bool GetAutoRun() const;

                    /**
                     * 设置Specifies whether to run automatically
                     * @param _autoRun Specifies whether to run automatically
                     * 
                     */
                    void SetAutoRun(const bool& _autoRun);

                    /**
                     * 判断参数 AutoRun 是否已赋值
                     * @return AutoRun 是否已赋值
                     * 
                     */
                    bool AutoRunHasBeenSet() const;

                    /**
                     * 获取Alert method: email-email; sms-sms; wecom-wecom
                     * @return AlarmWays Alert method: email-email; sms-sms; wecom-wecom
                     * 
                     */
                    std::string GetAlarmWays() const;

                    /**
                     * 设置Alert method: email-email; sms-sms; wecom-wecom
                     * @param _alarmWays Alert method: email-email; sms-sms; wecom-wecom
                     * 
                     */
                    void SetAlarmWays(const std::string& _alarmWays);

                    /**
                     * 判断参数 AlarmWays 是否已赋值
                     * @return AlarmWays 是否已赋值
                     * 
                     */
                    bool AlarmWaysHasBeenSet() const;

                    /**
                     * 获取Alarm object: 1. Project Administrator. 2. Task Owner
                     * @return AlarmRecipientTypes Alarm object: 1. Project Administrator. 2. Task Owner
                     * 
                     */
                    std::string GetAlarmRecipientTypes() const;

                    /**
                     * 设置Alarm object: 1. Project Administrator. 2. Task Owner
                     * @param _alarmRecipientTypes Alarm object: 1. Project Administrator. 2. Task Owner
                     * 
                     */
                    void SetAlarmRecipientTypes(const std::string& _alarmRecipientTypes);

                    /**
                     * 判断参数 AlarmRecipientTypes 是否已赋值
                     * @return AlarmRecipientTypes 是否已赋值
                     * 
                     */
                    bool AlarmRecipientTypesHasBeenSet() const;

                    /**
                     * 获取Whether validation is required to check if the parent task has been submitted to scheduling
                     * @return NeedCheckParentSubmitted Whether validation is required to check if the parent task has been submitted to scheduling
                     * 
                     */
                    bool GetNeedCheckParentSubmitted() const;

                    /**
                     * 设置Whether validation is required to check if the parent task has been submitted to scheduling
                     * @param _needCheckParentSubmitted Whether validation is required to check if the parent task has been submitted to scheduling
                     * 
                     */
                    void SetNeedCheckParentSubmitted(const bool& _needCheckParentSubmitted);

                    /**
                     * 判断参数 NeedCheckParentSubmitted 是否已赋值
                     * @return NeedCheckParentSubmitted 是否已赋值
                     * 
                     */
                    bool NeedCheckParentSubmittedHasBeenSet() const;

                private:

                    /**
                     * Task information
                     */
                    std::vector<BatchCreateTaskVersionDTO> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Specifies whether to run automatically
                     */
                    bool m_autoRun;
                    bool m_autoRunHasBeenSet;

                    /**
                     * Alert method: email-email; sms-sms; wecom-wecom
                     */
                    std::string m_alarmWays;
                    bool m_alarmWaysHasBeenSet;

                    /**
                     * Alarm object: 1. Project Administrator. 2. Task Owner
                     */
                    std::string m_alarmRecipientTypes;
                    bool m_alarmRecipientTypesHasBeenSet;

                    /**
                     * Whether validation is required to check if the parent task has been submitted to scheduling
                     */
                    bool m_needCheckParentSubmitted;
                    bool m_needCheckParentSubmittedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATETASKVERSIONASYNCREQUEST_H_
