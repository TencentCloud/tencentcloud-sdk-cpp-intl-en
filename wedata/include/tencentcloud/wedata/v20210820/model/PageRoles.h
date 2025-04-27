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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PAGEROLES_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PAGEROLES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BaseRole.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Pagination information of the role list.
                */
                class PageRoles : public AbstractModel
                {
                public:
                    PageRoles();
                    ~PageRoles() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Role information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Rows Role information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BaseRole> GetRows() const;

                    /**
                     * 设置Role information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rows Role information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRows(const std::vector<BaseRole>& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取Page number

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageNumber Page number

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageNumber Page number

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Pagination size

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageSize Pagination size

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Pagination size

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageSize Pagination size

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Total number

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount Total number

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Total pagination pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalPageNumber Total pagination pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalPageNumber() const;

                    /**
                     * 设置Total pagination pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalPageNumber Total pagination pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalPageNumber(const int64_t& _totalPageNumber);

                    /**
                     * 判断参数 TotalPageNumber 是否已赋值
                     * @return TotalPageNumber 是否已赋值
                     * 
                     */
                    bool TotalPageNumberHasBeenSet() const;

                private:

                    /**
                     * Role information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BaseRole> m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * Page number

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Pagination size

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Total number

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Total pagination pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PAGEROLES_H_
