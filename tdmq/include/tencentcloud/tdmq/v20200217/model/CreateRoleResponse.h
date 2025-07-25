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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROLERESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/EnvironmentRoleSet.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRole response structure.
                */
                class CreateRoleResponse : public AbstractModel
                {
                public:
                    CreateRoleResponse();
                    ~CreateRoleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Role name
                     * @return RoleName Role name
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取Role token
                     * @return Token Role token
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Namespaces that are bound in batches
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return EnvironmentRoleSets Namespaces that are bound in batches
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<EnvironmentRoleSet> GetEnvironmentRoleSets() const;

                    /**
                     * 判断参数 EnvironmentRoleSets 是否已赋值
                     * @return EnvironmentRoleSets 是否已赋值
                     * 
                     */
                    bool EnvironmentRoleSetsHasBeenSet() const;

                private:

                    /**
                     * Role name
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Role token
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Namespaces that are bound in batches
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<EnvironmentRoleSet> m_environmentRoleSets;
                    bool m_environmentRoleSetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROLERESPONSE_H_
