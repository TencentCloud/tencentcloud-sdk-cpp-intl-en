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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_PUTROLEPERMISSIONSBOUNDARYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_PUTROLEPERMISSIONSBOUNDARYREQUEST_H_

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
                * PutRolePermissionsBoundary request structure.
                */
                class PutRolePermissionsBoundaryRequest : public AbstractModel
                {
                public:
                    PutRolePermissionsBoundaryRequest();
                    ~PutRolePermissionsBoundaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID
                     * @param PolicyId Policy ID
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Role ID (either it or the role name must be entered)
                     * @return RoleId Role ID (either it or the role name must be entered)
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置Role ID (either it or the role name must be entered)
                     * @param RoleId Role ID (either it or the role name must be entered)
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取Role name (either it or the role ID must be entered)
                     * @return RoleName Role name (either it or the role ID must be entered)
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name (either it or the role ID must be entered)
                     * @param RoleName Role name (either it or the role ID must be entered)
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     */
                    bool RoleNameHasBeenSet() const;

                private:

                    /**
                     * Policy ID
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Role ID (either it or the role name must be entered)
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * Role name (either it or the role ID must be entered)
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_PUTROLEPERMISSIONSBOUNDARYREQUEST_H_
