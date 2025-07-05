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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEFOLDERWORKFLOWLISTDATA_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEFOLDERWORKFLOWLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Workflow.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Folder Pagination Information
                */
                class DescribeFolderWorkflowListData : public AbstractModel
                {
                public:
                    DescribeFolderWorkflowListData();
                    ~DescribeFolderWorkflowListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Workflow Information List
                     * @return Items Workflow Information List
                     * 
                     */
                    std::vector<Workflow> GetItems() const;

                    /**
                     * 设置Workflow Information List
                     * @param _items Workflow Information List
                     * 
                     */
                    void SetItems(const std::vector<Workflow>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Total number of items
                     * @return TotalCount Total number of items
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number of items
                     * @param _totalCount Total number of items
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
                     * 获取Page Number
                     * @return PageNumber Page Number
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page Number
                     * @param _pageNumber Page Number
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
                     * @return PageSize Page Size
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page Size
                     * @param _pageSize Page Size
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
                     * Workflow Information List
                     */
                    std::vector<Workflow> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Total number of items
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Page Number
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page Size
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEFOLDERWORKFLOWLISTDATA_H_
