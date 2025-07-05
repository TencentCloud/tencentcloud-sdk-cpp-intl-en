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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERPROVISIONING_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERPROVISIONING_H_

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
                * User synchronization information.
                */
                class UserProvisioning : public AbstractModel
                {
                public:
                    UserProvisioning();
                    ~UserProvisioning() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CAM user synchronization status. Valid values:

Enabled: CAM user synchronization is enabled.
Disabled: CAM user synchronization is disabled.
                     * @return UserProvisioningId CAM user synchronization status. Valid values:

Enabled: CAM user synchronization is enabled.
Disabled: CAM user synchronization is disabled.
                     * 
                     */
                    std::string GetUserProvisioningId() const;

                    /**
                     * 设置CAM user synchronization status. Valid values:

Enabled: CAM user synchronization is enabled.
Disabled: CAM user synchronization is disabled.
                     * @param _userProvisioningId CAM user synchronization status. Valid values:

Enabled: CAM user synchronization is enabled.
Disabled: CAM user synchronization is disabled.
                     * 
                     */
                    void SetUserProvisioningId(const std::string& _userProvisioningId);

                    /**
                     * 判断参数 UserProvisioningId 是否已赋值
                     * @return UserProvisioningId 是否已赋值
                     * 
                     */
                    bool UserProvisioningIdHasBeenSet() const;

                    /**
                     * 获取Description.
                     * @return Description Description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.
                     * @param _description Description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取CAM user synchronization status. Valid values:

Enabled: CAM user synchronization is enabled.
Disabled: CAM user synchronization is disabled.
                     * @return Status CAM user synchronization status. Valid values:

Enabled: CAM user synchronization is enabled.
Disabled: CAM user synchronization is disabled.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置CAM user synchronization status. Valid values:

Enabled: CAM user synchronization is enabled.
Disabled: CAM user synchronization is disabled.
                     * @param _status CAM user synchronization status. Valid values:

Enabled: CAM user synchronization is enabled.
Disabled: CAM user synchronization is disabled.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Identity ID for the CAM user synchronization. Valid values:
When the PrincipalType value is Group, it is the CIC user group ID (g-********).
When the PrincipalType value is User, it is the CIC user ID (u-********).
                     * @return PrincipalId Identity ID for the CAM user synchronization. Valid values:
When the PrincipalType value is Group, it is the CIC user group ID (g-********).
When the PrincipalType value is User, it is the CIC user ID (u-********).
                     * 
                     */
                    std::string GetPrincipalId() const;

                    /**
                     * 设置Identity ID for the CAM user synchronization. Valid values:
When the PrincipalType value is Group, it is the CIC user group ID (g-********).
When the PrincipalType value is User, it is the CIC user ID (u-********).
                     * @param _principalId Identity ID for the CAM user synchronization. Valid values:
When the PrincipalType value is Group, it is the CIC user group ID (g-********).
When the PrincipalType value is User, it is the CIC user ID (u-********).
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
                     * 获取Identity name for the CAM user synchronization. Valid values:When the PrincipalType value is Group, it is the CIC user group name.
When the PrincipalType value is User, it is the CIC user name.
                     * @return PrincipalName Identity name for the CAM user synchronization. Valid values:When the PrincipalType value is Group, it is the CIC user group name.
When the PrincipalType value is User, it is the CIC user name.
                     * 
                     */
                    std::string GetPrincipalName() const;

                    /**
                     * 设置Identity name for the CAM user synchronization. Valid values:When the PrincipalType value is Group, it is the CIC user group name.
When the PrincipalType value is User, it is the CIC user name.
                     * @param _principalName Identity name for the CAM user synchronization. Valid values:When the PrincipalType value is Group, it is the CIC user group name.
When the PrincipalType value is User, it is the CIC user name.
                     * 
                     */
                    void SetPrincipalName(const std::string& _principalName);

                    /**
                     * 判断参数 PrincipalName 是否已赋值
                     * @return PrincipalName 是否已赋值
                     * 
                     */
                    bool PrincipalNameHasBeenSet() const;

                    /**
                     * 获取Identity type for the CAM user synchronization. Valid values:

User: indicates that the identity for the CAM user synchronization is a CIC user.
Group: indicates that the identity for the CAM user synchronization is a CIC user group.
                     * @return PrincipalType Identity type for the CAM user synchronization. Valid values:

User: indicates that the identity for the CAM user synchronization is a CIC user.
Group: indicates that the identity for the CAM user synchronization is a CIC user group.
                     * 
                     */
                    std::string GetPrincipalType() const;

                    /**
                     * 设置Identity type for the CAM user synchronization. Valid values:

User: indicates that the identity for the CAM user synchronization is a CIC user.
Group: indicates that the identity for the CAM user synchronization is a CIC user group.
                     * @param _principalType Identity type for the CAM user synchronization. Valid values:

User: indicates that the identity for the CAM user synchronization is a CIC user.
Group: indicates that the identity for the CAM user synchronization is a CIC user group.
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
                     * 获取Conflict policy. It indicates the handling policy for existence of a user with the same username when CIC users are synchronized to CAM. Valid values: KeepBoth: Keep both, that is, add the _cic suffix to the CIC user's username and then try to create a CAM user with the username when CIC users are synchronized to CAM and a user with the same username already exists in CAM; TakeOver: Replace, that is, directly replace the existing CAM user with the synchronized CIC user when CIC users are synchronized to CAM and a user with the same username already exists in CAM.
                     * @return DuplicationStrategy Conflict policy. It indicates the handling policy for existence of a user with the same username when CIC users are synchronized to CAM. Valid values: KeepBoth: Keep both, that is, add the _cic suffix to the CIC user's username and then try to create a CAM user with the username when CIC users are synchronized to CAM and a user with the same username already exists in CAM; TakeOver: Replace, that is, directly replace the existing CAM user with the synchronized CIC user when CIC users are synchronized to CAM and a user with the same username already exists in CAM.
                     * 
                     */
                    std::string GetDuplicationStrategy() const;

                    /**
                     * 设置Conflict policy. It indicates the handling policy for existence of a user with the same username when CIC users are synchronized to CAM. Valid values: KeepBoth: Keep both, that is, add the _cic suffix to the CIC user's username and then try to create a CAM user with the username when CIC users are synchronized to CAM and a user with the same username already exists in CAM; TakeOver: Replace, that is, directly replace the existing CAM user with the synchronized CIC user when CIC users are synchronized to CAM and a user with the same username already exists in CAM.
                     * @param _duplicationStrategy Conflict policy. It indicates the handling policy for existence of a user with the same username when CIC users are synchronized to CAM. Valid values: KeepBoth: Keep both, that is, add the _cic suffix to the CIC user's username and then try to create a CAM user with the username when CIC users are synchronized to CAM and a user with the same username already exists in CAM; TakeOver: Replace, that is, directly replace the existing CAM user with the synchronized CIC user when CIC users are synchronized to CAM and a user with the same username already exists in CAM.
                     * 
                     */
                    void SetDuplicationStrategy(const std::string& _duplicationStrategy);

                    /**
                     * 判断参数 DuplicationStrategy 是否已赋值
                     * @return DuplicationStrategy 是否已赋值
                     * 
                     */
                    bool DuplicationStrategyHasBeenSet() const;

                    /**
                     * 获取Deletion policy. It indicates the handling policy for CAM users already synchronized when the CAM user synchronization is deleted. Valid values: Delete: Delete the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted; Keep: Keep the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted.
                     * @return DeletionStrategy Deletion policy. It indicates the handling policy for CAM users already synchronized when the CAM user synchronization is deleted. Valid values: Delete: Delete the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted; Keep: Keep the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted.
                     * 
                     */
                    std::string GetDeletionStrategy() const;

                    /**
                     * 设置Deletion policy. It indicates the handling policy for CAM users already synchronized when the CAM user synchronization is deleted. Valid values: Delete: Delete the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted; Keep: Keep the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted.
                     * @param _deletionStrategy Deletion policy. It indicates the handling policy for CAM users already synchronized when the CAM user synchronization is deleted. Valid values: Delete: Delete the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted; Keep: Keep the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted.
                     * 
                     */
                    void SetDeletionStrategy(const std::string& _deletionStrategy);

                    /**
                     * 判断参数 DeletionStrategy 是否已赋值
                     * @return DeletionStrategy 是否已赋值
                     * 
                     */
                    bool DeletionStrategyHasBeenSet() const;

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
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
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
                     * CAM user synchronization status. Valid values:

Enabled: CAM user synchronization is enabled.
Disabled: CAM user synchronization is disabled.
                     */
                    std::string m_userProvisioningId;
                    bool m_userProvisioningIdHasBeenSet;

                    /**
                     * Description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * CAM user synchronization status. Valid values:

Enabled: CAM user synchronization is enabled.
Disabled: CAM user synchronization is disabled.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Identity ID for the CAM user synchronization. Valid values:
When the PrincipalType value is Group, it is the CIC user group ID (g-********).
When the PrincipalType value is User, it is the CIC user ID (u-********).
                     */
                    std::string m_principalId;
                    bool m_principalIdHasBeenSet;

                    /**
                     * Identity name for the CAM user synchronization. Valid values:When the PrincipalType value is Group, it is the CIC user group name.
When the PrincipalType value is User, it is the CIC user name.
                     */
                    std::string m_principalName;
                    bool m_principalNameHasBeenSet;

                    /**
                     * Identity type for the CAM user synchronization. Valid values:

User: indicates that the identity for the CAM user synchronization is a CIC user.
Group: indicates that the identity for the CAM user synchronization is a CIC user group.
                     */
                    std::string m_principalType;
                    bool m_principalTypeHasBeenSet;

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
                     * Conflict policy. It indicates the handling policy for existence of a user with the same username when CIC users are synchronized to CAM. Valid values: KeepBoth: Keep both, that is, add the _cic suffix to the CIC user's username and then try to create a CAM user with the username when CIC users are synchronized to CAM and a user with the same username already exists in CAM; TakeOver: Replace, that is, directly replace the existing CAM user with the synchronized CIC user when CIC users are synchronized to CAM and a user with the same username already exists in CAM.
                     */
                    std::string m_duplicationStrategy;
                    bool m_duplicationStrategyHasBeenSet;

                    /**
                     * Deletion policy. It indicates the handling policy for CAM users already synchronized when the CAM user synchronization is deleted. Valid values: Delete: Delete the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted; Keep: Keep the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted.
                     */
                    std::string m_deletionStrategy;
                    bool m_deletionStrategyHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time.
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

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERPROVISIONING_H_
