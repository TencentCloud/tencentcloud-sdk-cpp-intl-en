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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYUSERBINDWORKLOADGROUPREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYUSERBINDWORKLOADGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/BindUser.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ModifyUserBindWorkloadGroup request structure.
                */
                class ModifyUserBindWorkloadGroupRequest : public AbstractModel
                {
                public:
                    ModifyUserBindWorkloadGroupRequest();
                    ~ModifyUserBindWorkloadGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return InstanceId Cluster ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID
                     * @param _instanceId Cluster ID
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
                     * 获取The user information of the resource group needs to be bound. If an account has information of multiple hosts, all information needs to be uploaded.
                     * @return BindUsers The user information of the resource group needs to be bound. If an account has information of multiple hosts, all information needs to be uploaded.
                     * 
                     */
                    std::vector<BindUser> GetBindUsers() const;

                    /**
                     * 设置The user information of the resource group needs to be bound. If an account has information of multiple hosts, all information needs to be uploaded.
                     * @param _bindUsers The user information of the resource group needs to be bound. If an account has information of multiple hosts, all information needs to be uploaded.
                     * 
                     */
                    void SetBindUsers(const std::vector<BindUser>& _bindUsers);

                    /**
                     * 判断参数 BindUsers 是否已赋值
                     * @return BindUsers 是否已赋值
                     * 
                     */
                    bool BindUsersHasBeenSet() const;

                    /**
                     * 获取Name of the resource group bound before modification
                     * @return OldWorkloadGroupName Name of the resource group bound before modification
                     * 
                     */
                    std::string GetOldWorkloadGroupName() const;

                    /**
                     * 设置Name of the resource group bound before modification
                     * @param _oldWorkloadGroupName Name of the resource group bound before modification
                     * 
                     */
                    void SetOldWorkloadGroupName(const std::string& _oldWorkloadGroupName);

                    /**
                     * 判断参数 OldWorkloadGroupName 是否已赋值
                     * @return OldWorkloadGroupName 是否已赋值
                     * 
                     */
                    bool OldWorkloadGroupNameHasBeenSet() const;

                    /**
                     * 获取Name of the resource group bound after modification
                     * @return NewWorkloadGroupName Name of the resource group bound after modification
                     * 
                     */
                    std::string GetNewWorkloadGroupName() const;

                    /**
                     * 设置Name of the resource group bound after modification
                     * @param _newWorkloadGroupName Name of the resource group bound after modification
                     * 
                     */
                    void SetNewWorkloadGroupName(const std::string& _newWorkloadGroupName);

                    /**
                     * 判断参数 NewWorkloadGroupName 是否已赋值
                     * @return NewWorkloadGroupName 是否已赋值
                     * 
                     */
                    bool NewWorkloadGroupNameHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The user information of the resource group needs to be bound. If an account has information of multiple hosts, all information needs to be uploaded.
                     */
                    std::vector<BindUser> m_bindUsers;
                    bool m_bindUsersHasBeenSet;

                    /**
                     * Name of the resource group bound before modification
                     */
                    std::string m_oldWorkloadGroupName;
                    bool m_oldWorkloadGroupNameHasBeenSet;

                    /**
                     * Name of the resource group bound after modification
                     */
                    std::string m_newWorkloadGroupName;
                    bool m_newWorkloadGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYUSERBINDWORKLOADGROUPREQUEST_H_
