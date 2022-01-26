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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEUSERINFORMATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEUSERINFORMATIONREQUEST_H_

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
                * DescribeUserInformation request structure.
                */
                class DescribeUserInformationRequest : public AbstractModel
                {
                public:
                    DescribeUserInformationRequest();
                    ~DescribeUserInformationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of a call: sdkappid_roomgString_createTime. The `roomgString` refers to the room ID, and `createTime` refers to the creation time of a room in the format of UNIX timestamp in seconds, such as 1400353843_218695_1590065777. Its value can be obtained from the `DescribeRoomInformation` API (related document: https://intl.cloud.tencent.com/document/product/647/44050?from_cn_redirect=1).
                     * @return CommId Unique ID of a call: sdkappid_roomgString_createTime. The `roomgString` refers to the room ID, and `createTime` refers to the creation time of a room in the format of UNIX timestamp in seconds, such as 1400353843_218695_1590065777. Its value can be obtained from the `DescribeRoomInformation` API (related document: https://intl.cloud.tencent.com/document/product/647/44050?from_cn_redirect=1).
                     */
                    std::string GetCommId() const;

                    /**
                     * 设置Unique ID of a call: sdkappid_roomgString_createTime. The `roomgString` refers to the room ID, and `createTime` refers to the creation time of a room in the format of UNIX timestamp in seconds, such as 1400353843_218695_1590065777. Its value can be obtained from the `DescribeRoomInformation` API (related document: https://intl.cloud.tencent.com/document/product/647/44050?from_cn_redirect=1).
                     * @param CommId Unique ID of a call: sdkappid_roomgString_createTime. The `roomgString` refers to the room ID, and `createTime` refers to the creation time of a room in the format of UNIX timestamp in seconds, such as 1400353843_218695_1590065777. Its value can be obtained from the `DescribeRoomInformation` API (related document: https://intl.cloud.tencent.com/document/product/647/44050?from_cn_redirect=1).
                     */
                    void SetCommId(const std::string& _commId);

                    /**
                     * 判断参数 CommId 是否已赋值
                     * @return CommId 是否已赋值
                     */
                    bool CommIdHasBeenSet() const;

                    /**
                     * 获取Query start time (s) in the format of Unix timestamp (e.g., 1590065777), which must be a time point in the last 14 days
                     * @return StartTime Query start time (s) in the format of Unix timestamp (e.g., 1590065777), which must be a time point in the last 14 days
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Query start time (s) in the format of Unix timestamp (e.g., 1590065777), which must be a time point in the last 14 days
                     * @param StartTime Query start time (s) in the format of Unix timestamp (e.g., 1590065777), which must be a time point in the last 14 days
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query end time (s) in the format of Unix timestamp (e.g., 1590065877)
                     * @return EndTime Query end time (s) in the format of Unix timestamp (e.g., 1590065877)
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Query end time (s) in the format of Unix timestamp (e.g., 1590065877)
                     * @param EndTime Query end time (s) in the format of Unix timestamp (e.g., 1590065877)
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取`SDKAppID` of the users to query, e.g., 1400353843
                     * @return SdkAppId `SDKAppID` of the users to query, e.g., 1400353843
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置`SDKAppID` of the users to query, e.g., 1400353843
                     * @param SdkAppId `SDKAppID` of the users to query, e.g., 1400353843
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The array of user IDs for query. You can enter up to 6 user IDs. If it is left empty, data of 6 users will be returned.
                     * @return UserIds The array of user IDs for query. You can enter up to 6 user IDs. If it is left empty, data of 6 users will be returned.
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置The array of user IDs for query. You can enter up to 6 user IDs. If it is left empty, data of 6 users will be returned.
                     * @param UserIds The array of user IDs for query. You can enter up to 6 user IDs. If it is left empty, data of 6 users will be returned.
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取Page index starting from 0. If either `PageNumber` or `PageSize` is left empty, 6 data entries will be returned.
                     * @return PageNumber Page index starting from 0. If either `PageNumber` or `PageSize` is left empty, 6 data entries will be returned.
                     */
                    std::string GetPageNumber() const;

                    /**
                     * 设置Page index starting from 0. If either `PageNumber` or `PageSize` is left empty, 6 data entries will be returned.
                     * @param PageNumber Page index starting from 0. If either `PageNumber` or `PageSize` is left empty, 6 data entries will be returned.
                     */
                    void SetPageNumber(const std::string& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. If either `PageNumber` or `PageSize` is left empty, 6 data entries will be returned. `PageSize` is up to 100.
                     * @return PageSize Number of entries per page. If either `PageNumber` or `PageSize` is left empty, 6 data entries will be returned. `PageSize` is up to 100.
                     */
                    std::string GetPageSize() const;

                    /**
                     * 设置Number of entries per page. If either `PageNumber` or `PageSize` is left empty, 6 data entries will be returned. `PageSize` is up to 100.
                     * @param PageSize Number of entries per page. If either `PageNumber` or `PageSize` is left empty, 6 data entries will be returned. `PageSize` is up to 100.
                     */
                    void SetPageSize(const std::string& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Unique ID of a call: sdkappid_roomgString_createTime. The `roomgString` refers to the room ID, and `createTime` refers to the creation time of a room in the format of UNIX timestamp in seconds, such as 1400353843_218695_1590065777. Its value can be obtained from the `DescribeRoomInformation` API (related document: https://intl.cloud.tencent.com/document/product/647/44050?from_cn_redirect=1).
                     */
                    std::string m_commId;
                    bool m_commIdHasBeenSet;

                    /**
                     * Query start time (s) in the format of Unix timestamp (e.g., 1590065777), which must be a time point in the last 14 days
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time (s) in the format of Unix timestamp (e.g., 1590065877)
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * `SDKAppID` of the users to query, e.g., 1400353843
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The array of user IDs for query. You can enter up to 6 user IDs. If it is left empty, data of 6 users will be returned.
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * Page index starting from 0. If either `PageNumber` or `PageSize` is left empty, 6 data entries will be returned.
                     */
                    std::string m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of entries per page. If either `PageNumber` or `PageSize` is left empty, 6 data entries will be returned. `PageSize` is up to 100.
                     */
                    std::string m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEUSERINFORMATIONREQUEST_H_
