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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERPROVISIONINGSTASK_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERPROVISIONINGSTASK_H_

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
                * Status information of the user synchronization task.
                */
                class UserProvisioningsTask : public AbstractModel
                {
                public:
                    UserProvisioningsTask();
                    ~UserProvisioningsTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取UIN of the authorized target account of the Tencent Cloud Organization.
                     * @return TargetUin UIN of the authorized target account of the Tencent Cloud Organization.
                     * 
                     */
                    int64_t GetTargetUin() const;

                    /**
                     * 设置UIN of the authorized target account of the Tencent Cloud Organization.
                     * @param _targetUin UIN of the authorized target account of the Tencent Cloud Organization.
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
                     * 获取Task type. StartProvisioning: Start the user synchronization; DeleteProvisioning: Delete the user synchronization.
                     * @return TaskType Task type. StartProvisioning: Start the user synchronization; DeleteProvisioning: Delete the user synchronization.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type. StartProvisioning: Start the user synchronization; DeleteProvisioning: Delete the user synchronization.
                     * @param _taskType Task type. StartProvisioning: Start the user synchronization; DeleteProvisioning: Delete the user synchronization.
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Task status. InProgress: The task is in progress; Failed: The task failed; Success: The task succeeded.
                     * @return TaskStatus Task status. InProgress: The task is in progress; Failed: The task failed; Success: The task succeeded.
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置Task status. InProgress: The task is in progress; Failed: The task failed; Success: The task succeeded.
                     * @param _taskStatus Task status. InProgress: The task is in progress; Failed: The task failed; Success: The task succeeded.
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取User synchronization ID.
                     * @return UserProvisioningId User synchronization ID.
                     * 
                     */
                    std::string GetUserProvisioningId() const;

                    /**
                     * 设置User synchronization ID.
                     * @param _userProvisioningId User synchronization ID.
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
                     * 获取Identity ID for the CAM user synchronization. Valid values: When the PrincipalType value is Group, it is the CIC user group ID (g-********). When the PrincipalType value is User, it is the CIC user ID (u-********).
                     * @return PrincipalId Identity ID for the CAM user synchronization. Valid values: When the PrincipalType value is Group, it is the CIC user group ID (g-********). When the PrincipalType value is User, it is the CIC user ID (u-********).
                     * 
                     */
                    std::string GetPrincipalId() const;

                    /**
                     * 设置Identity ID for the CAM user synchronization. Valid values: When the PrincipalType value is Group, it is the CIC user group ID (g-********). When the PrincipalType value is User, it is the CIC user ID (u-********).
                     * @param _principalId Identity ID for the CAM user synchronization. Valid values: When the PrincipalType value is Group, it is the CIC user group ID (g-********). When the PrincipalType value is User, it is the CIC user ID (u-********).
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
                     * 获取Identity type for the CAM user synchronization. Valid values: User: indicates that the identity for the CAM user synchronization is a CIC user; Group: indicates that the identity for the CAM user synchronization is a CIC user group.
                     * @return PrincipalType Identity type for the CAM user synchronization. Valid values: User: indicates that the identity for the CAM user synchronization is a CIC user; Group: indicates that the identity for the CAM user synchronization is a CIC user group.
                     * 
                     */
                    std::string GetPrincipalType() const;

                    /**
                     * 设置Identity type for the CAM user synchronization. Valid values: User: indicates that the identity for the CAM user synchronization is a CIC user; Group: indicates that the identity for the CAM user synchronization is a CIC user group.
                     * @param _principalType Identity type for the CAM user synchronization. Valid values: User: indicates that the identity for the CAM user synchronization is a CIC user; Group: indicates that the identity for the CAM user synchronization is a CIC user group.
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
                     * 获取User name or user group name.
                     * @return PrincipalName User name or user group name.
                     * 
                     */
                    std::string GetPrincipalName() const;

                    /**
                     * 设置User name or user group name.
                     * @param _principalName User name or user group name.
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
                     * 获取Conflict policy. KeepBoth: Keep both; TakeOver: Replace.
                     * @return DuplicationStrategy Conflict policy. KeepBoth: Keep both; TakeOver: Replace.
                     * 
                     */
                    std::string GetDuplicationStrategy() const;

                    /**
                     * 设置Conflict policy. KeepBoth: Keep both; TakeOver: Replace.
                     * @param _duplicationStrategy Conflict policy. KeepBoth: Keep both; TakeOver: Replace.
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
                     * 获取Deletion policy: Delete, Keep.
                     * @return DeletionStrategy Deletion policy: Delete, Keep.
                     * 
                     */
                    std::string GetDeletionStrategy() const;

                    /**
                     * 设置Deletion policy: Delete, Keep.
                     * @param _deletionStrategy Deletion policy: Delete, Keep.
                     * 
                     */
                    void SetDeletionStrategy(const std::string& _deletionStrategy);

                    /**
                     * 判断参数 DeletionStrategy 是否已赋值
                     * @return DeletionStrategy 是否已赋值
                     * 
                     */
                    bool DeletionStrategyHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * UIN of the authorized target account of the Tencent Cloud Organization.
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * Type of the synchronized target account of the Tencent Cloud Organization. ManagerUin: admin account; MemberUin: member account.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Task type. StartProvisioning: Start the user synchronization; DeleteProvisioning: Delete the user synchronization.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task status. InProgress: The task is in progress; Failed: The task failed; Success: The task succeeded.
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * User synchronization ID.
                     */
                    std::string m_userProvisioningId;
                    bool m_userProvisioningIdHasBeenSet;

                    /**
                     * Identity ID for the CAM user synchronization. Valid values: When the PrincipalType value is Group, it is the CIC user group ID (g-********). When the PrincipalType value is User, it is the CIC user ID (u-********).
                     */
                    std::string m_principalId;
                    bool m_principalIdHasBeenSet;

                    /**
                     * Identity type for the CAM user synchronization. Valid values: User: indicates that the identity for the CAM user synchronization is a CIC user; Group: indicates that the identity for the CAM user synchronization is a CIC user group.
                     */
                    std::string m_principalType;
                    bool m_principalTypeHasBeenSet;

                    /**
                     * User name or user group name.
                     */
                    std::string m_principalName;
                    bool m_principalNameHasBeenSet;

                    /**
                     * Conflict policy. KeepBoth: Keep both; TakeOver: Replace.
                     */
                    std::string m_duplicationStrategy;
                    bool m_duplicationStrategyHasBeenSet;

                    /**
                     * Deletion policy: Delete, Keep.
                     */
                    std::string m_deletionStrategy;
                    bool m_deletionStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERPROVISIONINGSTASK_H_
