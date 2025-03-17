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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTASKLISTINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTASKLISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskInfoVo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Submit task information.
                */
                class ReportTaskListInfo : public AbstractModel
                {
                public:
                    ReportTaskListInfo();
                    ~ReportTaskListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task list details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Rows Task list details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TaskInfoVo> GetRows() const;

                    /**
                     * 设置Task list details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rows Task list details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRows(const std::vector<TaskInfoVo>& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取Page number

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageNum Page number

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置Page number

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageNum Page number

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Entries per page.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageSize Entries per page.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Entries per page.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageSize Entries per page.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total number of records

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number of records

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total number of records

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount Total number of records

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Total pages

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalPageNumber Total pages

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotalPageNumber() const;

                    /**
                     * 设置Total pages

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalPageNumber Total pages

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalPageNumber(const uint64_t& _totalPageNumber);

                    /**
                     * 判断参数 TotalPageNumber 是否已赋值
                     * @return TotalPageNumber 是否已赋值
                     * 
                     */
                    bool TotalPageNumberHasBeenSet() const;

                private:

                    /**
                     * Task list details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TaskInfoVo> m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * Page number

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Entries per page.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Total number of records

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Total pages

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTASKLISTINFO_H_
