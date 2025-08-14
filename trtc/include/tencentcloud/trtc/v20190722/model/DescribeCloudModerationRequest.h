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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDMODERATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDMODERATIONREQUEST_H_

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
                * DescribeCloudModeration request structure.
                */
                class DescribeCloudModerationRequest : public AbstractModel
                {
                public:
                    DescribeCloudModerationRequest();
                    ~DescribeCloudModerationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SDKAppId of TRTC, which is the same as the SDKAppId corresponding to the recording room.
                     * @return SdkAppId SDKAppId of TRTC, which is the same as the SDKAppId corresponding to the recording room.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置SDKAppId of TRTC, which is the same as the SDKAppId corresponding to the recording room.
                     * @param _sdkAppId SDKAppId of TRTC, which is the same as the SDKAppId corresponding to the recording room.
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
                     * 获取Unique ID of the cloud moderation task, which is returned after the task is started.
                     * @return TaskId Unique ID of the cloud moderation task, which is returned after the task is started.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Unique ID of the cloud moderation task, which is returned after the task is started.
                     * @param _taskId Unique ID of the cloud moderation task, which is returned after the task is started.
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
                     * SDKAppId of TRTC, which is the same as the SDKAppId corresponding to the recording room.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Unique ID of the cloud moderation task, which is returned after the task is started.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDMODERATIONREQUEST_H_
