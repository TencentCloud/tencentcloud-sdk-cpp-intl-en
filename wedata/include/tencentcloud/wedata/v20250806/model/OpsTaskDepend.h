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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSTASKDEPEND_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSTASKDEPEND_H_

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
                * Dependent task information.
                */
                class OpsTaskDepend : public AbstractModel
                {
                public:
                    OpsTaskDepend();
                    ~OpsTaskDepend() = default;
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
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
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
-20 : universal data synchronization.
 - 25 :  ETLTaskType
 - 26 :  ETLTaskType
 - 30 :  python
 - 31 :  pyspark
 - 34 :  hivesql
 - 35 :  shell
 - 36 :  sparksql
 - 21 :  jdbcsql
 - 32 :  dlc
 - 33 :  ImpalaTaskType
 - 40 :  CDWTaskType
 - 41 :  kettle
 - 42 :  TCHouse-X
 - 43 :  TCHouse-X SQL
 - 46 :  dlcsparkTaskType
 - 47 :  TiOneMachineLearningTaskType
 - 48 :  Trino
 - 50 :  DLCPyspark
 - 23 :  TencentDistributedSQL
 - 39 :  spark
 - 92 :  MRTaskType
 - 38 :  ShellScript
 - 70 :  HiveSQLScrip
-130: specifies the branch.
-131: specifies the merge.
-132: specifies the Notebook explore.
-133: specifies the SSH node.
 - 134 :  StarRocks
 - 137 :  For-each
-10000: common custom business.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskTypeDesc Task type description.
-20 : universal data synchronization.
 - 25 :  ETLTaskType
 - 26 :  ETLTaskType
 - 30 :  python
 - 31 :  pyspark
 - 34 :  hivesql
 - 35 :  shell
 - 36 :  sparksql
 - 21 :  jdbcsql
 - 32 :  dlc
 - 33 :  ImpalaTaskType
 - 40 :  CDWTaskType
 - 41 :  kettle
 - 42 :  TCHouse-X
 - 43 :  TCHouse-X SQL
 - 46 :  dlcsparkTaskType
 - 47 :  TiOneMachineLearningTaskType
 - 48 :  Trino
 - 50 :  DLCPyspark
 - 23 :  TencentDistributedSQL
 - 39 :  spark
 - 92 :  MRTaskType
 - 38 :  ShellScript
 - 70 :  HiveSQLScrip
-130: specifies the branch.
-131: specifies the merge.
-132: specifies the Notebook explore.
-133: specifies the SSH node.
 - 134 :  StarRocks
 - 137 :  For-each
-10000: common custom business.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskTypeDesc() const;

                    /**
                     * 设置Task type description.
-20 : universal data synchronization.
 - 25 :  ETLTaskType
 - 26 :  ETLTaskType
 - 30 :  python
 - 31 :  pyspark
 - 34 :  hivesql
 - 35 :  shell
 - 36 :  sparksql
 - 21 :  jdbcsql
 - 32 :  dlc
 - 33 :  ImpalaTaskType
 - 40 :  CDWTaskType
 - 41 :  kettle
 - 42 :  TCHouse-X
 - 43 :  TCHouse-X SQL
 - 46 :  dlcsparkTaskType
 - 47 :  TiOneMachineLearningTaskType
 - 48 :  Trino
 - 50 :  DLCPyspark
 - 23 :  TencentDistributedSQL
 - 39 :  spark
 - 92 :  MRTaskType
 - 38 :  ShellScript
 - 70 :  HiveSQLScrip
-130: specifies the branch.
-131: specifies the merge.
-132: specifies the Notebook explore.
-133: specifies the SSH node.
 - 134 :  StarRocks
 - 137 :  For-each
-10000: common custom business.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskTypeDesc Task type description.
-20 : universal data synchronization.
 - 25 :  ETLTaskType
 - 26 :  ETLTaskType
 - 30 :  python
 - 31 :  pyspark
 - 34 :  hivesql
 - 35 :  shell
 - 36 :  sparksql
 - 21 :  jdbcsql
 - 32 :  dlc
 - 33 :  ImpalaTaskType
 - 40 :  CDWTaskType
 - 41 :  kettle
 - 42 :  TCHouse-X
 - 43 :  TCHouse-X SQL
 - 46 :  dlcsparkTaskType
 - 47 :  TiOneMachineLearningTaskType
 - 48 :  Trino
 - 50 :  DLCPyspark
 - 23 :  TencentDistributedSQL
 - 39 :  spark
 - 92 :  MRTaskType
 - 38 :  ShellScript
 - 70 :  HiveSQLScrip
-130: specifies the branch.
-131: specifies the merge.
-132: specifies the Notebook explore.
-133: specifies the SSH node.
 - 134 :  StarRocks
 - 137 :  For-each
-10000: common custom business.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Latest submission time.

                     * @return FirstSubmitTime Latest submission time.

                     * 
                     */
                    std::string GetFirstSubmitTime() const;

                    /**
                     * 设置Latest submission time.

                     * @param _firstSubmitTime Latest submission time.

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
                     * 获取First running time


                     * @return FirstRunTime First running time


                     * 
                     */
                    std::string GetFirstRunTime() const;

                    /**
                     * 设置First running time


                     * @param _firstRunTime First running time


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
                     * 获取Describes the scheduling plan display description information.

                     * @return ScheduleDesc Describes the scheduling plan display description information.

                     * 
                     */
                    std::string GetScheduleDesc() const;

                    /**
                     * 设置Describes the scheduling plan display description information.

                     * @param _scheduleDesc Describes the scheduling plan display description information.

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
                     * 获取Specifies the person in charge.
                     * @return OwnerUin Specifies the person in charge.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Specifies the person in charge.
                     * @param _ownerUin Specifies the person in charge.
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
                     * 获取Execution start time. format: HH:mm, for example 00:00.

                     * @return ExecutionStartTime Execution start time. format: HH:mm, for example 00:00.

                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置Execution start time. format: HH:mm, for example 00:00.

                     * @param _executionStartTime Execution start time. format: HH:mm, for example 00:00.

                     * 
                     */
                    void SetExecutionStartTime(const std::string& _executionStartTime);

                    /**
                     * 判断参数 ExecutionStartTime 是否已赋值
                     * @return ExecutionStartTime 是否已赋值
                     * 
                     */
                    bool ExecutionStartTimeHasBeenSet() const;

                    /**
                     * 获取Execution end time. format: HH:mm, for example 23:59.

                     * @return ExecutionEndTime Execution end time. format: HH:mm, for example 23:59.

                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置Execution end time. format: HH:mm, for example 23:59.

                     * @param _executionEndTime Execution end time. format: HH:mm, for example 23:59.

                     * 
                     */
                    void SetExecutionEndTime(const std::string& _executionEndTime);

                    /**
                     * 判断参数 ExecutionEndTime 是否已赋值
                     * @return ExecutionEndTime 是否已赋值
                     * 
                     */
                    bool ExecutionEndTimeHasBeenSet() const;

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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Task type description.
-20 : universal data synchronization.
 - 25 :  ETLTaskType
 - 26 :  ETLTaskType
 - 30 :  python
 - 31 :  pyspark
 - 34 :  hivesql
 - 35 :  shell
 - 36 :  sparksql
 - 21 :  jdbcsql
 - 32 :  dlc
 - 33 :  ImpalaTaskType
 - 40 :  CDWTaskType
 - 41 :  kettle
 - 42 :  TCHouse-X
 - 43 :  TCHouse-X SQL
 - 46 :  dlcsparkTaskType
 - 47 :  TiOneMachineLearningTaskType
 - 48 :  Trino
 - 50 :  DLCPyspark
 - 23 :  TencentDistributedSQL
 - 39 :  spark
 - 92 :  MRTaskType
 - 38 :  ShellScript
 - 70 :  HiveSQLScrip
-130: specifies the branch.
-131: specifies the merge.
-132: specifies the Notebook explore.
-133: specifies the SSH node.
 - 134 :  StarRocks
 - 137 :  For-each
-10000: common custom business.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskTypeDesc;
                    bool m_taskTypeDescHasBeenSet;

                    /**
                     * Folder name.

                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * Folder ID

                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Latest submission time.

                     */
                    std::string m_firstSubmitTime;
                    bool m_firstSubmitTimeHasBeenSet;

                    /**
                     * First running time


                     */
                    std::string m_firstRunTime;
                    bool m_firstRunTimeHasBeenSet;

                    /**
                     * Describes the scheduling plan display description information.

                     */
                    std::string m_scheduleDesc;
                    bool m_scheduleDescHasBeenSet;

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
                     * Specifies the person in charge.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Execution start time. format: HH:mm, for example 00:00.

                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * Execution end time. format: HH:mm, for example 23:59.

                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSTASKDEPEND_H_
