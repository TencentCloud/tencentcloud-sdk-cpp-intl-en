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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMEVENTREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMEVENTREQUEST_H_

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
                * GetRoomEvent request structure.
                */
                class GetRoomEventRequest : public AbstractModel
                {
                public:
                    GetRoomEventRequest();
                    ~GetRoomEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The room ID.
                     * @return RoomId The room ID.
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置The room ID.
                     * @param RoomId The room ID.
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取The application ID.
                     * @return SdkAppId The application ID.
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The application ID.
                     * @param SdkAppId The application ID.
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The starting page. Pagination starts from 1. This parameter is valid only if `keyword` is empty.
                     * @return Page The starting page. Pagination starts from 1. This parameter is valid only if `keyword` is empty.
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置The starting page. Pagination starts from 1. This parameter is valid only if `keyword` is empty.
                     * @param Page The starting page. Pagination starts from 1. This parameter is valid only if `keyword` is empty.
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取The maximum number of records (up to 200) per page. This parameter is valid only if `keyword` is empty.
                     * @return Limit The maximum number of records (up to 200) per page. This parameter is valid only if `keyword` is empty.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The maximum number of records (up to 200) per page. This parameter is valid only if `keyword` is empty.
                     * @param Limit The maximum number of records (up to 200) per page. This parameter is valid only if `keyword` is empty.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The type of events to query. Valid values:
`RoomStart`: The class started.
`RoomEnd`: The class ended.
`MemberJoin`: A user joined.
`MemberQuit`: A user left.
`RecordFinish`: Recording is finished.
                     * @return Keyword The type of events to query. Valid values:
`RoomStart`: The class started.
`RoomEnd`: The class ended.
`MemberJoin`: A user joined.
`MemberQuit`: A user left.
`RecordFinish`: Recording is finished.
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置The type of events to query. Valid values:
`RoomStart`: The class started.
`RoomEnd`: The class ended.
`MemberJoin`: A user joined.
`MemberQuit`: A user left.
`RecordFinish`: Recording is finished.
                     * @param Keyword The type of events to query. Valid values:
`RoomStart`: The class started.
`RoomEnd`: The class ended.
`MemberJoin`: A user joined.
`MemberQuit`: A user left.
`RecordFinish`: Recording is finished.
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * The room ID.
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * The application ID.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The starting page. Pagination starts from 1. This parameter is valid only if `keyword` is empty.
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * The maximum number of records (up to 200) per page. This parameter is valid only if `keyword` is empty.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The type of events to query. Valid values:
`RoomStart`: The class started.
`RoomEnd`: The class ended.
`MemberJoin`: A user joined.
`MemberQuit`: A user left.
`RecordFinish`: Recording is finished.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMEVENTREQUEST_H_
