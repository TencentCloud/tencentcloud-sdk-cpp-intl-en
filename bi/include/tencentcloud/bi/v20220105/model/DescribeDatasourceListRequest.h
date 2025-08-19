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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEDATASOURCELISTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEDATASOURCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeDatasourceList request structure.
                */
                class DescribeDatasourceListRequest : public AbstractModel
                {
                public:
                    DescribeDatasourceListRequest();
                    ~DescribeDatasourceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取None.
                     * @return ProjectId None.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置None.
                     * @param _projectId None.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Returns all pages and defaults to false.
                     * @return AllPage Returns all pages and defaults to false.
                     * 
                     */
                    bool GetAllPage() const;

                    /**
                     * 设置Returns all pages and defaults to false.
                     * @param _allPage Returns all pages and defaults to false.
                     * 
                     */
                    void SetAllPage(const bool& _allPage);

                    /**
                     * 判断参数 AllPage 是否已赋值
                     * @return AllPage 是否已赋值
                     * 
                     */
                    bool AllPageHasBeenSet() const;

                    /**
                     * 获取Database name search.
                     * @return DbName Database name search.
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name search.
                     * @param _dbName Database name search.
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取None.
                     * @return PageNo None.
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置None.
                     * @param _pageNo None.
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取None.
                     * @return PageSize None.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置None.
                     * @param _pageSize None.
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
                     * 获取Search keywords.
                     * @return Keyword Search keywords.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Search keywords.
                     * @param _keyword Search keywords.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Permission filter (0: all permissions, 1: access permission, 2: edit permission).
                     * @return PermissionType Permission filter (0: all permissions, 1: access permission, 2: edit permission).
                     * 
                     */
                    int64_t GetPermissionType() const;

                    /**
                     * 设置Permission filter (0: all permissions, 1: access permission, 2: edit permission).
                     * @param _permissionType Permission filter (0: all permissions, 1: access permission, 2: edit permission).
                     * 
                     */
                    void SetPermissionType(const int64_t& _permissionType);

                    /**
                     * 判断参数 PermissionType 是否已赋值
                     * @return PermissionType 是否已赋值
                     * 
                     */
                    bool PermissionTypeHasBeenSet() const;

                private:

                    /**
                     * None.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Returns all pages and defaults to false.
                     */
                    bool m_allPage;
                    bool m_allPageHasBeenSet;

                    /**
                     * Database name search.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * None.
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * None.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Search keywords.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Permission filter (0: all permissions, 1: access permission, 2: edit permission).
                     */
                    int64_t m_permissionType;
                    bool m_permissionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEDATASOURCELISTREQUEST_H_
