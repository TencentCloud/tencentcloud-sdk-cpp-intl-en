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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTFILESREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FolderLocator.h>
#include <tencentcloud/databuddy/v20260715/model/OrderBy.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ListFiles request structure.
                */
                class ListFilesRequest : public AbstractModel
                {
                public:
                    ListFilesRequest();
                    ~ListFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Workspace id</p>
                     * @return WorkspaceId <p>Workspace id</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Workspace id</p>
                     * @param _workspaceId <p>Workspace id</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Parent directory. If left blank, the root node is queried by default.</p>
                     * @return Parent <p>Parent directory. If left blank, the root node is queried by default.</p>
                     * 
                     */
                    FolderLocator GetParent() const;

                    /**
                     * 设置<p>Parent directory. If left blank, the root node is queried by default.</p>
                     * @param _parent <p>Parent directory. If left blank, the root node is queried by default.</p>
                     * 
                     */
                    void SetParent(const FolderLocator& _parent);

                    /**
                     * 判断参数 Parent 是否已赋值
                     * @return Parent 是否已赋值
                     * 
                     */
                    bool ParentHasBeenSet() const;

                    /**
                     * 获取<p>Filter by file type</p>
                     * @return FileTypes <p>Filter by file type</p>
                     * 
                     */
                    std::vector<std::string> GetFileTypes() const;

                    /**
                     * 设置<p>Filter by file type</p>
                     * @param _fileTypes <p>Filter by file type</p>
                     * 
                     */
                    void SetFileTypes(const std::vector<std::string>& _fileTypes);

                    /**
                     * 判断参数 FileTypes 是否已赋值
                     * @return FileTypes 是否已赋值
                     * 
                     */
                    bool FileTypesHasBeenSet() const;

                    /**
                     * 获取<p>Fuzzy matching by file name</p>
                     * @return NameKeyword <p>Fuzzy matching by file name</p>
                     * 
                     */
                    std::string GetNameKeyword() const;

                    /**
                     * 设置<p>Fuzzy matching by file name</p>
                     * @param _nameKeyword <p>Fuzzy matching by file name</p>
                     * 
                     */
                    void SetNameKeyword(const std::string& _nameKeyword);

                    /**
                     * 判断参数 NameKeyword 是否已赋值
                     * @return NameKeyword 是否已赋值
                     * 
                     */
                    bool NameKeywordHasBeenSet() const;

                    /**
                     * 获取<p>Filter by owner UIN. Multiple values are OR-related</p>
                     * @return OwnerUserUins <p>Filter by owner UIN. Multiple values are OR-related</p>
                     * 
                     */
                    std::vector<std::string> GetOwnerUserUins() const;

                    /**
                     * 设置<p>Filter by owner UIN. Multiple values are OR-related</p>
                     * @param _ownerUserUins <p>Filter by owner UIN. Multiple values are OR-related</p>
                     * 
                     */
                    void SetOwnerUserUins(const std::vector<std::string>& _ownerUserUins);

                    /**
                     * 判断参数 OwnerUserUins 是否已赋值
                     * @return OwnerUserUins 是否已赋值
                     * 
                     */
                    bool OwnerUserUinsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to list folders only. Default false.</p>
                     * @return OnlyFolder <p>Whether to list folders only. Default false.</p>
                     * 
                     */
                    bool GetOnlyFolder() const;

                    /**
                     * 设置<p>Whether to list folders only. Default false.</p>
                     * @param _onlyFolder <p>Whether to list folders only. Default false.</p>
                     * 
                     */
                    void SetOnlyFolder(const bool& _onlyFolder);

                    /**
                     * 判断参数 OnlyFolder 是否已赋值
                     * @return OnlyFolder 是否已赋值
                     * 
                     */
                    bool OnlyFolderHasBeenSet() const;

                    /**
                     * 获取<p>Sorting field list, for example, creation time [{Name: 'CreateTime', Direction: 'DESC'}], file name [{Name: 'Name', Direction: 'ASC'}]</p>
                     * @return OrderBys <p>Sorting field list, for example, creation time [{Name: 'CreateTime', Direction: 'DESC'}], file name [{Name: 'Name', Direction: 'ASC'}]</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>Sorting field list, for example, creation time [{Name: 'CreateTime', Direction: 'DESC'}], file name [{Name: 'Name', Direction: 'ASC'}]</p>
                     * @param _orderBys <p>Sorting field list, for example, creation time [{Name: 'CreateTime', Direction: 'DESC'}], file name [{Name: 'Name', Direction: 'ASC'}]</p>
                     * 
                     */
                    void SetOrderBys(const std::vector<OrderBy>& _orderBys);

                    /**
                     * 判断参数 OrderBys 是否已赋值
                     * @return OrderBys 是否已赋值
                     * 
                     */
                    bool OrderBysHasBeenSet() const;

                    /**
                     * 获取<p>Page number. Default value: 1. Minimum value: 1.</p>
                     * @return PageNumber <p>Page number. Default value: 1. Minimum value: 1.</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number. Default value: 1. Minimum value: 1.</p>
                     * @param _pageNumber <p>Page number. Default value: 1. Minimum value: 1.</p>
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
                     * 获取<p>Entries per page. Default: 10. Minimum value: 10. Maximum value: 100</p><p>Value range: [10, 100]</p>
                     * @return PageSize <p>Entries per page. Default: 10. Minimum value: 10. Maximum value: 100</p><p>Value range: [10, 100]</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Entries per page. Default: 10. Minimum value: 10. Maximum value: 100</p><p>Value range: [10, 100]</p>
                     * @param _pageSize <p>Entries per page. Default: 10. Minimum value: 10. Maximum value: 100</p><p>Value range: [10, 100]</p>
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
                     * <p>Workspace id</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Parent directory. If left blank, the root node is queried by default.</p>
                     */
                    FolderLocator m_parent;
                    bool m_parentHasBeenSet;

                    /**
                     * <p>Filter by file type</p>
                     */
                    std::vector<std::string> m_fileTypes;
                    bool m_fileTypesHasBeenSet;

                    /**
                     * <p>Fuzzy matching by file name</p>
                     */
                    std::string m_nameKeyword;
                    bool m_nameKeywordHasBeenSet;

                    /**
                     * <p>Filter by owner UIN. Multiple values are OR-related</p>
                     */
                    std::vector<std::string> m_ownerUserUins;
                    bool m_ownerUserUinsHasBeenSet;

                    /**
                     * <p>Whether to list folders only. Default false.</p>
                     */
                    bool m_onlyFolder;
                    bool m_onlyFolderHasBeenSet;

                    /**
                     * <p>Sorting field list, for example, creation time [{Name: 'CreateTime', Direction: 'DESC'}], file name [{Name: 'Name', Direction: 'ASC'}]</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                    /**
                     * <p>Page number. Default value: 1. Minimum value: 1.</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Entries per page. Default: 10. Minimum value: 10. Maximum value: 100</p><p>Value range: [10, 100]</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTFILESREQUEST_H_
