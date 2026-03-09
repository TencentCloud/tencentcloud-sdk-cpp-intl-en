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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_GRANTMEMBERPROJECTROLEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_GRANTMEMBERPROJECTROLEREQUEST_H_

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
                * GrantMemberProjectRole request structure.
                */
                class GrantMemberProjectRoleRequest : public AbstractModel
                {
                public:
                    GrantMemberProjectRoleRequest();
                    ~GrantMemberProjectRoleRequest() = default;
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
                     * 获取User ID
                     * @return UserUin User ID
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置User ID
                     * @param _userUin User ID
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
                     * 获取Role id list. currently supports project roles:.
-308335260274237440 (project administrator).
-308335260676890624 (data engineer).
-308335260844662784 (operation and maintenance engineer).
-308335260945326080 (ordinary member).
                     * @return RoleIds Role id list. currently supports project roles:.
-308335260274237440 (project administrator).
-308335260676890624 (data engineer).
-308335260844662784 (operation and maintenance engineer).
-308335260945326080 (ordinary member).
                     * 
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置Role id list. currently supports project roles:.
-308335260274237440 (project administrator).
-308335260676890624 (data engineer).
-308335260844662784 (operation and maintenance engineer).
-308335260945326080 (ordinary member).
                     * @param _roleIds Role id list. currently supports project roles:.
-308335260274237440 (project administrator).
-308335260676890624 (data engineer).
-308335260844662784 (operation and maintenance engineer).
-308335260945326080 (ordinary member).
                     * 
                     */
                    void SetRoleIds(const std::vector<std::string>& _roleIds);

                    /**
                     * 判断参数 RoleIds 是否已赋值
                     * @return RoleIds 是否已赋值
                     * 
                     */
                    bool RoleIdsHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * User ID
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * Role id list. currently supports project roles:.
-308335260274237440 (project administrator).
-308335260676890624 (data engineer).
-308335260844662784 (operation and maintenance engineer).
-308335260945326080 (ordinary member).
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_GRANTMEMBERPROJECTROLEREQUEST_H_
