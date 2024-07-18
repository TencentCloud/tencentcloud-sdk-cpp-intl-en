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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBEMEDIALIVEHIGHLIGHTRESULTREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBEMEDIALIVEHIGHLIGHTRESULTREQUEST_H_

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
                * DescribeMediaLiveHighlightResult request structure.
                */
                class DescribeMediaLiveHighlightResultRequest : public AbstractModel
                {
                public:
                    DescribeMediaLiveHighlightResultRequest();
                    ~DescribeMediaLiveHighlightResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Media live broadcast channel ID.
                     * @return Id Media live broadcast channel ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Media live broadcast channel ID.
                     * @param _id Media live broadcast channel ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Query start time, unix timestamp, query data within the last 6 hours by default, and the maximum query range supports the last 7 days.
                     * @return StartTime Query start time, unix timestamp, query data within the last 6 hours by default, and the maximum query range supports the last 7 days.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Query start time, unix timestamp, query data within the last 6 hours by default, and the maximum query range supports the last 7 days.
                     * @param _startTime Query start time, unix timestamp, query data within the last 6 hours by default, and the maximum query range supports the last 7 days.
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query end time, Unix timestamp, query data within the last 6 hours by default, and the maximum query range supports the last 7 days.
                     * @return EndTime Query end time, Unix timestamp, query data within the last 6 hours by default, and the maximum query range supports the last 7 days.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Query end time, Unix timestamp, query data within the last 6 hours by default, and the maximum query range supports the last 7 days.
                     * @param _endTime Query end time, Unix timestamp, query data within the last 6 hours by default, and the maximum query range supports the last 7 days.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Paging query page number.
                     * @return PageNum Paging query page number.
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置Paging query page number.
                     * @param _pageNum Paging query page number.
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
                     * 获取Paging query the size of each page.
                     * @return PageSize Paging query the size of each page.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Paging query the size of each page.
                     * @param _pageSize Paging query the size of each page.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Media live broadcast channel ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Query start time, unix timestamp, query data within the last 6 hours by default, and the maximum query range supports the last 7 days.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time, Unix timestamp, query data within the last 6 hours by default, and the maximum query range supports the last 7 days.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Paging query page number.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Paging query the size of each page.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBEMEDIALIVEHIGHLIGHTRESULTREQUEST_H_
