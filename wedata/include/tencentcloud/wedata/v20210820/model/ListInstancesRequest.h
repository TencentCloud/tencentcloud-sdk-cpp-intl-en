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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LISTINSTANCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LISTINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ListInstances request structure.
                */
                class ListInstancesRequest : public AbstractModel
                {
                public:
                    ListInstancesRequest();
                    ~ListInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取**Project ID**.
                     * @return ProjectId **Project ID**.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置**Project ID**.
                     * @param _projectId **Project ID**.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Filter criteria for instance planned scheduling time.
Specifies the start time for filtering. the time format is yyyy-MM-dd HH:MM:ss.
                     * @return ScheduleTimeFrom Filter criteria for instance planned scheduling time.
Specifies the start time for filtering. the time format is yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    std::string GetScheduleTimeFrom() const;

                    /**
                     * 设置Filter criteria for instance planned scheduling time.
Specifies the start time for filtering. the time format is yyyy-MM-dd HH:MM:ss.
                     * @param _scheduleTimeFrom Filter criteria for instance planned scheduling time.
Specifies the start time for filtering. the time format is yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    void SetScheduleTimeFrom(const std::string& _scheduleTimeFrom);

                    /**
                     * 判断参数 ScheduleTimeFrom 是否已赋值
                     * @return ScheduleTimeFrom 是否已赋值
                     * 
                     */
                    bool ScheduleTimeFromHasBeenSet() const;

                    /**
                     * 获取Filter criteria for instance planned scheduling time.
Filter expiration time. the time format is yyyy-MM-dd HH:MM:ss.
                     * @return ScheduleTimeTo Filter criteria for instance planned scheduling time.
Filter expiration time. the time format is yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    std::string GetScheduleTimeTo() const;

                    /**
                     * 设置Filter criteria for instance planned scheduling time.
Filter expiration time. the time format is yyyy-MM-dd HH:MM:ss.
                     * @param _scheduleTimeTo Filter criteria for instance planned scheduling time.
Filter expiration time. the time format is yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    void SetScheduleTimeTo(const std::string& _scheduleTimeTo);

                    /**
                     * 判断参数 ScheduleTimeTo 是否已赋值
                     * @return ScheduleTimeTo 是否已赋值
                     * 
                     */
                    bool ScheduleTimeToHasBeenSet() const;

                    /**
                     * 获取Page number, integer.
Use in conjunction with pageSize and cannot be less than 1. the default value is 1.
                     * @return PageNumber Page number, integer.
Use in conjunction with pageSize and cannot be less than 1. the default value is 1.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number, integer.
Use in conjunction with pageSize and cannot be less than 1. the default value is 1.
                     * @param _pageNumber Page number, integer.
Use in conjunction with pageSize and cannot be less than 1. the default value is 1.
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of items per page, integer.
Use in conjunction with pageNumber and should not exceed 200. default value: 10.
                     * @return PageSize Number of items per page, integer.
Use in conjunction with pageNumber and should not exceed 200. default value: 10.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page, integer.
Use in conjunction with pageNumber and should not exceed 200. default value: 10.
                     * @param _pageSize Number of items per page, integer.
Use in conjunction with pageNumber and should not exceed 200. default value: 10.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Sorting field for query results.

-SCHEDULE_DATE indicates sorting based on the planned scheduling time.
-START_TIME indicates sorting by the instance's start execution time.
-END_TIME indicates sorting based on the instance execution end time.
-COST_TIME indicates sorting based on instance execution duration.
                     * @return SortColumn Sorting field for query results.

-SCHEDULE_DATE indicates sorting based on the planned scheduling time.
-START_TIME indicates sorting by the instance's start execution time.
-END_TIME indicates sorting based on the instance execution end time.
-COST_TIME indicates sorting based on instance execution duration.
                     * 
                     */
                    std::string GetSortColumn() const;

                    /**
                     * 设置Sorting field for query results.

-SCHEDULE_DATE indicates sorting based on the planned scheduling time.
-START_TIME indicates sorting by the instance's start execution time.
-END_TIME indicates sorting based on the instance execution end time.
-COST_TIME indicates sorting based on instance execution duration.
                     * @param _sortColumn Sorting field for query results.

-SCHEDULE_DATE indicates sorting based on the planned scheduling time.
-START_TIME indicates sorting by the instance's start execution time.
-END_TIME indicates sorting based on the instance execution end time.
-COST_TIME indicates sorting based on instance execution duration.
                     * 
                     */
                    void SetSortColumn(const std::string& _sortColumn);

                    /**
                     * 判断参数 SortColumn 是否已赋值
                     * @return SortColumn 是否已赋值
                     * 
                     */
                    bool SortColumnHasBeenSet() const;

                    /**
                     * 获取Instance sorting order.

- ASC 
- DESC
                     * @return SortType Instance sorting order.

- ASC 
- DESC
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置Instance sorting order.

- ASC 
- DESC
                     * @param _sortType Instance sorting order.

- ASC 
- DESC
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取Instance type.

-0 indicates Replenished Instance.
-1 indicates Periodic Instance.
-2 indicates Non-Periodic instance.
                     * @return InstanceType Instance type.

-0 indicates Replenished Instance.
-1 indicates Periodic Instance.
-2 indicates Non-Periodic instance.
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置Instance type.

-0 indicates Replenished Instance.
-1 indicates Periodic Instance.
-2 indicates Non-Periodic instance.
                     * @param _instanceType Instance type.

-0 indicates Replenished Instance.
-1 indicates Periodic Instance.
-2 indicates Non-Periodic instance.
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance execution status.
Support filtering multiple items with an "or" relationship between conditions.

-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22] indicate running.
-[21] indicates skipping running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
                     * @return InstanceStateList Instance execution status.
Support filtering multiple items with an "or" relationship between conditions.

-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22] indicate running.
-[21] indicates skipping running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
                     * 
                     */
                    std::vector<uint64_t> GetInstanceStateList() const;

                    /**
                     * 设置Instance execution status.
Support filtering multiple items with an "or" relationship between conditions.

-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22] indicate running.
-[21] indicates skipping running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
                     * @param _instanceStateList Instance execution status.
Support filtering multiple items with an "or" relationship between conditions.

-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22] indicate running.
-[21] indicates skipping running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
                     * 
                     */
                    void SetInstanceStateList(const std::vector<uint64_t>& _instanceStateList);

                    /**
                     * 判断参数 InstanceStateList 是否已赋值
                     * @return InstanceStateList 是否已赋值
                     * 
                     */
                    bool InstanceStateListHasBeenSet() const;

                    /**
                     * 获取**Task type Id** specifies the identifier for the task type.

-Supports filtering multiple items with an or relationship between conditions.
-You can use the DescribeAllTaskType API to obtain all task types supported by the project.
                     * @return TaskTypeIdList **Task type Id** specifies the identifier for the task type.

-Supports filtering multiple items with an or relationship between conditions.
-You can use the DescribeAllTaskType API to obtain all task types supported by the project.
                     * 
                     */
                    std::vector<uint64_t> GetTaskTypeIdList() const;

                    /**
                     * 设置**Task type Id** specifies the identifier for the task type.

-Supports filtering multiple items with an or relationship between conditions.
-You can use the DescribeAllTaskType API to obtain all task types supported by the project.
                     * @param _taskTypeIdList **Task type Id** specifies the identifier for the task type.

-Supports filtering multiple items with an or relationship between conditions.
-You can use the DescribeAllTaskType API to obtain all task types supported by the project.
                     * 
                     */
                    void SetTaskTypeIdList(const std::vector<uint64_t>& _taskTypeIdList);

                    /**
                     * 判断参数 TaskTypeIdList 是否已赋值
                     * @return TaskTypeIdList 是否已赋值
                     * 
                     */
                    bool TaskTypeIdListHasBeenSet() const;

                    /**
                     * 获取Task cycle type.
Supports filtering multiple conditions with an or relationship between them.
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
                     * @return TaskCycleList Task cycle type.
Supports filtering multiple conditions with an or relationship between them.
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
                     * 
                     */
                    std::vector<std::string> GetTaskCycleList() const;

                    /**
                     * 设置Task cycle type.
Supports filtering multiple conditions with an or relationship between them.
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
                     * @param _taskCycleList Task cycle type.
Supports filtering multiple conditions with an or relationship between them.
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
                     * 
                     */
                    void SetTaskCycleList(const std::vector<std::string>& _taskCycleList);

                    /**
                     * 判断参数 TaskCycleList 是否已赋值
                     * @return TaskCycleList 是否已赋值
                     * 
                     */
                    bool TaskCycleListHasBeenSet() const;

                    /**
                     * 获取Task name or task ID.
Supports fuzzy search filtering. multiple items are separated by english commas.
                     * @return Keyword Task name or task ID.
Supports fuzzy search filtering. multiple items are separated by english commas.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Task name or task ID.
Supports fuzzy search filtering. multiple items are separated by english commas.
                     * @param _keyword Task name or task ID.
Supports fuzzy search filtering. multiple items are separated by english commas.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Task owner.
Support filtering multiple items with an or relationship between conditions.
                     * @return InChargeList Task owner.
Support filtering multiple items with an or relationship between conditions.
                     * 
                     */
                    std::vector<std::string> GetInChargeList() const;

                    /**
                     * 设置Task owner.
Support filtering multiple items with an or relationship between conditions.
                     * @param _inChargeList Task owner.
Support filtering multiple items with an or relationship between conditions.
                     * 
                     */
                    void SetInChargeList(const std::vector<std::string>& _inChargeList);

                    /**
                     * 判断参数 InChargeList 是否已赋值
                     * @return InChargeList 是否已赋值
                     * 
                     */
                    bool InChargeListHasBeenSet() const;

                    /**
                     * 获取File to which the task belongs.
Supports filtering multiple conditions with an or relationship between them.
The FindAllFolder API can be used to obtain the folder list under a project.
                     * @return TaskFolderIdList File to which the task belongs.
Supports filtering multiple conditions with an or relationship between them.
The FindAllFolder API can be used to obtain the folder list under a project.
                     * 
                     */
                    std::vector<std::string> GetTaskFolderIdList() const;

                    /**
                     * 设置File to which the task belongs.
Supports filtering multiple conditions with an or relationship between them.
The FindAllFolder API can be used to obtain the folder list under a project.
                     * @param _taskFolderIdList File to which the task belongs.
Supports filtering multiple conditions with an or relationship between them.
The FindAllFolder API can be used to obtain the folder list under a project.
                     * 
                     */
                    void SetTaskFolderIdList(const std::vector<std::string>& _taskFolderIdList);

                    /**
                     * 判断参数 TaskFolderIdList 是否已赋值
                     * @return TaskFolderIdList 是否已赋值
                     * 
                     */
                    bool TaskFolderIdListHasBeenSet() const;

                    /**
                     * 获取**Associated workflow of the task**.
Supports filtering multiple conditions with an or relationship between them.
The workflow list under a project can be obtained through the DescribeOpsWorkflows api.
                     * @return WorkflowIdList **Associated workflow of the task**.
Supports filtering multiple conditions with an or relationship between them.
The workflow list under a project can be obtained through the DescribeOpsWorkflows api.
                     * 
                     */
                    std::vector<std::string> GetWorkflowIdList() const;

                    /**
                     * 设置**Associated workflow of the task**.
Supports filtering multiple conditions with an or relationship between them.
The workflow list under a project can be obtained through the DescribeOpsWorkflows api.
                     * @param _workflowIdList **Associated workflow of the task**.
Supports filtering multiple conditions with an or relationship between them.
The workflow list under a project can be obtained through the DescribeOpsWorkflows api.
                     * 
                     */
                    void SetWorkflowIdList(const std::vector<std::string>& _workflowIdList);

                    /**
                     * 判断参数 WorkflowIdList 是否已赋值
                     * @return WorkflowIdList 是否已赋值
                     * 
                     */
                    bool WorkflowIdListHasBeenSet() const;

                    /**
                     * 获取Execution resource group Id.
Supports filtering multiple conditions with an or relationship between them.
The scheduling resource group list under the project can be obtained through the DescribeNormalSchedulerExecutorGroups api.
The DescribeNormalIntegrationExecutorGroups API can be used to obtain the list of all integration resource groups under a project.
                     * @return ExecutorGroupIdList Execution resource group Id.
Supports filtering multiple conditions with an or relationship between them.
The scheduling resource group list under the project can be obtained through the DescribeNormalSchedulerExecutorGroups api.
The DescribeNormalIntegrationExecutorGroups API can be used to obtain the list of all integration resource groups under a project.
                     * 
                     */
                    std::vector<std::string> GetExecutorGroupIdList() const;

                    /**
                     * 设置Execution resource group Id.
Supports filtering multiple conditions with an or relationship between them.
The scheduling resource group list under the project can be obtained through the DescribeNormalSchedulerExecutorGroups api.
The DescribeNormalIntegrationExecutorGroups API can be used to obtain the list of all integration resource groups under a project.
                     * @param _executorGroupIdList Execution resource group Id.
Supports filtering multiple conditions with an or relationship between them.
The scheduling resource group list under the project can be obtained through the DescribeNormalSchedulerExecutorGroups api.
The DescribeNormalIntegrationExecutorGroups API can be used to obtain the list of all integration resource groups under a project.
                     * 
                     */
                    void SetExecutorGroupIdList(const std::vector<std::string>& _executorGroupIdList);

                    /**
                     * 判断参数 ExecutorGroupIdList 是否已赋值
                     * @return ExecutorGroupIdList 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdListHasBeenSet() const;

                    /**
                     * 获取Instance execution start time filter criteria.
Specifies the start time for filtering. the time format is yyyy-MM-dd HH:MM:ss.
                     * @return StartTimeFrom Instance execution start time filter criteria.
Specifies the start time for filtering. the time format is yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    std::string GetStartTimeFrom() const;

                    /**
                     * 设置Instance execution start time filter criteria.
Specifies the start time for filtering. the time format is yyyy-MM-dd HH:MM:ss.
                     * @param _startTimeFrom Instance execution start time filter criteria.
Specifies the start time for filtering. the time format is yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    void SetStartTimeFrom(const std::string& _startTimeFrom);

                    /**
                     * 判断参数 StartTimeFrom 是否已赋值
                     * @return StartTimeFrom 是否已赋值
                     * 
                     */
                    bool StartTimeFromHasBeenSet() const;

                    /**
                     * 获取Instance execution start time filter criteria.
Filter expiration time. the time format is yyyy-MM-dd HH:MM:ss.
                     * @return StartTimeTo Instance execution start time filter criteria.
Filter expiration time. the time format is yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    std::string GetStartTimeTo() const;

                    /**
                     * 设置Instance execution start time filter criteria.
Filter expiration time. the time format is yyyy-MM-dd HH:MM:ss.
                     * @param _startTimeTo Instance execution start time filter criteria.
Filter expiration time. the time format is yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    void SetStartTimeTo(const std::string& _startTimeTo);

                    /**
                     * 判断参数 StartTimeTo 是否已赋值
                     * @return StartTimeTo 是否已赋值
                     * 
                     */
                    bool StartTimeToHasBeenSet() const;

                    /**
                     * 获取Time zone.
Time zone. specifies the time zone. the default value is UTC+8.
                     * @return ScheduleTimeZone Time zone.
Time zone. specifies the time zone. the default value is UTC+8.
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置Time zone.
Time zone. specifies the time zone. the default value is UTC+8.
                     * @param _scheduleTimeZone Time zone.
Time zone. specifies the time zone. the default value is UTC+8.
                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                private:

                    /**
                     * **Project ID**.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Filter criteria for instance planned scheduling time.
Specifies the start time for filtering. the time format is yyyy-MM-dd HH:MM:ss.
                     */
                    std::string m_scheduleTimeFrom;
                    bool m_scheduleTimeFromHasBeenSet;

                    /**
                     * Filter criteria for instance planned scheduling time.
Filter expiration time. the time format is yyyy-MM-dd HH:MM:ss.
                     */
                    std::string m_scheduleTimeTo;
                    bool m_scheduleTimeToHasBeenSet;

                    /**
                     * Page number, integer.
Use in conjunction with pageSize and cannot be less than 1. the default value is 1.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of items per page, integer.
Use in conjunction with pageNumber and should not exceed 200. default value: 10.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Sorting field for query results.

-SCHEDULE_DATE indicates sorting based on the planned scheduling time.
-START_TIME indicates sorting by the instance's start execution time.
-END_TIME indicates sorting based on the instance execution end time.
-COST_TIME indicates sorting based on instance execution duration.
                     */
                    std::string m_sortColumn;
                    bool m_sortColumnHasBeenSet;

                    /**
                     * Instance sorting order.

- ASC 
- DESC
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * Instance type.

-0 indicates Replenished Instance.
-1 indicates Periodic Instance.
-2 indicates Non-Periodic instance.
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance execution status.
Support filtering multiple items with an "or" relationship between conditions.

-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22] indicate running.
-[21] indicates skipping running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
                     */
                    std::vector<uint64_t> m_instanceStateList;
                    bool m_instanceStateListHasBeenSet;

                    /**
                     * **Task type Id** specifies the identifier for the task type.

-Supports filtering multiple items with an or relationship between conditions.
-You can use the DescribeAllTaskType API to obtain all task types supported by the project.
                     */
                    std::vector<uint64_t> m_taskTypeIdList;
                    bool m_taskTypeIdListHasBeenSet;

                    /**
                     * Task cycle type.
Supports filtering multiple conditions with an or relationship between them.
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
                     */
                    std::vector<std::string> m_taskCycleList;
                    bool m_taskCycleListHasBeenSet;

                    /**
                     * Task name or task ID.
Supports fuzzy search filtering. multiple items are separated by english commas.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Task owner.
Support filtering multiple items with an or relationship between conditions.
                     */
                    std::vector<std::string> m_inChargeList;
                    bool m_inChargeListHasBeenSet;

                    /**
                     * File to which the task belongs.
Supports filtering multiple conditions with an or relationship between them.
The FindAllFolder API can be used to obtain the folder list under a project.
                     */
                    std::vector<std::string> m_taskFolderIdList;
                    bool m_taskFolderIdListHasBeenSet;

                    /**
                     * **Associated workflow of the task**.
Supports filtering multiple conditions with an or relationship between them.
The workflow list under a project can be obtained through the DescribeOpsWorkflows api.
                     */
                    std::vector<std::string> m_workflowIdList;
                    bool m_workflowIdListHasBeenSet;

                    /**
                     * Execution resource group Id.
Supports filtering multiple conditions with an or relationship between them.
The scheduling resource group list under the project can be obtained through the DescribeNormalSchedulerExecutorGroups api.
The DescribeNormalIntegrationExecutorGroups API can be used to obtain the list of all integration resource groups under a project.
                     */
                    std::vector<std::string> m_executorGroupIdList;
                    bool m_executorGroupIdListHasBeenSet;

                    /**
                     * Instance execution start time filter criteria.
Specifies the start time for filtering. the time format is yyyy-MM-dd HH:MM:ss.
                     */
                    std::string m_startTimeFrom;
                    bool m_startTimeFromHasBeenSet;

                    /**
                     * Instance execution start time filter criteria.
Filter expiration time. the time format is yyyy-MM-dd HH:MM:ss.
                     */
                    std::string m_startTimeTo;
                    bool m_startTimeToHasBeenSet;

                    /**
                     * Time zone.
Time zone. specifies the time zone. the default value is UTC+8.
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LISTINSTANCESREQUEST_H_
