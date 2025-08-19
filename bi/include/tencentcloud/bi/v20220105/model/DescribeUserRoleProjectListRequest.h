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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERROLEPROJECTLISTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERROLEPROJECTLISTREQUEST_H_

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
                * DescribeUserRoleProjectList request structure.
                */
                class DescribeUserRoleProjectListRequest : public AbstractModel
                {
                public:
                    DescribeUserRoleProjectListRequest();
                    ~DescribeUserRoleProjectListRequest() = default;
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
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

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

                    /**
                     * 获取Whether to obtain all the data.
                     * @return AllPage Whether to obtain all the data.
                     * 
                     */
                    bool GetAllPage() const;

                    /**
                     * 设置Whether to obtain all the data.
                     * @param _allPage Whether to obtain all the data.
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
                     * 获取Role code.
                     * @return RoleCode Role code.
                     * 
                     */
                    std::string GetRoleCode() const;

                    /**
                     * 设置Role code.
                     * @param _roleCode Role code.
                     * 
                     */
                    void SetRoleCode(const std::string& _roleCode);

                    /**
                     * 判断参数 RoleCode 是否已赋值
                     * @return RoleCode 是否已赋值
                     * 
                     */
                    bool RoleCodeHasBeenSet() const;

                    /**
                     * 获取User ID list.
                     * @return UserIdList User ID list.
                     * 
                     */
                    std::vector<std::string> GetUserIdList() const;

                    /**
                     * 设置User ID list.
                     * @param _userIdList User ID list.
                     * 
                     */
                    void SetUserIdList(const std::vector<std::string>& _userIdList);

                    /**
                     * 判断参数 UserIdList 是否已赋值
                     * @return UserIdList 是否已赋值
                     * 
                     */
                    bool UserIdListHasBeenSet() const;

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
                     * Project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether to only obtain users bound to the WeCom app.
                     */
                    bool m_isOnlyBindAppUser;
                    bool m_isOnlyBindAppUserHasBeenSet;

                    /**
                     * Whether to obtain all the data.
                     */
                    bool m_allPage;
                    bool m_allPageHasBeenSet;

                    /**
                     * Role code.
                     */
                    std::string m_roleCode;
                    bool m_roleCodeHasBeenSet;

                    /**
                     * User ID list.
                     */
                    std::vector<std::string> m_userIdList;
                    bool m_userIdListHasBeenSet;

                    /**
                     * Search keywords.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERROLEPROJECTLISTREQUEST_H_
