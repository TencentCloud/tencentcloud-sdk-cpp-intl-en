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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEROOMLISTREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEROOMLISTREQUEST_H_

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
                * DescribeRoomList request structure.
                */
                class DescribeRoomListRequest : public AbstractModel
                {
                public:
                    DescribeRoomListRequest();
                    ~DescribeRoomListRequest() = default;
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
                     * 获取Maximum number of data entries to be returned. Default value: 1000.
                     * @return MaxSize Maximum number of data entries to be returned. Default value: 1000.
                     * 
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置Maximum number of data entries to be returned. Default value: 1000.
                     * @param _maxSize Maximum number of data entries to be returned. Default value: 1000.
                     * 
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                private:

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Query period, which consists of two Unix timestamps in milliseconds. The first indicates the start time and the second the end time.
                     */
                    std::vector<int64_t> m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * Extra query conditions.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Maximum number of data entries to be returned. Default value: 1000.
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEROOMLISTREQUEST_H_
