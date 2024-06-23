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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKINFOPAGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKINFOPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task Pagination Query
                */
                class OpsTaskInfoPage : public AbstractModel
                {
                public:
                    OpsTaskInfoPage();
                    ~OpsTaskInfoPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Page Number
                     * @return PageNumber Page Number
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page Number
                     * @param _pageNumber Page Number
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
                     * 获取Page Size
                     * @return PageSize Page Size
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Page Size
                     * @param _pageSize Page Size
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
                     * 获取Task List Information
                     * @return Items Task List Information
                     * 
                     */
                    std::vector<TaskOpsDto> GetItems() const;

                    /**
                     * 设置Task List Information
                     * @param _items Task List Information
                     * 
                     */
                    void SetItems(const std::vector<TaskOpsDto>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Total Pages
                     * @return TotalPage Total Pages
                     * 
                     */
                    uint64_t GetTotalPage() const;

                    /**
                     * 设置Total Pages
                     * @param _totalPage Total Pages
                     * 
                     */
                    void SetTotalPage(const uint64_t& _totalPage);

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     * 
                     */
                    bool TotalPageHasBeenSet() const;

                    /**
                     * 获取Page Number
                     * @return PageCount Page Number
                     * 
                     */
                    uint64_t GetPageCount() const;

                    /**
                     * 设置Page Number
                     * @param _pageCount Page Number
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
                     * 获取Total number of items
                     * @return TotalCount Total number of items
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total number of items
                     * @param _totalCount Total number of items
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Page Number
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page Size
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Task List Information
                     */
                    std::vector<TaskOpsDto> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Total Pages
                     */
                    uint64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * Page Number
                     */
                    uint64_t m_pageCount;
                    bool m_pageCountHasBeenSet;

                    /**
                     * Total number of items
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKINFOPAGE_H_
