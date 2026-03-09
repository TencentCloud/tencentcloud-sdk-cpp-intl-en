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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTMEMBERSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTMEMBERSREQUEST_H_

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
                * ListProjectMembers request structure.
                */
                class ListProjectMembersRequest : public AbstractModel
                {
                public:
                    ListProjectMembersRequest();
                    ~ListProjectMembersRequest() = default;
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
                     * 获取Filter by member name with fuzzy query support.
                     * @return UserName Filter by member name with fuzzy query support.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Filter by member name with fuzzy query support.
                     * @param _userName Filter by member name with fuzzy query support.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Filter by member id. supports fuzzy query.
                     * @return UserUin Filter by member id. supports fuzzy query.
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置Filter by member id. supports fuzzy query.
                     * @param _userUin Filter by member id. supports fuzzy query.
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取Page size, default first page.
                     * @return PageSize Page size, default first page.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Page size, default first page.
                     * @param _pageSize Page size, default first page.
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
                     * 获取Number of items per page. default value is `10`.
                     * @return PageNumber Number of items per page. default value is `10`.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Number of items per page. default value is `10`.
                     * @param _pageNumber Number of items per page. default value is `10`.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Filter by member name with fuzzy query support.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Filter by member id. supports fuzzy query.
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * Page size, default first page.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Number of items per page. default value is `10`.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTMEMBERSREQUEST_H_
