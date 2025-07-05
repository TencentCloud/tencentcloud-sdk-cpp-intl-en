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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLECONFIGURATIONPROVISIONINGS_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLECONFIGURATIONPROVISIONINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Permission configuration synchronization.
                */
                class RoleConfigurationProvisionings : public AbstractModel
                {
                public:
                    RoleConfigurationProvisionings();
                    ~RoleConfigurationProvisionings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Deployed: Deployment succeeded; DeployedRequired: Redeployment required; DeployFailed: Deployment failed.
                     * @return DeploymentStatus Deployed: Deployment succeeded; DeployedRequired: Redeployment required; DeployFailed: Deployment failed.
                     * 
                     */
                    std::string GetDeploymentStatus() const;

                    /**
                     * 设置Deployed: Deployment succeeded; DeployedRequired: Redeployment required; DeployFailed: Deployment failed.
                     * @param _deploymentStatus Deployed: Deployment succeeded; DeployedRequired: Redeployment required; DeployFailed: Deployment failed.
                     * 
                     */
                    void SetDeploymentStatus(const std::string& _deploymentStatus);

                    /**
                     * 判断参数 DeploymentStatus 是否已赋值
                     * @return DeploymentStatus 是否已赋值
                     * 
                     */
                    bool DeploymentStatusHasBeenSet() const;

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
                     * 获取Permission configuration name.
                     * @return RoleConfigurationName Permission configuration name.
                     * 
                     */
                    std::string GetRoleConfigurationName() const;

                    /**
                     * 设置Permission configuration name.
                     * @param _roleConfigurationName Permission configuration name.
                     * 
                     */
                    void SetRoleConfigurationName(const std::string& _roleConfigurationName);

                    /**
                     * 判断参数 RoleConfigurationName 是否已赋值
                     * @return RoleConfigurationName 是否已赋值
                     * 
                     */
                    bool RoleConfigurationNameHasBeenSet() const;

                    /**
                     * 获取UIN of the target account of the Tencent Cloud Organization.
                     * @return TargetUin UIN of the target account of the Tencent Cloud Organization.
                     * 
                     */
                    int64_t GetTargetUin() const;

                    /**
                     * 设置UIN of the target account of the Tencent Cloud Organization.
                     * @param _targetUin UIN of the target account of the Tencent Cloud Organization.
                     * 
                     */
                    void SetTargetUin(const int64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                    /**
                     * 获取Name of the target account of the Tencent Cloud Organization.
                     * @return TargetName Name of the target account of the Tencent Cloud Organization.
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置Name of the target account of the Tencent Cloud Organization.
                     * @param _targetName Name of the target account of the Tencent Cloud Organization.
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Modification time.
                     * @return UpdateTime Modification time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Modification time.
                     * @param _updateTime Modification time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Type of the synchronized target account of the Tencent Cloud Organization. ManagerUin: admin account; MemberUin: member account.
                     * @return TargetType Type of the synchronized target account of the Tencent Cloud Organization. ManagerUin: admin account; MemberUin: member account.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Type of the synchronized target account of the Tencent Cloud Organization. ManagerUin: admin account; MemberUin: member account.
                     * @param _targetType Type of the synchronized target account of the Tencent Cloud Organization. ManagerUin: admin account; MemberUin: member account.
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                private:

                    /**
                     * Deployed: Deployment succeeded; DeployedRequired: Redeployment required; DeployFailed: Deployment failed.
                     */
                    std::string m_deploymentStatus;
                    bool m_deploymentStatusHasBeenSet;

                    /**
                     * Permission configuration ID.
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * Permission configuration name.
                     */
                    std::string m_roleConfigurationName;
                    bool m_roleConfigurationNameHasBeenSet;

                    /**
                     * UIN of the target account of the Tencent Cloud Organization.
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * Name of the target account of the Tencent Cloud Organization.
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Type of the synchronized target account of the Tencent Cloud Organization. ManagerUin: admin account; MemberUin: member account.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLECONFIGURATIONPROVISIONINGS_H_
