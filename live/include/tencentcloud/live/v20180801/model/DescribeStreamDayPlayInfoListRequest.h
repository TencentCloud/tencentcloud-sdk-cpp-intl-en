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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMDAYPLAYINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMDAYPLAYINFOLISTREQUEST_H_

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
                * DescribeStreamDayPlayInfoList request structure.
                */
                class DescribeStreamDayPlayInfoListRequest : public AbstractModel
                {
                public:
                    DescribeStreamDayPlayInfoListRequest();
                    ~DescribeStreamDayPlayInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Date in the format of `YYYY-mm-dd`.
Data is available at 3 AM the next day. You are recommended to query the latest data after this time point.
                     * @return DayTime Date in the format of `YYYY-mm-dd`.
Data is available at 3 AM the next day. You are recommended to query the latest data after this time point.
                     */
                    std::string GetDayTime() const;

                    /**
                     * 设置Date in the format of `YYYY-mm-dd`.
Data is available at 3 AM the next day. You are recommended to query the latest data after this time point.
                     * @param DayTime Date in the format of `YYYY-mm-dd`.
Data is available at 3 AM the next day. You are recommended to query the latest data after this time point.
                     */
                    void SetDayTime(const std::string& _dayTime);

                    /**
                     * 判断参数 DayTime 是否已赋值
                     * @return DayTime 是否已赋值
                     */
                    bool DayTimeHasBeenSet() const;

                    /**
                     * 获取Playback domain name.
                     * @return PlayDomain Playback domain name.
                     */
                    std::string GetPlayDomain() const;

                    /**
                     * 设置Playback domain name.
                     * @param PlayDomain Playback domain name.
                     */
                    void SetPlayDomain(const std::string& _playDomain);

                    /**
                     * 判断参数 PlayDomain 是否已赋值
                     * @return PlayDomain 是否已赋值
                     */
                    bool PlayDomainHasBeenSet() const;

                    /**
                     * 获取Page number. Value range: [1,1000]. Default value: 1.
                     * @return PageNum Page number. Value range: [1,1000]. Default value: 1.
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置Page number. Value range: [1,1000]. Default value: 1.
                     * @param PageNum Page number. Value range: [1,1000]. Default value: 1.
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Value range: [100,1000]. Default value: 1,000.
                     * @return PageSize Number of entries per page. Value range: [100,1000]. Default value: 1,000.
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page. Value range: [100,1000]. Default value: 1,000.
                     * @param PageSize Number of entries per page. Value range: [100,1000]. Default value: 1,000.
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Date in the format of `YYYY-mm-dd`.
Data is available at 3 AM the next day. You are recommended to query the latest data after this time point.
                     */
                    std::string m_dayTime;
                    bool m_dayTimeHasBeenSet;

                    /**
                     * Playback domain name.
                     */
                    std::string m_playDomain;
                    bool m_playDomainHasBeenSet;

                    /**
                     * Page number. Value range: [1,1000]. Default value: 1.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of entries per page. Value range: [100,1000]. Default value: 1,000.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMDAYPLAYINFOLISTREQUEST_H_
