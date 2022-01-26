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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PARSENOTIFICATIONRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PARSENOTIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WorkflowTask.h>
#include <tencentcloud/mps/v20190612/model/EditMediaTask.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ParseNotification response structure.
                */
                class ParseNotificationResponse : public AbstractModel
                {
                public:
                    ParseNotificationResponse();
                    ~ParseNotificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Supported event type. Valid values:
<li>WorkflowTask: Video workflow processing task.</li>
                     * @return EventType Supported event type. Valid values:
<li>WorkflowTask: Video workflow processing task.</li>
                     */
                    std::string GetEventType() const;

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Information of a video processing task. This field has a value only when `TaskType` is `WorkflowTask`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowTaskEvent Information of a video processing task. This field has a value only when `TaskType` is `WorkflowTask`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    WorkflowTask GetWorkflowTaskEvent() const;

                    /**
                     * 判断参数 WorkflowTaskEvent 是否已赋值
                     * @return WorkflowTaskEvent 是否已赋值
                     */
                    bool WorkflowTaskEventHasBeenSet() const;

                    /**
                     * 获取Video editing task information. This field has a value only when `TaskType` is `EditMediaTask`.
                     * @return EditMediaTaskEvent Video editing task information. This field has a value only when `TaskType` is `EditMediaTask`.
                     */
                    EditMediaTask GetEditMediaTaskEvent() const;

                    /**
                     * 判断参数 EditMediaTaskEvent 是否已赋值
                     * @return EditMediaTaskEvent 是否已赋值
                     */
                    bool EditMediaTaskEventHasBeenSet() const;

                    /**
                     * 获取The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     * @return SessionId The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     * @return SessionContext The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * Supported event type. Valid values:
<li>WorkflowTask: Video workflow processing task.</li>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Information of a video processing task. This field has a value only when `TaskType` is `WorkflowTask`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    WorkflowTask m_workflowTaskEvent;
                    bool m_workflowTaskEventHasBeenSet;

                    /**
                     * Video editing task information. This field has a value only when `TaskType` is `EditMediaTask`.
                     */
                    EditMediaTask m_editMediaTaskEvent;
                    bool m_editMediaTaskEventHasBeenSet;

                    /**
                     * The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PARSENOTIFICATIONRESPONSE_H_
