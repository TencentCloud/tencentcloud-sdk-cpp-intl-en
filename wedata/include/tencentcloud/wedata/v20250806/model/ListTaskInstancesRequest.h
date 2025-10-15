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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKINSTANCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListTaskInstances request structure.
                */
                class ListTaskInstancesRequest : public AbstractModel
                {
                public:
                    ListTaskInstancesRequest();
                    ~ListTaskInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取**Project ID**. specifies the project ID.
                     * @return ProjectId **Project ID**. specifies the project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置**Project ID**. specifies the project ID.
                     * @param _projectId **Project ID**. specifies the project ID.
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
                     * 获取**Page number. integer.**.
Used in conjunction with pageSize and cannot be less than 1. default value: 1.
                     * @return PageNumber **Page number. integer.**.
Used in conjunction with pageSize and cannot be less than 1. default value: 1.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置**Page number. integer.**.
Used in conjunction with pageSize and cannot be less than 1. default value: 1.
                     * @param _pageNumber **Page number. integer.**.
Used in conjunction with pageSize and cannot be less than 1. default value: 1.
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
                     * 获取Specifies the number of items to display per page. default: 10. value range: 1-100.
                     * @return PageSize Specifies the number of items to display per page. default: 10. value range: 1-100.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Specifies the number of items to display per page. default: 10. value range: 1-100.
                     * @param _pageSize Specifies the number of items to display per page. default: 10. value range: 1-100.
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
                     * 获取Task name or task ID.
Supports fuzzy search filtering. multiple values are separated by commas.
                     * @return Keyword Task name or task ID.
Supports fuzzy search filtering. multiple values are separated by commas.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Task name or task ID.
Supports fuzzy search filtering. multiple values are separated by commas.
                     * @param _keyword Task name or task ID.
Supports fuzzy search filtering. multiple values are separated by commas.
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
                     * 获取**Time zone** timeZone, specifies the time zone of the passed in time string. default UTC+8.
                     * @return TimeZone **Time zone** timeZone, specifies the time zone of the passed in time string. default UTC+8.
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置**Time zone** timeZone, specifies the time zone of the passed in time string. default UTC+8.
                     * @param _timeZone **Time zone** timeZone, specifies the time zone of the passed in time string. default UTC+8.
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取**Instance Type**

0 - Backfill instance

1 - Cyclic (scheduled) instance

2 - Non-cyclic (non-scheduled) instance
                     * @return InstanceType **Instance Type**

0 - Backfill instance

1 - Cyclic (scheduled) instance

2 - Non-cyclic (non-scheduled) instance
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置**Instance Type**

0 - Backfill instance

1 - Cyclic (scheduled) instance

2 - Non-cyclic (non-scheduled) instance
                     * @param _instanceType **Instance Type**

0 - Backfill instance

1 - Cyclic (scheduled) instance

2 - Non-cyclic (non-scheduled) instance
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
                     * 获取**Instance Status**

WAIT_EVENT: Waiting for event

WAIT_UPSTREAM: Waiting for upstream

WAIT_RUN: Waiting to run

RUNNING: Running

SKIP_RUNNING: Skipped

FAILED_RETRY: Retrying after failure

EXPIRED: Failed

COMPLETED: Succeeded
                     * @return InstanceState **Instance Status**

WAIT_EVENT: Waiting for event

WAIT_UPSTREAM: Waiting for upstream

WAIT_RUN: Waiting to run

RUNNING: Running

SKIP_RUNNING: Skipped

FAILED_RETRY: Retrying after failure

EXPIRED: Failed

COMPLETED: Succeeded
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置**Instance Status**

WAIT_EVENT: Waiting for event

WAIT_UPSTREAM: Waiting for upstream

WAIT_RUN: Waiting to run

RUNNING: Running

SKIP_RUNNING: Skipped

FAILED_RETRY: Retrying after failure

EXPIRED: Failed

COMPLETED: Succeeded
                     * @param _instanceState **Instance Status**

WAIT_EVENT: Waiting for event

WAIT_UPSTREAM: Waiting for upstream

WAIT_RUN: Waiting to run

RUNNING: Running

SKIP_RUNNING: Skipped

FAILED_RETRY: Retrying after failure

EXPIRED: Failed

COMPLETED: Succeeded
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取Task type Id.
                     * @return TaskTypeId Task type Id.
                     * 
                     */
                    uint64_t GetTaskTypeId() const;

                    /**
                     * 设置Task type Id.
                     * @param _taskTypeId Task type Id.
                     * 
                     */
                    void SetTaskTypeId(const uint64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取**Task Cycle Type**

ONEOFF_CYCLE: One-time

YEAR_CYCLE: Yearly

MONTH_CYCLE: Monthly

WEEK_CYCLE: Weekly

DAY_CYCLE: Daily

HOUR_CYCLE: Hourly

MINUTE_CYCLE: Minute-level

CRONTAB_CYCLE: Crontab expression-based
                     * @return CycleType **Task Cycle Type**

ONEOFF_CYCLE: One-time

YEAR_CYCLE: Yearly

MONTH_CYCLE: Monthly

WEEK_CYCLE: Weekly

DAY_CYCLE: Daily

HOUR_CYCLE: Hourly

MINUTE_CYCLE: Minute-level

CRONTAB_CYCLE: Crontab expression-based
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置**Task Cycle Type**

ONEOFF_CYCLE: One-time

YEAR_CYCLE: Yearly

MONTH_CYCLE: Monthly

WEEK_CYCLE: Weekly

DAY_CYCLE: Daily

HOUR_CYCLE: Hourly

MINUTE_CYCLE: Minute-level

CRONTAB_CYCLE: Crontab expression-based
                     * @param _cycleType **Task Cycle Type**

ONEOFF_CYCLE: One-time

YEAR_CYCLE: Yearly

MONTH_CYCLE: Monthly

WEEK_CYCLE: Weekly

DAY_CYCLE: Daily

HOUR_CYCLE: Hourly

MINUTE_CYCLE: Minute-level

CRONTAB_CYCLE: Crontab expression-based
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取Task owner id.
                     * @return OwnerUin Task owner id.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Task owner id.
                     * @param _ownerUin Task owner id.
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Folder id
                     * @return FolderId Folder id
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Folder id
                     * @param _folderId Folder id
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取Workflow id of the task.
                     * @return WorkflowId Workflow id of the task.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow id of the task.
                     * @param _workflowId Workflow id of the task.
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取**Execution resource group Id**.
                     * @return ExecutorGroupId **Execution resource group Id**.
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置**Execution resource group Id**.
                     * @param _executorGroupId **Execution resource group Id**.
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取**Instance Scheduled Time Filter Condition** specifies the filter start time in the time format yyyy-MM-dd HH:MM:ss.
                     * @return ScheduleTimeFrom **Instance Scheduled Time Filter Condition** specifies the filter start time in the time format yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    std::string GetScheduleTimeFrom() const;

                    /**
                     * 设置**Instance Scheduled Time Filter Condition** specifies the filter start time in the time format yyyy-MM-dd HH:MM:ss.
                     * @param _scheduleTimeFrom **Instance Scheduled Time Filter Condition** specifies the filter start time in the time format yyyy-MM-dd HH:MM:ss.
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
                     * 获取**Instance Scheduled Time Filter Condition** specifies the cutoff time in the format of yyyy-MM-dd HH:MM:ss.
                     * @return ScheduleTimeTo **Instance Scheduled Time Filter Condition** specifies the cutoff time in the format of yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    std::string GetScheduleTimeTo() const;

                    /**
                     * 设置**Instance Scheduled Time Filter Condition** specifies the cutoff time in the format of yyyy-MM-dd HH:MM:ss.
                     * @param _scheduleTimeTo **Instance Scheduled Time Filter Condition** specifies the cutoff time in the format of yyyy-MM-dd HH:MM:ss.
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
                     * 获取**Instance Execution Start Time Filter Condition** specifies the start time for filtering. time format: yyyy-MM-dd HH:MM:ss.
                     * @return StartTimeFrom **Instance Execution Start Time Filter Condition** specifies the start time for filtering. time format: yyyy-MM-dd HH:MM:ss.
                     * 
                     */
                    std::string GetStartTimeFrom() const;

                    /**
                     * 设置**Instance Execution Start Time Filter Condition** specifies the start time for filtering. time format: yyyy-MM-dd HH:MM:ss.
                     * @param _startTimeFrom **Instance Execution Start Time Filter Condition** specifies the start time for filtering. time format: yyyy-MM-dd HH:MM:ss.
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
                     * 获取**Instance Execution Start Time Filter Condition**.
Expiration time in yyyy-MM-dd HH:MM:ss format.
                     * @return StartTimeTo **Instance Execution Start Time Filter Condition**.
Expiration time in yyyy-MM-dd HH:MM:ss format.
                     * 
                     */
                    std::string GetStartTimeTo() const;

                    /**
                     * 设置**Instance Execution Start Time Filter Condition**.
Expiration time in yyyy-MM-dd HH:MM:ss format.
                     * @param _startTimeTo **Instance Execution Start Time Filter Condition**.
Expiration time in yyyy-MM-dd HH:MM:ss format.
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
                     * 获取**Instance Last Update Time Filter Condition**.
Expiration time in yyyy-MM-dd HH:MM:ss format.
                     * @return LastUpdateTimeFrom **Instance Last Update Time Filter Condition**.
Expiration time in yyyy-MM-dd HH:MM:ss format.
                     * 
                     */
                    std::string GetLastUpdateTimeFrom() const;

                    /**
                     * 设置**Instance Last Update Time Filter Condition**.
Expiration time in yyyy-MM-dd HH:MM:ss format.
                     * @param _lastUpdateTimeFrom **Instance Last Update Time Filter Condition**.
Expiration time in yyyy-MM-dd HH:MM:ss format.
                     * 
                     */
                    void SetLastUpdateTimeFrom(const std::string& _lastUpdateTimeFrom);

                    /**
                     * 判断参数 LastUpdateTimeFrom 是否已赋值
                     * @return LastUpdateTimeFrom 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeFromHasBeenSet() const;

                    /**
                     * 获取**Instance Last Update Time Filter Condition**.
Expiration time in yyyy-MM-dd HH:MM:ss format.
                     * @return LastUpdateTimeTo **Instance Last Update Time Filter Condition**.
Expiration time in yyyy-MM-dd HH:MM:ss format.
                     * 
                     */
                    std::string GetLastUpdateTimeTo() const;

                    /**
                     * 设置**Instance Last Update Time Filter Condition**.
Expiration time in yyyy-MM-dd HH:MM:ss format.
                     * @param _lastUpdateTimeTo **Instance Last Update Time Filter Condition**.
Expiration time in yyyy-MM-dd HH:MM:ss format.
                     * 
                     */
                    void SetLastUpdateTimeTo(const std::string& _lastUpdateTimeTo);

                    /**
                     * 判断参数 LastUpdateTimeTo 是否已赋值
                     * @return LastUpdateTimeTo 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeToHasBeenSet() const;

                    /**
                     * 获取**Query Result Sorting Field**

SCHEDULE_DATE: Sort by scheduled execution time

START_TIME: Sort by actual execution start time

END_TIME: Sort by actual execution end time

COST_TIME: Sort by execution duration
                     * @return SortColumn **Query Result Sorting Field**

SCHEDULE_DATE: Sort by scheduled execution time

START_TIME: Sort by actual execution start time

END_TIME: Sort by actual execution end time

COST_TIME: Sort by execution duration
                     * 
                     */
                    std::string GetSortColumn() const;

                    /**
                     * 设置**Query Result Sorting Field**

SCHEDULE_DATE: Sort by scheduled execution time

START_TIME: Sort by actual execution start time

END_TIME: Sort by actual execution end time

COST_TIME: Sort by execution duration
                     * @param _sortColumn **Query Result Sorting Field**

SCHEDULE_DATE: Sort by scheduled execution time

START_TIME: Sort by actual execution start time

END_TIME: Sort by actual execution end time

COST_TIME: Sort by execution duration
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
                     * 获取**Instance Sorting Order**

- ASC 
- DESC
                     * @return SortType **Instance Sorting Order**

- ASC 
- DESC
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置**Instance Sorting Order**

- ASC 
- DESC
                     * @param _sortType **Instance Sorting Order**

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

                private:

                    /**
                     * **Project ID**. specifies the project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * **Page number. integer.**.
Used in conjunction with pageSize and cannot be less than 1. default value: 1.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Specifies the number of items to display per page. default: 10. value range: 1-100.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Task name or task ID.
Supports fuzzy search filtering. multiple values are separated by commas.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * **Time zone** timeZone, specifies the time zone of the passed in time string. default UTC+8.
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * **Instance Type**

0 - Backfill instance

1 - Cyclic (scheduled) instance

2 - Non-cyclic (non-scheduled) instance
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * **Instance Status**

WAIT_EVENT: Waiting for event

WAIT_UPSTREAM: Waiting for upstream

WAIT_RUN: Waiting to run

RUNNING: Running

SKIP_RUNNING: Skipped

FAILED_RETRY: Retrying after failure

EXPIRED: Failed

COMPLETED: Succeeded
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Task type Id.
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * **Task Cycle Type**

ONEOFF_CYCLE: One-time

YEAR_CYCLE: Yearly

MONTH_CYCLE: Monthly

WEEK_CYCLE: Weekly

DAY_CYCLE: Daily

HOUR_CYCLE: Hourly

MINUTE_CYCLE: Minute-level

CRONTAB_CYCLE: Crontab expression-based
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Task owner id.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Folder id
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Workflow id of the task.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * **Execution resource group Id**.
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * **Instance Scheduled Time Filter Condition** specifies the filter start time in the time format yyyy-MM-dd HH:MM:ss.
                     */
                    std::string m_scheduleTimeFrom;
                    bool m_scheduleTimeFromHasBeenSet;

                    /**
                     * **Instance Scheduled Time Filter Condition** specifies the cutoff time in the format of yyyy-MM-dd HH:MM:ss.
                     */
                    std::string m_scheduleTimeTo;
                    bool m_scheduleTimeToHasBeenSet;

                    /**
                     * **Instance Execution Start Time Filter Condition** specifies the start time for filtering. time format: yyyy-MM-dd HH:MM:ss.
                     */
                    std::string m_startTimeFrom;
                    bool m_startTimeFromHasBeenSet;

                    /**
                     * **Instance Execution Start Time Filter Condition**.
Expiration time in yyyy-MM-dd HH:MM:ss format.
                     */
                    std::string m_startTimeTo;
                    bool m_startTimeToHasBeenSet;

                    /**
                     * **Instance Last Update Time Filter Condition**.
Expiration time in yyyy-MM-dd HH:MM:ss format.
                     */
                    std::string m_lastUpdateTimeFrom;
                    bool m_lastUpdateTimeFromHasBeenSet;

                    /**
                     * **Instance Last Update Time Filter Condition**.
Expiration time in yyyy-MM-dd HH:MM:ss format.
                     */
                    std::string m_lastUpdateTimeTo;
                    bool m_lastUpdateTimeToHasBeenSet;

                    /**
                     * **Query Result Sorting Field**

SCHEDULE_DATE: Sort by scheduled execution time

START_TIME: Sort by actual execution start time

END_TIME: Sort by actual execution end time

COST_TIME: Sort by execution duration
                     */
                    std::string m_sortColumn;
                    bool m_sortColumnHasBeenSet;

                    /**
                     * **Instance Sorting Order**

- ASC 
- DESC
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKINSTANCESREQUEST_H_
