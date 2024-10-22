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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEAITRANSCRIPTIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEAITRANSCRIPTIONREQUEST_H_

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
                * DescribeAITranscription request structure.
                */
                class DescribeAITranscriptionRequest : public AbstractModel
                {
                public:
                    DescribeAITranscriptionRequest();
                    ~DescribeAITranscriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query the task status. If not in use, pass in an empty string. There are two query methods: 1. Fill in only TaskId. This method uses TaskId to query tasks. 2. TaskId is an empty string. Fill in SdkAppId and SessionId. This method does not require TaskId to query tasks.
                     * @return TaskId Query the task status. If not in use, pass in an empty string. There are two query methods: 1. Fill in only TaskId. This method uses TaskId to query tasks. 2. TaskId is an empty string. Fill in SdkAppId and SessionId. This method does not require TaskId to query tasks.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Query the task status. If not in use, pass in an empty string. There are two query methods: 1. Fill in only TaskId. This method uses TaskId to query tasks. 2. TaskId is an empty string. Fill in SdkAppId and SessionId. This method does not require TaskId to query tasks.
                     * @param _taskId Query the task status. If not in use, pass in an empty string. There are two query methods: 1. Fill in only TaskId. This method uses TaskId to query tasks. 2. TaskId is an empty string. Fill in SdkAppId and SessionId. This method does not require TaskId to query tasks.
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
                     * 获取TRTC's SdkAppId is used together with SessionId.
                     * @return SdkAppId TRTC's SdkAppId is used together with SessionId.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC's SdkAppId is used together with SessionId.
                     * @param _sdkAppId TRTC's SdkAppId is used together with SessionId.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The SessionId passed in when starting the transcription task is used together with the SdkAppId.
                     * @return SessionId The SessionId passed in when starting the transcription task is used together with the SdkAppId.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The SessionId passed in when starting the transcription task is used together with the SdkAppId.
                     * @param _sessionId The SessionId passed in when starting the transcription task is used together with the SdkAppId.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * Query the task status. If not in use, pass in an empty string. There are two query methods: 1. Fill in only TaskId. This method uses TaskId to query tasks. 2. TaskId is an empty string. Fill in SdkAppId and SessionId. This method does not require TaskId to query tasks.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * TRTC's SdkAppId is used together with SessionId.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The SessionId passed in when starting the transcription task is used together with the SdkAppId.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEAITRANSCRIPTIONREQUEST_H_
