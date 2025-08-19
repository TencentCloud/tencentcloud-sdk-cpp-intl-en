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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERROLELISTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERROLELISTREQUEST_H_

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
                * DescribeUserRoleList request structure.
                */
                class DescribeUserRoleListRequest : public AbstractModel
                {
                public:
                    DescribeUserRoleListRequest();
                    ~DescribeUserRoleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number.
                     * @return PageNo Page number.
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置Page number.
                     * @param _pageNo Page number.
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
                     * 获取Number of pages.
                     * @return PageSize Number of pages.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of pages.
                     * @param _pageSize Number of pages.
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
                     * 获取All page numbers.
                     * @return AllPage All page numbers.
                     * 
                     */
                    bool GetAllPage() const;

                    /**
                     * 设置All page numbers.
                     * @param _allPage All page numbers.
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
                     * 获取0: enterprise user. 1: visitor. If left blank, it indicates all users.
                     * @return UserType 0: enterprise user. 1: visitor. If left blank, it indicates all users.
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置0: enterprise user. 1: visitor. If left blank, it indicates all users.
                     * @param _userType 0: enterprise user. 1: visitor. If left blank, it indicates all users.
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取Keyword for fuzzy search.
                     * @return Keyword Keyword for fuzzy search.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keyword for fuzzy search.
                     * @param _keyword Keyword for fuzzy search.
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
                     * 获取Whether to only obtain users bound to the WeCom app.
                     * @return IsOnlyBindAppUser Whether to only obtain users bound to the WeCom app.
                     * 
                     */
                    bool GetIsOnlyBindAppUser() const;

                    /**
                     * 设置Whether to only obtain users bound to the WeCom app.
                     * @param _isOnlyBindAppUser Whether to only obtain users bound to the WeCom app.
                     * 
                     */
                    void SetIsOnlyBindAppUser(const bool& _isOnlyBindAppUser);

                    /**
                     * 判断参数 IsOnlyBindAppUser 是否已赋值
                     * @return IsOnlyBindAppUser 是否已赋值
                     * 
                     */
                    bool IsOnlyBindAppUserHasBeenSet() const;

                private:

                    /**
                     * Page number.
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * Number of pages.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * All page numbers.
                     */
                    bool m_allPage;
                    bool m_allPageHasBeenSet;

                    /**
                     * 0: enterprise user. 1: visitor. If left blank, it indicates all users.
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * Keyword for fuzzy search.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Project ID.

                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether to only obtain users bound to the WeCom app.
                     */
                    bool m_isOnlyBindAppUser;
                    bool m_isOnlyBindAppUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERROLELISTREQUEST_H_
