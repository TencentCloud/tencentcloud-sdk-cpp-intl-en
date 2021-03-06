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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEVISITTOPSUMINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEVISITTOPSUMINFOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeVisitTopSumInfoList request structure.
                */
                class DescribeVisitTopSumInfoListRequest : public AbstractModel
                {
                public:
                    DescribeVisitTopSumInfoListRequest();
                    ~DescribeVisitTopSumInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start point in time in the format of `yyyy-mm-dd HH:MM:SS`.
                     * @return StartTime Start point in time in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start point in time in the format of `yyyy-mm-dd HH:MM:SS`.
                     * @param StartTime Start point in time in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End point in time in the format of `yyyy-mm-dd HH:MM:SS`
The time span is (0,4 hours]. Data for the last day can be queried.
                     * @return EndTime End point in time in the format of `yyyy-mm-dd HH:MM:SS`
The time span is (0,4 hours]. Data for the last day can be queried.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End point in time in the format of `yyyy-mm-dd HH:MM:SS`
The time span is (0,4 hours]. Data for the last day can be queried.
                     * @param EndTime End point in time in the format of `yyyy-mm-dd HH:MM:SS`
The time span is (0,4 hours]. Data for the last day can be queried.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Bandwidth metric. Valid values: "Domain", "StreamId".
                     * @return TopIndex Bandwidth metric. Valid values: "Domain", "StreamId".
                     */
                    std::string GetTopIndex() const;

                    /**
                     * 设置Bandwidth metric. Valid values: "Domain", "StreamId".
                     * @param TopIndex Bandwidth metric. Valid values: "Domain", "StreamId".
                     */
                    void SetTopIndex(const std::string& _topIndex);

                    /**
                     * 判断参数 TopIndex 是否已赋值
                     * @return TopIndex 是否已赋值
                     */
                    bool TopIndexHasBeenSet() const;

                    /**
                     * 获取Playback domain name. If this parameter is left empty, full data will be queried by default.
                     * @return PlayDomains Playback domain name. If this parameter is left empty, full data will be queried by default.
                     */
                    std::vector<std::string> GetPlayDomains() const;

                    /**
                     * 设置Playback domain name. If this parameter is left empty, full data will be queried by default.
                     * @param PlayDomains Playback domain name. If this parameter is left empty, full data will be queried by default.
                     */
                    void SetPlayDomains(const std::vector<std::string>& _playDomains);

                    /**
                     * 判断参数 PlayDomains 是否已赋值
                     * @return PlayDomains 是否已赋值
                     */
                    bool PlayDomainsHasBeenSet() const;

                    /**
                     * 获取Page number,
Value range: [1,1000],
Default value: 1.
                     * @return PageNum Page number,
Value range: [1,1000],
Default value: 1.
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置Page number,
Value range: [1,1000],
Default value: 1.
                     * @param PageNum Page number,
Value range: [1,1000],
Default value: 1.
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Value range: [1,1000].
Default value: 20.
                     * @return PageSize Number of entries per page. Value range: [1,1000].
Default value: 20.
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page. Value range: [1,1000].
Default value: 20.
                     * @param PageSize Number of entries per page. Value range: [1,1000].
Default value: 20.
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Sorting metric. Valid values: "AvgFluxPerSecond", "TotalRequest" (default), "TotalFlux".
                     * @return OrderParam Sorting metric. Valid values: "AvgFluxPerSecond", "TotalRequest" (default), "TotalFlux".
                     */
                    std::string GetOrderParam() const;

                    /**
                     * 设置Sorting metric. Valid values: "AvgFluxPerSecond", "TotalRequest" (default), "TotalFlux".
                     * @param OrderParam Sorting metric. Valid values: "AvgFluxPerSecond", "TotalRequest" (default), "TotalFlux".
                     */
                    void SetOrderParam(const std::string& _orderParam);

                    /**
                     * 判断参数 OrderParam 是否已赋值
                     * @return OrderParam 是否已赋值
                     */
                    bool OrderParamHasBeenSet() const;

                private:

                    /**
                     * Start point in time in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End point in time in the format of `yyyy-mm-dd HH:MM:SS`
The time span is (0,4 hours]. Data for the last day can be queried.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Bandwidth metric. Valid values: "Domain", "StreamId".
                     */
                    std::string m_topIndex;
                    bool m_topIndexHasBeenSet;

                    /**
                     * Playback domain name. If this parameter is left empty, full data will be queried by default.
                     */
                    std::vector<std::string> m_playDomains;
                    bool m_playDomainsHasBeenSet;

                    /**
                     * Page number,
Value range: [1,1000],
Default value: 1.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of entries per page. Value range: [1,1000].
Default value: 20.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Sorting metric. Valid values: "AvgFluxPerSecond", "TotalRequest" (default), "TotalFlux".
                     */
                    std::string m_orderParam;
                    bool m_orderParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEVISITTOPSUMINFOLISTREQUEST_H_
