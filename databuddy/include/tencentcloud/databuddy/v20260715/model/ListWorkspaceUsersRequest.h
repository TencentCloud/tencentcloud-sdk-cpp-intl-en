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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEUSERSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * ListWorkspaceUsers request structure.
                */
                class ListWorkspaceUsersRequest : public AbstractModel
                {
                public:
                    ListWorkspaceUsersRequest();
                    ~ListWorkspaceUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Workspace ID</p>
                     * @return WorkspaceId <p>Workspace ID</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Workspace ID</p>
                     * @param _workspaceId <p>Workspace ID</p>
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
                     * 获取<p>Fuzzy matching between username or UIN</p>
                     * @return UserKeyword <p>Fuzzy matching between username or UIN</p>
                     * 
                     */
                    std::string GetUserKeyword() const;

                    /**
                     * 设置<p>Fuzzy matching between username or UIN</p>
                     * @param _userKeyword <p>Fuzzy matching between username or UIN</p>
                     * 
                     */
                    void SetUserKeyword(const std::string& _userKeyword);

                    /**
                     * 判断参数 UserKeyword 是否已赋值
                     * @return UserKeyword 是否已赋值
                     * 
                     */
                    bool UserKeywordHasBeenSet() const;

                    /**
                     * 获取<p>Role ID list, filter users associated with roles; can be obtained through the ListWorkspaceRoles API</p>
                     * @return RoleIds <p>Role ID list, filter users associated with roles; can be obtained through the ListWorkspaceRoles API</p>
                     * 
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置<p>Role ID list, filter users associated with roles; can be obtained through the ListWorkspaceRoles API</p>
                     * @param _roleIds <p>Role ID list, filter users associated with roles; can be obtained through the ListWorkspaceRoles API</p>
                     * 
                     */
                    void SetRoleIds(const std::vector<std::string>& _roleIds);

                    /**
                     * 判断参数 RoleIds 是否已赋值
                     * @return RoleIds 是否已赋值
                     * 
                     */
                    bool RoleIdsHasBeenSet() const;

                    /**
                     * 获取<p>User UIN list, precise filtering by UIN</p>
                     * @return UserUins <p>User UIN list, precise filtering by UIN</p>
                     * 
                     */
                    std::vector<std::string> GetUserUins() const;

                    /**
                     * 设置<p>User UIN list, precise filtering by UIN</p>
                     * @param _userUins <p>User UIN list, precise filtering by UIN</p>
                     * 
                     */
                    void SetUserUins(const std::vector<std::string>& _userUins);

                    /**
                     * 判断参数 UserUins 是否已赋值
                     * @return UserUins 是否已赋值
                     * 
                     */
                    bool UserUinsHasBeenSet() const;

                    /**
                     * 获取<p>Sorting field list, for example, [{Name: CreateTime, Direction: DESC}]; import one for single-field sorting. By default, sort in descending order by creation time.</p>
                     * @return OrderBys <p>Sorting field list, for example, [{Name: CreateTime, Direction: DESC}]; import one for single-field sorting. By default, sort in descending order by creation time.</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>Sorting field list, for example, [{Name: CreateTime, Direction: DESC}]; import one for single-field sorting. By default, sort in descending order by creation time.</p>
                     * @param _orderBys <p>Sorting field list, for example, [{Name: CreateTime, Direction: DESC}]; import one for single-field sorting. By default, sort in descending order by creation time.</p>
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
                     * 获取<p>Page number. Default value: 1. Value range: starts from 1. Values less than 1 are handled as 1.</p>
                     * @return PageNumber <p>Page number. Default value: 1. Value range: starts from 1. Values less than 1 are handled as 1.</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number. Default value: 1. Value range: starts from 1. Values less than 1 are handled as 1.</p>
                     * @param _pageNumber <p>Page number. Default value: 1. Value range: starts from 1. Values less than 1 are handled as 1.</p>
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
                     * 获取<p>Entries per page. Default: 10. Value range: [1,100]. Out-of-bounds values automatically converge to the boundary value.</p>
                     * @return PageSize <p>Entries per page. Default: 10. Value range: [1,100]. Out-of-bounds values automatically converge to the boundary value.</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Entries per page. Default: 10. Value range: [1,100]. Out-of-bounds values automatically converge to the boundary value.</p>
                     * @param _pageSize <p>Entries per page. Default: 10. Value range: [1,100]. Out-of-bounds values automatically converge to the boundary value.</p>
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
                     * 获取<p>Extended information (empty for the first request; for pagination requests, carry the ExtendInfo from the response. Used for locating the next offset in scenarios such as consecutive pagination and item permission filtering)</p>
                     * @return ExtendInfo <p>Extended information (empty for the first request; for pagination requests, carry the ExtendInfo from the response. Used for locating the next offset in scenarios such as consecutive pagination and item permission filtering)</p>
                     * 
                     */
                    std::string GetExtendInfo() const;

                    /**
                     * 设置<p>Extended information (empty for the first request; for pagination requests, carry the ExtendInfo from the response. Used for locating the next offset in scenarios such as consecutive pagination and item permission filtering)</p>
                     * @param _extendInfo <p>Extended information (empty for the first request; for pagination requests, carry the ExtendInfo from the response. Used for locating the next offset in scenarios such as consecutive pagination and item permission filtering)</p>
                     * 
                     */
                    void SetExtendInfo(const std::string& _extendInfo);

                    /**
                     * 判断参数 ExtendInfo 是否已赋值
                     * @return ExtendInfo 是否已赋值
                     * 
                     */
                    bool ExtendInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Fuzzy matching between username or UIN</p>
                     */
                    std::string m_userKeyword;
                    bool m_userKeywordHasBeenSet;

                    /**
                     * <p>Role ID list, filter users associated with roles; can be obtained through the ListWorkspaceRoles API</p>
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                    /**
                     * <p>User UIN list, precise filtering by UIN</p>
                     */
                    std::vector<std::string> m_userUins;
                    bool m_userUinsHasBeenSet;

                    /**
                     * <p>Sorting field list, for example, [{Name: CreateTime, Direction: DESC}]; import one for single-field sorting. By default, sort in descending order by creation time.</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                    /**
                     * <p>Page number. Default value: 1. Value range: starts from 1. Values less than 1 are handled as 1.</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Entries per page. Default: 10. Value range: [1,100]. Out-of-bounds values automatically converge to the boundary value.</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Extended information (empty for the first request; for pagination requests, carry the ExtendInfo from the response. Used for locating the next offset in scenarios such as consecutive pagination and item permission filtering)</p>
                     */
                    std::string m_extendInfo;
                    bool m_extendInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEUSERSREQUEST_H_
