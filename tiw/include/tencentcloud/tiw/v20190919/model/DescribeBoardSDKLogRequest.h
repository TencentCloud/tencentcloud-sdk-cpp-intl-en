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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEBOARDSDKLOGREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEBOARDSDKLOGREQUEST_H_

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
                * DescribeBoardSDKLog request structure.
                */
                class DescribeBoardSDKLogRequest : public AbstractModel
                {
                public:
                    DescribeBoardSDKLogRequest();
                    ~DescribeBoardSDKLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SdkAppId of the whiteboard application.
                     * @return SdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the whiteboard application.
                     * @param _sdkAppId SdkAppId of the whiteboard application.
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
                     * 获取Room ID to be used to query logs.
                     * @return RoomId Room ID to be used to query logs.
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置Room ID to be used to query logs.
                     * @param _roomId Room ID to be used to query logs.
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
                     * 获取User ID to be used to query logs.
                     * @return UserId User ID to be used to query logs.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID to be used to query logs.
                     * @param _userId User ID to be used to query logs.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Query period, which consists of two Unix timestamps in milliseconds. The first indicates the start time and the second the end time.
                     * @return TimeRange Query period, which consists of two Unix timestamps in milliseconds. The first indicates the start time and the second the end time.
                     * 
                     */
                    std::vector<int64_t> GetTimeRange() const;

                    /**
                     * 设置Query period, which consists of two Unix timestamps in milliseconds. The first indicates the start time and the second the end time.
                     * @param _timeRange Query period, which consists of two Unix timestamps in milliseconds. The first indicates the start time and the second the end time.
                     * 
                     */
                    void SetTimeRange(const std::vector<int64_t>& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取Interval for aggregating log number queries. Example values: `5m`, `1h`, `4h`
                     * @return AggregationInterval Interval for aggregating log number queries. Example values: `5m`, `1h`, `4h`
                     * 
                     */
                    std::string GetAggregationInterval() const;

                    /**
                     * 设置Interval for aggregating log number queries. Example values: `5m`, `1h`, `4h`
                     * @param _aggregationInterval Interval for aggregating log number queries. Example values: `5m`, `1h`, `4h`
                     * 
                     */
                    void SetAggregationInterval(const std::string& _aggregationInterval);

                    /**
                     * 判断参数 AggregationInterval 是否已赋值
                     * @return AggregationInterval 是否已赋值
                     * 
                     */
                    bool AggregationIntervalHasBeenSet() const;

                    /**
                     * 获取Extra query conditions.
                     * @return Query Extra query conditions.
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Extra query conditions.
                     * @param _query Extra query conditions.
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Specifies whether to sort results in ascending order of time.
                     * @return Ascending Specifies whether to sort results in ascending order of time.
                     * 
                     */
                    bool GetAscending() const;

                    /**
                     * 设置Specifies whether to sort results in ascending order of time.
                     * @param _ascending Specifies whether to sort results in ascending order of time.
                     * 
                     */
                    void SetAscending(const bool& _ascending);

                    /**
                     * 判断参数 Ascending 是否已赋值
                     * @return Ascending 是否已赋值
                     * 
                     */
                    bool AscendingHasBeenSet() const;

                    /**
                     * 获取Context key used for recursive extraction. Obtain this parameter in the response to the last request.
                     * @return Context Context key used for recursive extraction. Obtain this parameter in the response to the last request.
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置Context key used for recursive extraction. Obtain this parameter in the response to the last request.
                     * @param _context Context key used for recursive extraction. Obtain this parameter in the response to the last request.
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Room ID to be used to query logs.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * User ID to be used to query logs.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Query period, which consists of two Unix timestamps in milliseconds. The first indicates the start time and the second the end time.
                     */
                    std::vector<int64_t> m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * Interval for aggregating log number queries. Example values: `5m`, `1h`, `4h`
                     */
                    std::string m_aggregationInterval;
                    bool m_aggregationIntervalHasBeenSet;

                    /**
                     * Extra query conditions.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Specifies whether to sort results in ascending order of time.
                     */
                    bool m_ascending;
                    bool m_ascendingHasBeenSet;

                    /**
                     * Context key used for recursive extraction. Obtain this parameter in the response to the last request.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEBOARDSDKLOGREQUEST_H_
