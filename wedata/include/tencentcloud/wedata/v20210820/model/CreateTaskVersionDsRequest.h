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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKVERSIONDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKVERSIONDSREQUEST_H_

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
                * CreateTaskVersionDs request structure.
                */
                class CreateTaskVersionDsRequest : public AbstractModel
                {
                public:
                    CreateTaskVersionDsRequest();
                    ~CreateTaskVersionDsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return Task Task ID
                     * 
                     */
                    BatchCreateTaskVersionDTO GetTask() const;

                    /**
                     * 设置Task ID
                     * @param _task Task ID
                     * 
                     */
                    void SetTask(const BatchCreateTaskVersionDTO& _task);

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     * 
                     */
                    bool TaskHasBeenSet() const;

                    /**
                     * 获取Whether to verify that the parent task has been submitted for scheduling
                     * @return NeedCheckParentSubmitted Whether to verify that the parent task has been submitted for scheduling
                     * 
                     */
                    bool GetNeedCheckParentSubmitted() const;

                    /**
                     * 设置Whether to verify that the parent task has been submitted for scheduling
                     * @param _needCheckParentSubmitted Whether to verify that the parent task has been submitted for scheduling
                     * 
                     */
                    void SetNeedCheckParentSubmitted(const bool& _needCheckParentSubmitted);

                    /**
                     * 判断参数 NeedCheckParentSubmitted 是否已赋值
                     * @return NeedCheckParentSubmitted 是否已赋值
                     * 
                     */
                    bool NeedCheckParentSubmittedHasBeenSet() const;

                    /**
                     * 获取Automatic Execution
                     * @return AutoRun Automatic Execution
                     * 
                     */
                    bool GetAutoRun() const;

                    /**
                     * 设置Automatic Execution
                     * @param _autoRun Automatic Execution
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
                     * 获取Request Source, WEB frontend; CLIENT client
                     * @return RequestFromSource Request Source, WEB frontend; CLIENT client
                     * 
                     */
                    std::string GetRequestFromSource() const;

                    /**
                     * 设置Request Source, WEB frontend; CLIENT client
                     * @param _requestFromSource Request Source, WEB frontend; CLIENT client
                     * 
                     */
                    void SetRequestFromSource(const std::string& _requestFromSource);

                    /**
                     * 判断参数 RequestFromSource 是否已赋值
                     * @return RequestFromSource 是否已赋值
                     * 
                     */
                    bool RequestFromSourceHasBeenSet() const;

                    /**
                     * 获取Alert Method: email-Email; sms-SMS; wecom-WeCom
                     * @return AlarmWays Alert Method: email-Email; sms-SMS; wecom-WeCom
                     * 
                     */
                    std::string GetAlarmWays() const;

                    /**
                     * 设置Alert Method: email-Email; sms-SMS; wecom-WeCom
                     * @param _alarmWays Alert Method: email-Email; sms-SMS; wecom-WeCom
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
                     * 获取Alert Object: 1-Project Administrator, 2-Task Owner
                     * @return AlarmRecipientTypes Alert Object: 1-Project Administrator, 2-Task Owner
                     * 
                     */
                    std::string GetAlarmRecipientTypes() const;

                    /**
                     * 设置Alert Object: 1-Project Administrator, 2-Task Owner
                     * @param _alarmRecipientTypes Alert Object: 1-Project Administrator, 2-Task Owner
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
                     * 获取Whether to verify circular dependencies, default is true. If false is passed after successful validation using CheckTaskCycleLink and CheckTaskCycleConfiguration interfaces, the back-end server will not perform validation
                     * @return EnableCheckTaskCycleLink Whether to verify circular dependencies, default is true. If false is passed after successful validation using CheckTaskCycleLink and CheckTaskCycleConfiguration interfaces, the back-end server will not perform validation
                     * 
                     */
                    bool GetEnableCheckTaskCycleLink() const;

                    /**
                     * 设置Whether to verify circular dependencies, default is true. If false is passed after successful validation using CheckTaskCycleLink and CheckTaskCycleConfiguration interfaces, the back-end server will not perform validation
                     * @param _enableCheckTaskCycleLink Whether to verify circular dependencies, default is true. If false is passed after successful validation using CheckTaskCycleLink and CheckTaskCycleConfiguration interfaces, the back-end server will not perform validation
                     * 
                     */
                    void SetEnableCheckTaskCycleLink(const bool& _enableCheckTaskCycleLink);

                    /**
                     * 判断参数 EnableCheckTaskCycleLink 是否已赋值
                     * @return EnableCheckTaskCycleLink 是否已赋值
                     * 
                     */
                    bool EnableCheckTaskCycleLinkHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    BatchCreateTaskVersionDTO m_task;
                    bool m_taskHasBeenSet;

                    /**
                     * Whether to verify that the parent task has been submitted for scheduling
                     */
                    bool m_needCheckParentSubmitted;
                    bool m_needCheckParentSubmittedHasBeenSet;

                    /**
                     * Automatic Execution
                     */
                    bool m_autoRun;
                    bool m_autoRunHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Request Source, WEB frontend; CLIENT client
                     */
                    std::string m_requestFromSource;
                    bool m_requestFromSourceHasBeenSet;

                    /**
                     * Alert Method: email-Email; sms-SMS; wecom-WeCom
                     */
                    std::string m_alarmWays;
                    bool m_alarmWaysHasBeenSet;

                    /**
                     * Alert Object: 1-Project Administrator, 2-Task Owner
                     */
                    std::string m_alarmRecipientTypes;
                    bool m_alarmRecipientTypesHasBeenSet;

                    /**
                     * Whether to verify circular dependencies, default is true. If false is passed after successful validation using CheckTaskCycleLink and CheckTaskCycleConfiguration interfaces, the back-end server will not perform validation
                     */
                    bool m_enableCheckTaskCycleLink;
                    bool m_enableCheckTaskCycleLinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKVERSIONDSREQUEST_H_
