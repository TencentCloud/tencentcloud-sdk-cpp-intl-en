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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWFOLDERPAGE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWFOLDERPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/WorkflowFolder.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Paginate resource files.
                */
                class WorkflowFolderPage : public AbstractModel
                {
                public:
                    WorkflowFolderPage();
                    ~WorkflowFolderPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data page number, equal to or greater than 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageNumber Data page number, equal to or greater than 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Data page number, equal to or greater than 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageNumber Data page number, equal to or greater than 1.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Specifies the number of data records displayed per page. value range: 10 to 200.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageSize Specifies the number of data records displayed per page. value range: 10 to 200.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Specifies the number of data records displayed per page. value range: 10 to 200.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageSize Specifies the number of data records displayed per page. value range: 10 to 200.
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
                     * 获取Total number of folders.
                     * @return TotalCount Total number of folders.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total number of folders.
                     * @param _totalCount Total number of folders.
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
                     * @return TotalPageNumber Total pages
                     * 
                     */
                    uint64_t GetTotalPageNumber() const;

                    /**
                     * 设置Total pages
                     * @param _totalPageNumber Total pages
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
                     * 获取Folder list.
                     * @return Items Folder list.
                     * 
                     */
                    std::vector<WorkflowFolder> GetItems() const;

                    /**
                     * 设置Folder list.
                     * @param _items Folder list.
                     * 
                     */
                    void SetItems(const std::vector<WorkflowFolder>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * Data page number, equal to or greater than 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Specifies the number of data records displayed per page. value range: 10 to 200.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Total number of folders.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Total pages
                     */
                    uint64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                    /**
                     * Folder list.
                     */
                    std::vector<WorkflowFolder> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWFOLDERPAGE_H_
