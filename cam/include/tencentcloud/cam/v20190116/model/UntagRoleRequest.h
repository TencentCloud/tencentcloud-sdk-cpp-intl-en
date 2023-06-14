/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_UNTAGROLEREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_UNTAGROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * UntagRole request structure.
                */
                class UntagRoleRequest : public AbstractModel
                {
                public:
                    UntagRoleRequest();
                    ~UntagRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tag key.
                     * @return TagKeys Tag key.
                     * 
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置Tag key.
                     * @param _tagKeys Tag key.
                     * 
                     */
                    void SetTagKeys(const std::vector<std::string>& _tagKeys);

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     * 
                     */
                    bool TagKeysHasBeenSet() const;

                    /**
                     * 获取Role name. Specify either the role name or role ID.
                     * @return RoleName Role name. Specify either the role name or role ID.
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name. Specify either the role name or role ID.
                     * @param _roleName Role name. Specify either the role name or role ID.
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取Role ID. Specify either the role ID or role name.
                     * @return RoleId Role ID. Specify either the role ID or role name.
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置Role ID. Specify either the role ID or role name.
                     * @param _roleId Role ID. Specify either the role ID or role name.
                     * 
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                private:

                    /**
                     * Tag key.
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * Role name. Specify either the role name or role ID.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Role ID. Specify either the role ID or role name.
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_UNTAGROLEREQUEST_H_
