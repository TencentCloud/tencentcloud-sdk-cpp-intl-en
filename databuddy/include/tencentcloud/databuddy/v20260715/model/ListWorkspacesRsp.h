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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACESRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACESRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/WorkspaceInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * to the query for the workspace list
                */
                class ListWorkspacesRsp : public AbstractModel
                {
                public:
                    ListWorkspacesRsp();
                    ~ListWorkspacesRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Workspace list.</p>
                     * @return Items <p>Workspace list.</p>
                     * 
                     */
                    std::vector<WorkspaceInfo> GetItems() const;

                    /**
                     * 设置<p>Workspace list.</p>
                     * @param _items <p>Workspace list.</p>
                     * 
                     */
                    void SetItems(const std::vector<WorkspaceInfo>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取<p>Current page</p>
                     * @return PageNumber <p>Current page</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>Current page</p>
                     * @param _pageNumber <p>Current page</p>
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
                     * 获取<p>Page Size</p>
                     * @return PageSize <p>Page Size</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Page Size</p>
                     * @param _pageSize <p>Page Size</p>
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
                     * 获取<p>Total number of records</p>
                     * @return TotalCount <p>Total number of records</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>Total number of records</p>
                     * @param _totalCount <p>Total number of records</p>
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
                     * 获取<p>Total number of pages</p>
                     * @return TotalPageNumber <p>Total number of pages</p>
                     * 
                     */
                    int64_t GetTotalPageNumber() const;

                    /**
                     * 设置<p>Total number of pages</p>
                     * @param _totalPageNumber <p>Total number of pages</p>
                     * 
                     */
                    void SetTotalPageNumber(const int64_t& _totalPageNumber);

                    /**
                     * 判断参数 TotalPageNumber 是否已赋值
                     * @return TotalPageNumber 是否已赋值
                     * 
                     */
                    bool TotalPageNumberHasBeenSet() const;

                    /**
                     * 获取<p>Console administrator or not</p>
                     * @return IsConsoleAdmin <p>Console administrator or not</p>
                     * 
                     */
                    bool GetIsConsoleAdmin() const;

                    /**
                     * 设置<p>Console administrator or not</p>
                     * @param _isConsoleAdmin <p>Console administrator or not</p>
                     * 
                     */
                    void SetIsConsoleAdmin(const bool& _isConsoleAdmin);

                    /**
                     * 判断参数 IsConsoleAdmin 是否已赋值
                     * @return IsConsoleAdmin 是否已赋值
                     * 
                     */
                    bool IsConsoleAdminHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace list.</p>
                     */
                    std::vector<WorkspaceInfo> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * <p>Current page</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Page Size</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Total number of records</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Total number of pages</p>
                     */
                    int64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                    /**
                     * <p>Console administrator or not</p>
                     */
                    bool m_isConsoleAdmin;
                    bool m_isConsoleAdminHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACESRSP_H_
