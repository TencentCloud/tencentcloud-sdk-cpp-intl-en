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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ADDWORKSPACEGROUPSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ADDWORKSPACEGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * AddWorkspaceGroups request structure.
                */
                class AddWorkspaceGroupsRequest : public AbstractModel
                {
                public:
                    AddWorkspaceGroupsRequest();
                    ~AddWorkspaceGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User group ID, which can be obtained through the ListWorkspaceGroups API.
                     * @return GroupIds User group ID, which can be obtained through the ListWorkspaceGroups API.
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置User group ID, which can be obtained through the ListWorkspaceGroups API.
                     * @param _groupIds User group ID, which can be obtained through the ListWorkspaceGroups API.
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
                     * 获取Workspace ID
                     * @return WorkspaceId Workspace ID
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置Workspace ID
                     * @param _workspaceId Workspace ID
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
                     * 获取Role ID, which can be obtained through the ListWorkspaceRoles API.
                     * @return RoleIds Role ID, which can be obtained through the ListWorkspaceRoles API.
                     * 
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置Role ID, which can be obtained through the ListWorkspaceRoles API.
                     * @param _roleIds Role ID, which can be obtained through the ListWorkspaceRoles API.
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
                     * User group ID, which can be obtained through the ListWorkspaceGroups API.
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * Workspace ID
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * Role ID, which can be obtained through the ListWorkspaceRoles API.
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ADDWORKSPACEGROUPSREQUEST_H_
