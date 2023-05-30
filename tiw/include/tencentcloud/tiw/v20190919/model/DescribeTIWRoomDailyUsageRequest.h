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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETIWROOMDAILYUSAGEREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETIWROOMDAILYUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeTIWRoomDailyUsage request structure.
                */
                class DescribeTIWRoomDailyUsageRequest : public AbstractModel
                {
                public:
                    DescribeTIWRoomDailyUsageRequest();
                    ~DescribeTIWRoomDailyUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SdkAppId of the whiteboard application.
                     * @return SdkAppId SdkAppId of the whiteboard application.
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the whiteboard application.
                     * @param SdkAppId SdkAppId of the whiteboard application.
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Subproduct usage to be queried. The following parameters are supported:
- sp_tiw_board: The duration of use of whiteboards, in minutes.
- sp_tiw_ric: The duration of real-time recording, in minutes.
                     * @return SubProduct Subproduct usage to be queried. The following parameters are supported:
- sp_tiw_board: The duration of use of whiteboards, in minutes.
- sp_tiw_ric: The duration of real-time recording, in minutes.
                     */
                    std::string GetSubProduct() const;

                    /**
                     * 设置Subproduct usage to be queried. The following parameters are supported:
- sp_tiw_board: The duration of use of whiteboards, in minutes.
- sp_tiw_ric: The duration of real-time recording, in minutes.
                     * @param SubProduct Subproduct usage to be queried. The following parameters are supported:
- sp_tiw_board: The duration of use of whiteboards, in minutes.
- sp_tiw_ric: The duration of real-time recording, in minutes.
                     */
                    void SetSubProduct(const std::string& _subProduct);

                    /**
                     * 判断参数 SubProduct 是否已赋值
                     * @return SubProduct 是否已赋值
                     */
                    bool SubProductHasBeenSet() const;

                    /**
                     * 获取Start date in the format of YYYY-MM-DD. The start date is included in the query period.
                     * @return StartTime Start date in the format of YYYY-MM-DD. The start date is included in the query period.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start date in the format of YYYY-MM-DD. The start date is included in the query period.
                     * @param StartTime Start date in the format of YYYY-MM-DD. The start date is included in the query period.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End date in the format of YYYY-MM-DD. The end date is included in the query period. The period queried per request cannot be longer than 31 days.
                     * @return EndTime End date in the format of YYYY-MM-DD. The end date is included in the query period. The period queried per request cannot be longer than 31 days.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End date in the format of YYYY-MM-DD. The end date is included in the query period. The period queried per request cannot be longer than 31 days.
                     * @param EndTime End date in the format of YYYY-MM-DD. The end date is included in the query period. The period queried per request cannot be longer than 31 days.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Room IDs to be queried. If you leave this parameter empty, all room IDs are queried.
                     * @return RoomIDs Room IDs to be queried. If you leave this parameter empty, all room IDs are queried.
                     */
                    std::vector<uint64_t> GetRoomIDs() const;

                    /**
                     * 设置Room IDs to be queried. If you leave this parameter empty, all room IDs are queried.
                     * @param RoomIDs Room IDs to be queried. If you leave this parameter empty, all room IDs are queried.
                     */
                    void SetRoomIDs(const std::vector<uint64_t>& _roomIDs);

                    /**
                     * 判断参数 RoomIDs 是否已赋值
                     * @return RoomIDs 是否已赋值
                     */
                    bool RoomIDsHasBeenSet() const;

                    /**
                     * 获取Offset for query. Default value: `0`.
                     * @return Offset Offset for query. Default value: `0`.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset for query. Default value: `0`.
                     * @param Offset Offset for query. Default value: `0`.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of entries returned per query. Default value: `20`.
                     * @return Limit Maximum number of entries returned per query. Default value: `20`.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of entries returned per query. Default value: `20`.
                     * @param Limit Maximum number of entries returned per query. Default value: `20`.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Subproduct usage to be queried. The following parameters are supported:
- sp_tiw_board: The duration of use of whiteboards, in minutes.
- sp_tiw_ric: The duration of real-time recording, in minutes.
                     */
                    std::string m_subProduct;
                    bool m_subProductHasBeenSet;

                    /**
                     * Start date in the format of YYYY-MM-DD. The start date is included in the query period.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End date in the format of YYYY-MM-DD. The end date is included in the query period. The period queried per request cannot be longer than 31 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Room IDs to be queried. If you leave this parameter empty, all room IDs are queried.
                     */
                    std::vector<uint64_t> m_roomIDs;
                    bool m_roomIDsHasBeenSet;

                    /**
                     * Offset for query. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of entries returned per query. Default value: `20`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETIWROOMDAILYUSAGEREQUEST_H_
