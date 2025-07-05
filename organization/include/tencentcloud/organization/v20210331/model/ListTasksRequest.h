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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTASKSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTASKSREQUEST_H_

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
                * ListTasks request structure.
                */
                class ListTasksRequest : public AbstractModel
                {
                public:
                    ListTasksRequest();
                    ~ListTasksRequest() = default;
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
                     * 获取User synchronization ID. Valid values: When PrincipalType is Group, it is a user group ID (g-****). When PrincipalType is User, it is a user ID (u-****).
                     * @return PrincipalId User synchronization ID. Valid values: When PrincipalType is Group, it is a user group ID (g-****). When PrincipalType is User, it is a user ID (u-****).
                     * 
                     */
                    std::string GetPrincipalId() const;

                    /**
                     * 设置User synchronization ID. Valid values: When PrincipalType is Group, it is a user group ID (g-****). When PrincipalType is User, it is a user ID (u-****).
                     * @param _principalId User synchronization ID. Valid values: When PrincipalType is Group, it is a user group ID (g-****). When PrincipalType is User, it is a user ID (u-****).
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
                     * 获取Token for querying the next page of returned results. During use of the API for the first time, NextToken is not needed. When you call the API for the first time, if the total number of returned data entries exceeds the MaxResults limit, the data is truncated and only MaxResults data entries are returned. Meanwhile, the return parameter IsTruncated is true and a NextToken is returned. You can use the NextToken returned last time to continue calling the API with other request parameters unchanged, to query the truncated data. You can use this method for multiple queries until IsTruncated is false, indicating that all data has been queried.
                     * @return NextToken Token for querying the next page of returned results. During use of the API for the first time, NextToken is not needed. When you call the API for the first time, if the total number of returned data entries exceeds the MaxResults limit, the data is truncated and only MaxResults data entries are returned. Meanwhile, the return parameter IsTruncated is true and a NextToken is returned. You can use the NextToken returned last time to continue calling the API with other request parameters unchanged, to query the truncated data. You can use this method for multiple queries until IsTruncated is false, indicating that all data has been queried.
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置Token for querying the next page of returned results. During use of the API for the first time, NextToken is not needed. When you call the API for the first time, if the total number of returned data entries exceeds the MaxResults limit, the data is truncated and only MaxResults data entries are returned. Meanwhile, the return parameter IsTruncated is true and a NextToken is returned. You can use the NextToken returned last time to continue calling the API with other request parameters unchanged, to query the truncated data. You can use this method for multiple queries until IsTruncated is false, indicating that all data has been queried.
                     * @param _nextToken Token for querying the next page of returned results. During use of the API for the first time, NextToken is not needed. When you call the API for the first time, if the total number of returned data entries exceeds the MaxResults limit, the data is truncated and only MaxResults data entries are returned. Meanwhile, the return parameter IsTruncated is true and a NextToken is returned. You can use the NextToken returned last time to continue calling the API with other request parameters unchanged, to query the truncated data. You can use this method for multiple queries until IsTruncated is false, indicating that all data has been queried.
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取Maximum number of data entries per page. Value range: 1-100. Default value: 10.
                     * @return MaxResults Maximum number of data entries per page. Value range: 1-100. Default value: 10.
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置Maximum number of data entries per page. Value range: 1-100. Default value: 10.
                     * @param _maxResults Maximum number of data entries per page. Value range: 1-100. Default value: 10.
                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

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

                private:

                    /**
                     * Space ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * User synchronization ID. Valid values: When PrincipalType is Group, it is a user group ID (g-****). When PrincipalType is User, it is a user ID (u-****).
                     */
                    std::string m_principalId;
                    bool m_principalIdHasBeenSet;

                    /**
                     * Token for querying the next page of returned results. During use of the API for the first time, NextToken is not needed. When you call the API for the first time, if the total number of returned data entries exceeds the MaxResults limit, the data is truncated and only MaxResults data entries are returned. Meanwhile, the return parameter IsTruncated is true and a NextToken is returned. You can use the NextToken returned last time to continue calling the API with other request parameters unchanged, to query the truncated data. You can use this method for multiple queries until IsTruncated is false, indicating that all data has been queried.
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * Maximum number of data entries per page. Value range: 1-100. Default value: 10.
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * Identity types synchronized for CAM users. Valid values: User: indicates the synchronized identity is a user. Group: indicates the synchronized identity is a user group.
                     */
                    std::string m_principalType;
                    bool m_principalTypeHasBeenSet;

                    /**
                     * UIN of the synchronized target account of the Tencent Cloud Organization.
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * Type of the synchronized target account of the Tencent Cloud Organization. ManagerUin: admin account; MemberUin: member account.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Permission configuration ID.
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * InProgress: The task is being executed; Success: The task execution succeeded; Failed: The task execution failed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task type.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTASKSREQUEST_H_
