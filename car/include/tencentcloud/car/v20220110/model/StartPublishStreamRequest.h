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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_STARTPUBLISHSTREAMREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_STARTPUBLISHSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * StartPublishStream request structure.
                */
                class StartPublishStreamRequest : public AbstractModel
                {
                public:
                    StartPublishStreamRequest();
                    ~StartPublishStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique user ID, which is customized by you and is not parsed by CAR. It will be used as the `StreamId` for streaming. For example, if the bound streaming domain is **abc.livepush.myqcloud.com**, the streaming address will be **rtmp://abc.livepush.myqcloud.com/live/UserId?txSecret=xxx&txTime=xxx**.
                     * @return UserId Unique user ID, which is customized by you and is not parsed by CAR. It will be used as the `StreamId` for streaming. For example, if the bound streaming domain is **abc.livepush.myqcloud.com**, the streaming address will be **rtmp://abc.livepush.myqcloud.com/live/UserId?txSecret=xxx&txTime=xxx**.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置Unique user ID, which is customized by you and is not parsed by CAR. It will be used as the `StreamId` for streaming. For example, if the bound streaming domain is **abc.livepush.myqcloud.com**, the streaming address will be **rtmp://abc.livepush.myqcloud.com/live/UserId?txSecret=xxx&txTime=xxx**.
                     * @param _userId Unique user ID, which is customized by you and is not parsed by CAR. It will be used as the `StreamId` for streaming. For example, if the bound streaming domain is **abc.livepush.myqcloud.com**, the streaming address will be **rtmp://abc.livepush.myqcloud.com/live/UserId?txSecret=xxx&txTime=xxx**.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Streaming parameter, which is a custom parameter carried during streaming.
                     * @return PublishStreamArgs Streaming parameter, which is a custom parameter carried during streaming.
                     * 
                     */
                    std::string GetPublishStreamArgs() const;

                    /**
                     * 设置Streaming parameter, which is a custom parameter carried during streaming.
                     * @param _publishStreamArgs Streaming parameter, which is a custom parameter carried during streaming.
                     * 
                     */
                    void SetPublishStreamArgs(const std::string& _publishStreamArgs);

                    /**
                     * 判断参数 PublishStreamArgs 是否已赋值
                     * @return PublishStreamArgs 是否已赋值
                     * 
                     */
                    bool PublishStreamArgsHasBeenSet() const;

                private:

                    /**
                     * Unique user ID, which is customized by you and is not parsed by CAR. It will be used as the `StreamId` for streaming. For example, if the bound streaming domain is **abc.livepush.myqcloud.com**, the streaming address will be **rtmp://abc.livepush.myqcloud.com/live/UserId?txSecret=xxx&txTime=xxx**.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Streaming parameter, which is a custom parameter carried during streaming.
                     */
                    std::string m_publishStreamArgs;
                    bool m_publishStreamArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_STARTPUBLISHSTREAMREQUEST_H_
