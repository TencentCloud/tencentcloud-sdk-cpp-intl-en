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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETASKLISTREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeTaskList request structure.
                */
                class DescribeTaskListRequest : public AbstractModel
                {
                public:
                    DescribeTaskListRequest();
                    ~DescribeTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     * @return InstanceId ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     * @param _instanceId ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Number of taskss returned per page.  Default value: `20`. Maximum value: `100`.
                     * @return Limit Number of taskss returned per page.  Default value: `20`. Maximum value: `100`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of taskss returned per page.  Default value: `20`. Maximum value: `100`.
                     * @param _limit Number of taskss returned per page.  Default value: `20`. Maximum value: `100`.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset, which is an integral multiple of `Limit`. Calculation formula:  `offset` = `limit` * (page number - 1).
                     * @return Offset Pagination offset, which is an integral multiple of `Limit`. Calculation formula:  `offset` = `limit` * (page number - 1).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset, which is an integral multiple of `Limit`. Calculation formula:  `offset` = `limit` * (page number - 1).
                     * @param _offset Pagination offset, which is an integral multiple of `Limit`. Calculation formula:  `offset` = `limit` * (page number - 1).
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Project ID Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), go to the account information menu in the top-right corner, and select **Project Management** to query the project ID.
                     * @return ProjectIds Project ID Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), go to the account information menu in the top-right corner, and select **Project Management** to query the project ID.
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置Project ID Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), go to the account information menu in the top-right corner, and select **Project Management** to query the project ID.
                     * @param _projectIds Project ID Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), go to the account information menu in the top-right corner, and select **Project Management** to query the project ID.
                     * 
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Task type. Valid values:  - `FLOW_CREATE`: Create an instance. - `FLOW_MODIFYCONNECTIONCONFIG`: Adjust the number of bandwidth connections. - `FLOW_MODIFYINSTANCEPASSWORDFREE`: Modify the process of password-free access. - `FLOW_CLEARNETWORK`: Returning VPC - `FLOW_SETPWD`: Set the access password. - `FLOW_EXPORSHR`: Expand or reduce the capacity. - `FLOW_UpgradeArch`: Upgrade the instance architecture. - `FLOW_MODIFYINSTANCEPARAMS`: Modify the instance parameters. - `FLOW_MODIFYINSTACEREADONLY`: Modify read-only process. - `FLOW_CLOSE`: Disable the instance. - `FLOW_DELETE`: Delete the instance. - `FLOW_OPEN_WAN`: Enable the public network. - `FLOW_FLOW_CLEAN`: Clear the instance. - `FLOW_MODIFYINSTANCEACCOUNT`: Modify the instance account. - `FLOW_ENABLEINSTANCE_REPLICATE`: Enable the replica read-only feature. - `FLOW_DISABLEINSTANCE_REPLICATE`: Disable the replica read-only feature. - `FLOW_SWITCHINSTANCEVIP`: Swap the VIPs of instances. - FLOW_CHANGE_REPLICA_TO_MSTER: Promote the replica node to the mater node. - `FLOW_BACKUPINSTANCE`: Back up an instance.
                     * @return TaskTypes Task type. Valid values:  - `FLOW_CREATE`: Create an instance. - `FLOW_MODIFYCONNECTIONCONFIG`: Adjust the number of bandwidth connections. - `FLOW_MODIFYINSTANCEPASSWORDFREE`: Modify the process of password-free access. - `FLOW_CLEARNETWORK`: Returning VPC - `FLOW_SETPWD`: Set the access password. - `FLOW_EXPORSHR`: Expand or reduce the capacity. - `FLOW_UpgradeArch`: Upgrade the instance architecture. - `FLOW_MODIFYINSTANCEPARAMS`: Modify the instance parameters. - `FLOW_MODIFYINSTACEREADONLY`: Modify read-only process. - `FLOW_CLOSE`: Disable the instance. - `FLOW_DELETE`: Delete the instance. - `FLOW_OPEN_WAN`: Enable the public network. - `FLOW_FLOW_CLEAN`: Clear the instance. - `FLOW_MODIFYINSTANCEACCOUNT`: Modify the instance account. - `FLOW_ENABLEINSTANCE_REPLICATE`: Enable the replica read-only feature. - `FLOW_DISABLEINSTANCE_REPLICATE`: Disable the replica read-only feature. - `FLOW_SWITCHINSTANCEVIP`: Swap the VIPs of instances. - FLOW_CHANGE_REPLICA_TO_MSTER: Promote the replica node to the mater node. - `FLOW_BACKUPINSTANCE`: Back up an instance.
                     * 
                     */
                    std::vector<std::string> GetTaskTypes() const;

                    /**
                     * 设置Task type. Valid values:  - `FLOW_CREATE`: Create an instance. - `FLOW_MODIFYCONNECTIONCONFIG`: Adjust the number of bandwidth connections. - `FLOW_MODIFYINSTANCEPASSWORDFREE`: Modify the process of password-free access. - `FLOW_CLEARNETWORK`: Returning VPC - `FLOW_SETPWD`: Set the access password. - `FLOW_EXPORSHR`: Expand or reduce the capacity. - `FLOW_UpgradeArch`: Upgrade the instance architecture. - `FLOW_MODIFYINSTANCEPARAMS`: Modify the instance parameters. - `FLOW_MODIFYINSTACEREADONLY`: Modify read-only process. - `FLOW_CLOSE`: Disable the instance. - `FLOW_DELETE`: Delete the instance. - `FLOW_OPEN_WAN`: Enable the public network. - `FLOW_FLOW_CLEAN`: Clear the instance. - `FLOW_MODIFYINSTANCEACCOUNT`: Modify the instance account. - `FLOW_ENABLEINSTANCE_REPLICATE`: Enable the replica read-only feature. - `FLOW_DISABLEINSTANCE_REPLICATE`: Disable the replica read-only feature. - `FLOW_SWITCHINSTANCEVIP`: Swap the VIPs of instances. - FLOW_CHANGE_REPLICA_TO_MSTER: Promote the replica node to the mater node. - `FLOW_BACKUPINSTANCE`: Back up an instance.
                     * @param _taskTypes Task type. Valid values:  - `FLOW_CREATE`: Create an instance. - `FLOW_MODIFYCONNECTIONCONFIG`: Adjust the number of bandwidth connections. - `FLOW_MODIFYINSTANCEPASSWORDFREE`: Modify the process of password-free access. - `FLOW_CLEARNETWORK`: Returning VPC - `FLOW_SETPWD`: Set the access password. - `FLOW_EXPORSHR`: Expand or reduce the capacity. - `FLOW_UpgradeArch`: Upgrade the instance architecture. - `FLOW_MODIFYINSTANCEPARAMS`: Modify the instance parameters. - `FLOW_MODIFYINSTACEREADONLY`: Modify read-only process. - `FLOW_CLOSE`: Disable the instance. - `FLOW_DELETE`: Delete the instance. - `FLOW_OPEN_WAN`: Enable the public network. - `FLOW_FLOW_CLEAN`: Clear the instance. - `FLOW_MODIFYINSTANCEACCOUNT`: Modify the instance account. - `FLOW_ENABLEINSTANCE_REPLICATE`: Enable the replica read-only feature. - `FLOW_DISABLEINSTANCE_REPLICATE`: Disable the replica read-only feature. - `FLOW_SWITCHINSTANCEVIP`: Swap the VIPs of instances. - FLOW_CHANGE_REPLICA_TO_MSTER: Promote the replica node to the mater node. - `FLOW_BACKUPINSTANCE`: Back up an instance.
                     * 
                     */
                    void SetTaskTypes(const std::vector<std::string>& _taskTypes);

                    /**
                     * 判断参数 TaskTypes 是否已赋值
                     * @return TaskTypes 是否已赋值
                     * 
                     */
                    bool TaskTypesHasBeenSet() const;

                    /**
                     * 获取Start time for executing a task,  in the format of  “2020-10-12 00:00:00”.
                     * @return BeginTime Start time for executing a task,  in the format of  “2020-10-12 00:00:00”.
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Start time for executing a task,  in the format of  “2020-10-12 00:00:00”.
                     * @param _beginTime Start time for executing a task,  in the format of  “2020-10-12 00:00:00”.
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time for executing a task,  in the format of  “2021-12-30 20:59:35”.
                     * @return EndTime End time for executing a task,  in the format of  “2021-12-30 20:59:35”.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time for executing a task,  in the format of  “2021-12-30 20:59:35”.
                     * @param _endTime End time for executing a task,  in the format of  “2021-12-30 20:59:35”.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取This parameter is only for internal use and can be ignored.
                     * @return TaskStatus This parameter is only for internal use and can be ignored.
                     * 
                     */
                    std::vector<int64_t> GetTaskStatus() const;

                    /**
                     * 设置This parameter is only for internal use and can be ignored.
                     * @param _taskStatus This parameter is only for internal use and can be ignored.
                     * 
                     */
                    void SetTaskStatus(const std::vector<int64_t>& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Task execution status. Valid values: - `0` (initilized) - `1` (executing) - `2` (completed) - `4` (failed)
                     * @return Result Task execution status. Valid values: - `0` (initilized) - `1` (executing) - `2` (completed) - `4` (failed)
                     * 
                     */
                    std::vector<int64_t> GetResult() const;

                    /**
                     * 设置Task execution status. Valid values: - `0` (initilized) - `1` (executing) - `2` (completed) - `4` (failed)
                     * @param _result Task execution status. Valid values: - `0` (initilized) - `1` (executing) - `2` (completed) - `4` (failed)
                     * 
                     */
                    void SetResult(const std::vector<int64_t>& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取The field `OperatorUin` has been disused and replaced by `OperateUin`.
                     * @return OperatorUin The field `OperatorUin` has been disused and replaced by `OperateUin`.
                     * 
                     */
                    std::vector<int64_t> GetOperatorUin() const;

                    /**
                     * 设置The field `OperatorUin` has been disused and replaced by `OperateUin`.
                     * @param _operatorUin The field `OperatorUin` has been disused and replaced by `OperateUin`.
                     * 
                     */
                    void SetOperatorUin(const std::vector<int64_t>& _operatorUin);

                    /**
                     * 判断参数 OperatorUin 是否已赋值
                     * @return OperatorUin 是否已赋值
                     * 
                     */
                    bool OperatorUinHasBeenSet() const;

                    /**
                     * 获取Operator account ID or UIN
                     * @return OperateUin Operator account ID or UIN
                     * 
                     */
                    std::vector<std::string> GetOperateUin() const;

                    /**
                     * 设置Operator account ID or UIN
                     * @param _operateUin Operator account ID or UIN
                     * 
                     */
                    void SetOperateUin(const std::vector<std::string>& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

                private:

                    /**
                     * ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Number of taskss returned per page.  Default value: `20`. Maximum value: `100`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset, which is an integral multiple of `Limit`. Calculation formula:  `offset` = `limit` * (page number - 1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Project ID Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), go to the account information menu in the top-right corner, and select **Project Management** to query the project ID.
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Task type. Valid values:  - `FLOW_CREATE`: Create an instance. - `FLOW_MODIFYCONNECTIONCONFIG`: Adjust the number of bandwidth connections. - `FLOW_MODIFYINSTANCEPASSWORDFREE`: Modify the process of password-free access. - `FLOW_CLEARNETWORK`: Returning VPC - `FLOW_SETPWD`: Set the access password. - `FLOW_EXPORSHR`: Expand or reduce the capacity. - `FLOW_UpgradeArch`: Upgrade the instance architecture. - `FLOW_MODIFYINSTANCEPARAMS`: Modify the instance parameters. - `FLOW_MODIFYINSTACEREADONLY`: Modify read-only process. - `FLOW_CLOSE`: Disable the instance. - `FLOW_DELETE`: Delete the instance. - `FLOW_OPEN_WAN`: Enable the public network. - `FLOW_FLOW_CLEAN`: Clear the instance. - `FLOW_MODIFYINSTANCEACCOUNT`: Modify the instance account. - `FLOW_ENABLEINSTANCE_REPLICATE`: Enable the replica read-only feature. - `FLOW_DISABLEINSTANCE_REPLICATE`: Disable the replica read-only feature. - `FLOW_SWITCHINSTANCEVIP`: Swap the VIPs of instances. - FLOW_CHANGE_REPLICA_TO_MSTER: Promote the replica node to the mater node. - `FLOW_BACKUPINSTANCE`: Back up an instance.
                     */
                    std::vector<std::string> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                    /**
                     * Start time for executing a task,  in the format of  “2020-10-12 00:00:00”.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time for executing a task,  in the format of  “2021-12-30 20:59:35”.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * This parameter is only for internal use and can be ignored.
                     */
                    std::vector<int64_t> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Task execution status. Valid values: - `0` (initilized) - `1` (executing) - `2` (completed) - `4` (failed)
                     */
                    std::vector<int64_t> m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * The field `OperatorUin` has been disused and replaced by `OperateUin`.
                     */
                    std::vector<int64_t> m_operatorUin;
                    bool m_operatorUinHasBeenSet;

                    /**
                     * Operator account ID or UIN
                     */
                    std::vector<std::string> m_operateUin;
                    bool m_operateUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETASKLISTREQUEST_H_
