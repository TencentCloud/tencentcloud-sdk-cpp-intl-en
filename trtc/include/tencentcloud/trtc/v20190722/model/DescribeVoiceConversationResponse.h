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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEVOICECONVERSATIONRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEVOICECONVERSATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationHistoryContent.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeVoiceConversation response structure.
                */
                class DescribeVoiceConversationResponse : public AbstractModel
                {
                public:
                    DescribeVoiceConversationResponse();
                    ~DescribeVoiceConversationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Task start time</p><p>Unit: ms</p>
                     * @return StartTime <p>Task start time</p><p>Unit: ms</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Conversation task status.
Valid values:

- `Idle`: The conversation task is idle.
- `InProgress`: The conversation task is in progress.
- `Exited`: The conversation task is exiting.
                     * @return Status Conversation task status.
Valid values:

- `Idle`: The conversation task is idle.
- `InProgress`: The conversation task is in progress.
- `Exited`: The conversation task is exiting.
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
                     * 获取Unique ID of the conversation task.
                     * @return TaskId Unique ID of the conversation task.
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
                     * 获取Conversation history.
                     * @return HistoryContents Conversation history.
                     * 
                     */
                    std::vector<VoiceConversationHistoryContent> GetHistoryContents() const;

                    /**
                     * 判断参数 HistoryContents 是否已赋值
                     * @return HistoryContents 是否已赋值
                     * 
                     */
                    bool HistoryContentsHasBeenSet() const;

                private:

                    /**
                     * <p>Task start time</p><p>Unit: ms</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Conversation task status.
Valid values:

- `Idle`: The conversation task is idle.
- `InProgress`: The conversation task is in progress.
- `Exited`: The conversation task is exiting.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Unique ID of the conversation task.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Conversation history.
                     */
                    std::vector<VoiceConversationHistoryContent> m_historyContents;
                    bool m_historyContentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEVOICECONVERSATIONRESPONSE_H_
