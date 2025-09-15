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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERSOFGROUPSTDREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERSOFGROUPSTDREQUEST_H_

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
                * ModifyUsersOfGroupSTD request structure.
                */
                class ModifyUsersOfGroupSTDRequest : public AbstractModel
                {
                public:
                    ModifyUsersOfGroupSTDRequest();
                    ~ModifyUsersOfGroupSTDRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster name.
                     * @return InstanceId Cluster name.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster name.
                     * @param _instanceId Cluster name.
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
                     * 获取User group name.
                     * @return Group User group name.
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置User group name.
                     * @param _group User group name.
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取User list.
                     * @return Users User list.
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置User list.
                     * @param _users User list.
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
                     * 获取User group description.
                     * @return Description User group description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置User group description.
                     * @param _description User group description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Enumeration class. Valid values: ADD, DELETE, SYNC.


Enumeration class description.
- ADD: Batched users to add. Adding the same user multiple times will not trigger an error.
- DELETE: Batched users to remove from the user group. Deleting non-existing users will not trigger an error.
- SYNC: Overwrites the entire user group. An empty list clears all existing members.
Defaults to SYNC.

                     * @return OperateAction Enumeration class. Valid values: ADD, DELETE, SYNC.


Enumeration class description.
- ADD: Batched users to add. Adding the same user multiple times will not trigger an error.
- DELETE: Batched users to remove from the user group. Deleting non-existing users will not trigger an error.
- SYNC: Overwrites the entire user group. An empty list clears all existing members.
Defaults to SYNC.

                     * 
                     */
                    std::string GetOperateAction() const;

                    /**
                     * 设置Enumeration class. Valid values: ADD, DELETE, SYNC.


Enumeration class description.
- ADD: Batched users to add. Adding the same user multiple times will not trigger an error.
- DELETE: Batched users to remove from the user group. Deleting non-existing users will not trigger an error.
- SYNC: Overwrites the entire user group. An empty list clears all existing members.
Defaults to SYNC.

                     * @param _operateAction Enumeration class. Valid values: ADD, DELETE, SYNC.


Enumeration class description.
- ADD: Batched users to add. Adding the same user multiple times will not trigger an error.
- DELETE: Batched users to remove from the user group. Deleting non-existing users will not trigger an error.
- SYNC: Overwrites the entire user group. An empty list clears all existing members.
Defaults to SYNC.

                     * 
                     */
                    void SetOperateAction(const std::string& _operateAction);

                    /**
                     * 判断参数 OperateAction 是否已赋值
                     * @return OperateAction 是否已赋值
                     * 
                     */
                    bool OperateActionHasBeenSet() const;

                private:

                    /**
                     * Cluster name.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * User group name.
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * User list.
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * User group description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Enumeration class. Valid values: ADD, DELETE, SYNC.


Enumeration class description.
- ADD: Batched users to add. Adding the same user multiple times will not trigger an error.
- DELETE: Batched users to remove from the user group. Deleting non-existing users will not trigger an error.
- SYNC: Overwrites the entire user group. An empty list clears all existing members.
Defaults to SYNC.

                     */
                    std::string m_operateAction;
                    bool m_operateActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERSOFGROUPSTDREQUEST_H_
