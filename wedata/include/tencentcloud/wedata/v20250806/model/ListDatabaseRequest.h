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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTDATABASEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTDATABASEREQUEST_H_

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
                * ListDatabase request structure.
                */
                class ListDatabaseRequest : public AbstractModel
                {
                public:
                    ListDatabaseRequest();
                    ~ListDatabaseRequest() = default;
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
                     * 获取Directory name.
                     * @return CatalogName Directory name.
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置Directory name.
                     * @param _catalogName Directory name.
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取Data source ID.
                     * @return DatasourceId Data source ID.
                     * 
                     */
                    int64_t GetDatasourceId() const;

                    /**
                     * 设置Data source ID.
                     * @param _datasourceId Data source ID.
                     * 
                     */
                    void SetDatasourceId(const int64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取Search by database name keyword.
                     * @return Keyword Search by database name keyword.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Search by database name keyword.
                     * @param _keyword Search by database name keyword.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

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
                     * Directory name.
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * Data source ID.
                     */
                    int64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Search by database name keyword.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTDATABASEREQUEST_H_
