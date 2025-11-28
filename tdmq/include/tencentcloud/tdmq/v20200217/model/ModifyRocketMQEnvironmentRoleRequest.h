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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQENVIRONMENTROLEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQENVIRONMENTROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/DetailedRolePerm.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ModifyRocketMQEnvironmentRole request structure.
                */
                class ModifyRocketMQEnvironmentRoleRequest : public AbstractModel
                {
                public:
                    ModifyRocketMQEnvironmentRoleRequest();
                    ~ModifyRocketMQEnvironmentRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment (namespace) name.
                     * @return EnvironmentId Environment (namespace) name.
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment (namespace) name.
                     * @param _environmentId Environment (namespace) name.
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
                     * 获取Role name.
                     * @return RoleName Role name.
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name.
                     * @param _roleName Role name.
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
                     * 获取Authorization item, which can contain a non-empty character array of up to 2 items including produce and consume.
                     * @return Permissions Authorization item, which can contain a non-empty character array of up to 2 items including produce and consume.
                     * 
                     */
                    std::vector<std::string> GetPermissions() const;

                    /**
                     * 设置Authorization item, which can contain a non-empty character array of up to 2 items including produce and consume.
                     * @param _permissions Authorization item, which can contain a non-empty character array of up to 2 items including produce and consume.
                     * 
                     */
                    void SetPermissions(const std::vector<std::string>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                    /**
                     * 获取Required field, cluster ID
                     * @return ClusterId Required field, cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Required field, cluster ID
                     * @param _clusterId Required field, cluster ID
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
                     * 获取Permission configuration for topic and group dimensions.
                     * @return DetailedPerms Permission configuration for topic and group dimensions.
                     * 
                     */
                    std::vector<DetailedRolePerm> GetDetailedPerms() const;

                    /**
                     * 设置Permission configuration for topic and group dimensions.
                     * @param _detailedPerms Permission configuration for topic and group dimensions.
                     * 
                     */
                    void SetDetailedPerms(const std::vector<DetailedRolePerm>& _detailedPerms);

                    /**
                     * 判断参数 DetailedPerms 是否已赋值
                     * @return DetailedPerms 是否已赋值
                     * 
                     */
                    bool DetailedPermsHasBeenSet() const;

                private:

                    /**
                     * Environment (namespace) name.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Role name.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Authorization item, which can contain a non-empty character array of up to 2 items including produce and consume.
                     */
                    std::vector<std::string> m_permissions;
                    bool m_permissionsHasBeenSet;

                    /**
                     * Required field, cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Permission configuration for topic and group dimensions.
                     */
                    std::vector<DetailedRolePerm> m_detailedPerms;
                    bool m_detailedPermsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQENVIRONMENTROLEREQUEST_H_
