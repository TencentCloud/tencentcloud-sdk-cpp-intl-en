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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBESTREAMLIVETRANSCODEDETAILREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBESTREAMLIVETRANSCODEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * DescribeStreamLiveTranscodeDetail request structure.
                */
                class DescribeStreamLiveTranscodeDetailRequest : public AbstractModel
                {
                public:
                    DescribeStreamLiveTranscodeDetailRequest();
                    ~DescribeStreamLiveTranscodeDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The query start time (UTC+8) in the format of yyyy-MM-dd.
You can only query data in the last month (not including the current day).
                     * @return StartDayTime The query start time (UTC+8) in the format of yyyy-MM-dd.
You can only query data in the last month (not including the current day).
                     */
                    std::string GetStartDayTime() const;

                    /**
                     * 设置The query start time (UTC+8) in the format of yyyy-MM-dd.
You can only query data in the last month (not including the current day).
                     * @param StartDayTime The query start time (UTC+8) in the format of yyyy-MM-dd.
You can only query data in the last month (not including the current day).
                     */
                    void SetStartDayTime(const std::string& _startDayTime);

                    /**
                     * 判断参数 StartDayTime 是否已赋值
                     * @return StartDayTime 是否已赋值
                     */
                    bool StartDayTimeHasBeenSet() const;

                    /**
                     * 获取The query end time (UTC+8) in the format of yyyy-MM-dd.
You can only query data in the last month (not including the current day).
                     * @return EndDayTime The query end time (UTC+8) in the format of yyyy-MM-dd.
You can only query data in the last month (not including the current day).
                     */
                    std::string GetEndDayTime() const;

                    /**
                     * 设置The query end time (UTC+8) in the format of yyyy-MM-dd.
You can only query data in the last month (not including the current day).
                     * @param EndDayTime The query end time (UTC+8) in the format of yyyy-MM-dd.
You can only query data in the last month (not including the current day).
                     */
                    void SetEndDayTime(const std::string& _endDayTime);

                    /**
                     * 判断参数 EndDayTime 是否已赋值
                     * @return EndDayTime 是否已赋值
                     */
                    bool EndDayTimeHasBeenSet() const;

                    /**
                     * 获取The channel ID (optional).
                     * @return ChannelId The channel ID (optional).
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置The channel ID (optional).
                     * @param ChannelId The channel ID (optional).
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取The number of pages. Default value: 1.
The value cannot exceed 100.
                     * @return PageNum The number of pages. Default value: 1.
The value cannot exceed 100.
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置The number of pages. Default value: 1.
The value cannot exceed 100.
                     * @param PageNum The number of pages. Default value: 1.
The value cannot exceed 100.
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取The number of records per page. Default value: 10.
Value range: 1-1000.
                     * @return PageSize The number of records per page. Default value: 10.
Value range: 1-1000.
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置The number of records per page. Default value: 10.
Value range: 1-1000.
                     * @param PageSize The number of records per page. Default value: 10.
Value range: 1-1000.
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * The query start time (UTC+8) in the format of yyyy-MM-dd.
You can only query data in the last month (not including the current day).
                     */
                    std::string m_startDayTime;
                    bool m_startDayTimeHasBeenSet;

                    /**
                     * The query end time (UTC+8) in the format of yyyy-MM-dd.
You can only query data in the last month (not including the current day).
                     */
                    std::string m_endDayTime;
                    bool m_endDayTimeHasBeenSet;

                    /**
                     * The channel ID (optional).
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * The number of pages. Default value: 1.
The value cannot exceed 100.
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * The number of records per page. Default value: 10.
Value range: 1-1000.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBESTREAMLIVETRANSCODEDETAILREQUEST_H_
