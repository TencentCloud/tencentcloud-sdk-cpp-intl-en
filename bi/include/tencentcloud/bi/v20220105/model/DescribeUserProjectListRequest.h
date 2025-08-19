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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERPROJECTLISTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERPROJECTLISTREQUEST_H_

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
                * DescribeUserProjectList request structure.
                */
                class DescribeUserProjectListRequest : public AbstractModel
                {
                public:
                    DescribeUserProjectListRequest();
                    ~DescribeUserProjectListRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取None.
                     * @return AllPage None.
                     * 
                     */
                    bool GetAllPage() const;

                    /**
                     * 设置None.
                     * @param _allPage None.
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
                     * 获取Whether to filter out enterprise administrators.
                     * @return IsFilterPerAuthUser Whether to filter out enterprise administrators.
                     * 
                     */
                    bool GetIsFilterPerAuthUser() const;

                    /**
                     * 设置Whether to filter out enterprise administrators.
                     * @param _isFilterPerAuthUser Whether to filter out enterprise administrators.
                     * 
                     */
                    void SetIsFilterPerAuthUser(const bool& _isFilterPerAuthUser);

                    /**
                     * 判断参数 IsFilterPerAuthUser 是否已赋值
                     * @return IsFilterPerAuthUser 是否已赋值
                     * 
                     */
                    bool IsFilterPerAuthUserHasBeenSet() const;

                    /**
                     * 获取Whether to filter out the current user.
                     * @return IsFilterCurrentUser Whether to filter out the current user.
                     * 
                     */
                    bool GetIsFilterCurrentUser() const;

                    /**
                     * 设置Whether to filter out the current user.
                     * @param _isFilterCurrentUser Whether to filter out the current user.
                     * 
                     */
                    void SetIsFilterCurrentUser(const bool& _isFilterCurrentUser);

                    /**
                     * 判断参数 IsFilterCurrentUser 是否已赋值
                     * @return IsFilterCurrentUser 是否已赋值
                     * 
                     */
                    bool IsFilterCurrentUserHasBeenSet() const;

                    /**
                     * 获取Keyword.
                     * @return Keyword Keyword.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keyword.
                     * @param _keyword Keyword.
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
                     * Project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * None.
                     */
                    bool m_allPage;
                    bool m_allPageHasBeenSet;

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
                     * Whether to filter out enterprise administrators.
                     */
                    bool m_isFilterPerAuthUser;
                    bool m_isFilterPerAuthUserHasBeenSet;

                    /**
                     * Whether to filter out the current user.
                     */
                    bool m_isFilterCurrentUser;
                    bool m_isFilterCurrentUserHasBeenSet;

                    /**
                     * Keyword.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERPROJECTLISTREQUEST_H_
