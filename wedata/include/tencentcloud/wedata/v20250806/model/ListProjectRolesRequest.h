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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTROLESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTROLESREQUEST_H_

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
                * ListProjectRoles request structure.
                */
                class ListProjectRolesRequest : public AbstractModel
                {
                public:
                    ListProjectRolesRequest();
                    ~ListProjectRolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Fuzzy query for the chinese display name of a role. can only pass one value.
                     * @return RoleDisplayName Fuzzy query for the chinese display name of a role. can only pass one value.
                     * 
                     */
                    std::string GetRoleDisplayName() const;

                    /**
                     * 设置Fuzzy query for the chinese display name of a role. can only pass one value.
                     * @param _roleDisplayName Fuzzy query for the chinese display name of a role. can only pass one value.
                     * 
                     */
                    void SetRoleDisplayName(const std::string& _roleDisplayName);

                    /**
                     * 判断参数 RoleDisplayName 是否已赋值
                     * @return RoleDisplayName 是否已赋值
                     * 
                     */
                    bool RoleDisplayNameHasBeenSet() const;

                    /**
                     * 获取Page number
                     * @return PageNumber Page number
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number
                     * @param _pageNumber Page number
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
                     * 获取Paging information.
                     * @return PageSize Paging information.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Paging information.
                     * @param _pageSize Paging information.
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
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Fuzzy query for the chinese display name of a role. can only pass one value.
                     */
                    std::string m_roleDisplayName;
                    bool m_roleDisplayNameHasBeenSet;

                    /**
                     * Page number
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Paging information.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTROLESREQUEST_H_
