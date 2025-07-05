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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEROOMINFOREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEROOMINFOREQUEST_H_

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
                * DescribeRoomInfo request structure.
                */
                class DescribeRoomInfoRequest : public AbstractModel
                {
                public:
                    DescribeRoomInfoRequest();
                    ~DescribeRoomInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The application ID, such as `1400xxxxxx`.
                     * @return SdkAppId The application ID, such as `1400xxxxxx`.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The application ID, such as `1400xxxxxx`.
                     * @param _sdkAppId The application ID, such as `1400xxxxxx`.
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
                     * 获取The start time, which is a Unix timestamp (seconds) in local time, such as `1590065777`.
Note: Only data in the last 14 days can be queried.
                     * @return StartTime The start time, which is a Unix timestamp (seconds) in local time, such as `1590065777`.
Note: Only data in the last 14 days can be queried.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置The start time, which is a Unix timestamp (seconds) in local time, such as `1590065777`.
Note: Only data in the last 14 days can be queried.
                     * @param _startTime The start time, which is a Unix timestamp (seconds) in local time, such as `1590065777`.
Note: Only data in the last 14 days can be queried.
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time, which is a Unix timestamp (seconds) in local time, such as `1590065877`.
Note: The end and start time cannot be more than 24 hours apart.
                     * @return EndTime The end time, which is a Unix timestamp (seconds) in local time, such as `1590065877`.
Note: The end and start time cannot be more than 24 hours apart.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置The end time, which is a Unix timestamp (seconds) in local time, such as `1590065877`.
Note: The end and start time cannot be more than 24 hours apart.
                     * @param _endTime The end time, which is a Unix timestamp (seconds) in local time, such as `1590065877`.
Note: The end and start time cannot be more than 24 hours apart.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The room ID, such as `223`.
                     * @return RoomId The room ID, such as `223`.
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置The room ID, such as `223`.
                     * @param _roomId The room ID, such as `223`.
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取The page number. The default is 0.
Note: If `PageNumber` or `PageSize` is not specified, 10 records will be returned.
                     * @return PageNumber The page number. The default is 0.
Note: If `PageNumber` or `PageSize` is not specified, 10 records will be returned.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置The page number. The default is 0.
Note: If `PageNumber` or `PageSize` is not specified, 10 records will be returned.
                     * @param _pageNumber The page number. The default is 0.
Note: If `PageNumber` or `PageSize` is not specified, 10 records will be returned.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取The number of records per page. The default is `10`.
Value range: 1-100.
                     * @return PageSize The number of records per page. The default is `10`.
Value range: 1-100.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置The number of records per page. The default is `10`.
Value range: 1-100.
                     * @param _pageSize The number of records per page. The default is `10`.
Value range: 1-100.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * The application ID, such as `1400xxxxxx`.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The start time, which is a Unix timestamp (seconds) in local time, such as `1590065777`.
Note: Only data in the last 14 days can be queried.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time, which is a Unix timestamp (seconds) in local time, such as `1590065877`.
Note: The end and start time cannot be more than 24 hours apart.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The room ID, such as `223`.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * The page number. The default is 0.
Note: If `PageNumber` or `PageSize` is not specified, 10 records will be returned.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * The number of records per page. The default is `10`.
Value range: 1-100.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEROOMINFOREQUEST_H_
