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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKOPSINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKOPSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Describes the list details of the task operation and maintenance workflow.
                */
                class TaskOpsInfo : public AbstractModel
                {
                public:
                    TaskOpsInfo();
                    ~TaskOpsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
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
                     * 获取Task name.
                     * @return TaskName Task name.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.
                     * @param _taskName Task name.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Owner id

                     * @return OwnerUin Owner id

                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Owner id

                     * @param _ownerUin Owner id

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
                     * 获取Task Status

-N: New

-Y: Scheduling

-F: Offline

-O: Paused

-T: Offlining

-INVALID: Invalid
                     * @return Status Task Status

-N: New

-Y: Scheduling

-F: Offline

-O: Paused

-T: Offlining

-INVALID: Invalid
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task Status

-N: New

-Y: Scheduling

-F: Offline

-O: Paused

-T: Offlining

-INVALID: Invalid
                     * @param _status Task Status

-N: New

-Y: Scheduling

-F: Offline

-O: Paused

-T: Offlining

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
                     * 获取Folder name.
                     * @return FolderName Folder name.
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置Folder name.
                     * @param _folderName Folder name.
                     * 
                     */
                    void SetFolderName(const std::string& _folderName);

                    /**
                     * 判断参数 FolderName 是否已赋值
                     * @return FolderName 是否已赋值
                     * 
                     */
                    bool FolderNameHasBeenSet() const;

                    /**
                     * 获取Workflow id.
                     * @return WorkflowId Workflow id.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow id.
                     * @param _workflowId Workflow id.
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
                     * 获取Project name.
                     * @return ProjectName Project name.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name.
                     * @param _projectName Project name.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Specifies the name of the updater.
                     * @return UpdateUserUin Specifies the name of the updater.
                     * 
                     */
                    std::string GetUpdateUserUin() const;

                    /**
                     * 设置Specifies the name of the updater.
                     * @param _updateUserUin Specifies the name of the updater.
                     * 
                     */
                    void SetUpdateUserUin(const std::string& _updateUserUin);

                    /**
                     * 判断参数 UpdateUserUin 是否已赋值
                     * @return UpdateUserUin 是否已赋值
                     * 
                     */
                    bool UpdateUserUinHasBeenSet() const;

                    /**
                     * 获取Task type Id.
* 21:JDBC SQL
* 23:TDSQL-PostgreSQL
* 26:OfflineSynchronization
* 30:Python
* 31:PySpark
* 33:Impala
* 34:Hive SQL
* 35:Shell
* 36:Spark SQL
* 38:Shell Form Mode
* 39:Spark
* 40:TCHouse-P
* 41:Kettle
* 42:Tchouse-X
* 43:TCHouse-X SQL
* 46:DLC Spark
* 47:TiOne
* 48:Trino
* 50:DLC PySpark
* 92:MapReduce
* 130:Branch Node
* 131:Merged Node
* 132:Notebook
* 133:SSH
* 134:StarRocks
* 137:For-each
* 138:Setats SQL
                     * @return TaskTypeId Task type Id.
* 21:JDBC SQL
* 23:TDSQL-PostgreSQL
* 26:OfflineSynchronization
* 30:Python
* 31:PySpark
* 33:Impala
* 34:Hive SQL
* 35:Shell
* 36:Spark SQL
* 38:Shell Form Mode
* 39:Spark
* 40:TCHouse-P
* 41:Kettle
* 42:Tchouse-X
* 43:TCHouse-X SQL
* 46:DLC Spark
* 47:TiOne
* 48:Trino
* 50:DLC PySpark
* 92:MapReduce
* 130:Branch Node
* 131:Merged Node
* 132:Notebook
* 133:SSH
* 134:StarRocks
* 137:For-each
* 138:Setats SQL
                     * 
                     */
                    uint64_t GetTaskTypeId() const;

                    /**
                     * 设置Task type Id.
* 21:JDBC SQL
* 23:TDSQL-PostgreSQL
* 26:OfflineSynchronization
* 30:Python
* 31:PySpark
* 33:Impala
* 34:Hive SQL
* 35:Shell
* 36:Spark SQL
* 38:Shell Form Mode
* 39:Spark
* 40:TCHouse-P
* 41:Kettle
* 42:Tchouse-X
* 43:TCHouse-X SQL
* 46:DLC Spark
* 47:TiOne
* 48:Trino
* 50:DLC PySpark
* 92:MapReduce
* 130:Branch Node
* 131:Merged Node
* 132:Notebook
* 133:SSH
* 134:StarRocks
* 137:For-each
* 138:Setats SQL
                     * @param _taskTypeId Task type Id.
* 21:JDBC SQL
* 23:TDSQL-PostgreSQL
* 26:OfflineSynchronization
* 30:Python
* 31:PySpark
* 33:Impala
* 34:Hive SQL
* 35:Shell
* 36:Spark SQL
* 38:Shell Form Mode
* 39:Spark
* 40:TCHouse-P
* 41:Kettle
* 42:Tchouse-X
* 43:TCHouse-X SQL
* 46:DLC Spark
* 47:TiOne
* 48:Trino
* 50:DLC PySpark
* 92:MapReduce
* 130:Branch Node
* 131:Merged Node
* 132:Notebook
* 133:SSH
* 134:StarRocks
* 137:For-each
* 138:Setats SQL
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
                     * 获取Task type description.
-Universal data synchronization.
 - ETLTaskType
 - ETLTaskType
 - python
 - pyspark
 - HiveSQLTaskType
 - shell
 - SparkSQLTaskType
 - JDBCSQLTaskType
 - DLCTaskType
 - ImpalaTaskType
 - CDWTaskType
 - kettle
 - DLCSparkTaskType
-TiOne machine learning.
 - TrinoTaskType
 - DLCPyspark
 - spark
 - mr
-Specifies the shell script.
-hivesql script.
-Specifies common custom business.

                     * @return TaskTypeDesc Task type description.
-Universal data synchronization.
 - ETLTaskType
 - ETLTaskType
 - python
 - pyspark
 - HiveSQLTaskType
 - shell
 - SparkSQLTaskType
 - JDBCSQLTaskType
 - DLCTaskType
 - ImpalaTaskType
 - CDWTaskType
 - kettle
 - DLCSparkTaskType
-TiOne machine learning.
 - TrinoTaskType
 - DLCPyspark
 - spark
 - mr
-Specifies the shell script.
-hivesql script.
-Specifies common custom business.

                     * 
                     */
                    std::string GetTaskTypeDesc() const;

                    /**
                     * 设置Task type description.
-Universal data synchronization.
 - ETLTaskType
 - ETLTaskType
 - python
 - pyspark
 - HiveSQLTaskType
 - shell
 - SparkSQLTaskType
 - JDBCSQLTaskType
 - DLCTaskType
 - ImpalaTaskType
 - CDWTaskType
 - kettle
 - DLCSparkTaskType
-TiOne machine learning.
 - TrinoTaskType
 - DLCPyspark
 - spark
 - mr
-Specifies the shell script.
-hivesql script.
-Specifies common custom business.

                     * @param _taskTypeDesc Task type description.
-Universal data synchronization.
 - ETLTaskType
 - ETLTaskType
 - python
 - pyspark
 - HiveSQLTaskType
 - shell
 - SparkSQLTaskType
 - JDBCSQLTaskType
 - DLCTaskType
 - ImpalaTaskType
 - CDWTaskType
 - kettle
 - DLCSparkTaskType
-TiOne machine learning.
 - TrinoTaskType
 - DLCPyspark
 - spark
 - mr
-Specifies the shell script.
-hivesql script.
-Specifies common custom business.

                     * 
                     */
                    void SetTaskTypeDesc(const std::string& _taskTypeDesc);

                    /**
                     * 判断参数 TaskTypeDesc 是否已赋值
                     * @return TaskTypeDesc 是否已赋值
                     * 
                     */
                    bool TaskTypeDescHasBeenSet() const;

                    /**
                     * 获取Task Cycle Type

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
                     * @return CycleType Task Cycle Type

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
                     * 设置Task Cycle Type

* ONEOFF_CYCLE: One-time

* YEAR_CYCLE: Yearly

* MONTH_CYCLE: Monthly

* WEEK_CYCLE: Weekly

* DAY_CYCLE: Daily

* HOUR_CYCLE: Hourly

* MINUTE_CYCLE: Minute-level

* CRONTAB_CYCLE: Crontab expression-based
                     * @param _cycleType Task Cycle Type

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
                     * 获取Resource group ID

                     * @return ExecutorGroupId Resource group ID

                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置Resource group ID

                     * @param _executorGroupId Resource group ID

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
                     * 获取Scheduling description.

                     * @return ScheduleDesc Scheduling description.

                     * 
                     */
                    std::string GetScheduleDesc() const;

                    /**
                     * 设置Scheduling description.

                     * @param _scheduleDesc Scheduling description.

                     * 
                     */
                    void SetScheduleDesc(const std::string& _scheduleDesc);

                    /**
                     * 判断参数 ScheduleDesc 是否已赋值
                     * @return ScheduleDesc 是否已赋值
                     * 
                     */
                    bool ScheduleDescHasBeenSet() const;

                    /**
                     * 获取Resource group name.
                     * @return ExecutorGroupName Resource group name.
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置Resource group name.
                     * @param _executorGroupName Resource group name.
                     * 
                     */
                    void SetExecutorGroupName(const std::string& _executorGroupName);

                    /**
                     * 判断参数 ExecutorGroupName 是否已赋值
                     * @return ExecutorGroupName 是否已赋值
                     * 
                     */
                    bool ExecutorGroupNameHasBeenSet() const;

                    /**
                     * 获取Latest scheduling submission time.

                     * @return LastSchedulerCommitTime Latest scheduling submission time.

                     * 
                     */
                    std::string GetLastSchedulerCommitTime() const;

                    /**
                     * 设置Latest scheduling submission time.

                     * @param _lastSchedulerCommitTime Latest scheduling submission time.

                     * 
                     */
                    void SetLastSchedulerCommitTime(const std::string& _lastSchedulerCommitTime);

                    /**
                     * 判断参数 LastSchedulerCommitTime 是否已赋值
                     * @return LastSchedulerCommitTime 是否已赋值
                     * 
                     */
                    bool LastSchedulerCommitTimeHasBeenSet() const;

                    /**
                     * 获取First execution time.

                     * @return FirstRunTime First execution time.

                     * 
                     */
                    std::string GetFirstRunTime() const;

                    /**
                     * 设置First execution time.

                     * @param _firstRunTime First execution time.

                     * 
                     */
                    void SetFirstRunTime(const std::string& _firstRunTime);

                    /**
                     * 判断参数 FirstRunTime 是否已赋值
                     * @return FirstRunTime 是否已赋值
                     * 
                     */
                    bool FirstRunTimeHasBeenSet() const;

                    /**
                     * 获取Most recent submission time.
                     * @return FirstSubmitTime Most recent submission time.
                     * 
                     */
                    std::string GetFirstSubmitTime() const;

                    /**
                     * 设置Most recent submission time.
                     * @param _firstSubmitTime Most recent submission time.
                     * 
                     */
                    void SetFirstSubmitTime(const std::string& _firstSubmitTime);

                    /**
                     * 判断参数 FirstSubmitTime 是否已赋值
                     * @return FirstSubmitTime 是否已赋值
                     * 
                     */
                    bool FirstSubmitTimeHasBeenSet() const;

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
                     * 获取Latest update time.

                     * @return LastUpdateTime Latest update time.

                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置Latest update time.

                     * @param _lastUpdateTime Latest update time.

                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task name.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Owner id

                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Task Status

-N: New

-Y: Scheduling

-F: Offline

-O: Paused

-T: Offlining

-INVALID: Invalid
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Folder ID
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Folder name.
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * Workflow id.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow name.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project name.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Specifies the name of the updater.
                     */
                    std::string m_updateUserUin;
                    bool m_updateUserUinHasBeenSet;

                    /**
                     * Task type Id.
* 21:JDBC SQL
* 23:TDSQL-PostgreSQL
* 26:OfflineSynchronization
* 30:Python
* 31:PySpark
* 33:Impala
* 34:Hive SQL
* 35:Shell
* 36:Spark SQL
* 38:Shell Form Mode
* 39:Spark
* 40:TCHouse-P
* 41:Kettle
* 42:Tchouse-X
* 43:TCHouse-X SQL
* 46:DLC Spark
* 47:TiOne
* 48:Trino
* 50:DLC PySpark
* 92:MapReduce
* 130:Branch Node
* 131:Merged Node
* 132:Notebook
* 133:SSH
* 134:StarRocks
* 137:For-each
* 138:Setats SQL
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Task type description.
-Universal data synchronization.
 - ETLTaskType
 - ETLTaskType
 - python
 - pyspark
 - HiveSQLTaskType
 - shell
 - SparkSQLTaskType
 - JDBCSQLTaskType
 - DLCTaskType
 - ImpalaTaskType
 - CDWTaskType
 - kettle
 - DLCSparkTaskType
-TiOne machine learning.
 - TrinoTaskType
 - DLCPyspark
 - spark
 - mr
-Specifies the shell script.
-hivesql script.
-Specifies common custom business.

                     */
                    std::string m_taskTypeDesc;
                    bool m_taskTypeDescHasBeenSet;

                    /**
                     * Task Cycle Type

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
                     * Resource group ID

                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * Scheduling description.

                     */
                    std::string m_scheduleDesc;
                    bool m_scheduleDescHasBeenSet;

                    /**
                     * Resource group name.
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * Latest scheduling submission time.

                     */
                    std::string m_lastSchedulerCommitTime;
                    bool m_lastSchedulerCommitTimeHasBeenSet;

                    /**
                     * First execution time.

                     */
                    std::string m_firstRunTime;
                    bool m_firstRunTimeHasBeenSet;

                    /**
                     * Most recent submission time.
                     */
                    std::string m_firstSubmitTime;
                    bool m_firstSubmitTimeHasBeenSet;

                    /**
                     * Creation time.


                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Latest update time.

                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKOPSINFO_H_
