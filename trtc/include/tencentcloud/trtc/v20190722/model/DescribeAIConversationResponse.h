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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEAICONVERSATIONRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEAICONVERSATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeAIConversation response structure.
                */
                class DescribeAIConversationResponse : public AbstractModel
                {
                public:
                    DescribeAIConversationResponse();
                    ~DescribeAIConversationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The time when the task starts.
                     * @return StartTime The time when the task starts.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Task status. There are 4 values: 1. Idle means the task has not started 2. Preparing means the task is being prepared 3. InProgress means the task is running 4. Stopped means the task has stopped and resources are being cleaned up
                     * @return Status Task status. There are 4 values: 1. Idle means the task has not started 2. Preparing means the task is being prepared 3. InProgress means the task is running 4. Stopped means the task has stopped and resources are being cleaned up
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The unique ID of the task, generated when the task is started
                     * @return TaskId The unique ID of the task, generated when the task is started
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取The SessionId filled in when opening the conversation task.
                     * @return SessionId The SessionId filled in when opening the conversation task.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * The time when the task starts.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task status. There are 4 values: 1. Idle means the task has not started 2. Preparing means the task is being prepared 3. InProgress means the task is running 4. Stopped means the task has stopped and resources are being cleaned up
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The unique ID of the task, generated when the task is started
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The SessionId filled in when opening the conversation task.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEAICONVERSATIONRESPONSE_H_
