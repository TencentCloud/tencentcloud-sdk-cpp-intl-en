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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEUSERINFOREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEUSERINFOREQUEST_H_

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
                * DescribeUserInfo request structure.
                */
                class DescribeUserInfoRequest : public AbstractModel
                {
                public:
                    DescribeUserInfoRequest();
                    ~DescribeUserInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of a call, whose format is `SdkAppId_CreateTime`, such as `1400xxxxxx_218695_1590065777`. `createTime` is the UNIX timestamp (seconds) when the room was created. Its value can be obtained using the [DescribeRoomInfo](https://intl.cloud.tencent.com/document/product/647/44050?from_cn_redirect=1) API.
                     * @return CommId The unique ID of a call, whose format is `SdkAppId_CreateTime`, such as `1400xxxxxx_218695_1590065777`. `createTime` is the UNIX timestamp (seconds) when the room was created. Its value can be obtained using the [DescribeRoomInfo](https://intl.cloud.tencent.com/document/product/647/44050?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetCommId() const;

                    /**
                     * 设置The unique ID of a call, whose format is `SdkAppId_CreateTime`, such as `1400xxxxxx_218695_1590065777`. `createTime` is the UNIX timestamp (seconds) when the room was created. Its value can be obtained using the [DescribeRoomInfo](https://intl.cloud.tencent.com/document/product/647/44050?from_cn_redirect=1) API.
                     * @param _commId The unique ID of a call, whose format is `SdkAppId_CreateTime`, such as `1400xxxxxx_218695_1590065777`. `createTime` is the UNIX timestamp (seconds) when the room was created. Its value can be obtained using the [DescribeRoomInfo](https://intl.cloud.tencent.com/document/product/647/44050?from_cn_redirect=1) API.
                     * 
                     */
                    void SetCommId(const std::string& _commId);

                    /**
                     * 判断参数 CommId 是否已赋值
                     * @return CommId 是否已赋值
                     * 
                     */
                    bool CommIdHasBeenSet() const;

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
Note: The end and start time cannot be more than four hours apart.
                     * @return EndTime The end time, which is a Unix timestamp (seconds) in local time, such as `1590065877`.
Note: The end and start time cannot be more than four hours apart.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置The end time, which is a Unix timestamp (seconds) in local time, such as `1590065877`.
Note: The end and start time cannot be more than four hours apart.
                     * @param _endTime The end time, which is a Unix timestamp (seconds) in local time, such as `1590065877`.
Note: The end and start time cannot be more than four hours apart.
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
                     * 获取The users to query. If you do not specify this, the information of six users will be returned.
Array length: 1-100.
                     * @return UserIds The users to query. If you do not specify this, the information of six users will be returned.
Array length: 1-100.
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置The users to query. If you do not specify this, the information of six users will be returned.
Array length: 1-100.
                     * @param _userIds The users to query. If you do not specify this, the information of six users will be returned.
Array length: 1-100.
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取The page number. The default is 0.
Note: If `PageNumber` or `PageSize` is not specified, six records will be returned.
                     * @return PageNumber The page number. The default is 0.
Note: If `PageNumber` or `PageSize` is not specified, six records will be returned.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置The page number. The default is 0.
Note: If `PageNumber` or `PageSize` is not specified, six records will be returned.
                     * @param _pageNumber The page number. The default is 0.
Note: If `PageNumber` or `PageSize` is not specified, six records will be returned.
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
                     * 获取The number of records per page. The default is `6`.
Array length: 1-100.
                     * @return PageSize The number of records per page. The default is `6`.
Array length: 1-100.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置The number of records per page. The default is `6`.
Array length: 1-100.
                     * @param _pageSize The number of records per page. The default is `6`.
Array length: 1-100.
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
                     * The unique ID of a call, whose format is `SdkAppId_CreateTime`, such as `1400xxxxxx_218695_1590065777`. `createTime` is the UNIX timestamp (seconds) when the room was created. Its value can be obtained using the [DescribeRoomInfo](https://intl.cloud.tencent.com/document/product/647/44050?from_cn_redirect=1) API.
                     */
                    std::string m_commId;
                    bool m_commIdHasBeenSet;

                    /**
                     * The start time, which is a Unix timestamp (seconds) in local time, such as `1590065777`.
Note: Only data in the last 14 days can be queried.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time, which is a Unix timestamp (seconds) in local time, such as `1590065877`.
Note: The end and start time cannot be more than four hours apart.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The application ID, such as `1400xxxxxx`.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The users to query. If you do not specify this, the information of six users will be returned.
Array length: 1-100.
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * The page number. The default is 0.
Note: If `PageNumber` or `PageSize` is not specified, six records will be returned.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * The number of records per page. The default is `6`.
Array length: 1-100.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEUSERINFOREQUEST_H_
