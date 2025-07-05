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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEASSUMEROLEPOLICYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEASSUMEROLEPOLICYREQUEST_H_

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
                * UpdateAssumeRolePolicy request structure.
                */
                class UpdateAssumeRolePolicyRequest : public AbstractModel
                {
                public:
                    UpdateAssumeRolePolicyRequest();
                    ~UpdateAssumeRolePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy document
                     * @return PolicyDocument Policy document
                     * 
                     */
                    std::string GetPolicyDocument() const;

                    /**
                     * 设置Policy document
                     * @param _policyDocument Policy document
                     * 
                     */
                    void SetPolicyDocument(const std::string& _policyDocument);

                    /**
                     * 判断参数 PolicyDocument 是否已赋值
                     * @return PolicyDocument 是否已赋值
                     * 
                     */
                    bool PolicyDocumentHasBeenSet() const;

                    /**
                     * 获取Role ID, used to specify a role. Input either `RoleId` or `RoleName`
                     * @return RoleId Role ID, used to specify a role. Input either `RoleId` or `RoleName`
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置Role ID, used to specify a role. Input either `RoleId` or `RoleName`
                     * @param _roleId Role ID, used to specify a role. Input either `RoleId` or `RoleName`
                     * 
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取Role name, used to specify a role. Input either `RoleId` or `RoleName`
                     * @return RoleName Role name, used to specify a role. Input either `RoleId` or `RoleName`
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name, used to specify a role. Input either `RoleId` or `RoleName`
                     * @param _roleName Role name, used to specify a role. Input either `RoleId` or `RoleName`
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                private:

                    /**
                     * Policy document
                     */
                    std::string m_policyDocument;
                    bool m_policyDocumentHasBeenSet;

                    /**
                     * Role ID, used to specify a role. Input either `RoleId` or `RoleName`
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * Role name, used to specify a role. Input either `RoleId` or `RoleName`
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEASSUMEROLEPOLICYREQUEST_H_
