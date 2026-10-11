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
                     * 获取<p>Cluster name.</p>
                     * @return InstanceId <p>Cluster name.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Cluster name.</p>
                     * @param _instanceId <p>Cluster name.</p>
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
                     * 获取<p>User group name.</p>
                     * @return Group <p>User group name.</p>
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置<p>User group name.</p>
                     * @param _group <p>User group name.</p>
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
                     * 获取<p>User list.</p>
                     * @return Users <p>User list.</p>
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置<p>User list.</p>
                     * @param _users <p>User list.</p>
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
                     * 获取<p>User group description.</p>
                     * @return Description <p>User group description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>User group description.</p>
                     * @param _description <p>User group description.</p>
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
                     * 获取<p>Enumeration class. Valid values: ADD, DELETE, and SYNC.</p><p>Enumeration class description:</p><ul><li>ADD: Users added in batches. Adding the same user for multiple times does not trigger an error.</li><li>DELETE: Users deleted from the user group in batches. Deleting a non-existing user does not trigger an error.</li><li>SYNC: Used to synchronize the entire user group. If the list is empty, the entire user group is cleared.<br>Default value: SYNC.</li></ul>
                     * @return OperateAction <p>Enumeration class. Valid values: ADD, DELETE, and SYNC.</p><p>Enumeration class description:</p><ul><li>ADD: Users added in batches. Adding the same user for multiple times does not trigger an error.</li><li>DELETE: Users deleted from the user group in batches. Deleting a non-existing user does not trigger an error.</li><li>SYNC: Used to synchronize the entire user group. If the list is empty, the entire user group is cleared.<br>Default value: SYNC.</li></ul>
                     * 
                     */
                    std::string GetOperateAction() const;

                    /**
                     * 设置<p>Enumeration class. Valid values: ADD, DELETE, and SYNC.</p><p>Enumeration class description:</p><ul><li>ADD: Users added in batches. Adding the same user for multiple times does not trigger an error.</li><li>DELETE: Users deleted from the user group in batches. Deleting a non-existing user does not trigger an error.</li><li>SYNC: Used to synchronize the entire user group. If the list is empty, the entire user group is cleared.<br>Default value: SYNC.</li></ul>
                     * @param _operateAction <p>Enumeration class. Valid values: ADD, DELETE, and SYNC.</p><p>Enumeration class description:</p><ul><li>ADD: Users added in batches. Adding the same user for multiple times does not trigger an error.</li><li>DELETE: Users deleted from the user group in batches. Deleting a non-existing user does not trigger an error.</li><li>SYNC: Used to synchronize the entire user group. If the list is empty, the entire user group is cleared.<br>Default value: SYNC.</li></ul>
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
                     * <p>Cluster name.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>User group name.</p>
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * <p>User list.</p>
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * <p>User group description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Enumeration class. Valid values: ADD, DELETE, and SYNC.</p><p>Enumeration class description:</p><ul><li>ADD: Users added in batches. Adding the same user for multiple times does not trigger an error.</li><li>DELETE: Users deleted from the user group in batches. Deleting a non-existing user does not trigger an error.</li><li>SYNC: Used to synchronize the entire user group. If the list is empty, the entire user group is cleared.<br>Default value: SYNC.</li></ul>
                     */
                    std::string m_operateAction;
                    bool m_operateActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERSOFGROUPSTDREQUEST_H_
