/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEROLELISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEROLELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>
#include <tencentcloud/wedata/v20210820/model/OrderFields.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeRoleList request structure.
                */
                class DescribeRoleListRequest : public AbstractModel
                {
                public:
                    DescribeRoleListRequest();
                    ~DescribeRoleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Return all Roles
                     * @return ShowAllRoles Return all Roles
                     * 
                     */
                    bool GetShowAllRoles() const;

                    /**
                     * 设置Return all Roles
                     * @param _showAllRoles Return all Roles
                     * 
                     */
                    void SetShowAllRoles(const bool& _showAllRoles);

                    /**
                     * 判断参数 ShowAllRoles 是否已赋值
                     * @return ShowAllRoles 是否已赋值
                     * 
                     */
                    bool ShowAllRolesHasBeenSet() const;

                    /**
                     * 获取Role type (system, tenant, project) that needs to be returned
                     * @return IncludeRoleTypes Role type (system, tenant, project) that needs to be returned
                     * 
                     */
                    std::vector<std::string> GetIncludeRoleTypes() const;

                    /**
                     * 设置Role type (system, tenant, project) that needs to be returned
                     * @param _includeRoleTypes Role type (system, tenant, project) that needs to be returned
                     * 
                     */
                    void SetIncludeRoleTypes(const std::vector<std::string>& _includeRoleTypes);

                    /**
                     * 判断参数 IncludeRoleTypes 是否已赋值
                     * @return IncludeRoleTypes 是否已赋值
                     * 
                     */
                    bool IncludeRoleTypesHasBeenSet() const;

                    /**
                     * 获取Specifies the statistics of role binding personnel. Only supported in the private edition.
                     * @return DescribeMemberCount Specifies the statistics of role binding personnel. Only supported in the private edition.
                     * 
                     */
                    bool GetDescribeMemberCount() const;

                    /**
                     * 设置Specifies the statistics of role binding personnel. Only supported in the private edition.
                     * @param _describeMemberCount Specifies the statistics of role binding personnel. Only supported in the private edition.
                     * 
                     */
                    void SetDescribeMemberCount(const bool& _describeMemberCount);

                    /**
                     * 判断参数 DescribeMemberCount 是否已赋值
                     * @return DescribeMemberCount 是否已赋值
                     * 
                     */
                    bool DescribeMemberCountHasBeenSet() const;

                    /**
                     * 获取Specifies the operator information. describes the privatized multi-tenancy version.
                     * @return DescribeOperator Specifies the operator information. describes the privatized multi-tenancy version.
                     * 
                     */
                    bool GetDescribeOperator() const;

                    /**
                     * 设置Specifies the operator information. describes the privatized multi-tenancy version.
                     * @param _describeOperator Specifies the operator information. describes the privatized multi-tenancy version.
                     * 
                     */
                    void SetDescribeOperator(const bool& _describeOperator);

                    /**
                     * 判断参数 DescribeOperator 是否已赋值
                     * @return DescribeOperator 是否已赋值
                     * 
                     */
                    bool DescribeOperatorHasBeenSet() const;

                    /**
                     * 获取System Role
                     * @return DescribeSystemRoleOnly System Role
                     * 
                     */
                    bool GetDescribeSystemRoleOnly() const;

                    /**
                     * 设置System Role
                     * @param _describeSystemRoleOnly System Role
                     * 
                     */
                    void SetDescribeSystemRoleOnly(const bool& _describeSystemRoleOnly);

                    /**
                     * 判断参数 DescribeSystemRoleOnly 是否已赋值
                     * @return DescribeSystemRoleOnly 是否已赋值
                     * 
                     */
                    bool DescribeSystemRoleOnlyHasBeenSet() const;

                    /**
                     * 获取Custom Role
                     * @return DescribeCustomRoleOnly Custom Role
                     * 
                     */
                    bool GetDescribeCustomRoleOnly() const;

                    /**
                     * 设置Custom Role
                     * @param _describeCustomRoleOnly Custom Role
                     * 
                     */
                    void SetDescribeCustomRoleOnly(const bool& _describeCustomRoleOnly);

                    /**
                     * 判断参数 DescribeCustomRoleOnly 是否已赋值
                     * @return DescribeCustomRoleOnly 是否已赋值
                     * 
                     */
                    bool DescribeCustomRoleOnlyHasBeenSet() const;

                    /**
                     * 获取Permission to view
                     * @return DescribePrivileges Permission to view
                     * 
                     */
                    bool GetDescribePrivileges() const;

                    /**
                     * 设置Permission to view
                     * @param _describePrivileges Permission to view
                     * 
                     */
                    void SetDescribePrivileges(const bool& _describePrivileges);

                    /**
                     * 判断参数 DescribePrivileges 是否已赋值
                     * @return DescribePrivileges 是否已赋值
                     * 
                     */
                    bool DescribePrivilegesHasBeenSet() const;

                    /**
                     * 获取Filter criteria for Role ID
                     * @return RoleIds Filter criteria for Role ID
                     * 
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置Filter criteria for Role ID
                     * @param _roleIds Filter criteria for Role ID
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
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
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
                     * 获取Paging information
                     * @return PageSize Paging information
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Paging information
                     * @param _pageSize Paging information
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
                     * 获取Query Field
                     * @return Filters Query Field
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Query Field
                     * @param _filters Query Field
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting Field
                     * @return OrderFields Sorting Field
                     * 
                     */
                    std::vector<OrderFields> GetOrderFields() const;

                    /**
                     * 设置Sorting Field
                     * @param _orderFields Sorting Field
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderFields>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                private:

                    /**
                     * Return all Roles
                     */
                    bool m_showAllRoles;
                    bool m_showAllRolesHasBeenSet;

                    /**
                     * Role type (system, tenant, project) that needs to be returned
                     */
                    std::vector<std::string> m_includeRoleTypes;
                    bool m_includeRoleTypesHasBeenSet;

                    /**
                     * Specifies the statistics of role binding personnel. Only supported in the private edition.
                     */
                    bool m_describeMemberCount;
                    bool m_describeMemberCountHasBeenSet;

                    /**
                     * Specifies the operator information. describes the privatized multi-tenancy version.
                     */
                    bool m_describeOperator;
                    bool m_describeOperatorHasBeenSet;

                    /**
                     * System Role
                     */
                    bool m_describeSystemRoleOnly;
                    bool m_describeSystemRoleOnlyHasBeenSet;

                    /**
                     * Custom Role
                     */
                    bool m_describeCustomRoleOnly;
                    bool m_describeCustomRoleOnlyHasBeenSet;

                    /**
                     * Permission to view
                     */
                    bool m_describePrivileges;
                    bool m_describePrivilegesHasBeenSet;

                    /**
                     * Filter criteria for Role ID
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Page number
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Paging information
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Query Field
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting Field
                     */
                    std::vector<OrderFields> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEROLELISTREQUEST_H_
