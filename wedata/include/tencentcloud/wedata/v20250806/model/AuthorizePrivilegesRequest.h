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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHORIZEPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHORIZEPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/PrivilegeResource.h>
#include <tencentcloud/wedata/v20250806/model/Subject.h>
#include <tencentcloud/wedata/v20250806/model/PrivilegeInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * AuthorizePrivileges request structure.
                */
                class AuthorizePrivilegesRequest : public AbstractModel
                {
                public:
                    AuthorizePrivilegesRequest();
                    ~AuthorizePrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource array.
ResourceType: originates from the ResourceType returned by the GetGrantPrivilegesSTD API in the TCCATALOG module, and change to capitalize the first letter, such as METALAKE corresponding to METALAKE.
ResourceUri depends on ResourceType. fixed as default for Metalake. use the three-segment format of catalog for other categories, such as.
-Metalake, fixed as default.
-Catalog. specifies the catalogName.
-Schema. valid values: catalogName.SchemaName.
-Table, in the format of catalogName.SchemaName.TableName.

                     * @return Resources Resource array.
ResourceType: originates from the ResourceType returned by the GetGrantPrivilegesSTD API in the TCCATALOG module, and change to capitalize the first letter, such as METALAKE corresponding to METALAKE.
ResourceUri depends on ResourceType. fixed as default for Metalake. use the three-segment format of catalog for other categories, such as.
-Metalake, fixed as default.
-Catalog. specifies the catalogName.
-Schema. valid values: catalogName.SchemaName.
-Table, in the format of catalogName.SchemaName.TableName.

                     * 
                     */
                    std::vector<PrivilegeResource> GetResources() const;

                    /**
                     * 设置Resource array.
ResourceType: originates from the ResourceType returned by the GetGrantPrivilegesSTD API in the TCCATALOG module, and change to capitalize the first letter, such as METALAKE corresponding to METALAKE.
ResourceUri depends on ResourceType. fixed as default for Metalake. use the three-segment format of catalog for other categories, such as.
-Metalake, fixed as default.
-Catalog. specifies the catalogName.
-Schema. valid values: catalogName.SchemaName.
-Table, in the format of catalogName.SchemaName.TableName.

                     * @param _resources Resource array.
ResourceType: originates from the ResourceType returned by the GetGrantPrivilegesSTD API in the TCCATALOG module, and change to capitalize the first letter, such as METALAKE corresponding to METALAKE.
ResourceUri depends on ResourceType. fixed as default for Metalake. use the three-segment format of catalog for other categories, such as.
-Metalake, fixed as default.
-Catalog. specifies the catalogName.
-Schema. valid values: catalogName.SchemaName.
-Table, in the format of catalogName.SchemaName.TableName.

                     * 
                     */
                    void SetResources(const std::vector<PrivilegeResource>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取Authorization entity array. specifies the SubjectType and corresponding SubjectValue value rules.
-User.
-User id obtained from DescribeTenantUserList.
-Project.
-ProjectId from the DescribeUserProjects request parameters structure.
-Role (project-level role).
-First call DescribeUserProjects to obtain the project ID (ProjectId), then call DescribeRoleList to get the role ID (RoleId), and combine them as $ProjectId.$ProjectId.RoleId, for example "3085649716411588608.308335260274237440".
-GlobalRole (platform-level role).
-AllAccountUsers all users.
-Another ID, taken from RoleId in DescribeTenantRole.
                     * @return Subjects Authorization entity array. specifies the SubjectType and corresponding SubjectValue value rules.
-User.
-User id obtained from DescribeTenantUserList.
-Project.
-ProjectId from the DescribeUserProjects request parameters structure.
-Role (project-level role).
-First call DescribeUserProjects to obtain the project ID (ProjectId), then call DescribeRoleList to get the role ID (RoleId), and combine them as $ProjectId.$ProjectId.RoleId, for example "3085649716411588608.308335260274237440".
-GlobalRole (platform-level role).
-AllAccountUsers all users.
-Another ID, taken from RoleId in DescribeTenantRole.
                     * 
                     */
                    std::vector<Subject> GetSubjects() const;

                    /**
                     * 设置Authorization entity array. specifies the SubjectType and corresponding SubjectValue value rules.
-User.
-User id obtained from DescribeTenantUserList.
-Project.
-ProjectId from the DescribeUserProjects request parameters structure.
-Role (project-level role).
-First call DescribeUserProjects to obtain the project ID (ProjectId), then call DescribeRoleList to get the role ID (RoleId), and combine them as $ProjectId.$ProjectId.RoleId, for example "3085649716411588608.308335260274237440".
-GlobalRole (platform-level role).
-AllAccountUsers all users.
-Another ID, taken from RoleId in DescribeTenantRole.
                     * @param _subjects Authorization entity array. specifies the SubjectType and corresponding SubjectValue value rules.
-User.
-User id obtained from DescribeTenantUserList.
-Project.
-ProjectId from the DescribeUserProjects request parameters structure.
-Role (project-level role).
-First call DescribeUserProjects to obtain the project ID (ProjectId), then call DescribeRoleList to get the role ID (RoleId), and combine them as $ProjectId.$ProjectId.RoleId, for example "3085649716411588608.308335260274237440".
-GlobalRole (platform-level role).
-AllAccountUsers all users.
-Another ID, taken from RoleId in DescribeTenantRole.
                     * 
                     */
                    void SetSubjects(const std::vector<Subject>& _subjects);

                    /**
                     * 判断参数 Subjects 是否已赋值
                     * @return Subjects 是否已赋值
                     * 
                     */
                    bool SubjectsHasBeenSet() const;

                    /**
                     * 获取Permission point, comes from the NAME in various Privileges returned by the GetGrantPrivilegesSTD API in the TCCATALOG module.
                     * @return Privileges Permission point, comes from the NAME in various Privileges returned by the GetGrantPrivilegesSTD API in the TCCATALOG module.
                     * 
                     */
                    std::vector<PrivilegeInfo> GetPrivileges() const;

                    /**
                     * 设置Permission point, comes from the NAME in various Privileges returned by the GetGrantPrivilegesSTD API in the TCCATALOG module.
                     * @param _privileges Permission point, comes from the NAME in various Privileges returned by the GetGrantPrivilegesSTD API in the TCCATALOG module.
                     * 
                     */
                    void SetPrivileges(const std::vector<PrivilegeInfo>& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                private:

                    /**
                     * Resource array.
ResourceType: originates from the ResourceType returned by the GetGrantPrivilegesSTD API in the TCCATALOG module, and change to capitalize the first letter, such as METALAKE corresponding to METALAKE.
ResourceUri depends on ResourceType. fixed as default for Metalake. use the three-segment format of catalog for other categories, such as.
-Metalake, fixed as default.
-Catalog. specifies the catalogName.
-Schema. valid values: catalogName.SchemaName.
-Table, in the format of catalogName.SchemaName.TableName.

                     */
                    std::vector<PrivilegeResource> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * Authorization entity array. specifies the SubjectType and corresponding SubjectValue value rules.
-User.
-User id obtained from DescribeTenantUserList.
-Project.
-ProjectId from the DescribeUserProjects request parameters structure.
-Role (project-level role).
-First call DescribeUserProjects to obtain the project ID (ProjectId), then call DescribeRoleList to get the role ID (RoleId), and combine them as $ProjectId.$ProjectId.RoleId, for example "3085649716411588608.308335260274237440".
-GlobalRole (platform-level role).
-AllAccountUsers all users.
-Another ID, taken from RoleId in DescribeTenantRole.
                     */
                    std::vector<Subject> m_subjects;
                    bool m_subjectsHasBeenSet;

                    /**
                     * Permission point, comes from the NAME in various Privileges returned by the GetGrantPrivilegesSTD API in the TCCATALOG module.
                     */
                    std::vector<PrivilegeInfo> m_privileges;
                    bool m_privilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHORIZEPRIVILEGESREQUEST_H_
