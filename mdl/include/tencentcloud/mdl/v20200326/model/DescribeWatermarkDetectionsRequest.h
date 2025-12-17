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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBEWATERMARKDETECTIONSREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBEWATERMARKDETECTIONSREQUEST_H_

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
                * DescribeWatermarkDetections request structure.
                */
                class DescribeWatermarkDetectionsRequest : public AbstractModel
                {
                public:
                    DescribeWatermarkDetectionsRequest();
                    ~DescribeWatermarkDetectionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time, 2022-12-04T16:50:00+08:00
                     * @return StartTime Start time, 2022-12-04T16:50:00+08:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time, 2022-12-04T16:50:00+08:00
                     * @param _startTime Start time, 2022-12-04T16:50:00+08:00
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
                     * 获取End time, 2022-12-04T17:50:00+08:00, maximum supported query range of 7 days
                     * @return EndTime End time, 2022-12-04T17:50:00+08:00, maximum supported query range of 7 days
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time, 2022-12-04T17:50:00+08:00, maximum supported query range of 7 days
                     * @param _endTime End time, 2022-12-04T17:50:00+08:00, maximum supported query range of 7 days
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
                     * 获取Number of pages queried
                     * @return PageNum Number of pages queried
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置Number of pages queried
                     * @param _pageNum Number of pages queried
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取Single page quantity, 1-100
                     * @return PageSize Single page quantity, 1-100
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Single page quantity, 1-100
                     * @param _pageSize Single page quantity, 1-100
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Start time, 2022-12-04T16:50:00+08:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, 2022-12-04T17:50:00+08:00, maximum supported query range of 7 days
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Number of pages queried
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Single page quantity, 1-100
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBEWATERMARKDETECTIONSREQUEST_H_
