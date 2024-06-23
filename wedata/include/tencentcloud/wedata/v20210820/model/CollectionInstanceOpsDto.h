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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COLLECTIONINSTANCEOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COLLECTIONINSTANCEOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Instance List Structure
                */
                class CollectionInstanceOpsDto : public AbstractModel
                {
                public:
                    CollectionInstanceOpsDto();
                    ~CollectionInstanceOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalCount Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalCount Total numberNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Total Number of Pages
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalPage Total Number of Pages
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalPage() const;

                    /**
                     * 设置Total Number of Pages
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalPage Total Number of Pages
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
                     * 获取Current Page Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PageCount Current Page Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPageCount() const;

                    /**
                     * 设置Current Page Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _pageCount Current Page Number
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
                     * 获取Quantity per page
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PageSize Quantity per page
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Quantity per page
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _pageSize Quantity per page
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
                     * 获取Instance InformationNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Items Instance InformationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<InstanceOpsDto> GetItems() const;

                    /**
                     * 设置Instance InformationNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _items Instance InformationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetItems(const std::vector<InstanceOpsDto>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Total Number of Pages
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * Current Page Number
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
                     * Quantity per page
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Instance InformationNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<InstanceOpsDto> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COLLECTIONINSTANCEOPSDTO_H_
