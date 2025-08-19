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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CREATEUSERROLEPROJECTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CREATEUSERROLEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/UserIdAndUserName.h>
#include <tencentcloud/bi/v20220105/model/UserInfo.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * CreateUserRoleProject request structure.
                */
                class CreateUserRoleProjectRequest : public AbstractModel
                {
                public:
                    CreateUserRoleProjectRequest();
                    ~CreateUserRoleProjectRequest() = default;
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
                     * 获取Role ID list.
                     * @return RoleIdList Role ID list.
                     * 
                     */
                    std::vector<int64_t> GetRoleIdList() const;

                    /**
                     * 设置Role ID list.
                     * @param _roleIdList Role ID list.
                     * 
                     */
                    void SetRoleIdList(const std::vector<int64_t>& _roleIdList);

                    /**
                     * 判断参数 RoleIdList 是否已赋值
                     * @return RoleIdList 是否已赋值
                     * 
                     */
                    bool RoleIdListHasBeenSet() const;

                    /**
                     * 获取User list (deprecated).
                     * @return UserList User list (deprecated).
                     * @deprecated
                     */
                    std::vector<UserIdAndUserName> GetUserList() const;

                    /**
                     * 设置User list (deprecated).
                     * @param _userList User list (deprecated).
                     * @deprecated
                     */
                    void SetUserList(const std::vector<UserIdAndUserName>& _userList);

                    /**
                     * 判断参数 UserList 是否已赋值
                     * @return UserList 是否已赋值
                     * @deprecated
                     */
                    bool UserListHasBeenSet() const;

                    /**
                     * 获取User list (new).
                     * @return UserInfoList User list (new).
                     * 
                     */
                    std::vector<UserInfo> GetUserInfoList() const;

                    /**
                     * 设置User list (new).
                     * @param _userInfoList User list (new).
                     * 
                     */
                    void SetUserInfoList(const std::vector<UserInfo>& _userInfoList);

                    /**
                     * 判断参数 UserInfoList 是否已赋值
                     * @return UserInfoList 是否已赋值
                     * 
                     */
                    bool UserInfoListHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Role ID list.
                     */
                    std::vector<int64_t> m_roleIdList;
                    bool m_roleIdListHasBeenSet;

                    /**
                     * User list (deprecated).
                     */
                    std::vector<UserIdAndUserName> m_userList;
                    bool m_userListHasBeenSet;

                    /**
                     * User list (new).
                     */
                    std::vector<UserInfo> m_userInfoList;
                    bool m_userInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CREATEUSERROLEPROJECTREQUEST_H_
