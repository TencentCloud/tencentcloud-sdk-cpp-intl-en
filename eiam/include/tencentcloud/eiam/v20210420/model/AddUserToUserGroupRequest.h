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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_ADDUSERTOUSERGROUPREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_ADDUSERTOUSERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * AddUserToUserGroup request structure.
                */
                class AddUserToUserGroupRequest : public AbstractModel
                {
                public:
                    AddUserToUserGroupRequest();
                    ~AddUserToUserGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IDs of the users to be added to the user group.
                     * @return UserIds List of IDs of the users to be added to the user group.
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置List of IDs of the users to be added to the user group.
                     * @param _userIds List of IDs of the users to be added to the user group.
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取User group ID, which is globally unique.
                     * @return UserGroupId User group ID, which is globally unique.
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置User group ID, which is globally unique.
                     * @param _userGroupId User group ID, which is globally unique.
                     * 
                     */
                    void SetUserGroupId(const std::string& _userGroupId);

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     * 
                     */
                    bool UserGroupIdHasBeenSet() const;

                private:

                    /**
                     * List of IDs of the users to be added to the user group.
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * User group ID, which is globally unique.
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_ADDUSERTOUSERGROUPREQUEST_H_
