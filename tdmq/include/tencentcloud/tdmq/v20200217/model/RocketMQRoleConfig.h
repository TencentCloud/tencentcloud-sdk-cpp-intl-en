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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQROLECONFIG_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQROLECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * RocketMQ role configuration information.
                */
                class RocketMQRoleConfig : public AbstractModel
                {
                public:
                    RocketMQRoleConfig();
                    ~RocketMQRoleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Role name, corresponding to the secret key.
                     * @return RoleName Role name, corresponding to the secret key.
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name, corresponding to the secret key.
                     * @param _roleName Role name, corresponding to the secret key.
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
                     * 获取accessKey
                     * @return RoleToken accessKey
                     * 
                     */
                    std::string GetRoleToken() const;

                    /**
                     * 设置accessKey
                     * @param _roleToken accessKey
                     * 
                     */
                    void SetRoleToken(const std::string& _roleToken);

                    /**
                     * 判断参数 RoleToken 是否已赋值
                     * @return RoleToken 是否已赋值
                     * 
                     */
                    bool RoleTokenHasBeenSet() const;

                    /**
                     * 获取Namespace
                     * @return EnvironmentId Namespace
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Namespace
                     * @param _environmentId Namespace
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
                     * 获取Role permission
                     * @return Permissions Role permission
                     * 
                     */
                    std::vector<std::string> GetPermissions() const;

                    /**
                     * 设置Role permission
                     * @param _permissions Role permission
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
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
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
                     * 获取Permission type. Permissions are granted by cluster by default. Cluster: cluster level; TopicAndGroup: topic/consumer group level.
                     * @return PermType Permission type. Permissions are granted by cluster by default. Cluster: cluster level; TopicAndGroup: topic/consumer group level.
                     * 
                     */
                    std::string GetPermType() const;

                    /**
                     * 设置Permission type. Permissions are granted by cluster by default. Cluster: cluster level; TopicAndGroup: topic/consumer group level.
                     * @param _permType Permission type. Permissions are granted by cluster by default. Cluster: cluster level; TopicAndGroup: topic/consumer group level.
                     * 
                     */
                    void SetPermType(const std::string& _permType);

                    /**
                     * 判断参数 PermType 是否已赋值
                     * @return PermType 是否已赋值
                     * 
                     */
                    bool PermTypeHasBeenSet() const;

                    /**
                     * 获取Permission configuration in the topic and group dimensions.
                     * @return DetailedRolePerms Permission configuration in the topic and group dimensions.
                     * 
                     */
                    std::vector<DetailedRolePerm> GetDetailedRolePerms() const;

                    /**
                     * 设置Permission configuration in the topic and group dimensions.
                     * @param _detailedRolePerms Permission configuration in the topic and group dimensions.
                     * 
                     */
                    void SetDetailedRolePerms(const std::vector<DetailedRolePerm>& _detailedRolePerms);

                    /**
                     * 判断参数 DetailedRolePerms 是否已赋值
                     * @return DetailedRolePerms 是否已赋值
                     * 
                     */
                    bool DetailedRolePermsHasBeenSet() const;

                private:

                    /**
                     * Role name, corresponding to the secret key.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * accessKey
                     */
                    std::string m_roleToken;
                    bool m_roleTokenHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Role permission
                     */
                    std::vector<std::string> m_permissions;
                    bool m_permissionsHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Permission type. Permissions are granted by cluster by default. Cluster: cluster level; TopicAndGroup: topic/consumer group level.
                     */
                    std::string m_permType;
                    bool m_permTypeHasBeenSet;

                    /**
                     * Permission configuration in the topic and group dimensions.
                     */
                    std::vector<DetailedRolePerm> m_detailedRolePerms;
                    bool m_detailedRolePermsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQROLECONFIG_H_
