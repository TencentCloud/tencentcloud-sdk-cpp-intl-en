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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFOLDERPAGE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFOLDERPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ResourceFolder.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Paginate resource folders.
                */
                class ResourceFolderPage : public AbstractModel
                {
                public:
                    ResourceFolderPage();
                    ~ResourceFolderPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource folder collection information.
                     * @return Items Resource folder collection information.
                     * 
                     */
                    std::vector<ResourceFolder> GetItems() const;

                    /**
                     * 设置Resource folder collection information.
                     * @param _items Resource folder collection information.
                     * 
                     */
                    void SetItems(const std::vector<ResourceFolder>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Total page number.
                     * @return TotalPageNumber Total page number.
                     * 
                     */
                    uint64_t GetTotalPageNumber() const;

                    /**
                     * 设置Total page number.
                     * @param _totalPageNumber Total page number.
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
                     * 获取Total resource folder count
                     * @return TotalCount Total resource folder count
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total resource folder count
                     * @param _totalCount Total resource folder count
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
                     * 获取Current Page number
                     * @return PageNumber Current Page number
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Current Page number
                     * @param _pageNumber Current Page number
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
                     * 获取Items per Page
                     * @return PageSize Items per Page
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Items per Page
                     * @param _pageSize Items per Page
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Resource folder collection information.
                     */
                    std::vector<ResourceFolder> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Total page number.
                     */
                    uint64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                    /**
                     * Total resource folder count
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Current Page number
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Items per Page
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFOLDERPAGE_H_
