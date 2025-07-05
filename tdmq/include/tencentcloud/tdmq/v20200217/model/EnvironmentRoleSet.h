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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ENVIRONMENTROLESET_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ENVIRONMENTROLESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Relationship between the namespaces that are bound in batches and role permissions
                */
                class EnvironmentRoleSet : public AbstractModel
                {
                public:
                    EnvironmentRoleSet();
                    ~EnvironmentRoleSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The IDs of the bound namespaces cannot be delicate and the namespaces must contain resources
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return EnvironmentId The IDs of the bound namespaces cannot be delicate and the namespaces must contain resources
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置The IDs of the bound namespaces cannot be delicate and the namespaces must contain resources
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _environmentId The IDs of the bound namespaces cannot be delicate and the namespaces must contain resources
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Permissions to be bound to a namespace. Enumerated values: `consume`, `produce`, and `consume, produce`. This parameter cannot be left empty.

Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return Permissions Permissions to be bound to a namespace. Enumerated values: `consume`, `produce`, and `consume, produce`. This parameter cannot be left empty.

Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPermissions() const;

                    /**
                     * 设置Permissions to be bound to a namespace. Enumerated values: `consume`, `produce`, and `consume, produce`. This parameter cannot be left empty.

Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _permissions Permissions to be bound to a namespace. Enumerated values: `consume`, `produce`, and `consume, produce`. This parameter cannot be left empty.

Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPermissions(const std::vector<std::string>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                private:

                    /**
                     * The IDs of the bound namespaces cannot be delicate and the namespaces must contain resources
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Permissions to be bound to a namespace. Enumerated values: `consume`, `produce`, and `consume, produce`. This parameter cannot be left empty.

Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_permissions;
                    bool m_permissionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ENVIRONMENTROLESET_H_
