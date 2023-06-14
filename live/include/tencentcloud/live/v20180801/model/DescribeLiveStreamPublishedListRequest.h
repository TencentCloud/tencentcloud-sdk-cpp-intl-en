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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMPUBLISHEDLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMPUBLISHEDLISTREQUEST_H_

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
                * DescribeLiveStreamPublishedList request structure.
                */
                class DescribeLiveStreamPublishedListRequest : public AbstractModel
                {
                public:
                    DescribeLiveStreamPublishedListRequest();
                    ~DescribeLiveStreamPublishedListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Your push domain name.
                     * @return DomainName Your push domain name.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Your push domain name.
                     * @param _domainName Your push domain name.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取End time.
In UTC format, such as 2016-06-30T19:00:00Z.
This cannot be after the current time.
Note: The difference between EndTime and StartTime cannot be greater than 30 days.
                     * @return EndTime End time.
In UTC format, such as 2016-06-30T19:00:00Z.
This cannot be after the current time.
Note: The difference between EndTime and StartTime cannot be greater than 30 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
In UTC format, such as 2016-06-30T19:00:00Z.
This cannot be after the current time.
Note: The difference between EndTime and StartTime cannot be greater than 30 days.
                     * @param _endTime End time.
In UTC format, such as 2016-06-30T19:00:00Z.
This cannot be after the current time.
Note: The difference between EndTime and StartTime cannot be greater than 30 days.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Start time. 
In UTC format, such as 2016-06-29T19:00:00Z.
This supports querying data in the past 60 days.
                     * @return StartTime Start time. 
In UTC format, such as 2016-06-29T19:00:00Z.
This supports querying data in the past 60 days.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time. 
In UTC format, such as 2016-06-29T19:00:00Z.
This supports querying data in the past 60 days.
                     * @param _startTime Start time. 
In UTC format, such as 2016-06-29T19:00:00Z.
This supports querying data in the past 60 days.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default. Fuzzy match is not supported.
                     * @return AppName Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default. Fuzzy match is not supported.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default. Fuzzy match is not supported.
                     * @param _appName Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default. Fuzzy match is not supported.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Page number to get.
Default value: 1.
                     * @return PageNum Page number to get.
Default value: 1.
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置Page number to get.
Default value: 1.
                     * @param _pageNum Page number to get.
Default value: 1.
                     * 
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取Number of entries per page.
Maximum value: 100
Valid values: integers between 10 and 100
Default value: 10
                     * @return PageSize Number of entries per page.
Maximum value: 100
Valid values: integers between 10 and 100
Default value: 10
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page.
Maximum value: 100
Valid values: integers between 10 and 100
Default value: 10
                     * @param _pageSize Number of entries per page.
Maximum value: 100
Valid values: integers between 10 and 100
Default value: 10
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Stream name, which supports fuzzy match.
                     * @return StreamName Stream name, which supports fuzzy match.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name, which supports fuzzy match.
                     * @param _streamName Stream name, which supports fuzzy match.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                private:

                    /**
                     * Your push domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * End time.
In UTC format, such as 2016-06-30T19:00:00Z.
This cannot be after the current time.
Note: The difference between EndTime and StartTime cannot be greater than 30 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Start time. 
In UTC format, such as 2016-06-29T19:00:00Z.
This supports querying data in the past 60 days.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default. Fuzzy match is not supported.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Page number to get.
Default value: 1.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of entries per page.
Maximum value: 100
Valid values: integers between 10 and 100
Default value: 10
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Stream name, which supports fuzzy match.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMPUBLISHEDLISTREQUEST_H_
