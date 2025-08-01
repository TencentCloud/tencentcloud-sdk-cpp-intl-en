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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANOPSDTOCOLLECTION_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANOPSDTOCOLLECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/MakePlanOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Supplementary plan collection
                */
                class MakePlanOpsDtoCollection : public AbstractModel
                {
                public:
                    MakePlanOpsDtoCollection();
                    ~MakePlanOpsDtoCollection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total Record Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalCount Total Record Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total Record Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalCount Total Record Count
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Total number of records
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalPage Total number of records
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalPage() const;

                    /**
                     * 设置Total number of records
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalPage Total number of records
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTotalPage(const int64_t& _totalPage);

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     * 
                     */
                    bool TotalPageHasBeenSet() const;

                    /**
                     * 获取Number of records on current page
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PageCount Number of records on current page
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPageCount() const;

                    /**
                     * 设置Number of records on current page
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _pageCount Number of records on current page
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPageCount(const int64_t& _pageCount);

                    /**
                     * 判断参数 PageCount 是否已赋值
                     * @return PageCount 是否已赋值
                     * 
                     */
                    bool PageCountHasBeenSet() const;

                    /**
                     * 获取Page Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PageNumber Page Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _pageNumber Page Number
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Page Size
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PageSize Page Size
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page Size
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _pageSize Page Size
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Record List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Items Record List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<MakePlanOpsDto> GetItems() const;

                    /**
                     * 设置Record List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _items Record List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetItems(const std::vector<MakePlanOpsDto>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * Total Record Count
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Total number of records
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * Number of records on current page
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_pageCount;
                    bool m_pageCountHasBeenSet;

                    /**
                     * Page Number
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page Size
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Record List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<MakePlanOpsDto> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANOPSDTOCOLLECTION_H_
