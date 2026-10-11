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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEGROUPINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/RoleBasicInfo.h>
#include <tencentcloud/databuddy/v20260715/model/UserTagInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Workspace user group information
                */
                class WorkspaceGroupInfo : public AbstractModel
                {
                public:
                    WorkspaceGroupInfo();
                    ~WorkspaceGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>User group ID</p>
                     * @return GroupId <p>User group ID</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>User group ID</p>
                     * @param _groupId <p>User group ID</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>User group name</p>
                     * @return GroupName <p>User group name</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>User group name</p>
                     * @param _groupName <p>User group name</p>
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>List of characters.</p>
                     * @return Roles <p>List of characters.</p>
                     * 
                     */
                    std::vector<RoleBasicInfo> GetRoles() const;

                    /**
                     * 设置<p>List of characters.</p>
                     * @param _roles <p>List of characters.</p>
                     * 
                     */
                    void SetRoles(const std::vector<RoleBasicInfo>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取<p>Creation time, timestamp in milliseconds</p>
                     * @return CreateTime <p>Creation time, timestamp in milliseconds</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time, timestamp in milliseconds</p>
                     * @param _createTime <p>Creation time, timestamp in milliseconds</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time, millisecond timestamp</p>
                     * @return UpdateTime <p>Update time, millisecond timestamp</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time, millisecond timestamp</p>
                     * @param _updateTime <p>Update time, millisecond timestamp</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Number of users in the user group</p>
                     * @return UserCount <p>Number of users in the user group</p>
                     * 
                     */
                    int64_t GetUserCount() const;

                    /**
                     * 设置<p>Number of users in the user group</p>
                     * @param _userCount <p>Number of users in the user group</p>
                     * 
                     */
                    void SetUserCount(const int64_t& _userCount);

                    /**
                     * 判断参数 UserCount 是否已赋值
                     * @return UserCount 是否已赋值
                     * 
                     */
                    bool UserCountHasBeenSet() const;

                    /**
                     * 获取<p>user group type. The value is a string form of an enumerated numeric value: "0" = console system type (including all users), "1" = console custom type, "2" = workspace system type (including all workspace users), "3" = workspace custom type</p>
                     * @return GroupType <p>user group type. The value is a string form of an enumerated numeric value: "0" = console system type (including all users), "1" = console custom type, "2" = workspace system type (including all workspace users), "3" = workspace custom type</p>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>user group type. The value is a string form of an enumerated numeric value: "0" = console system type (including all users), "1" = console custom type, "2" = workspace system type (including all workspace users), "3" = workspace custom type</p>
                     * @param _groupType <p>user group type. The value is a string form of an enumerated numeric value: "0" = console system type (including all users), "1" = console custom type, "2" = workspace system type (including all workspace users), "3" = workspace custom type</p>
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>Tags directly bound to this group (excluding inheritance).</p>
                     * @return Tags <p>Tags directly bound to this group (excluding inheritance).</p>
                     * 
                     */
                    std::vector<UserTagInfo> GetTags() const;

                    /**
                     * 设置<p>Tags directly bound to this group (excluding inheritance).</p>
                     * @param _tags <p>Tags directly bound to this group (excluding inheritance).</p>
                     * 
                     */
                    void SetTags(const std::vector<UserTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>User group ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>User group name</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>List of characters.</p>
                     */
                    std::vector<RoleBasicInfo> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * <p>Creation time, timestamp in milliseconds</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time, millisecond timestamp</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Number of users in the user group</p>
                     */
                    int64_t m_userCount;
                    bool m_userCountHasBeenSet;

                    /**
                     * <p>user group type. The value is a string form of an enumerated numeric value: "0" = console system type (including all users), "1" = console custom type, "2" = workspace system type (including all workspace users), "3" = workspace custom type</p>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>Tags directly bound to this group (excluding inheritance).</p>
                     */
                    std::vector<UserTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEGROUPINFO_H_
