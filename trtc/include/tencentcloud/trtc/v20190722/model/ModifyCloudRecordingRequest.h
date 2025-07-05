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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MODIFYCLOUDRECORDINGREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MODIFYCLOUDRECORDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/MixLayoutParams.h>
#include <tencentcloud/trtc/v20190722/model/SubscribeStreamUserIds.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * ModifyCloudRecording request structure.
                */
                class ModifyCloudRecordingRequest : public AbstractModel
                {
                public:
                    ModifyCloudRecordingRequest();
                    ~ModifyCloudRecordingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The `SDKAppID` of the room whose streams are recorded.
                     * @return SdkAppId The `SDKAppID` of the room whose streams are recorded.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The `SDKAppID` of the room whose streams are recorded.
                     * @param _sdkAppId The `SDKAppID` of the room whose streams are recorded.
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
                     * 获取The unique ID of the recording task, which is returned after recording starts successfully.
                     * @return TaskId The unique ID of the recording task, which is returned after recording starts successfully.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The unique ID of the recording task, which is returned after recording starts successfully.
                     * @param _taskId The unique ID of the recording task, which is returned after recording starts successfully.
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
                     * 获取The new stream mixing layout to use.
                     * @return MixLayoutParams The new stream mixing layout to use.
                     * 
                     */
                    MixLayoutParams GetMixLayoutParams() const;

                    /**
                     * 设置The new stream mixing layout to use.
                     * @param _mixLayoutParams The new stream mixing layout to use.
                     * 
                     */
                    void SetMixLayoutParams(const MixLayoutParams& _mixLayoutParams);

                    /**
                     * 判断参数 MixLayoutParams 是否已赋值
                     * @return MixLayoutParams 是否已赋值
                     * 
                     */
                    bool MixLayoutParamsHasBeenSet() const;

                    /**
                     * 获取The allowlist/blocklist for stream subscription.
                     * @return SubscribeStreamUserIds The allowlist/blocklist for stream subscription.
                     * 
                     */
                    SubscribeStreamUserIds GetSubscribeStreamUserIds() const;

                    /**
                     * 设置The allowlist/blocklist for stream subscription.
                     * @param _subscribeStreamUserIds The allowlist/blocklist for stream subscription.
                     * 
                     */
                    void SetSubscribeStreamUserIds(const SubscribeStreamUserIds& _subscribeStreamUserIds);

                    /**
                     * 判断参数 SubscribeStreamUserIds 是否已赋值
                     * @return SubscribeStreamUserIds 是否已赋值
                     * 
                     */
                    bool SubscribeStreamUserIdsHasBeenSet() const;

                private:

                    /**
                     * The `SDKAppID` of the room whose streams are recorded.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The unique ID of the recording task, which is returned after recording starts successfully.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The new stream mixing layout to use.
                     */
                    MixLayoutParams m_mixLayoutParams;
                    bool m_mixLayoutParamsHasBeenSet;

                    /**
                     * The allowlist/blocklist for stream subscription.
                     */
                    SubscribeStreamUserIds m_subscribeStreamUserIds;
                    bool m_subscribeStreamUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MODIFYCLOUDRECORDINGREQUEST_H_
