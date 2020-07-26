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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMEVENTLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMEVENTLISTREQUEST_H_

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
                * DescribeLiveStreamEventList request structure.
                */
                class DescribeLiveStreamEventListRequest : public AbstractModel
                {
                public:
                    DescribeLiveStreamEventListRequest();
                    ~DescribeLiveStreamEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time. 
In UTC format, such as 2018-12-29T19:00:00Z.
This supports querying the history of 60 days.
                     * @return StartTime Start time. 
In UTC format, such as 2018-12-29T19:00:00Z.
This supports querying the history of 60 days.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time. 
In UTC format, such as 2018-12-29T19:00:00Z.
This supports querying the history of 60 days.
                     * @param StartTime Start time. 
In UTC format, such as 2018-12-29T19:00:00Z.
This supports querying the history of 60 days.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time.
In UTC format, such as 2018-12-29T20:00:00Z.
This cannot be after the current time and cannot be more than 30 days after the start time.
                     * @return EndTime End time.
In UTC format, such as 2018-12-29T20:00:00Z.
This cannot be after the current time and cannot be more than 30 days after the start time.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
In UTC format, such as 2018-12-29T20:00:00Z.
This cannot be after the current time and cannot be more than 30 days after the start time.
                     * @param EndTime End time.
In UTC format, such as 2018-12-29T20:00:00Z.
This cannot be after the current time and cannot be more than 30 days after the start time.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Push path, which is the same as the AppName in push and playback addresses and is "live" by default.
                     * @return AppName Push path, which is the same as the AppName in push and playback addresses and is "live" by default.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Push path, which is the same as the AppName in push and playback addresses and is "live" by default.
                     * @param AppName Push path, which is the same as the AppName in push and playback addresses and is "live" by default.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Push domain name.
                     * @return DomainName Push domain name.
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Push domain name.
                     * @param DomainName Push domain name.
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Stream name; query with wildcard (*) is not supported; fuzzy match by default.
The IsStrict field can be used to change to exact query.
                     * @return StreamName Stream name; query with wildcard (*) is not supported; fuzzy match by default.
The IsStrict field can be used to change to exact query.
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name; query with wildcard (*) is not supported; fuzzy match by default.
The IsStrict field can be used to change to exact query.
                     * @param StreamName Stream name; query with wildcard (*) is not supported; fuzzy match by default.
The IsStrict field can be used to change to exact query.
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取Page number to get.
Default value: 1.
Note: Currently, query for up to 10,000 entries is supported.
                     * @return PageNum Page number to get.
Default value: 1.
Note: Currently, query for up to 10,000 entries is supported.
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置Page number to get.
Default value: 1.
Note: Currently, query for up to 10,000 entries is supported.
                     * @param PageNum Page number to get.
Default value: 1.
Note: Currently, query for up to 10,000 entries is supported.
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取Number of entries per page.
Maximum value: 100.
Value range: any integer between 1 and 100.
Default value: 10.
Note: currently, query for up to 10,000 entries is supported.
                     * @return PageSize Number of entries per page.
Maximum value: 100.
Value range: any integer between 1 and 100.
Default value: 10.
Note: currently, query for up to 10,000 entries is supported.
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page.
Maximum value: 100.
Value range: any integer between 1 and 100.
Default value: 10.
Note: currently, query for up to 10,000 entries is supported.
                     * @param PageSize Number of entries per page.
Maximum value: 100.
Value range: any integer between 1 and 100.
Default value: 10.
Note: currently, query for up to 10,000 entries is supported.
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Whether to filter. No filtering by default.
0: No filtering at all.
1: Filter out the failing streams and return only the successful ones.
                     * @return IsFilter Whether to filter. No filtering by default.
0: No filtering at all.
1: Filter out the failing streams and return only the successful ones.
                     */
                    int64_t GetIsFilter() const;

                    /**
                     * 设置Whether to filter. No filtering by default.
0: No filtering at all.
1: Filter out the failing streams and return only the successful ones.
                     * @param IsFilter Whether to filter. No filtering by default.
0: No filtering at all.
1: Filter out the failing streams and return only the successful ones.
                     */
                    void SetIsFilter(const int64_t& _isFilter);

                    /**
                     * 判断参数 IsFilter 是否已赋值
                     * @return IsFilter 是否已赋值
                     */
                    bool IsFilterHasBeenSet() const;

                    /**
                     * 获取Whether to query exactly. Fuzzy match by default.
0: Fuzzy match.
1: Exact query.
Note: This parameter takes effect when StreamName is used.
                     * @return IsStrict Whether to query exactly. Fuzzy match by default.
0: Fuzzy match.
1: Exact query.
Note: This parameter takes effect when StreamName is used.
                     */
                    int64_t GetIsStrict() const;

                    /**
                     * 设置Whether to query exactly. Fuzzy match by default.
0: Fuzzy match.
1: Exact query.
Note: This parameter takes effect when StreamName is used.
                     * @param IsStrict Whether to query exactly. Fuzzy match by default.
0: Fuzzy match.
1: Exact query.
Note: This parameter takes effect when StreamName is used.
                     */
                    void SetIsStrict(const int64_t& _isStrict);

                    /**
                     * 判断参数 IsStrict 是否已赋值
                     * @return IsStrict 是否已赋值
                     */
                    bool IsStrictHasBeenSet() const;

                    /**
                     * 获取Whether to display in ascending order by end time. Descending order by default.
0: Descending.
1: Ascending.
                     * @return IsAsc Whether to display in ascending order by end time. Descending order by default.
0: Descending.
1: Ascending.
                     */
                    int64_t GetIsAsc() const;

                    /**
                     * 设置Whether to display in ascending order by end time. Descending order by default.
0: Descending.
1: Ascending.
                     * @param IsAsc Whether to display in ascending order by end time. Descending order by default.
0: Descending.
1: Ascending.
                     */
                    void SetIsAsc(const int64_t& _isAsc);

                    /**
                     * 判断参数 IsAsc 是否已赋值
                     * @return IsAsc 是否已赋值
                     */
                    bool IsAscHasBeenSet() const;

                private:

                    /**
                     * Start time. 
In UTC format, such as 2018-12-29T19:00:00Z.
This supports querying the history of 60 days.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
In UTC format, such as 2018-12-29T20:00:00Z.
This cannot be after the current time and cannot be more than 30 days after the start time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Push path, which is the same as the AppName in push and playback addresses and is "live" by default.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Push domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Stream name; query with wildcard (*) is not supported; fuzzy match by default.
The IsStrict field can be used to change to exact query.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * Page number to get.
Default value: 1.
Note: Currently, query for up to 10,000 entries is supported.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of entries per page.
Maximum value: 100.
Value range: any integer between 1 and 100.
Default value: 10.
Note: currently, query for up to 10,000 entries is supported.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Whether to filter. No filtering by default.
0: No filtering at all.
1: Filter out the failing streams and return only the successful ones.
                     */
                    int64_t m_isFilter;
                    bool m_isFilterHasBeenSet;

                    /**
                     * Whether to query exactly. Fuzzy match by default.
0: Fuzzy match.
1: Exact query.
Note: This parameter takes effect when StreamName is used.
                     */
                    int64_t m_isStrict;
                    bool m_isStrictHasBeenSet;

                    /**
                     * Whether to display in ascending order by end time. Descending order by default.
0: Descending.
1: Ascending.
                     */
                    int64_t m_isAsc;
                    bool m_isAscHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMEVENTLISTREQUEST_H_
