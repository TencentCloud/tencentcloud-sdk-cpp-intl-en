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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_REMOVEPERMISSIONPOLICYFROMROLECONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_REMOVEPERMISSIONPOLICYFROMROLECONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * RemovePermissionPolicyFromRoleConfiguration request structure.
                */
                class RemovePermissionPolicyFromRoleConfigurationRequest : public AbstractModel
                {
                public:
                    RemovePermissionPolicyFromRoleConfigurationRequest();
                    ~RemovePermissionPolicyFromRoleConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Space ID.
                     * @return ZoneId Space ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Space ID.
                     * @param _zoneId Space ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Permission configuration ID.
                     * @return RoleConfigurationId Permission configuration ID.
                     * 
                     */
                    std::string GetRoleConfigurationId() const;

                    /**
                     * 设置Permission configuration ID.
                     * @param _roleConfigurationId Permission configuration ID.
                     * 
                     */
                    void SetRoleConfigurationId(const std::string& _roleConfigurationId);

                    /**
                     * 判断参数 RoleConfigurationId 是否已赋值
                     * @return RoleConfigurationId 是否已赋值
                     * 
                     */
                    bool RoleConfigurationIdHasBeenSet() const;

                    /**
                     * 获取Permission policy type. Valid values: System: system policy, namely the CAM system policy reused; Custom: custom policy, namely the custom policy prepared according to the CAM permission policy syntax and structure.
                     * @return RolePolicyType Permission policy type. Valid values: System: system policy, namely the CAM system policy reused; Custom: custom policy, namely the custom policy prepared according to the CAM permission policy syntax and structure.
                     * 
                     */
                    std::string GetRolePolicyType() const;

                    /**
                     * 设置Permission policy type. Valid values: System: system policy, namely the CAM system policy reused; Custom: custom policy, namely the custom policy prepared according to the CAM permission policy syntax and structure.
                     * @param _rolePolicyType Permission policy type. Valid values: System: system policy, namely the CAM system policy reused; Custom: custom policy, namely the custom policy prepared according to the CAM permission policy syntax and structure.
                     * 
                     */
                    void SetRolePolicyType(const std::string& _rolePolicyType);

                    /**
                     * 判断参数 RolePolicyType 是否已赋值
                     * @return RolePolicyType 是否已赋值
                     * 
                     */
                    bool RolePolicyTypeHasBeenSet() const;

                    /**
                     * 获取Permission policy name, which contains up to 32 characters.
                     * @return RolePolicyName Permission policy name, which contains up to 32 characters.
                     * 
                     */
                    std::string GetRolePolicyName() const;

                    /**
                     * 设置Permission policy name, which contains up to 32 characters.
                     * @param _rolePolicyName Permission policy name, which contains up to 32 characters.
                     * 
                     */
                    void SetRolePolicyName(const std::string& _rolePolicyName);

                    /**
                     * 判断参数 RolePolicyName 是否已赋值
                     * @return RolePolicyName 是否已赋值
                     * 
                     */
                    bool RolePolicyNameHasBeenSet() const;

                    /**
                     * 获取Policy ID.
                     * @return RolePolicyId Policy ID.
                     * 
                     */
                    int64_t GetRolePolicyId() const;

                    /**
                     * 设置Policy ID.
                     * @param _rolePolicyId Policy ID.
                     * 
                     */
                    void SetRolePolicyId(const int64_t& _rolePolicyId);

                    /**
                     * 判断参数 RolePolicyId 是否已赋值
                     * @return RolePolicyId 是否已赋值
                     * 
                     */
                    bool RolePolicyIdHasBeenSet() const;

                private:

                    /**
                     * Space ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Permission configuration ID.
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * Permission policy type. Valid values: System: system policy, namely the CAM system policy reused; Custom: custom policy, namely the custom policy prepared according to the CAM permission policy syntax and structure.
                     */
                    std::string m_rolePolicyType;
                    bool m_rolePolicyTypeHasBeenSet;

                    /**
                     * Permission policy name, which contains up to 32 characters.
                     */
                    std::string m_rolePolicyName;
                    bool m_rolePolicyNameHasBeenSet;

                    /**
                     * Policy ID.
                     */
                    int64_t m_rolePolicyId;
                    bool m_rolePolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_REMOVEPERMISSIONPOLICYFROMROLECONFIGURATIONREQUEST_H_
