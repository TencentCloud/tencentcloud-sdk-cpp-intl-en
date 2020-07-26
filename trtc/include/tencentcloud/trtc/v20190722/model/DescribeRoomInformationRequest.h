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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEROOMINFORMATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEROOMINFORMATIONREQUEST_H_

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
                * DescribeRoomInformation request structure.
                */
                class DescribeRoomInformationRequest : public AbstractModel
                {
                public:
                    DescribeRoomInformationRequest();
                    ~DescribeRoomInformationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User `sdkappid`
                     * @return SdkAppId User `sdkappid`
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置User `sdkappid`
                     * @param SdkAppId User `sdkappid`
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Query start time in the format of local UNIX timestamp, such as 1588031999s, which is a point in time in the last 5 days.
                     * @return StartTime Query start time in the format of local UNIX timestamp, such as 1588031999s, which is a point in time in the last 5 days.
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Query start time in the format of local UNIX timestamp, such as 1588031999s, which is a point in time in the last 5 days.
                     * @param StartTime Query start time in the format of local UNIX timestamp, such as 1588031999s, which is a point in time in the last 5 days.
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query end time in the format of local UNIX timestamp, such as 1588031999s.
                     * @return EndTime Query end time in the format of local UNIX timestamp, such as 1588031999s.
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Query end time in the format of local UNIX timestamp, such as 1588031999s.
                     * @param EndTime Query end time in the format of local UNIX timestamp, such as 1588031999s.
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Room ID of uint type
                     * @return RoomId Room ID of uint type
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置Room ID of uint type
                     * @param RoomId Room ID of uint type
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取Page index. If it is left empty, 10 entries will be returned by default.
                     * @return PageNumber Page index. If it is left empty, 10 entries will be returned by default.
                     */
                    std::string GetPageNumber() const;

                    /**
                     * 设置Page index. If it is left empty, 10 entries will be returned by default.
                     * @param PageNumber Page index. If it is left empty, 10 entries will be returned by default.
                     */
                    void SetPageNumber(const std::string& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Page size. Maximum value: 100. If it is left empty, 10 entries will be returned by default.
                     * @return PageSize Page size. Maximum value: 100. If it is left empty, 10 entries will be returned by default.
                     */
                    std::string GetPageSize() const;

                    /**
                     * 设置Page size. Maximum value: 100. If it is left empty, 10 entries will be returned by default.
                     * @param PageSize Page size. Maximum value: 100. If it is left empty, 10 entries will be returned by default.
                     */
                    void SetPageSize(const std::string& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * User `sdkappid`
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Query start time in the format of local UNIX timestamp, such as 1588031999s, which is a point in time in the last 5 days.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time in the format of local UNIX timestamp, such as 1588031999s.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Room ID of uint type
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Page index. If it is left empty, 10 entries will be returned by default.
                     */
                    std::string m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page size. Maximum value: 100. If it is left empty, 10 entries will be returned by default.
                     */
                    std::string m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEROOMINFORMATIONREQUEST_H_
