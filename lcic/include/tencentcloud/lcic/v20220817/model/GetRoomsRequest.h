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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMSREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMSREQUEST_H_

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
                * GetRooms request structure.
                */
                class GetRoomsRequest : public AbstractModel
                {
                public:
                    GetRoomsRequest();
                    ~GetRoomsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The SDKAppID assigned by LCIC.

                     * @return SdkAppId The SDKAppID assigned by LCIC.

                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The SDKAppID assigned by LCIC.

                     * @param SdkAppId The SDKAppID assigned by LCIC.

                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The start time. The default start time is 30 minutes before the current time.
                     * @return StartTime The start time. The default start time is 30 minutes before the current time.
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置The start time. The default start time is 30 minutes before the current time.
                     * @param StartTime The start time. The default start time is 30 minutes before the current time.
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time. The default end time is 30 minutes after the current time.
                     * @return EndTime The end time. The default end time is 30 minutes after the current time.
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置The end time. The default end time is 30 minutes after the current time.
                     * @param EndTime The end time. The default end time is 30 minutes after the current time.
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The page to return records from. Pagination starts from 1.
                     * @return Page The page to return records from. Pagination starts from 1.
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置The page to return records from. Pagination starts from 1.
                     * @param Page The page to return records from. Pagination starts from 1.
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取The number of records per page. The default is 10.
                     * @return Limit The number of records per page. The default is 10.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of records per page. The default is 10.
                     * @param Limit The number of records per page. The default is 10.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The SDKAppID assigned by LCIC.

                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The start time. The default start time is 30 minutes before the current time.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time. The default end time is 30 minutes after the current time.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The page to return records from. Pagination starts from 1.
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * The number of records per page. The default is 10.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMSREQUEST_H_
