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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEROLEASSIGNMENTREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEROLEASSIGNMENTREQUEST_H_

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
                * DeleteRoleAssignment request structure.
                */
                class DeleteRoleAssignmentRequest : public AbstractModel
                {
                public:
                    DeleteRoleAssignmentRequest();
                    ~DeleteRoleAssignmentRequest() = default;
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
                     * 获取Identity types synchronized for CAM users. Valid values: User: indicates the synchronized identity is a user. Group: indicates the synchronized identity is a user group.
                     * @return PrincipalType Identity types synchronized for CAM users. Valid values: User: indicates the synchronized identity is a user. Group: indicates the synchronized identity is a user group.
                     * 
                     */
                    std::string GetPrincipalType() const;

                    /**
                     * 设置Identity types synchronized for CAM users. Valid values: User: indicates the synchronized identity is a user. Group: indicates the synchronized identity is a user group.
                     * @param _principalType Identity types synchronized for CAM users. Valid values: User: indicates the synchronized identity is a user. Group: indicates the synchronized identity is a user group.
                     * 
                     */
                    void SetPrincipalType(const std::string& _principalType);

                    /**
                     * 判断参数 PrincipalType 是否已赋值
                     * @return PrincipalType 是否已赋值
                     * 
                     */
                    bool PrincipalTypeHasBeenSet() const;

                    /**
                     * 获取User synchronization ID. Valid values: When PrincipalType is Group, it is a user group ID (g-********). When PrincipalType is User, it is a user ID (u-********).
                     * @return PrincipalId User synchronization ID. Valid values: When PrincipalType is Group, it is a user group ID (g-********). When PrincipalType is User, it is a user ID (u-********).
                     * 
                     */
                    std::string GetPrincipalId() const;

                    /**
                     * 设置User synchronization ID. Valid values: When PrincipalType is Group, it is a user group ID (g-********). When PrincipalType is User, it is a user ID (u-********).
                     * @param _principalId User synchronization ID. Valid values: When PrincipalType is Group, it is a user group ID (g-********). When PrincipalType is User, it is a user ID (u-********).
                     * 
                     */
                    void SetPrincipalId(const std::string& _principalId);

                    /**
                     * 判断参数 PrincipalId 是否已赋值
                     * @return PrincipalId 是否已赋值
                     * 
                     */
                    bool PrincipalIdHasBeenSet() const;

                    /**
                     * 获取Whether to remove the permission configuration deployment when removing the last authorization with a certain permission configuration from a target account in TCO. Valid values: DeprovisionForLastRoleAssignmentOnAccount: Remove the permission configuration deployment. None (default): Do not remove the permission configuration deployment.
                     * @return DeprovisionStrategy Whether to remove the permission configuration deployment when removing the last authorization with a certain permission configuration from a target account in TCO. Valid values: DeprovisionForLastRoleAssignmentOnAccount: Remove the permission configuration deployment. None (default): Do not remove the permission configuration deployment.
                     * 
                     */
                    std::string GetDeprovisionStrategy() const;

                    /**
                     * 设置Whether to remove the permission configuration deployment when removing the last authorization with a certain permission configuration from a target account in TCO. Valid values: DeprovisionForLastRoleAssignmentOnAccount: Remove the permission configuration deployment. None (default): Do not remove the permission configuration deployment.
                     * @param _deprovisionStrategy Whether to remove the permission configuration deployment when removing the last authorization with a certain permission configuration from a target account in TCO. Valid values: DeprovisionForLastRoleAssignmentOnAccount: Remove the permission configuration deployment. None (default): Do not remove the permission configuration deployment.
                     * 
                     */
                    void SetDeprovisionStrategy(const std::string& _deprovisionStrategy);

                    /**
                     * 判断参数 DeprovisionStrategy 是否已赋值
                     * @return DeprovisionStrategy 是否已赋值
                     * 
                     */
                    bool DeprovisionStrategyHasBeenSet() const;

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
                     * Type of the synchronized target account of the Tencent Cloud Organization. ManagerUin: admin account; MemberUin: member account.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * UIN of the target account of the Tencent Cloud Organization.
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * Identity types synchronized for CAM users. Valid values: User: indicates the synchronized identity is a user. Group: indicates the synchronized identity is a user group.
                     */
                    std::string m_principalType;
                    bool m_principalTypeHasBeenSet;

                    /**
                     * User synchronization ID. Valid values: When PrincipalType is Group, it is a user group ID (g-********). When PrincipalType is User, it is a user ID (u-********).
                     */
                    std::string m_principalId;
                    bool m_principalIdHasBeenSet;

                    /**
                     * Whether to remove the permission configuration deployment when removing the last authorization with a certain permission configuration from a target account in TCO. Valid values: DeprovisionForLastRoleAssignmentOnAccount: Remove the permission configuration deployment. None (default): Do not remove the permission configuration deployment.
                     */
                    std::string m_deprovisionStrategy;
                    bool m_deprovisionStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEROLEASSIGNMENTREQUEST_H_
