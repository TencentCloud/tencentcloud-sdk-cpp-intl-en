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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDROLEPOLICIESREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDROLEPOLICIESREQUEST_H_

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
                * ListAttachedRolePolicies request structure.
                */
                class ListAttachedRolePoliciesRequest : public AbstractModel
                {
                public:
                    ListAttachedRolePoliciesRequest();
                    ~ListAttachedRolePoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number, beginning from 1
                     * @return Page Page number, beginning from 1
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置Page number, beginning from 1
                     * @param Page Page number, beginning from 1
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Number of lines per page, no more than 200
                     * @return Rp Number of lines per page, no more than 200
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置Number of lines per page, no more than 200
                     * @param Rp Number of lines per page, no more than 200
                     */
                    void SetRp(const uint64_t& _rp);

                    /**
                     * 判断参数 Rp 是否已赋值
                     * @return Rp 是否已赋值
                     */
                    bool RpHasBeenSet() const;

                    /**
                     * 获取Role ID, used to specify a role. Input either `RoleId` or `RoleName`
                     * @return RoleId Role ID, used to specify a role. Input either `RoleId` or `RoleName`
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置Role ID, used to specify a role. Input either `RoleId` or `RoleName`
                     * @param RoleId Role ID, used to specify a role. Input either `RoleId` or `RoleName`
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取Role name, used to specify a role. Input either `RoleId` or `RoleName`
                     * @return RoleName Role name, used to specify a role. Input either `RoleId` or `RoleName`
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name, used to specify a role. Input either `RoleId` or `RoleName`
                     * @param RoleName Role name, used to specify a role. Input either `RoleId` or `RoleName`
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取Filter according to policy type. `User` indicates querying custom policies only. `QCS` indicates querying preset policies only
                     * @return PolicyType Filter according to policy type. `User` indicates querying custom policies only. `QCS` indicates querying preset policies only
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置Filter according to policy type. `User` indicates querying custom policies only. `QCS` indicates querying preset policies only
                     * @param PolicyType Filter according to policy type. `User` indicates querying custom policies only. `QCS` indicates querying preset policies only
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     */
                    bool PolicyTypeHasBeenSet() const;

                private:

                    /**
                     * Page number, beginning from 1
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Number of lines per page, no more than 200
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

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

                    /**
                     * Filter according to policy type. `User` indicates querying custom policies only. `QCS` indicates querying preset policies only
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDROLEPOLICIESREQUEST_H_
