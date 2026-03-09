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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_REVOKEPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_REVOKEPRIVILEGESREQUEST_H_

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
                * RevokePrivileges request structure.
                */
                class RevokePrivilegesRequest : public AbstractModel
                {
                public:
                    RevokePrivilegesRequest();
                    ~RevokePrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource array. data source is ResourceType and ResourceUri in the Resource of the ListPermissions API response.
                     * @return Resources Resource array. data source is ResourceType and ResourceUri in the Resource of the ListPermissions API response.
                     * 
                     */
                    std::vector<PrivilegeResource> GetResources() const;

                    /**
                     * 设置Resource array. data source is ResourceType and ResourceUri in the Resource of the ListPermissions API response.
                     * @param _resources Resource array. data source is ResourceType and ResourceUri in the Resource of the ListPermissions API response.
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
                     * 获取Authorization revoked principal array. need to pay attention to parameter assembly.
1. for SubjectType and SubjectValues, refer to SubjectType and SubjectValue in SubjectDetails returned by the ListPermissions api.
2. during batch reclamation, the length of the Subjects array must match the length of the Privileges permission point, and the data must have a one-to-one correspondence.
                     * @return Subjects Authorization revoked principal array. need to pay attention to parameter assembly.
1. for SubjectType and SubjectValues, refer to SubjectType and SubjectValue in SubjectDetails returned by the ListPermissions api.
2. during batch reclamation, the length of the Subjects array must match the length of the Privileges permission point, and the data must have a one-to-one correspondence.
                     * 
                     */
                    std::vector<Subject> GetSubjects() const;

                    /**
                     * 设置Authorization revoked principal array. need to pay attention to parameter assembly.
1. for SubjectType and SubjectValues, refer to SubjectType and SubjectValue in SubjectDetails returned by the ListPermissions api.
2. during batch reclamation, the length of the Subjects array must match the length of the Privileges permission point, and the data must have a one-to-one correspondence.
                     * @param _subjects Authorization revoked principal array. need to pay attention to parameter assembly.
1. for SubjectType and SubjectValues, refer to SubjectType and SubjectValue in SubjectDetails returned by the ListPermissions api.
2. during batch reclamation, the length of the Subjects array must match the length of the Privileges permission point, and the data must have a one-to-one correspondence.
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
                     * 获取Permission point, Name originates from the Name in PermissionDetails of the ListPermissions API response, such as BROWSE, GRANT_PRIVILEGES.
                     * @return Privileges Permission point, Name originates from the Name in PermissionDetails of the ListPermissions API response, such as BROWSE, GRANT_PRIVILEGES.
                     * 
                     */
                    std::vector<PrivilegeInfo> GetPrivileges() const;

                    /**
                     * 设置Permission point, Name originates from the Name in PermissionDetails of the ListPermissions API response, such as BROWSE, GRANT_PRIVILEGES.
                     * @param _privileges Permission point, Name originates from the Name in PermissionDetails of the ListPermissions API response, such as BROWSE, GRANT_PRIVILEGES.
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
                     * Resource array. data source is ResourceType and ResourceUri in the Resource of the ListPermissions API response.
                     */
                    std::vector<PrivilegeResource> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * Authorization revoked principal array. need to pay attention to parameter assembly.
1. for SubjectType and SubjectValues, refer to SubjectType and SubjectValue in SubjectDetails returned by the ListPermissions api.
2. during batch reclamation, the length of the Subjects array must match the length of the Privileges permission point, and the data must have a one-to-one correspondence.
                     */
                    std::vector<Subject> m_subjects;
                    bool m_subjectsHasBeenSet;

                    /**
                     * Permission point, Name originates from the Name in PermissionDetails of the ListPermissions API response, such as BROWSE, GRANT_PRIVILEGES.
                     */
                    std::vector<PrivilegeInfo> m_privileges;
                    bool m_privilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_REVOKEPRIVILEGESREQUEST_H_
