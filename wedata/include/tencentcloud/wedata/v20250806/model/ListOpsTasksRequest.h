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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSTASKSREQUEST_H_

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
                * ListOpsTasks request structure.
                */
                class ListOpsTasksRequest : public AbstractModel
                {
                public:
                    ListOpsTasksRequest();
                    ~ListOpsTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.
		
                     * @return ProjectId Project ID.
		
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
		
                     * @param _projectId Project ID.
		
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
                     * 获取Pagination size.
                     * @return PageSize Pagination size.
                     * 
                     */
                    std::string GetPageSize() const;

                    /**
                     * 设置Pagination size.
                     * @param _pageSize Pagination size.
                     * 
                     */
                    void SetPageSize(const std::string& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Page number
                     * @return PageNumber Page number
                     * 
                     */
                    std::string GetPageNumber() const;

                    /**
                     * 设置Page number
                     * @param _pageNumber Page number
                     * 
                     */
                    void SetPageNumber(const std::string& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Task type Id. 
-20: common data sync.
 - 25:ETLTaskType
 - 26:ETLTaskType
 - 30:python
 - 31:pyspark
 - 34:HiveSQLTaskType
 - 35:shell
 - 36:SparkSQLTaskType
 - 21:JDBCSQLTaskType
 - 32:DLCTaskType
 - 33:ImpalaTaskType
 - 40:CDWTaskType
 - 41:kettle
 - 46:DLCSparkTaskType
-47: TiOne machine learning.
 - 48:TrinoTaskType
 - 50:DLCPyspark39:spark
 - 92:mr
-38: shell script.
-70: hivesql script.
-1000: common custom business.
                     * @return TaskTypeId Task type Id. 
-20: common data sync.
 - 25:ETLTaskType
 - 26:ETLTaskType
 - 30:python
 - 31:pyspark
 - 34:HiveSQLTaskType
 - 35:shell
 - 36:SparkSQLTaskType
 - 21:JDBCSQLTaskType
 - 32:DLCTaskType
 - 33:ImpalaTaskType
 - 40:CDWTaskType
 - 41:kettle
 - 46:DLCSparkTaskType
-47: TiOne machine learning.
 - 48:TrinoTaskType
 - 50:DLCPyspark39:spark
 - 92:mr
-38: shell script.
-70: hivesql script.
-1000: common custom business.
                     * 
                     */
                    std::string GetTaskTypeId() const;

                    /**
                     * 设置Task type Id. 
-20: common data sync.
 - 25:ETLTaskType
 - 26:ETLTaskType
 - 30:python
 - 31:pyspark
 - 34:HiveSQLTaskType
 - 35:shell
 - 36:SparkSQLTaskType
 - 21:JDBCSQLTaskType
 - 32:DLCTaskType
 - 33:ImpalaTaskType
 - 40:CDWTaskType
 - 41:kettle
 - 46:DLCSparkTaskType
-47: TiOne machine learning.
 - 48:TrinoTaskType
 - 50:DLCPyspark39:spark
 - 92:mr
-38: shell script.
-70: hivesql script.
-1000: common custom business.
                     * @param _taskTypeId Task type Id. 
-20: common data sync.
 - 25:ETLTaskType
 - 26:ETLTaskType
 - 30:python
 - 31:pyspark
 - 34:HiveSQLTaskType
 - 35:shell
 - 36:SparkSQLTaskType
 - 21:JDBCSQLTaskType
 - 32:DLCTaskType
 - 33:ImpalaTaskType
 - 40:CDWTaskType
 - 41:kettle
 - 46:DLCSparkTaskType
-47: TiOne machine learning.
 - 48:TrinoTaskType
 - 50:DLCPyspark39:spark
 - 92:mr
-38: shell script.
-70: hivesql script.
-1000: common custom business.
                     * 
                     */
                    void SetTaskTypeId(const std::string& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取Workflow ID.
                     * @return WorkflowId Workflow ID.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID.
                     * @param _workflowId Workflow ID.
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
                     * 获取Workflow name.
                     * @return WorkflowName Workflow name.
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow name.
                     * @param _workflowName Workflow name.
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取Owner id.
                     * @return OwnerUin Owner id.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Owner id.
                     * @param _ownerUin Owner id.
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
                     * 获取Folder ID
                     * @return FolderId Folder ID
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Folder ID
                     * @param _folderId Folder ID
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
                     * 获取Data source ID.
                     * @return SourceServiceId Data source ID.
                     * 
                     */
                    std::string GetSourceServiceId() const;

                    /**
                     * 设置Data source ID.
                     * @param _sourceServiceId Data source ID.
                     * 
                     */
                    void SetSourceServiceId(const std::string& _sourceServiceId);

                    /**
                     * 判断参数 SourceServiceId 是否已赋值
                     * @return SourceServiceId 是否已赋值
                     * 
                     */
                    bool SourceServiceIdHasBeenSet() const;

                    /**
                     * 获取Target data source id.
                     * @return TargetServiceId Target data source id.
                     * 
                     */
                    std::string GetTargetServiceId() const;

                    /**
                     * 设置Target data source id.
                     * @param _targetServiceId Target data source id.
                     * 
                     */
                    void SetTargetServiceId(const std::string& _targetServiceId);

                    /**
                     * 判断参数 TargetServiceId 是否已赋值
                     * @return TargetServiceId 是否已赋值
                     * 
                     */
                    bool TargetServiceIdHasBeenSet() const;

                    /**
                     * 获取Executor Group ID
                     * @return ExecutorGroupId Executor Group ID
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置Executor Group ID
                     * @param _executorGroupId Executor Group ID
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
                     * 获取Task Cycle Type:

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
                     * @return CycleType Task Cycle Type:

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Task Cycle Type:

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
                     * @param _cycleType Task Cycle Type:

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
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
                     * 获取Task Status

-Y: Running

-F: Stopped

-O: Frozen

-T: Stopping

-INVALID: Invalid
                     * @return Status Task Status

-Y: Running

-F: Stopped

-O: Frozen

-T: Stopping

-INVALID: Invalid
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task Status

-Y: Running

-F: Stopped

-O: Frozen

-T: Stopping

-INVALID: Invalid
                     * @param _status Task Status

-Y: Running

-F: Stopped

-O: Frozen

-T: Stopping

-INVALID: Invalid
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
                     * 获取Time zone. defaults to UTC+8.
                     * @return TimeZone Time zone. defaults to UTC+8.
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置Time zone. defaults to UTC+8.
                     * @param _timeZone Time zone. defaults to UTC+8.
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * Project ID.
		
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Pagination size.
                     */
                    std::string m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number
                     */
                    std::string m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Task type Id. 
-20: common data sync.
 - 25:ETLTaskType
 - 26:ETLTaskType
 - 30:python
 - 31:pyspark
 - 34:HiveSQLTaskType
 - 35:shell
 - 36:SparkSQLTaskType
 - 21:JDBCSQLTaskType
 - 32:DLCTaskType
 - 33:ImpalaTaskType
 - 40:CDWTaskType
 - 41:kettle
 - 46:DLCSparkTaskType
-47: TiOne machine learning.
 - 48:TrinoTaskType
 - 50:DLCPyspark39:spark
 - 92:mr
-38: shell script.
-70: hivesql script.
-1000: common custom business.
                     */
                    std::string m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Workflow ID.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow name.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Owner id.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Folder ID
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Data source ID.
                     */
                    std::string m_sourceServiceId;
                    bool m_sourceServiceIdHasBeenSet;

                    /**
                     * Target data source id.
                     */
                    std::string m_targetServiceId;
                    bool m_targetServiceIdHasBeenSet;

                    /**
                     * Executor Group ID
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * Task Cycle Type:

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Task Status

-Y: Running

-F: Stopped

-O: Frozen

-T: Stopping

-INVALID: Invalid
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Time zone. defaults to UTC+8.
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSTASKSREQUEST_H_
