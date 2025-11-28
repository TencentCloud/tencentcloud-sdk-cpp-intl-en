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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROLEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROLEREQUEST_H_

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
                * ModifyRole request structure.
                */
                class ModifyRoleRequest : public AbstractModel
                {
                public:
                    ModifyRoleRequest();
                    ~ModifyRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Role name, which can contain up to 32 letters, digits, hyphens, and underscores.
                     * @return RoleName Role name, which can contain up to 32 letters, digits, hyphens, and underscores.
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name, which can contain up to 32 letters, digits, hyphens, and underscores.
                     * @param _roleName Role name, which can contain up to 32 letters, digits, hyphens, and underscores.
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
                     * 获取Cluster ID (required)
                     * @return ClusterId Cluster ID (required)
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID (required)
                     * @param _clusterId Cluster ID (required)
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Remarks (up to 128 characters).
                     * @return Remark Remarks (up to 128 characters).
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks (up to 128 characters).
                     * @param _remark Remarks (up to 128 characters).
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Batch binds namespace information.
                     * @return EnvironmentRoleSets Batch binds namespace information.
                     * 
                     */
                    std::vector<EnvironmentRoleSet> GetEnvironmentRoleSets() const;

                    /**
                     * 设置Batch binds namespace information.
                     * @param _environmentRoleSets Batch binds namespace information.
                     * 
                     */
                    void SetEnvironmentRoleSets(const std::vector<EnvironmentRoleSet>& _environmentRoleSets);

                    /**
                     * 判断参数 EnvironmentRoleSets 是否已赋值
                     * @return EnvironmentRoleSets 是否已赋值
                     * 
                     */
                    bool EnvironmentRoleSetsHasBeenSet() const;

                    /**
                     * 获取Unbinds all namespaces. set to true.
                     * @return UnbindAllEnvironment Unbinds all namespaces. set to true.
                     * 
                     */
                    bool GetUnbindAllEnvironment() const;

                    /**
                     * 设置Unbinds all namespaces. set to true.
                     * @param _unbindAllEnvironment Unbinds all namespaces. set to true.
                     * 
                     */
                    void SetUnbindAllEnvironment(const bool& _unbindAllEnvironment);

                    /**
                     * 判断参数 UnbindAllEnvironment 是否已赋值
                     * @return UnbindAllEnvironment 是否已赋值
                     * 
                     */
                    bool UnbindAllEnvironmentHasBeenSet() const;

                private:

                    /**
                     * Role name, which can contain up to 32 letters, digits, hyphens, and underscores.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Cluster ID (required)
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Remarks (up to 128 characters).
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Batch binds namespace information.
                     */
                    std::vector<EnvironmentRoleSet> m_environmentRoleSets;
                    bool m_environmentRoleSetsHasBeenSet;

                    /**
                     * Unbinds all namespaces. set to true.
                     */
                    bool m_unbindAllEnvironment;
                    bool m_unbindAllEnvironmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROLEREQUEST_H_
