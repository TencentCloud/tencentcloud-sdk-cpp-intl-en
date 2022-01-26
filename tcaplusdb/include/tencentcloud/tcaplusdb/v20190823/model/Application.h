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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLICATION_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * Cluster operation application
                */
                class Application : public AbstractModel
                {
                public:
                    Application();
                    ~Application() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application ID
                     * @return ApplicationId Application ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
                     * @param ApplicationId Application ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Application type
                     * @return ApplicationType Application type
                     */
                    int64_t GetApplicationType() const;

                    /**
                     * 设置Application type
                     * @param ApplicationType Application type
                     */
                    void SetApplicationType(const int64_t& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param ClusterName Cluster name
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Table group name
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return TableGroupName Table group name
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetTableGroupName() const;

                    /**
                     * 设置Table group name
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param TableGroupName Table group name
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetTableGroupName(const std::string& _tableGroupName);

                    /**
                     * 判断参数 TableGroupName 是否已赋值
                     * @return TableGroupName 是否已赋值
                     */
                    bool TableGroupNameHasBeenSet() const;

                    /**
                     * 获取Table name
                     * @return TableName Table name
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
                     * @param TableName Table name
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Applicant
                     * @return Applicant Applicant
                     */
                    std::string GetApplicant() const;

                    /**
                     * 设置Applicant
                     * @param Applicant Applicant
                     */
                    void SetApplicant(const std::string& _applicant);

                    /**
                     * 判断参数 Applicant 是否已赋值
                     * @return Applicant 是否已赋值
                     */
                    bool ApplicantHasBeenSet() const;

                    /**
                     * 获取The creation time of the application
                     * @return CreatedTime The creation time of the application
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置The creation time of the application
                     * @param CreatedTime The creation time of the application
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Status. Valid values: `-1` (canceled), `0` (pending approval), `1` (application approved and task submitted), `2` (rejected)
                     * @return ApplicationStatus Status. Valid values: `-1` (canceled), `0` (pending approval), `1` (application approved and task submitted), `2` (rejected)
                     */
                    int64_t GetApplicationStatus() const;

                    /**
                     * 设置Status. Valid values: `-1` (canceled), `0` (pending approval), `1` (application approved and task submitted), `2` (rejected)
                     * @param ApplicationStatus Status. Valid values: `-1` (canceled), `0` (pending approval), `1` (application approved and task submitted), `2` (rejected)
                     */
                    void SetApplicationStatus(const int64_t& _applicationStatus);

                    /**
                     * 判断参数 ApplicationStatus 是否已赋值
                     * @return ApplicationStatus 是否已赋值
                     */
                    bool ApplicationStatusHasBeenSet() const;

                    /**
                     * 获取Table group ID
                     * @return TableGroupId Table group ID
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置Table group ID
                     * @param TableGroupId Table group ID
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取ID of the submitted task (if the application is not approved, this parameter is `0`)
                     * @return TaskId ID of the submitted task (if the application is not approved, this parameter is `0`)
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置ID of the submitted task (if the application is not approved, this parameter is `0`)
                     * @param TaskId ID of the submitted task (if the application is not approved, this parameter is `0`)
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Globally unique table ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return TableInstanceId Globally unique table ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetTableInstanceId() const;

                    /**
                     * 设置Globally unique table ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param TableInstanceId Globally unique table ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetTableInstanceId(const std::string& _tableInstanceId);

                    /**
                     * 判断参数 TableInstanceId 是否已赋值
                     * @return TableInstanceId 是否已赋值
                     */
                    bool TableInstanceIdHasBeenSet() const;

                    /**
                     * 获取Update time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param UpdateTime Update time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Approver
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return ExecuteUser Approver
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetExecuteUser() const;

                    /**
                     * 设置Approver
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param ExecuteUser Approver
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetExecuteUser(const std::string& _executeUser);

                    /**
                     * 判断参数 ExecuteUser 是否已赋值
                     * @return ExecuteUser 是否已赋值
                     */
                    bool ExecuteUserHasBeenSet() const;

                    /**
                     * 获取Execution status
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return ExecuteStatus Execution status
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetExecuteStatus() const;

                    /**
                     * 设置Execution status
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param ExecuteStatus Execution status
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetExecuteStatus(const std::string& _executeStatus);

                    /**
                     * 判断参数 ExecuteStatus 是否已赋值
                     * @return ExecuteStatus 是否已赋值
                     */
                    bool ExecuteStatusHasBeenSet() const;

                    /**
                     * 获取Whether the application can be approved by the API caller
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return CanCensor Whether the application can be approved by the API caller
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    bool GetCanCensor() const;

                    /**
                     * 设置Whether the application can be approved by the API caller
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param CanCensor Whether the application can be approved by the API caller
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetCanCensor(const bool& _canCensor);

                    /**
                     * 判断参数 CanCensor 是否已赋值
                     * @return CanCensor 是否已赋值
                     */
                    bool CanCensorHasBeenSet() const;

                    /**
                     * 获取Whether the application can be canceled by the API caller
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return CanWithdrawal Whether the application can be canceled by the API caller
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    bool GetCanWithdrawal() const;

                    /**
                     * 设置Whether the application can be canceled by the API caller
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param CanWithdrawal Whether the application can be canceled by the API caller
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetCanWithdrawal(const bool& _canWithdrawal);

                    /**
                     * 判断参数 CanWithdrawal 是否已赋值
                     * @return CanWithdrawal 是否已赋值
                     */
                    bool CanWithdrawalHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application type
                     */
                    int64_t m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Table group name
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_tableGroupName;
                    bool m_tableGroupNameHasBeenSet;

                    /**
                     * Table name
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Applicant
                     */
                    std::string m_applicant;
                    bool m_applicantHasBeenSet;

                    /**
                     * The creation time of the application
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Status. Valid values: `-1` (canceled), `0` (pending approval), `1` (application approved and task submitted), `2` (rejected)
                     */
                    int64_t m_applicationStatus;
                    bool m_applicationStatusHasBeenSet;

                    /**
                     * Table group ID
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * ID of the submitted task (if the application is not approved, this parameter is `0`)
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Globally unique table ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_tableInstanceId;
                    bool m_tableInstanceIdHasBeenSet;

                    /**
                     * Update time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Approver
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_executeUser;
                    bool m_executeUserHasBeenSet;

                    /**
                     * Execution status
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_executeStatus;
                    bool m_executeStatusHasBeenSet;

                    /**
                     * Whether the application can be approved by the API caller
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    bool m_canCensor;
                    bool m_canCensorHasBeenSet;

                    /**
                     * Whether the application can be canceled by the API caller
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    bool m_canWithdrawal;
                    bool m_canWithdrawalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLICATION_H_
