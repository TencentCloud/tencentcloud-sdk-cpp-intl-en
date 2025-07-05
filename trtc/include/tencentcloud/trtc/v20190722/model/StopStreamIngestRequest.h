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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STOPSTREAMINGESTREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STOPSTREAMINGESTREQUEST_H_

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
                * StopStreamIngest request structure.
                */
                class StopStreamIngestRequest : public AbstractModel
                {
                public:
                    StopStreamIngestRequest();
                    ~StopStreamIngestRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The SDKAppId of TRTC, which is the same as the SDKAppId corresponding to the task's room.
                     * @return SdkAppId The SDKAppId of TRTC, which is the same as the SDKAppId corresponding to the task's room.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The SDKAppId of TRTC, which is the same as the SDKAppId corresponding to the task's room.
                     * @param _sdkAppId The SDKAppId of TRTC, which is the same as the SDKAppId corresponding to the task's room.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The unique Task ID, which will be returned after the task is successfully started.
                     * @return TaskId The unique Task ID, which will be returned after the task is successfully started.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The unique Task ID, which will be returned after the task is successfully started.
                     * @param _taskId The unique Task ID, which will be returned after the task is successfully started.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * The SDKAppId of TRTC, which is the same as the SDKAppId corresponding to the task's room.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The unique Task ID, which will be returned after the task is successfully started.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STOPSTREAMINGESTREQUEST_H_
