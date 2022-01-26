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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEDETAILEVENTREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEDETAILEVENTREQUEST_H_

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
                * DescribeDetailEvent request structure.
                */
                class DescribeDetailEventRequest : public AbstractModel
                {
                public:
                    DescribeDetailEventRequest();
                    ~DescribeDetailEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of a call: sdkappid_roomgString_createTime. The `roomgString` refers to the room ID, and `createTime` refers to the creation time of a room in the format of UNIX timestamp in seconds. Its value can be obtained from the `DescribeRoomInformation` API (related document: https://intl.cloud.tencent.com/document/product/647/44050?from_cn_redirect=1).
                     * @return CommId Unique ID of a call: sdkappid_roomgString_createTime. The `roomgString` refers to the room ID, and `createTime` refers to the creation time of a room in the format of UNIX timestamp in seconds. Its value can be obtained from the `DescribeRoomInformation` API (related document: https://intl.cloud.tencent.com/document/product/647/44050?from_cn_redirect=1).
                     */
                    std::string GetCommId() const;

                    /**
                     * 设置Unique ID of a call: sdkappid_roomgString_createTime. The `roomgString` refers to the room ID, and `createTime` refers to the creation time of a room in the format of UNIX timestamp in seconds. Its value can be obtained from the `DescribeRoomInformation` API (related document: https://intl.cloud.tencent.com/document/product/647/44050?from_cn_redirect=1).
                     * @param CommId Unique ID of a call: sdkappid_roomgString_createTime. The `roomgString` refers to the room ID, and `createTime` refers to the creation time of a room in the format of UNIX timestamp in seconds. Its value can be obtained from the `DescribeRoomInformation` API (related document: https://intl.cloud.tencent.com/document/product/647/44050?from_cn_redirect=1).
                     */
                    void SetCommId(const std::string& _commId);

                    /**
                     * 判断参数 CommId 是否已赋值
                     * @return CommId 是否已赋值
                     */
                    bool CommIdHasBeenSet() const;

                    /**
                     * 获取Query start time (s) in the format of Unix timestamp (e.g., 1588055615), which must be a time point in the last 14 days
                     * @return StartTime Query start time (s) in the format of Unix timestamp (e.g., 1588055615), which must be a time point in the last 14 days
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Query start time (s) in the format of Unix timestamp (e.g., 1588055615), which must be a time point in the last 14 days
                     * @param StartTime Query start time (s) in the format of Unix timestamp (e.g., 1588055615), which must be a time point in the last 14 days
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query end time (s) in the format of Unix timestamp, e.g., 1588058615
                     * @return EndTime Query end time (s) in the format of Unix timestamp, e.g., 1588058615
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Query end time (s) in the format of Unix timestamp, e.g., 1588058615
                     * @param EndTime Query end time (s) in the format of Unix timestamp, e.g., 1588058615
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取User ID
                     * @return UserId User ID
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID
                     * @param UserId User ID
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Room ID
                     * @return RoomId Room ID
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置Room ID
                     * @param RoomId Room ID
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                private:

                    /**
                     * Unique ID of a call: sdkappid_roomgString_createTime. The `roomgString` refers to the room ID, and `createTime` refers to the creation time of a room in the format of UNIX timestamp in seconds. Its value can be obtained from the `DescribeRoomInformation` API (related document: https://intl.cloud.tencent.com/document/product/647/44050?from_cn_redirect=1).
                     */
                    std::string m_commId;
                    bool m_commIdHasBeenSet;

                    /**
                     * Query start time (s) in the format of Unix timestamp (e.g., 1588055615), which must be a time point in the last 14 days
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time (s) in the format of Unix timestamp, e.g., 1588058615
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * User ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Room ID
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEDETAILEVENTREQUEST_H_
