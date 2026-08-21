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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_QUERYAIMESSAGELISTREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_QUERYAIMESSAGELISTREQUEST_H_

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
                * QueryAIMessageList request structure.
                */
                class QueryAIMessageListRequest : public AbstractModel
                {
                public:
                    QueryAIMessageListRequest();
                    ~QueryAIMessageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The TRTC SdkAppId.Example value: 1600000000
                     * @return SdkAppId The TRTC SdkAppId.Example value: 1600000000
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The TRTC SdkAppId.Example value: 1600000000
                     * @param _sdkAppId The TRTC SdkAppId.Example value: 1600000000
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
                     * 获取Uniquely identifies a single task.
                     * @return TaskId Uniquely identifies a single task.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Uniquely identifies a single task.
                     * @param _taskId Uniquely identifies a single task.
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
                     * The TRTC SdkAppId.Example value: 1600000000
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Uniquely identifies a single task.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_QUERYAIMESSAGELISTREQUEST_H_
