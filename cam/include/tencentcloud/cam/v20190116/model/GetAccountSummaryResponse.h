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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETACCOUNTSUMMARYRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETACCOUNTSUMMARYRESPONSE_H_

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
                * GetAccountSummary response structure.
                */
                class GetAccountSummaryResponse : public AbstractModel
                {
                public:
                    GetAccountSummaryResponse();
                    ~GetAccountSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of policies
                     * @return Policies Number of policies
                     * 
                     */
                    uint64_t GetPolicies() const;

                    /**
                     * 判断参数 Policies 是否已赋值
                     * @return Policies 是否已赋值
                     * 
                     */
                    bool PoliciesHasBeenSet() const;

                    /**
                     * 获取Number of roles
                     * @return Roles Number of roles
                     * 
                     */
                    uint64_t GetRoles() const;

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取Number of identity providers
                     * @return Idps Number of identity providers
                     * 
                     */
                    uint64_t GetIdps() const;

                    /**
                     * 判断参数 Idps 是否已赋值
                     * @return Idps 是否已赋值
                     * 
                     */
                    bool IdpsHasBeenSet() const;

                    /**
                     * 获取Number of sub-accounts
                     * @return User Number of sub-accounts
                     * 
                     */
                    uint64_t GetUser() const;

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Number of groups
                     * @return Group Number of groups
                     * 
                     */
                    uint64_t GetGroup() const;

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取Total number of grouped users
                     * @return Member Total number of grouped users
                     * 
                     */
                    uint64_t GetMember() const;

                    /**
                     * 判断参数 Member 是否已赋值
                     * @return Member 是否已赋值
                     * 
                     */
                    bool MemberHasBeenSet() const;

                private:

                    /**
                     * Number of policies
                     */
                    uint64_t m_policies;
                    bool m_policiesHasBeenSet;

                    /**
                     * Number of roles
                     */
                    uint64_t m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * Number of identity providers
                     */
                    uint64_t m_idps;
                    bool m_idpsHasBeenSet;

                    /**
                     * Number of sub-accounts
                     */
                    uint64_t m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Number of groups
                     */
                    uint64_t m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * Total number of grouped users
                     */
                    uint64_t m_member;
                    bool m_memberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETACCOUNTSUMMARYRESPONSE_H_
