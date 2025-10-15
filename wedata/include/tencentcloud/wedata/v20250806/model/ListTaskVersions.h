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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKVERSIONS_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKVERSIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TaskVersion.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Describes the pagination list of query task versions.
                */
                class ListTaskVersions : public AbstractModel
                {
                public:
                    ListTaskVersions();
                    ~ListTaskVersions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record list	
	

                     * @return Items Record list	
	

                     * 
                     */
                    std::vector<TaskVersion> GetItems() const;

                    /**
                     * 设置Record list	
	

                     * @param _items Record list	
	

                     * 
                     */
                    void SetItems(const std::vector<TaskVersion>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Total number of records that meet the query condition.

                     * @return TotalCount Total number of records that meet the query condition.

                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total number of records that meet the query condition.

                     * @param _totalCount Total number of records that meet the query condition.

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
                     * 获取Total number of pages that meet the query condition.

                     * @return TotalPageNumber Total number of pages that meet the query condition.

                     * 
                     */
                    uint64_t GetTotalPageNumber() const;

                    /**
                     * 设置Total number of pages that meet the query condition.

                     * @param _totalPageNumber Total number of pages that meet the query condition.

                     * 
                     */
                    void SetTotalPageNumber(const uint64_t& _totalPageNumber);

                    /**
                     * 判断参数 TotalPageNumber 是否已赋值
                     * @return TotalPageNumber 是否已赋值
                     * 
                     */
                    bool TotalPageNumberHasBeenSet() const;

                    /**
                     * 获取Number of records on current page.

                     * @return PageCount Number of records on current page.

                     * 
                     */
                    uint64_t GetPageCount() const;

                    /**
                     * 设置Number of records on current page.

                     * @param _pageCount Number of records on current page.

                     * 
                     */
                    void SetPageCount(const uint64_t& _pageCount);

                    /**
                     * 判断参数 PageCount 是否已赋值
                     * @return PageCount 是否已赋值
                     * 
                     */
                    bool PageCountHasBeenSet() const;

                    /**
                     * 获取Specifies the number of entries in the current request data page.

                     * @return PageSize Specifies the number of entries in the current request data page.

                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Specifies the number of entries in the current request data page.

                     * @param _pageSize Specifies the number of entries in the current request data page.

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
                     * 获取Specifies the data page number of the current request.

                     * @return PageNumber Specifies the data page number of the current request.

                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Specifies the data page number of the current request.

                     * @param _pageNumber Specifies the data page number of the current request.

                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * Record list	
	

                     */
                    std::vector<TaskVersion> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Total number of records that meet the query condition.

                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Total number of pages that meet the query condition.

                     */
                    uint64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                    /**
                     * Number of records on current page.

                     */
                    uint64_t m_pageCount;
                    bool m_pageCountHasBeenSet;

                    /**
                     * Specifies the number of entries in the current request data page.

                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Specifies the data page number of the current request.

                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKVERSIONS_H_
