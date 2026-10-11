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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERGROUPREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyUserGroup request structure.
                */
                class ModifyUserGroupRequest : public AbstractModel
                {
                public:
                    ModifyUserGroupRequest();
                    ~ModifyUserGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Cluster string ID.</p>
                     * @return InstanceId <p>Cluster string ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Cluster string ID.</p>
                     * @param _instanceId <p>Cluster string ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>User information list.</p>
                     * @return Users <p>User information list.</p>
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置<p>User information list.</p>
                     * @param _users <p>User information list.</p>
                     * 
                     */
                    void SetUsers(const std::vector<std::string>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取<p>Primary user group. This parameter is required for CVM clusters and optional for TKE clusters.</p>
                     * @return UserGroup <p>Primary user group. This parameter is required for CVM clusters and optional for TKE clusters.</p>
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置<p>Primary user group. This parameter is required for CVM clusters and optional for TKE clusters.</p>
                     * @param _userGroup <p>Primary user group. This parameter is required for CVM clusters and optional for TKE clusters.</p>
                     * 
                     */
                    void SetUserGroup(const std::string& _userGroup);

                    /**
                     * 判断参数 UserGroup 是否已赋值
                     * @return UserGroup 是否已赋值
                     * 
                     */
                    bool UserGroupHasBeenSet() const;

                    /**
                     * 获取<p>Secondary user group.</p>
                     * @return Groups <p>Secondary user group.</p>
                     * 
                     */
                    std::vector<std::string> GetGroups() const;

                    /**
                     * 设置<p>Secondary user group.</p>
                     * @param _groups <p>Secondary user group.</p>
                     * 
                     */
                    void SetGroups(const std::vector<std::string>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取<p>Remarks.</p>
                     * @return Remark <p>Remarks.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remarks.</p>
                     * @param _remark <p>Remarks.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster string ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>User information list.</p>
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * <p>Primary user group. This parameter is required for CVM clusters and optional for TKE clusters.</p>
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * <p>Secondary user group.</p>
                     */
                    std::vector<std::string> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERGROUPREQUEST_H_
