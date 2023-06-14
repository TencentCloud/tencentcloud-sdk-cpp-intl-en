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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODEDETAILINFOREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODEDETAILINFOREQUEST_H_

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
                * DescribeLiveTranscodeDetailInfo request structure.
                */
                class DescribeLiveTranscodeDetailInfoRequest : public AbstractModel
                {
                public:
                    DescribeLiveTranscodeDetailInfoRequest();
                    ~DescribeLiveTranscodeDetailInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Push domain name.
                     * @return PushDomain Push domain name.
                     * 
                     */
                    std::string GetPushDomain() const;

                    /**
                     * 设置Push domain name.
                     * @param _pushDomain Push domain name.
                     * 
                     */
                    void SetPushDomain(const std::string& _pushDomain);

                    /**
                     * 判断参数 PushDomain 是否已赋值
                     * @return PushDomain 是否已赋值
                     * 
                     */
                    bool PushDomainHasBeenSet() const;

                    /**
                     * 获取Stream name.
                     * @return StreamName Stream name.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name.
                     * @param _streamName Stream name.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取Query date (UTC+8)
Format: yyyymmdd
Note: you can query the statistics for a day in the past month, with yesterday as the latest date allowed.
                     * @return DayTime Query date (UTC+8)
Format: yyyymmdd
Note: you can query the statistics for a day in the past month, with yesterday as the latest date allowed.
                     * 
                     */
                    std::string GetDayTime() const;

                    /**
                     * 设置Query date (UTC+8)
Format: yyyymmdd
Note: you can query the statistics for a day in the past month, with yesterday as the latest date allowed.
                     * @param _dayTime Query date (UTC+8)
Format: yyyymmdd
Note: you can query the statistics for a day in the past month, with yesterday as the latest date allowed.
                     * 
                     */
                    void SetDayTime(const std::string& _dayTime);

                    /**
                     * 判断参数 DayTime 是否已赋值
                     * @return DayTime 是否已赋值
                     * 
                     */
                    bool DayTimeHasBeenSet() const;

                    /**
                     * 获取Number of pages. Default value: 1.
Up to 100 pages.
                     * @return PageNum Number of pages. Default value: 1.
Up to 100 pages.
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置Number of pages. Default value: 1.
Up to 100 pages.
                     * @param _pageNum Number of pages. Default value: 1.
Up to 100 pages.
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
                     * 获取Number of entries per page. Default value: 20,
Value range: [10,1000].
                     * @return PageSize Number of entries per page. Default value: 20,
Value range: [10,1000].
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page. Default value: 20,
Value range: [10,1000].
                     * @param _pageSize Number of entries per page. Default value: 20,
Value range: [10,1000].
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
                     * 获取Start day time (Beijing time),
In the format of `yyyymmdd`.
Note: details for the last month can be queried.
                     * @return StartDayTime Start day time (Beijing time),
In the format of `yyyymmdd`.
Note: details for the last month can be queried.
                     * 
                     */
                    std::string GetStartDayTime() const;

                    /**
                     * 设置Start day time (Beijing time),
In the format of `yyyymmdd`.
Note: details for the last month can be queried.
                     * @param _startDayTime Start day time (Beijing time),
In the format of `yyyymmdd`.
Note: details for the last month can be queried.
                     * 
                     */
                    void SetStartDayTime(const std::string& _startDayTime);

                    /**
                     * 判断参数 StartDayTime 是否已赋值
                     * @return StartDayTime 是否已赋值
                     * 
                     */
                    bool StartDayTimeHasBeenSet() const;

                    /**
                     * 获取End date (UTC+8)
Format: yyyymmdd
Note: you can query the statistics for a period in the past month, with yesterday as the latest date allowed. You must specify either `DayTime`, or `StartDayTime` and `EndDayTime`. If you specify all three parameters, only `DayTime` will be applied.
                     * @return EndDayTime End date (UTC+8)
Format: yyyymmdd
Note: you can query the statistics for a period in the past month, with yesterday as the latest date allowed. You must specify either `DayTime`, or `StartDayTime` and `EndDayTime`. If you specify all three parameters, only `DayTime` will be applied.
                     * 
                     */
                    std::string GetEndDayTime() const;

                    /**
                     * 设置End date (UTC+8)
Format: yyyymmdd
Note: you can query the statistics for a period in the past month, with yesterday as the latest date allowed. You must specify either `DayTime`, or `StartDayTime` and `EndDayTime`. If you specify all three parameters, only `DayTime` will be applied.
                     * @param _endDayTime End date (UTC+8)
Format: yyyymmdd
Note: you can query the statistics for a period in the past month, with yesterday as the latest date allowed. You must specify either `DayTime`, or `StartDayTime` and `EndDayTime`. If you specify all three parameters, only `DayTime` will be applied.
                     * 
                     */
                    void SetEndDayTime(const std::string& _endDayTime);

                    /**
                     * 判断参数 EndDayTime 是否已赋值
                     * @return EndDayTime 是否已赋值
                     * 
                     */
                    bool EndDayTimeHasBeenSet() const;

                private:

                    /**
                     * Push domain name.
                     */
                    std::string m_pushDomain;
                    bool m_pushDomainHasBeenSet;

                    /**
                     * Stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * Query date (UTC+8)
Format: yyyymmdd
Note: you can query the statistics for a day in the past month, with yesterday as the latest date allowed.
                     */
                    std::string m_dayTime;
                    bool m_dayTimeHasBeenSet;

                    /**
                     * Number of pages. Default value: 1.
Up to 100 pages.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of entries per page. Default value: 20,
Value range: [10,1000].
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Start day time (Beijing time),
In the format of `yyyymmdd`.
Note: details for the last month can be queried.
                     */
                    std::string m_startDayTime;
                    bool m_startDayTimeHasBeenSet;

                    /**
                     * End date (UTC+8)
Format: yyyymmdd
Note: you can query the statistics for a period in the past month, with yesterday as the latest date allowed. You must specify either `DayTime`, or `StartDayTime` and `EndDayTime`. If you specify all three parameters, only `DayTime` will be applied.
                     */
                    std::string m_endDayTime;
                    bool m_endDayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODEDETAILINFOREQUEST_H_
