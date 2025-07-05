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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERSYNCPROVISIONING_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERSYNCPROVISIONING_H_

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
                * CAM user synchronization information.
                */
                class UserSyncProvisioning : public AbstractModel
                {
                public:
                    UserSyncProvisioning();
                    ~UserSyncProvisioning() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取UIN of the synchronized target account of the Tencent Cloud Organization.
                     * @return TargetUin UIN of the synchronized target account of the Tencent Cloud Organization.
                     * 
                     */
                    int64_t GetTargetUin() const;

                    /**
                     * 设置UIN of the synchronized target account of the Tencent Cloud Organization.
                     * @param _targetUin UIN of the synchronized target account of the Tencent Cloud Organization.
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
                     * Description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Identity ID for the CAM user synchronization. Valid values:
When the PrincipalType value is Group, it is the CIC user group ID (g-********).
When the PrincipalType value is User, it is the CIC user ID (u-********).
                     */
                    std::string m_principalId;
                    bool m_principalIdHasBeenSet;

                    /**
                     * Identity type for the CAM user synchronization. Valid values:

User: indicates that the identity for the CAM user synchronization is a CIC user.
Group: indicates that the identity for the CAM user synchronization is a CIC user group.
                     */
                    std::string m_principalType;
                    bool m_principalTypeHasBeenSet;

                    /**
                     * UIN of the synchronized target account of the Tencent Cloud Organization.
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

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
                     * Type of the synchronized target account of the Tencent Cloud Organization. ManagerUin: admin account; MemberUin: member account.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERSYNCPROVISIONING_H_
