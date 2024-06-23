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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKCANVASDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKCANVASDTO_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task Information
                */
                class OpsTaskCanvasDto : public AbstractModel
                {
                public:
                    OpsTaskCanvasDto();
                    ~OpsTaskCanvasDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskId Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskId Task IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskName Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskName Task NameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkflowId Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _workflowId Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkflowName Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _workflowName Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectName Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectName Project nameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectIdent Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectIdent Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProjectIdent(const std::string& _projectIdent);

                    /**
                     * 判断参数 ProjectIdent 是否已赋值
                     * @return ProjectIdent 是否已赋值
                     * 
                     */
                    bool ProjectIdentHasBeenSet() const;

                    /**
                     * 获取Task status, 'Y', 'F', 'O', 'T', 'INVALID' respectively indicate Scheduling In Progress, Stopped, Paused, Stopping, Expired
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Task status, 'Y', 'F', 'O', 'T', 'INVALID' respectively indicate Scheduling In Progress, Stopped, Paused, Stopping, Expired
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status, 'Y', 'F', 'O', 'T', 'INVALID' respectively indicate Scheduling In Progress, Stopped, Paused, Stopping, Expired
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _status Task status, 'Y', 'F', 'O', 'T', 'INVALID' respectively indicate Scheduling In Progress, Stopped, Paused, Stopping, Expired
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Task Type ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskTypeId Task Type ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTaskTypeId() const;

                    /**
                     * 设置Task Type ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskTypeId Task Type ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Task Type Description, where the corresponding relationship between Task Type ID and Task Type Description is as follows
20	Universal Data Synchronization Task
21	JDBC SQL
22	Tbase
25	Data ETL
30	Python
31	PySpark
34	Hive SQL
35	Shell
36	Spark SQL
37	HDFS to HBase
38	SHELL
39	Spark
45	DATA_QUALITY
55	THIVE to MySQL
56	THIVE to PostgreSQL
66	HDFS to PostgreSQL
67	HDFS to Oracle
68	HDFS to MySQL
69	FTP to HDFS
70	HIVE SQL
72	HIVE to HDFS
75	HDFS to HIVE
81	Python SQL Script
82	Spark Scala Computation
83	Wormhole Task
84	Verify Reconciliation File
85	HDFS to THIVE
86	TDW to HDFS
87	HDFS to TDW
88	Verify Reconciliation File
91	FLINK Task
92	MapReduce
98	custom topology
99	kafkatoHDFS
100	kafkatoHbase
101	Import MYSQL to HIVE(DX)
104	MYSQL to HIVE
105	HIVE to MYSQL
106	SQL SERVER to HIVE
107	HIVE to SQL SERVER
108	ORACLE to HIVE
109	HIVE to ORACLE
111	HIVE to MYSQL (NEW)
112	HIVE to PG
113	HIVE to PHOENIX
118	MYSQL to HDFS
119	PG to HDFS
120	ORACLE to HDFS
121	Data Quality
10000	Custom Definition Business
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskTypeDesc Task Type Description, where the corresponding relationship between Task Type ID and Task Type Description is as follows
20	Universal Data Synchronization Task
21	JDBC SQL
22	Tbase
25	Data ETL
30	Python
31	PySpark
34	Hive SQL
35	Shell
36	Spark SQL
37	HDFS to HBase
38	SHELL
39	Spark
45	DATA_QUALITY
55	THIVE to MySQL
56	THIVE to PostgreSQL
66	HDFS to PostgreSQL
67	HDFS to Oracle
68	HDFS to MySQL
69	FTP to HDFS
70	HIVE SQL
72	HIVE to HDFS
75	HDFS to HIVE
81	Python SQL Script
82	Spark Scala Computation
83	Wormhole Task
84	Verify Reconciliation File
85	HDFS to THIVE
86	TDW to HDFS
87	HDFS to TDW
88	Verify Reconciliation File
91	FLINK Task
92	MapReduce
98	custom topology
99	kafkatoHDFS
100	kafkatoHbase
101	Import MYSQL to HIVE(DX)
104	MYSQL to HIVE
105	HIVE to MYSQL
106	SQL SERVER to HIVE
107	HIVE to SQL SERVER
108	ORACLE to HIVE
109	HIVE to ORACLE
111	HIVE to MYSQL (NEW)
112	HIVE to PG
113	HIVE to PHOENIX
118	MYSQL to HDFS
119	PG to HDFS
120	ORACLE to HDFS
121	Data Quality
10000	Custom Definition Business
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskTypeDesc() const;

                    /**
                     * 设置Task Type Description, where the corresponding relationship between Task Type ID and Task Type Description is as follows
20	Universal Data Synchronization Task
21	JDBC SQL
22	Tbase
25	Data ETL
30	Python
31	PySpark
34	Hive SQL
35	Shell
36	Spark SQL
37	HDFS to HBase
38	SHELL
39	Spark
45	DATA_QUALITY
55	THIVE to MySQL
56	THIVE to PostgreSQL
66	HDFS to PostgreSQL
67	HDFS to Oracle
68	HDFS to MySQL
69	FTP to HDFS
70	HIVE SQL
72	HIVE to HDFS
75	HDFS to HIVE
81	Python SQL Script
82	Spark Scala Computation
83	Wormhole Task
84	Verify Reconciliation File
85	HDFS to THIVE
86	TDW to HDFS
87	HDFS to TDW
88	Verify Reconciliation File
91	FLINK Task
92	MapReduce
98	custom topology
99	kafkatoHDFS
100	kafkatoHbase
101	Import MYSQL to HIVE(DX)
104	MYSQL to HIVE
105	HIVE to MYSQL
106	SQL SERVER to HIVE
107	HIVE to SQL SERVER
108	ORACLE to HIVE
109	HIVE to ORACLE
111	HIVE to MYSQL (NEW)
112	HIVE to PG
113	HIVE to PHOENIX
118	MYSQL to HDFS
119	PG to HDFS
120	ORACLE to HDFS
121	Data Quality
10000	Custom Definition Business
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskTypeDesc Task Type Description, where the corresponding relationship between Task Type ID and Task Type Description is as follows
20	Universal Data Synchronization Task
21	JDBC SQL
22	Tbase
25	Data ETL
30	Python
31	PySpark
34	Hive SQL
35	Shell
36	Spark SQL
37	HDFS to HBase
38	SHELL
39	Spark
45	DATA_QUALITY
55	THIVE to MySQL
56	THIVE to PostgreSQL
66	HDFS to PostgreSQL
67	HDFS to Oracle
68	HDFS to MySQL
69	FTP to HDFS
70	HIVE SQL
72	HIVE to HDFS
75	HDFS to HIVE
81	Python SQL Script
82	Spark Scala Computation
83	Wormhole Task
84	Verify Reconciliation File
85	HDFS to THIVE
86	TDW to HDFS
87	HDFS to TDW
88	Verify Reconciliation File
91	FLINK Task
92	MapReduce
98	custom topology
99	kafkatoHDFS
100	kafkatoHbase
101	Import MYSQL to HIVE(DX)
104	MYSQL to HIVE
105	HIVE to MYSQL
106	SQL SERVER to HIVE
107	HIVE to SQL SERVER
108	ORACLE to HIVE
109	HIVE to ORACLE
111	HIVE to MYSQL (NEW)
112	HIVE to PG
113	HIVE to PHOENIX
118	MYSQL to HDFS
119	PG to HDFS
120	ORACLE to HDFS
121	Data Quality
10000	Custom Definition Business
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Folder NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return FolderName Folder NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置Folder NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _folderName Folder NameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return FolderId Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _folderId Folder IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Latest Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FirstSubmitTime Latest Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFirstSubmitTime() const;

                    /**
                     * 设置Latest Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _firstSubmitTime Latest Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取First Execution Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FirstRunTime First Execution Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFirstRunTime() const;

                    /**
                     * 设置First Execution Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _firstRunTime First Execution Time
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Scheduling Plan Display Description Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ScheduleDesc Scheduling Plan Display Description Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetScheduleDesc() const;

                    /**
                     * 设置Scheduling Plan Display Description Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _scheduleDesc Scheduling Plan Display Description Information
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InCharge Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _inCharge Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取Scheduling Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleUnit Scheduling Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置Scheduling Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleUnit Scheduling Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCycleUnit(const std::string& _cycleUnit);

                    /**
                     * 判断参数 CycleUnit 是否已赋值
                     * @return CycleUnit 是否已赋值
                     * 
                     */
                    bool CycleUnitHasBeenSet() const;

                    /**
                     * 获取Canvas X-axis Coordinate Point
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LeftCoordinate Canvas X-axis Coordinate Point
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetLeftCoordinate() const;

                    /**
                     * 设置Canvas X-axis Coordinate Point
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _leftCoordinate Canvas X-axis Coordinate Point
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLeftCoordinate(const double& _leftCoordinate);

                    /**
                     * 判断参数 LeftCoordinate 是否已赋值
                     * @return LeftCoordinate 是否已赋值
                     * 
                     */
                    bool LeftCoordinateHasBeenSet() const;

                    /**
                     * 获取Canvas Y-axis Coordinate Point
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TopCoordinate Canvas Y-axis Coordinate Point
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetTopCoordinate() const;

                    /**
                     * 设置Canvas Y-axis Coordinate Point
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _topCoordinate Canvas Y-axis Coordinate Point
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTopCoordinate(const double& _topCoordinate);

                    /**
                     * 判断参数 TopCoordinate 是否已赋值
                     * @return TopCoordinate 是否已赋值
                     * 
                     */
                    bool TopCoordinateHasBeenSet() const;

                    /**
                     * 获取Cross-Workflow Virtual Task Identifier; true indicates a cross-workflow task; false indicates an in-workflow task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return VirtualFlag Cross-Workflow Virtual Task Identifier; true indicates a cross-workflow task; false indicates an in-workflow task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetVirtualFlag() const;

                    /**
                     * 设置Cross-Workflow Virtual Task Identifier; true indicates a cross-workflow task; false indicates an in-workflow task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _virtualFlag Cross-Workflow Virtual Task Identifier; true indicates a cross-workflow task; false indicates an in-workflow task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVirtualFlag(const bool& _virtualFlag);

                    /**
                     * 判断参数 VirtualFlag 是否已赋值
                     * @return VirtualFlag 是否已赋值
                     * 
                     */
                    bool VirtualFlagHasBeenSet() const;

                    /**
                     * 获取Elastic Cycle Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskAction Elastic Cycle Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置Elastic Cycle Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskAction Elastic Cycle Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskAction(const std::string& _taskAction);

                    /**
                     * 判断参数 TaskAction 是否已赋值
                     * @return TaskAction 是否已赋值
                     * 
                     */
                    bool TaskActionHasBeenSet() const;

                    /**
                     * 获取DelayNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DelayTime DelayNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置DelayNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _delayTime DelayNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDelayTime(const uint64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取Execution Start Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutionStartTime Execution Start Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置Execution Start Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executionStartTime Execution Start Time
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Execution End Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutionEndTime Execution End Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置Execution End Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executionEndTime Execution End Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExecutionEndTime(const std::string& _executionEndTime);

                    /**
                     * 判断参数 ExecutionEndTime 是否已赋值
                     * @return ExecutionEndTime 是否已赋值
                     * 
                     */
                    bool ExecutionEndTimeHasBeenSet() const;

                    /**
                     * 获取Hierarchy
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Layer Hierarchy
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLayer() const;

                    /**
                     * 设置Hierarchy
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _layer Hierarchy
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLayer(const std::string& _layer);

                    /**
                     * 判断参数 Layer 是否已赋值
                     * @return Layer 是否已赋值
                     * 
                     */
                    bool LayerHasBeenSet() const;

                    /**
                     * 获取Source Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SourceServiceId Source Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSourceServiceId() const;

                    /**
                     * 设置Source Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sourceServiceId Source Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Source Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SourceServiceType Source Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSourceServiceType() const;

                    /**
                     * 设置Source Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sourceServiceType Source Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSourceServiceType(const std::string& _sourceServiceType);

                    /**
                     * 判断参数 SourceServiceType 是否已赋值
                     * @return SourceServiceType 是否已赋值
                     * 
                     */
                    bool SourceServiceTypeHasBeenSet() const;

                    /**
                     * 获取Target Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetServiceId Target Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTargetServiceId() const;

                    /**
                     * 设置Target Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetServiceId Target Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Target Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetServiceType Target Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTargetServiceType() const;

                    /**
                     * 设置Target Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetServiceType Target Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetServiceType(const std::string& _targetServiceType);

                    /**
                     * 判断参数 TargetServiceType 是否已赋值
                     * @return TargetServiceType 是否已赋值
                     * 
                     */
                    bool TargetServiceTypeHasBeenSet() const;

                    /**
                     * 获取Task Alert Types
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AlarmType Task Alert Types
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAlarmType() const;

                    /**
                     * 设置Task Alert Types
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _alarmType Task Alert Types
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlarmType(const std::string& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Project nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Project IdentifierNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * Task status, 'Y', 'F', 'O', 'T', 'INVALID' respectively indicate Scheduling In Progress, Stopped, Paused, Stopping, Expired
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task Type ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Task Type Description, where the corresponding relationship between Task Type ID and Task Type Description is as follows
20	Universal Data Synchronization Task
21	JDBC SQL
22	Tbase
25	Data ETL
30	Python
31	PySpark
34	Hive SQL
35	Shell
36	Spark SQL
37	HDFS to HBase
38	SHELL
39	Spark
45	DATA_QUALITY
55	THIVE to MySQL
56	THIVE to PostgreSQL
66	HDFS to PostgreSQL
67	HDFS to Oracle
68	HDFS to MySQL
69	FTP to HDFS
70	HIVE SQL
72	HIVE to HDFS
75	HDFS to HIVE
81	Python SQL Script
82	Spark Scala Computation
83	Wormhole Task
84	Verify Reconciliation File
85	HDFS to THIVE
86	TDW to HDFS
87	HDFS to TDW
88	Verify Reconciliation File
91	FLINK Task
92	MapReduce
98	custom topology
99	kafkatoHDFS
100	kafkatoHbase
101	Import MYSQL to HIVE(DX)
104	MYSQL to HIVE
105	HIVE to MYSQL
106	SQL SERVER to HIVE
107	HIVE to SQL SERVER
108	ORACLE to HIVE
109	HIVE to ORACLE
111	HIVE to MYSQL (NEW)
112	HIVE to PG
113	HIVE to PHOENIX
118	MYSQL to HDFS
119	PG to HDFS
120	ORACLE to HDFS
121	Data Quality
10000	Custom Definition Business
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskTypeDesc;
                    bool m_taskTypeDescHasBeenSet;

                    /**
                     * Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Folder NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Latest Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_firstSubmitTime;
                    bool m_firstSubmitTimeHasBeenSet;

                    /**
                     * First Execution Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_firstRunTime;
                    bool m_firstRunTimeHasBeenSet;

                    /**
                     * Scheduling Plan Display Description Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_scheduleDesc;
                    bool m_scheduleDescHasBeenSet;

                    /**
                     * Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * Scheduling Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * Canvas X-axis Coordinate Point
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_leftCoordinate;
                    bool m_leftCoordinateHasBeenSet;

                    /**
                     * Canvas Y-axis Coordinate Point
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_topCoordinate;
                    bool m_topCoordinateHasBeenSet;

                    /**
                     * Cross-Workflow Virtual Task Identifier; true indicates a cross-workflow task; false indicates an in-workflow task
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_virtualFlag;
                    bool m_virtualFlagHasBeenSet;

                    /**
                     * Elastic Cycle Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * DelayNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * Execution Start Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * Execution End Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * Hierarchy
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_layer;
                    bool m_layerHasBeenSet;

                    /**
                     * Source Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sourceServiceId;
                    bool m_sourceServiceIdHasBeenSet;

                    /**
                     * Source Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sourceServiceType;
                    bool m_sourceServiceTypeHasBeenSet;

                    /**
                     * Target Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_targetServiceId;
                    bool m_targetServiceIdHasBeenSet;

                    /**
                     * Target Data Source Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_targetServiceType;
                    bool m_targetServiceTypeHasBeenSet;

                    /**
                     * Task Alert Types
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKCANVASDTO_H_
