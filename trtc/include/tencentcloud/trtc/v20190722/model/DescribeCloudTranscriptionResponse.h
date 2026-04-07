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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDTRANSCRIPTIONRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDTRANSCRIPTIONRESPONSE_H_

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
                * DescribeCloudTranscription response structure.
                */
                class DescribeCloudTranscriptionResponse : public AbstractModel
                {
                public:
                    DescribeCloudTranscriptionResponse();
                    ~DescribeCloudTranscriptionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Time of starting the transcription task.
                     * @return StartTime Time of starting the transcription task.
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
                     * 获取Transcription task status. 

- Idle: Indicates the current transcription task is idle. 
- InProgress: Indicates the current transcription task is in progress. 
- Exited: Indicates the current transcription task is in the process of exiting.
                     * @return Status Transcription task status. 

- Idle: Indicates the current transcription task is idle. 
- InProgress: Indicates the current transcription task is in progress. 
- Exited: Indicates the current transcription task is in the process of exiting.
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
                     * 获取Unique Id of the transcribe task.
                     * @return TaskId Unique Id of the transcribe task.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Time of starting the transcription task.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Transcription task status. 

- Idle: Indicates the current transcription task is idle. 
- InProgress: Indicates the current transcription task is in progress. 
- Exited: Indicates the current transcription task is in the process of exiting.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Unique Id of the transcribe task.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDTRANSCRIPTIONRESPONSE_H_
