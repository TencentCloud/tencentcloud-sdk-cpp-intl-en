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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDPERMISSIONPOLICYTOROLECONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDPERMISSIONPOLICYTOROLECONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/PolicyDetail.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * AddPermissionPolicyToRoleConfiguration request structure.
                */
                class AddPermissionPolicyToRoleConfigurationRequest : public AbstractModel
                {
                public:
                    AddPermissionPolicyToRoleConfigurationRequest();
                    ~AddPermissionPolicyToRoleConfigurationRequest() = default;
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
                     * 获取Permission policy name, supporting up to 20 policies, with each policy having a maximum of 32 characters. If you need to add a system policy, it is recommended to use the RolePolicies parameter. For custom policies, the array length is up to 1.
                     * @return RolePolicyNames Permission policy name, supporting up to 20 policies, with each policy having a maximum of 32 characters. If you need to add a system policy, it is recommended to use the RolePolicies parameter. For custom policies, the array length is up to 1.
                     * 
                     */
                    std::vector<std::string> GetRolePolicyNames() const;

                    /**
                     * 设置Permission policy name, supporting up to 20 policies, with each policy having a maximum of 32 characters. If you need to add a system policy, it is recommended to use the RolePolicies parameter. For custom policies, the array length is up to 1.
                     * @param _rolePolicyNames Permission policy name, supporting up to 20 policies, with each policy having a maximum of 32 characters. If you need to add a system policy, it is recommended to use the RolePolicies parameter. For custom policies, the array length is up to 1.
                     * 
                     */
                    void SetRolePolicyNames(const std::vector<std::string>& _rolePolicyNames);

                    /**
                     * 判断参数 RolePolicyNames 是否已赋值
                     * @return RolePolicyNames 是否已赋值
                     * 
                     */
                    bool RolePolicyNamesHasBeenSet() const;

                    /**
                     * 获取Details of an added system policy.
                     * @return RolePolicies Details of an added system policy.
                     * 
                     */
                    std::vector<PolicyDetail> GetRolePolicies() const;

                    /**
                     * 设置Details of an added system policy.
                     * @param _rolePolicies Details of an added system policy.
                     * 
                     */
                    void SetRolePolicies(const std::vector<PolicyDetail>& _rolePolicies);

                    /**
                     * 判断参数 RolePolicies 是否已赋值
                     * @return RolePolicies 是否已赋值
                     * 
                     */
                    bool RolePoliciesHasBeenSet() const;

                    /**
                     * 获取Custom policy content, which contains up to 4096 characters. When RolePolicyType is Inline, this parameter must be configured. For details, see the permission policy syntax and structure.
                     * @return CustomPolicyDocument Custom policy content, which contains up to 4096 characters. When RolePolicyType is Inline, this parameter must be configured. For details, see the permission policy syntax and structure.
                     * 
                     */
                    std::string GetCustomPolicyDocument() const;

                    /**
                     * 设置Custom policy content, which contains up to 4096 characters. When RolePolicyType is Inline, this parameter must be configured. For details, see the permission policy syntax and structure.
                     * @param _customPolicyDocument Custom policy content, which contains up to 4096 characters. When RolePolicyType is Inline, this parameter must be configured. For details, see the permission policy syntax and structure.
                     * 
                     */
                    void SetCustomPolicyDocument(const std::string& _customPolicyDocument);

                    /**
                     * 判断参数 CustomPolicyDocument 是否已赋值
                     * @return CustomPolicyDocument 是否已赋值
                     * 
                     */
                    bool CustomPolicyDocumentHasBeenSet() const;

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
                     * Permission policy name, supporting up to 20 policies, with each policy having a maximum of 32 characters. If you need to add a system policy, it is recommended to use the RolePolicies parameter. For custom policies, the array length is up to 1.
                     */
                    std::vector<std::string> m_rolePolicyNames;
                    bool m_rolePolicyNamesHasBeenSet;

                    /**
                     * Details of an added system policy.
                     */
                    std::vector<PolicyDetail> m_rolePolicies;
                    bool m_rolePoliciesHasBeenSet;

                    /**
                     * Custom policy content, which contains up to 4096 characters. When RolePolicyType is Inline, this parameter must be configured. For details, see the permission policy syntax and structure.
                     */
                    std::string m_customPolicyDocument;
                    bool m_customPolicyDocumentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDPERMISSIONPOLICYTOROLECONFIGURATIONREQUEST_H_
