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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMREQUEST_H_

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
                * DescribeRoom request structure.
                */
                class DescribeRoomRequest : public AbstractModel
                {
                public:
                    DescribeRoomRequest();
                    ~DescribeRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Room ID	
                     * @return RoomId Room ID	
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置Room ID	
                     * @param _roomId Room ID	
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
                     * 获取Request RTMP  stream link, 0: no, 1: yes, default is 0.
                     * @return RTMPStreamingURL Request RTMP  stream link, 0: no, 1: yes, default is 0.
                     * 
                     */
                    uint64_t GetRTMPStreamingURL() const;

                    /**
                     * 设置Request RTMP  stream link, 0: no, 1: yes, default is 0.
                     * @param _rTMPStreamingURL Request RTMP  stream link, 0: no, 1: yes, default is 0.
                     * 
                     */
                    void SetRTMPStreamingURL(const uint64_t& _rTMPStreamingURL);

                    /**
                     * 判断参数 RTMPStreamingURL 是否已赋值
                     * @return RTMPStreamingURL 是否已赋值
                     * 
                     */
                    bool RTMPStreamingURLHasBeenSet() const;

                private:

                    /**
                     * Room ID	
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Request RTMP  stream link, 0: no, 1: yes, default is 0.
                     */
                    uint64_t m_rTMPStreamingURL;
                    bool m_rTMPStreamingURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMREQUEST_H_
