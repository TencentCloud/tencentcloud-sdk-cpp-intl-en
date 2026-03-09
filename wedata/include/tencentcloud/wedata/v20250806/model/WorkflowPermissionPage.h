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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWPERMISSIONPAGE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWPERMISSIONPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/WorkflowPermission.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Permission information for data development pagination.
                */
                class WorkflowPermissionPage : public AbstractModel
                {
                public:
                    WorkflowPermissionPage();
                    ~WorkflowPermissionPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of data pages, at least 1.
                     * @return PageNumber Number of data pages, at least 1.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Number of data pages, at least 1.
                     * @param _pageNumber Number of data pages, at least 1.
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
                     * 获取Number of records per page. the minimum value is `10`. the maximum value is `200`.
                     * @return PageSize Number of records per page. the minimum value is `10`. the maximum value is `200`.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of records per page. the minimum value is `10`. the maximum value is `200`.
                     * @param _pageSize Number of records per page. the minimum value is `10`. the maximum value is `200`.
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
                     * 获取Total number of authorized data.
                     * @return TotalCount Total number of authorized data.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total number of authorized data.
                     * @param _totalCount Total number of authorized data.
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
                     * 获取Authorization information list.
                     * @return Items Authorization information list.
                     * 
                     */
                    std::vector<WorkflowPermission> GetItems() const;

                    /**
                     * 设置Authorization information list.
                     * @param _items Authorization information list.
                     * 
                     */
                    void SetItems(const std::vector<WorkflowPermission>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * Number of data pages, at least 1.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of records per page. the minimum value is `10`. the maximum value is `200`.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Total number of authorized data.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Total pages
                     */
                    uint64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                    /**
                     * Authorization information list.
                     */
                    std::vector<WorkflowPermission> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWPERMISSIONPAGE_H_
