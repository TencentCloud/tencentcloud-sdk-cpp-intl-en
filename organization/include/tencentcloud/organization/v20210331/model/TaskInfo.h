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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_TASKINFO_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_TASKINFO_H_

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
                * Task status information.
                */
                class TaskInfo : public AbstractModel
                {
                public:
                    TaskInfo();
                    ~TaskInfo() = default;
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
                     * 获取UIN of the authorized target member account.
                     * @return TargetUin UIN of the authorized target member account.
                     * 
                     */
                    int64_t GetTargetUin() const;

                    /**
                     * 设置UIN of the authorized target member account.
                     * @param _targetUin UIN of the authorized target member account.
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
                     * 获取Type of the synchronized target account. ManagerUin: admin account; MemberUin: member account.
                     * @return TargetType Type of the synchronized target account. ManagerUin: admin account; MemberUin: member account.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Type of the synchronized target account. ManagerUin: admin account; MemberUin: member account.
                     * @param _targetType Type of the synchronized target account. ManagerUin: admin account; MemberUin: member account.
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
                     * 获取Identity ID for the user authorization. If the identity type is CIC user, it is the user ID; if the identity type is user group, it is the user group ID.
                     * @return PrincipalId Identity ID for the user authorization. If the identity type is CIC user, it is the user ID; if the identity type is user group, it is the user group ID.
                     * 
                     */
                    std::string GetPrincipalId() const;

                    /**
                     * 设置Identity ID for the user authorization. If the identity type is CIC user, it is the user ID; if the identity type is user group, it is the user group ID.
                     * @param _principalId Identity ID for the user authorization. If the identity type is CIC user, it is the user ID; if the identity type is user group, it is the user group ID.
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
                     * 获取Identity type for the user authorization. User: CIC user; Group: CIC user group.
                     * @return PrincipalType Identity type for the user authorization. User: CIC user; Group: CIC user group.
                     * 
                     */
                    std::string GetPrincipalType() const;

                    /**
                     * 设置Identity type for the user authorization. User: CIC user; Group: CIC user group.
                     * @param _principalType Identity type for the user authorization. User: CIC user; Group: CIC user group.
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
                     * 获取Task type.
                     * @return TaskType Task type.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type.
                     * @param _taskType Task type.
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
                     * 获取InProgress: The task is being executed; Success: The task execution succeeded; Failed: The task execution failed.
                     * @return Status InProgress: The task is being executed; Success: The task execution succeeded; Failed: The task execution failed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置InProgress: The task is being executed; Success: The task execution succeeded; Failed: The task execution failed.
                     * @param _status InProgress: The task is being executed; Success: The task execution succeeded; Failed: The task execution failed.
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
                     * 获取Cause of the failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailureReason Cause of the failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 设置Cause of the failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _failureReason Cause of the failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFailureReason(const std::string& _failureReason);

                    /**
                     * 判断参数 FailureReason 是否已赋值
                     * @return FailureReason 是否已赋值
                     * 
                     */
                    bool FailureReasonHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

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
                     * UIN of the authorized target member account.
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * Type of the synchronized target account. ManagerUin: admin account; MemberUin: member account.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Identity ID for the user authorization. If the identity type is CIC user, it is the user ID; if the identity type is user group, it is the user group ID.
                     */
                    std::string m_principalId;
                    bool m_principalIdHasBeenSet;

                    /**
                     * Identity type for the user authorization. User: CIC user; Group: CIC user group.
                     */
                    std::string m_principalType;
                    bool m_principalTypeHasBeenSet;

                    /**
                     * Task type.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * InProgress: The task is being executed; Success: The task execution succeeded; Failed: The task execution failed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Cause of the failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_TASKINFO_H_
