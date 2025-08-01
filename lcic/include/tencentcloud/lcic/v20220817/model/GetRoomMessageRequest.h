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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMMESSAGEREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMMESSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * GetRoomMessage request structure.
                */
                class GetRoomMessageRequest : public AbstractModel
                {
                public:
                    GetRoomMessageRequest();
                    ~GetRoomMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The SDKAppID assigned by LCIC.
                     * @return SdkAppId The SDKAppID assigned by LCIC.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置The SDKAppID assigned by LCIC.
                     * @param _sdkAppId The SDKAppID assigned by LCIC.
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
                     * 获取The room ID.
                     * @return RoomId The room ID.
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置The room ID.
                     * @param _roomId The room ID.
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取The starting message sequence. Messages before this sequence will be returned (not including the message whose sequence is `seq`).
                     * @return Seq The starting message sequence. Messages before this sequence will be returned (not including the message whose sequence is `seq`).
                     * 
                     */
                    int64_t GetSeq() const;

                    /**
                     * 设置The starting message sequence. Messages before this sequence will be returned (not including the message whose sequence is `seq`).
                     * @param _seq The starting message sequence. Messages before this sequence will be returned (not including the message whose sequence is `seq`).
                     * 
                     */
                    void SetSeq(const int64_t& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     * 
                     */
                    bool SeqHasBeenSet() const;

                    /**
                     * 获取The maximum number of messages to return. The value of this parameter cannot exceed the maximum message count allowed by your package.
                     * @return Limit The maximum number of messages to return. The value of this parameter cannot exceed the maximum message count allowed by your package.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The maximum number of messages to return. The value of this parameter cannot exceed the maximum message count allowed by your package.
                     * @param _limit The maximum number of messages to return. The value of this parameter cannot exceed the maximum message count allowed by your package.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The SDKAppID assigned by LCIC.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The room ID.
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * The starting message sequence. Messages before this sequence will be returned (not including the message whose sequence is `seq`).
                     */
                    int64_t m_seq;
                    bool m_seqHasBeenSet;

                    /**
                     * The maximum number of messages to return. The value of this parameter cannot exceed the maximum message count allowed by your package.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMMESSAGEREQUEST_H_
