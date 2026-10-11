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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEGROUPSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEGROUPSREQUEST_H_

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
                * ListWorkspaceGroups request structure.
                */
                class ListWorkspaceGroupsRequest : public AbstractModel
                {
                public:
                    ListWorkspaceGroupsRequest();
                    ~ListWorkspaceGroupsRequest() = default;
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
                     * 获取<p>Batch query by user group ID; user group ID can be obtained through the ListWorkspaceGroups API</p>
                     * @return GroupIds <p>Batch query by user group ID; user group ID can be obtained through the ListWorkspaceGroups API</p>
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置<p>Batch query by user group ID; user group ID can be obtained through the ListWorkspaceGroups API</p>
                     * @param _groupIds <p>Batch query by user group ID; user group ID can be obtained through the ListWorkspaceGroups API</p>
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>Fuzzy matching by user group name</p>
                     * @return GroupKeyword <p>Fuzzy matching by user group name</p>
                     * 
                     */
                    std::string GetGroupKeyword() const;

                    /**
                     * 设置<p>Fuzzy matching by user group name</p>
                     * @param _groupKeyword <p>Fuzzy matching by user group name</p>
                     * 
                     */
                    void SetGroupKeyword(const std::string& _groupKeyword);

                    /**
                     * 判断参数 GroupKeyword 是否已赋值
                     * @return GroupKeyword 是否已赋值
                     * 
                     */
                    bool GroupKeywordHasBeenSet() const;

                    /**
                     * 获取<p>Used to filter user groups associated with roles; can be obtained through the ListWorkspaceRoles API</p>
                     * @return RoleIds <p>Used to filter user groups associated with roles; can be obtained through the ListWorkspaceRoles API</p>
                     * 
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置<p>Used to filter user groups associated with roles; can be obtained through the ListWorkspaceRoles API</p>
                     * @param _roleIds <p>Used to filter user groups associated with roles; can be obtained through the ListWorkspaceRoles API</p>
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
                     * 获取<p>Multi-field sorting, for example, [{Name: 'CreateTime', Direction: 'Desc'}]; import one for single-field sorting. By default, sort in descending order by creation time.</p>
                     * @return OrderBys <p>Multi-field sorting, for example, [{Name: 'CreateTime', Direction: 'Desc'}]; import one for single-field sorting. By default, sort in descending order by creation time.</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>Multi-field sorting, for example, [{Name: 'CreateTime', Direction: 'Desc'}]; import one for single-field sorting. By default, sort in descending order by creation time.</p>
                     * @param _orderBys <p>Multi-field sorting, for example, [{Name: 'CreateTime', Direction: 'Desc'}]; import one for single-field sorting. By default, sort in descending order by creation time.</p>
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
                     * 获取<p>Page number. Value range: starts from 1. Default value: 1. Values less than 1 are handled as 1.</p>
                     * @return PageNumber <p>Page number. Value range: starts from 1. Default value: 1. Values less than 1 are handled as 1.</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number. Value range: starts from 1. Default value: 1. Values less than 1 are handled as 1.</p>
                     * @param _pageNumber <p>Page number. Value range: starts from 1. Default value: 1. Values less than 1 are handled as 1.</p>
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
                     * 获取<p>Size per page. Default: 10. Value range: [1,100]. Out-of-bounds values automatically converge to the boundary value.</p>
                     * @return PageSize <p>Size per page. Default: 10. Value range: [1,100]. Out-of-bounds values automatically converge to the boundary value.</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Size per page. Default: 10. Value range: [1,100]. Out-of-bounds values automatically converge to the boundary value.</p>
                     * @param _pageSize <p>Size per page. Default: 10. Value range: [1,100]. Out-of-bounds values automatically converge to the boundary value.</p>
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
                     * 获取<p>User group type filter criteria. The value is a string form of an enumerated numeric value: "0" = console system type (including all users), "1" = console custom type, "2" = workspace system type (including all workspace users), "3" = workspace custom type.</p>
                     * @return GroupType <p>User group type filter criteria. The value is a string form of an enumerated numeric value: "0" = console system type (including all users), "1" = console custom type, "2" = workspace system type (including all workspace users), "3" = workspace custom type.</p>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>User group type filter criteria. The value is a string form of an enumerated numeric value: "0" = console system type (including all users), "1" = console custom type, "2" = workspace system type (including all workspace users), "3" = workspace custom type.</p>
                     * @param _groupType <p>User group type filter criteria. The value is a string form of an enumerated numeric value: "0" = console system type (including all users), "1" = console custom type, "2" = workspace system type (including all workspace users), "3" = workspace custom type.</p>
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Batch query by user group ID; user group ID can be obtained through the ListWorkspaceGroups API</p>
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * <p>Fuzzy matching by user group name</p>
                     */
                    std::string m_groupKeyword;
                    bool m_groupKeywordHasBeenSet;

                    /**
                     * <p>Used to filter user groups associated with roles; can be obtained through the ListWorkspaceRoles API</p>
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                    /**
                     * <p>Multi-field sorting, for example, [{Name: 'CreateTime', Direction: 'Desc'}]; import one for single-field sorting. By default, sort in descending order by creation time.</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                    /**
                     * <p>Page number. Value range: starts from 1. Default value: 1. Values less than 1 are handled as 1.</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Size per page. Default: 10. Value range: [1,100]. Out-of-bounds values automatically converge to the boundary value.</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>User group type filter criteria. The value is a string form of an enumerated numeric value: "0" = console system type (including all users), "1" = console custom type, "2" = workspace system type (including all workspace users), "3" = workspace custom type.</p>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEGROUPSREQUEST_H_
