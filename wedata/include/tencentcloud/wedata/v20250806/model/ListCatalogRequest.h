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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCATALOGREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCATALOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListCatalog request structure.
                */
                class ListCatalogRequest : public AbstractModel
                {
                public:
                    ListCatalogRequest();
                    ~ListCatalogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number, starting from 1.
                     * @return PageNumber Page number, starting from 1.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number, starting from 1.
                     * @param _pageNumber Page number, starting from 1.
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
                     * 获取Pagination size. maximum 500.
                     * @return PageSize Pagination size. maximum 500.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Pagination size. maximum 500.
                     * @param _pageSize Pagination size. maximum 500.
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
                     * 获取Parent directory ID (this parameter is not supported).
                     * @return ParentCatalogId Parent directory ID (this parameter is not supported).
                     * 
                     */
                    std::string GetParentCatalogId() const;

                    /**
                     * 设置Parent directory ID (this parameter is not supported).
                     * @param _parentCatalogId Parent directory ID (this parameter is not supported).
                     * 
                     */
                    void SetParentCatalogId(const std::string& _parentCatalogId);

                    /**
                     * 判断参数 ParentCatalogId 是否已赋值
                     * @return ParentCatalogId 是否已赋值
                     * 
                     */
                    bool ParentCatalogIdHasBeenSet() const;

                private:

                    /**
                     * Page number, starting from 1.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Pagination size. maximum 500.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Parent directory ID (this parameter is not supported).
                     */
                    std::string m_parentCatalogId;
                    bool m_parentCatalogIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCATALOGREQUEST_H_
