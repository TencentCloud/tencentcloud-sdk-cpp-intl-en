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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_DESCRIBEUSERREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_DESCRIBEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/Pageable.h>
#include <tencentcloud/ciam/v20220331/model/QueryUserFilter.h>
#include <tencentcloud/ciam/v20220331/model/Sort.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * DescribeUser request structure.
                */
                class DescribeUserRequest : public AbstractModel
                {
                public:
                    DescribeUserRequest();
                    ~DescribeUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User directory ID
                     * @return UserStoreId User directory ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置User directory ID
                     * @param _userStoreId User directory ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取Pagination data
                     * @return Pageable Pagination data
                     * 
                     */
                    Pageable GetPageable() const;

                    /**
                     * 设置Pagination data
                     * @param _pageable Pagination data
                     * 
                     */
                    void SetPageable(const Pageable& _pageable);

                    /**
                     * 判断参数 Pageable 是否已赋值
                     * @return Pageable 是否已赋值
                     * 
                     */
                    bool PageableHasBeenSet() const;

                    /**
                     * 获取Query condition (`propertycode` and `propertykey`)
                     * @return Filters Query condition (`propertycode` and `propertykey`)
                     * 
                     */
                    std::vector<QueryUserFilter> GetFilters() const;

                    /**
                     * 设置Query condition (`propertycode` and `propertykey`)
                     * @param _filters Query condition (`propertycode` and `propertykey`)
                     * 
                     */
                    void SetFilters(const std::vector<QueryUserFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Whether the plaintext is returned
                     * @return Original Whether the plaintext is returned
                     * 
                     */
                    bool GetOriginal() const;

                    /**
                     * 设置Whether the plaintext is returned
                     * @param _original Whether the plaintext is returned
                     * 
                     */
                    void SetOriginal(const bool& _original);

                    /**
                     * 判断参数 Original 是否已赋值
                     * @return Original 是否已赋值
                     * 
                     */
                    bool OriginalHasBeenSet() const;

                    /**
                     * 获取Sorting configuration
                     * @return Sort Sorting configuration
                     * 
                     */
                    Sort GetSort() const;

                    /**
                     * 设置Sorting configuration
                     * @param _sort Sorting configuration
                     * 
                     */
                    void SetSort(const Sort& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * User directory ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * Pagination data
                     */
                    Pageable m_pageable;
                    bool m_pageableHasBeenSet;

                    /**
                     * Query condition (`propertycode` and `propertykey`)
                     */
                    std::vector<QueryUserFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Whether the plaintext is returned
                     */
                    bool m_original;
                    bool m_originalHasBeenSet;

                    /**
                     * Sorting configuration
                     */
                    Sort m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_DESCRIBEUSERREQUEST_H_
