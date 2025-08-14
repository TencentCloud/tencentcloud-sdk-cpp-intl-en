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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDMODERATIONRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDMODERATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/SubscribeModerationUserIds.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCloudModeration response structure.
                */
                class DescribeCloudModerationResponse : public AbstractModel
                {
                public:
                    DescribeCloudModerationResponse();
                    ~DescribeCloudModerationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the moderation task, which is returned after the task is started.
                     * @return TaskId Unique ID of the moderation task, which is returned after the task is started.
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
                     * 获取Information about the status of the cloud moderation task. Idle: indicates the current task is idle; InProgress: indicates the current task is in progress; Exited: indicates the current task is being exited.
                     * @return Status Information about the status of the cloud moderation task. Idle: indicates the current task is idle; InProgress: indicates the current task is in progress; Exited: indicates the current task is being exited.
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
                     * 获取Subscription blocklist and allowlist.
                     * @return SubscribeStreamUserIds Subscription blocklist and allowlist.
                     * 
                     */
                    SubscribeModerationUserIds GetSubscribeStreamUserIds() const;

                    /**
                     * 判断参数 SubscribeStreamUserIds 是否已赋值
                     * @return SubscribeStreamUserIds 是否已赋值
                     * 
                     */
                    bool SubscribeStreamUserIdsHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the moderation task, which is returned after the task is started.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Information about the status of the cloud moderation task. Idle: indicates the current task is idle; InProgress: indicates the current task is in progress; Exited: indicates the current task is being exited.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Subscription blocklist and allowlist.
                     */
                    SubscribeModerationUserIds m_subscribeStreamUserIds;
                    bool m_subscribeStreamUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDMODERATIONRESPONSE_H_
