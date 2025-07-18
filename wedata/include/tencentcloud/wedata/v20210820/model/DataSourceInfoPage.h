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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEINFOPAGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEINFOPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DataSourceInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Query Data Source Pagination List
                */
                class DataSourceInfoPage : public AbstractModel
                {
                public:
                    DataSourceInfoPage();
                    ~DataSourceInfoPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取pagination page number
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PageNumber pagination page number
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置pagination page number
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _pageNumber pagination page number
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取pagination size
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PageSize pagination size
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置pagination size
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _pageSize pagination size
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取data source list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Rows data source list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<DataSourceInfo> GetRows() const;

                    /**
                     * 设置data source list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _rows data source list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRows(const std::vector<DataSourceInfo>& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalCount Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalCount Total numberNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取total pagination pages
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalPageNumber total pagination pages
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTotalPageNumber() const;

                    /**
                     * 设置total pagination pages
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalPageNumber total pagination pages
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * pagination page number
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * pagination size
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * data source list
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<DataSourceInfo> m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * total pagination pages
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEINFOPAGE_H_
