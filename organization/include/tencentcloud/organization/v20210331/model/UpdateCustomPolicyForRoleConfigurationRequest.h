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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATECUSTOMPOLICYFORROLECONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATECUSTOMPOLICYFORROLECONFIGURATIONREQUEST_H_

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
                * UpdateCustomPolicyForRoleConfiguration request structure.
                */
                class UpdateCustomPolicyForRoleConfigurationRequest : public AbstractModel
                {
                public:
                    UpdateCustomPolicyForRoleConfigurationRequest();
                    ~UpdateCustomPolicyForRoleConfigurationRequest() = default;
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
                     * 获取Permission policy name, which contains up to 32 characters.
                     * @return CustomPolicyName Permission policy name, which contains up to 32 characters.
                     * 
                     */
                    std::string GetCustomPolicyName() const;

                    /**
                     * 设置Permission policy name, which contains up to 32 characters.
                     * @param _customPolicyName Permission policy name, which contains up to 32 characters.
                     * 
                     */
                    void SetCustomPolicyName(const std::string& _customPolicyName);

                    /**
                     * 判断参数 CustomPolicyName 是否已赋值
                     * @return CustomPolicyName 是否已赋值
                     * 
                     */
                    bool CustomPolicyNameHasBeenSet() const;

                    /**
                     * 获取Custom policy content, which contains up to 4096 characters. When RolePolicyType is Inline, this parameter must be configured. For details, see the permission policy syntax and structure.
                     * @return NewCustomPolicyDocument Custom policy content, which contains up to 4096 characters. When RolePolicyType is Inline, this parameter must be configured. For details, see the permission policy syntax and structure.
                     * 
                     */
                    std::string GetNewCustomPolicyDocument() const;

                    /**
                     * 设置Custom policy content, which contains up to 4096 characters. When RolePolicyType is Inline, this parameter must be configured. For details, see the permission policy syntax and structure.
                     * @param _newCustomPolicyDocument Custom policy content, which contains up to 4096 characters. When RolePolicyType is Inline, this parameter must be configured. For details, see the permission policy syntax and structure.
                     * 
                     */
                    void SetNewCustomPolicyDocument(const std::string& _newCustomPolicyDocument);

                    /**
                     * 判断参数 NewCustomPolicyDocument 是否已赋值
                     * @return NewCustomPolicyDocument 是否已赋值
                     * 
                     */
                    bool NewCustomPolicyDocumentHasBeenSet() const;

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
                     * Permission policy name, which contains up to 32 characters.
                     */
                    std::string m_customPolicyName;
                    bool m_customPolicyNameHasBeenSet;

                    /**
                     * Custom policy content, which contains up to 4096 characters. When RolePolicyType is Inline, this parameter must be configured. For details, see the permission policy syntax and structure.
                     */
                    std::string m_newCustomPolicyDocument;
                    bool m_newCustomPolicyDocumentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATECUSTOMPOLICYFORROLECONFIGURATIONREQUEST_H_
