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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONTASKINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeInfo.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeMapping.h>
#include <tencentcloud/wedata/v20210820/model/OfflineTaskAddParam.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Integration Tasks
                */
                class IntegrationTaskInfo : public AbstractModel
                {
                public:
                    IntegrationTaskInfo();
                    ~IntegrationTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task Name
                     * @return TaskName Task Name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task Name
                     * @param _taskName Task Name
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
                     * 获取Task Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Description Task Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Task Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _description Task Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Synchronization Type 1. Solution (Whole Database Migration), 2. Single Table Synchronization
                     * @return SyncType Synchronization Type 1. Solution (Whole Database Migration), 2. Single Table Synchronization
                     * 
                     */
                    int64_t GetSyncType() const;

                    /**
                     * 设置Synchronization Type 1. Solution (Whole Database Migration), 2. Single Table Synchronization
                     * @param _syncType Synchronization Type 1. Solution (Whole Database Migration), 2. Single Table Synchronization
                     * 
                     */
                    void SetSyncType(const int64_t& _syncType);

                    /**
                     * 判断参数 SyncType 是否已赋值
                     * @return SyncType 是否已赋值
                     * 
                     */
                    bool SyncTypeHasBeenSet() const;

                    /**
                     * 获取201. Real-time, 202. Offline
                     * @return TaskType 201. Real-time, 202. Offline
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置201. Real-time, 202. Offline
                     * @param _taskType 201. Real-time, 202. Offline
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Workflow ID of Task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkflowId Workflow ID of Task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID of Task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _workflowId Workflow ID of Task
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Task Scheduling ID (oceanus or us etc. Job ID), not a mandatory field
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ScheduleTaskId Task Scheduling ID (oceanus or us etc. Job ID), not a mandatory field
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetScheduleTaskId() const;

                    /**
                     * 设置Task Scheduling ID (oceanus or us etc. Job ID), not a mandatory field
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _scheduleTaskId Task Scheduling ID (oceanus or us etc. Job ID), not a mandatory field
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetScheduleTaskId(const std::string& _scheduleTaskId);

                    /**
                     * 判断参数 ScheduleTaskId 是否已赋值
                     * @return ScheduleTaskId 是否已赋值
                     * 
                     */
                    bool ScheduleTaskIdHasBeenSet() const;

                    /**
                     * 获取InLong Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskGroupId InLong Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskGroupId() const;

                    /**
                     * 设置InLong Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskGroupId InLong Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskGroupId(const std::string& _taskGroupId);

                    /**
                     * 判断参数 TaskGroupId 是否已赋值
                     * @return TaskGroupId 是否已赋值
                     * 
                     */
                    bool TaskGroupIdHasBeenSet() const;

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
                     * 获取Creator UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreatorUin Creator UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置Creator UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _creatorUin Creator UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取Operator UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OperatorUin Operator UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOperatorUin() const;

                    /**
                     * 设置Operator UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _operatorUin Operator UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOperatorUin(const std::string& _operatorUin);

                    /**
                     * 判断参数 OperatorUin 是否已赋值
                     * @return OperatorUin 是否已赋值
                     * 
                     */
                    bool OperatorUinHasBeenSet() const;

                    /**
                     * 获取owner uin
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerUin owner uin
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置owner uin
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerUin owner uin
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Application ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AppId Application ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置Application ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _appId Application ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取1: not started | 2: In operation | 3: Running | 4: Suspension | 5: Task Stopping | 6: Stop | 7: Execution Failure | 20: Abnormal | 21: Unknown |
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Status 1: not started | 2: In operation | 3: Running | 4: Suspension | 5: Task Stopping | 6: Stop | 7: Execution Failure | 20: Abnormal | 21: Unknown |
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置1: not started | 2: In operation | 3: Running | 4: Suspension | 5: Task Stopping | 6: Stop | 7: Execution Failure | 20: Abnormal | 21: Unknown |
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _status 1: not started | 2: In operation | 3: Running | 4: Suspension | 5: Task Stopping | 6: Stop | 7: Execution Failure | 20: Abnormal | 21: Unknown |
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Node list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Nodes Node list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<IntegrationNodeInfo> GetNodes() const;

                    /**
                     * 设置Node list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _nodes Node list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNodes(const std::vector<IntegrationNodeInfo>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取Execution Resource ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutorId Execution Resource ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutorId() const;

                    /**
                     * 设置Execution Resource ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executorId Execution Resource ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExecutorId(const std::string& _executorId);

                    /**
                     * 判断参数 ExecutorId 是否已赋值
                     * @return ExecutorId 是否已赋值
                     * 
                     */
                    bool ExecutorIdHasBeenSet() const;

                    /**
                     * 获取Task configuration information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Config Task configuration information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RecordField> GetConfig() const;

                    /**
                     * 设置Task configuration information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _config Task configuration information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetConfig(const std::vector<RecordField>& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Task extension configuration information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExtConfig Task extension configuration information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RecordField> GetExtConfig() const;

                    /**
                     * 设置Task extension configuration information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _extConfig Task extension configuration information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExtConfig(const std::vector<RecordField>& _extConfig);

                    /**
                     * 判断参数 ExtConfig 是否已赋值
                     * @return ExtConfig 是否已赋值
                     * 
                     */
                    bool ExtConfigHasBeenSet() const;

                    /**
                     * 获取Task execution context information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecuteContext Task execution context information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RecordField> GetExecuteContext() const;

                    /**
                     * 设置Task execution context information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executeContext Task execution context information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExecuteContext(const std::vector<RecordField>& _executeContext);

                    /**
                     * 判断参数 ExecuteContext 是否已赋值
                     * @return ExecuteContext 是否已赋值
                     * 
                     */
                    bool ExecuteContextHasBeenSet() const;

                    /**
                     * 获取Node Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Mappings Node Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<IntegrationNodeMapping> GetMappings() const;

                    /**
                     * 设置Node Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _mappings Node Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMappings(const std::vector<IntegrationNodeMapping>& _mappings);

                    /**
                     * 判断参数 Mappings 是否已赋值
                     * @return Mappings 是否已赋值
                     * 
                     */
                    bool MappingsHasBeenSet() const;

                    /**
                     * 获取Task configuration mode, 0: Canvas 1: Form 3: Script
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskMode Task configuration mode, 0: Canvas 1: Form 3: Script
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskMode() const;

                    /**
                     * 设置Task configuration mode, 0: Canvas 1: Form 3: Script
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskMode Task configuration mode, 0: Canvas 1: Form 3: Script
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskMode(const std::string& _taskMode);

                    /**
                     * 判断参数 TaskMode 是否已赋值
                     * @return TaskMode 是否已赋值
                     * 
                     */
                    bool TaskModeHasBeenSet() const;

                    /**
                     * 获取Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Incharge Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetIncharge() const;

                    /**
                     * 设置Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _incharge Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIncharge(const std::string& _incharge);

                    /**
                     * 判断参数 Incharge 是否已赋值
                     * @return Incharge 是否已赋值
                     * 
                     */
                    bool InchargeHasBeenSet() const;

                    /**
                     * 获取Offline new parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OfflineTaskAddEntity Offline new parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    OfflineTaskAddParam GetOfflineTaskAddEntity() const;

                    /**
                     * 设置Offline new parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _offlineTaskAddEntity Offline new parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOfflineTaskAddEntity(const OfflineTaskAddParam& _offlineTaskAddEntity);

                    /**
                     * 判断参数 OfflineTaskAddEntity 是否已赋值
                     * @return OfflineTaskAddEntity 是否已赋值
                     * 
                     */
                    bool OfflineTaskAddEntityHasBeenSet() const;

                    /**
                     * 获取group name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutorGroupName group name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置group name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executorGroupName group name
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取inlong manager url
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InLongManagerUrl inlong manager url
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInLongManagerUrl() const;

                    /**
                     * 设置inlong manager url
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _inLongManagerUrl inlong manager url
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInLongManagerUrl(const std::string& _inLongManagerUrl);

                    /**
                     * 判断参数 InLongManagerUrl 是否已赋值
                     * @return InLongManagerUrl 是否已赋值
                     * 
                     */
                    bool InLongManagerUrlHasBeenSet() const;

                    /**
                     * 获取stream id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InLongStreamId stream id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInLongStreamId() const;

                    /**
                     * 设置stream id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _inLongStreamId stream id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInLongStreamId(const std::string& _inLongStreamId);

                    /**
                     * 判断参数 InLongStreamId 是否已赋值
                     * @return InLongStreamId 是否已赋值
                     * 
                     */
                    bool InLongStreamIdHasBeenSet() const;

                    /**
                     * 获取version
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InLongManagerVersion version
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInLongManagerVersion() const;

                    /**
                     * 设置version
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _inLongManagerVersion version
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInLongManagerVersion(const std::string& _inLongManagerVersion);

                    /**
                     * 判断参数 InLongManagerVersion 是否已赋值
                     * @return InLongManagerVersion 是否已赋值
                     * 
                     */
                    bool InLongManagerVersionHasBeenSet() const;

                    /**
                     * 获取inlong dataproxy url
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DataProxyUrl inlong dataproxy url
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDataProxyUrl() const;

                    /**
                     * 设置inlong dataproxy url
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dataProxyUrl inlong dataproxy url
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDataProxyUrl(const std::vector<std::string>& _dataProxyUrl);

                    /**
                     * 判断参数 DataProxyUrl 是否已赋值
                     * @return DataProxyUrl 是否已赋值
                     * 
                     */
                    bool DataProxyUrlHasBeenSet() const;

                    /**
                     * 获取Whether the task version has been submitted for operation and maintenance
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Submit Whether the task version has been submitted for operation and maintenance
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetSubmit() const;

                    /**
                     * 设置Whether the task version has been submitted for operation and maintenance
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _submit Whether the task version has been submitted for operation and maintenance
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubmit(const bool& _submit);

                    /**
                     * 判断参数 Submit 是否已赋值
                     * @return Submit 是否已赋值
                     * 
                     */
                    bool SubmitHasBeenSet() const;

                    /**
                     * 获取Data Source Type: MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InputDatasourceType Data Source Type: MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInputDatasourceType() const;

                    /**
                     * 设置Data Source Type: MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _inputDatasourceType Data Source Type: MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInputDatasourceType(const std::string& _inputDatasourceType);

                    /**
                     * 判断参数 InputDatasourceType 是否已赋值
                     * @return InputDatasourceType 是否已赋值
                     * 
                     */
                    bool InputDatasourceTypeHasBeenSet() const;

                    /**
                     * 获取Data Source Type: MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OutputDatasourceType Data Source Type: MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOutputDatasourceType() const;

                    /**
                     * 设置Data Source Type: MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _outputDatasourceType Data Source Type: MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOutputDatasourceType(const std::string& _outputDatasourceType);

                    /**
                     * 判断参数 OutputDatasourceType 是否已赋值
                     * @return OutputDatasourceType 是否已赋值
                     * 
                     */
                    bool OutputDatasourceTypeHasBeenSet() const;

                    /**
                     * 获取Number of reads
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NumRecordsIn Number of reads
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetNumRecordsIn() const;

                    /**
                     * 设置Number of reads
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _numRecordsIn Number of reads
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNumRecordsIn(const int64_t& _numRecordsIn);

                    /**
                     * 判断参数 NumRecordsIn 是否已赋值
                     * @return NumRecordsIn 是否已赋值
                     * 
                     */
                    bool NumRecordsInHasBeenSet() const;

                    /**
                     * 获取Number of writes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NumRecordsOut Number of writes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetNumRecordsOut() const;

                    /**
                     * 设置Number of writes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _numRecordsOut Number of writes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNumRecordsOut(const int64_t& _numRecordsOut);

                    /**
                     * 判断参数 NumRecordsOut 是否已赋值
                     * @return NumRecordsOut 是否已赋值
                     * 
                     */
                    bool NumRecordsOutHasBeenSet() const;

                    /**
                     * 获取Read latency
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ReaderDelay Read latency
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetReaderDelay() const;

                    /**
                     * 设置Read latency
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _readerDelay Read latency
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetReaderDelay(const double& _readerDelay);

                    /**
                     * 判断参数 ReaderDelay 是否已赋值
                     * @return ReaderDelay 是否已赋值
                     * 
                     */
                    bool ReaderDelayHasBeenSet() const;

                    /**
                     * 获取Restart Times
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NumRestarts Restart Times
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetNumRestarts() const;

                    /**
                     * 设置Restart Times
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _numRestarts Restart Times
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNumRestarts(const int64_t& _numRestarts);

                    /**
                     * 判断参数 NumRestarts 是否已赋值
                     * @return NumRestarts 是否已赋值
                     * 
                     */
                    bool NumRestartsHasBeenSet() const;

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

                    /**
                     * 获取Task Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateTime Task Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Task Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateTime Task Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Last task run time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastRunTime Last task run time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLastRunTime() const;

                    /**
                     * 设置Last task run time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastRunTime Last task run time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastRunTime(const std::string& _lastRunTime);

                    /**
                     * 判断参数 LastRunTime 是否已赋值
                     * @return LastRunTime 是否已赋值
                     * 
                     */
                    bool LastRunTimeHasBeenSet() const;

                    /**
                     * 获取Task stop time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StopTime Task stop time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStopTime() const;

                    /**
                     * 设置Task stop time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _stopTime Task stop time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStopTime(const std::string& _stopTime);

                    /**
                     * 判断参数 StopTime 是否已赋值
                     * @return StopTime 是否已赋值
                     * 
                     */
                    bool StopTimeHasBeenSet() const;

                    /**
                     * 获取Job Submitted?
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return HasVersion Job Submitted?
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetHasVersion() const;

                    /**
                     * 设置Job Submitted?
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _hasVersion Job Submitted?
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHasVersion(const bool& _hasVersion);

                    /**
                     * 判断参数 HasVersion 是否已赋值
                     * @return HasVersion 是否已赋值
                     * 
                     */
                    bool HasVersionHasBeenSet() const;

                    /**
                     * 获取Is the task locked?
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Locked Is the task locked?
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetLocked() const;

                    /**
                     * 设置Is the task locked?
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _locked Is the task locked?
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLocked(const bool& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取Task Locked By
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Locker Task Locked By
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLocker() const;

                    /**
                     * 设置Task Locked By
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _locker Task Locked By
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLocker(const std::string& _locker);

                    /**
                     * 判断参数 Locker 是否已赋值
                     * @return Locker 是否已赋值
                     * 
                     */
                    bool LockerHasBeenSet() const;

                    /**
                     * 获取Resource Consumption
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RunningCu Resource Consumption
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetRunningCu() const;

                    /**
                     * 设置Resource Consumption
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _runningCu Resource Consumption
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRunningCu(const double& _runningCu);

                    /**
                     * 判断参数 RunningCu 是否已赋值
                     * @return RunningCu 是否已赋值
                     * 
                     */
                    bool RunningCuHasBeenSet() const;

                    /**
                     * 获取Associated Alert Rules for the Task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskAlarmRegularList Associated Alert Rules for the Task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTaskAlarmRegularList() const;

                    /**
                     * 设置Associated Alert Rules for the Task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskAlarmRegularList Associated Alert Rules for the Task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskAlarmRegularList(const std::vector<std::string>& _taskAlarmRegularList);

                    /**
                     * 判断参数 TaskAlarmRegularList 是否已赋值
                     * @return TaskAlarmRegularList 是否已赋值
                     * 
                     */
                    bool TaskAlarmRegularListHasBeenSet() const;

                    /**
                     * 获取Real-time task resource layering status: 0:Ongoing,1:Success,2:Failed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SwitchResource Real-time task resource layering status: 0:Ongoing,1:Success,2:Failed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetSwitchResource() const;

                    /**
                     * 设置Real-time task resource layering status: 0:Ongoing,1:Success,2:Failed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _switchResource Real-time task resource layering status: 0:Ongoing,1:Success,2:Failed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSwitchResource(const int64_t& _switchResource);

                    /**
                     * 判断参数 SwitchResource 是否已赋值
                     * @return SwitchResource 是否已赋值
                     * 
                     */
                    bool SwitchResourceHasBeenSet() const;

                    /**
                     * 获取Real-time task reading phase: 0:Full Full,1:Partial Full,2:Full Incremental
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ReadPhase Real-time task reading phase: 0:Full Full,1:Partial Full,2:Full Incremental
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetReadPhase() const;

                    /**
                     * 设置Real-time task reading phase: 0:Full Full,1:Partial Full,2:Full Incremental
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _readPhase Real-time task reading phase: 0:Full Full,1:Partial Full,2:Full Incremental
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetReadPhase(const int64_t& _readPhase);

                    /**
                     * 判断参数 ReadPhase 是否已赋值
                     * @return ReadPhase 是否已赋值
                     * 
                     */
                    bool ReadPhaseHasBeenSet() const;

                    /**
                     * 获取Real-time Task Version Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceVersion Real-time Task Version Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetInstanceVersion() const;

                    /**
                     * 设置Real-time Task Version Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceVersion Real-time Task Version Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceVersion(const int64_t& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取Offline task imported into orchestration space Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ArrangeSpaceTaskId Offline task imported into orchestration space Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetArrangeSpaceTaskId() const;

                    /**
                     * 设置Offline task imported into orchestration space Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _arrangeSpaceTaskId Offline task imported into orchestration space Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetArrangeSpaceTaskId(const std::string& _arrangeSpaceTaskId);

                    /**
                     * 判断参数 ArrangeSpaceTaskId 是否已赋值
                     * @return ArrangeSpaceTaskId 是否已赋值
                     * 
                     */
                    bool ArrangeSpaceTaskIdHasBeenSet() const;

                    /**
                     * 获取Offline Task Status Differentiation 1.Not Submitted 2.Submitted 3.Exported
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OfflineTaskStatus Offline Task Status Differentiation 1.Not Submitted 2.Submitted 3.Exported
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetOfflineTaskStatus() const;

                    /**
                     * 设置Offline Task Status Differentiation 1.Not Submitted 2.Submitted 3.Exported
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _offlineTaskStatus Offline Task Status Differentiation 1.Not Submitted 2.Submitted 3.Exported
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOfflineTaskStatus(const int64_t& _offlineTaskStatus);

                    /**
                     * 判断参数 OfflineTaskStatus 是否已赋值
                     * @return OfflineTaskStatus 是否已赋值
                     * 
                     */
                    bool OfflineTaskStatusHasBeenSet() const;

                private:

                    /**
                     * Task Name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Task Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Synchronization Type 1. Solution (Whole Database Migration), 2. Single Table Synchronization
                     */
                    int64_t m_syncType;
                    bool m_syncTypeHasBeenSet;

                    /**
                     * 201. Real-time, 202. Offline
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Workflow ID of Task
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task Scheduling ID (oceanus or us etc. Job ID), not a mandatory field
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_scheduleTaskId;
                    bool m_scheduleTaskIdHasBeenSet;

                    /**
                     * InLong Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskGroupId;
                    bool m_taskGroupIdHasBeenSet;

                    /**
                     * Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Creator UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * Operator UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_operatorUin;
                    bool m_operatorUinHasBeenSet;

                    /**
                     * owner uin
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Application ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 1: not started | 2: In operation | 3: Running | 4: Suspension | 5: Task Stopping | 6: Stop | 7: Execution Failure | 20: Abnormal | 21: Unknown |
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Node list
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<IntegrationNodeInfo> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * Execution Resource ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executorId;
                    bool m_executorIdHasBeenSet;

                    /**
                     * Task configuration information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<RecordField> m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Task extension configuration information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<RecordField> m_extConfig;
                    bool m_extConfigHasBeenSet;

                    /**
                     * Task execution context information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<RecordField> m_executeContext;
                    bool m_executeContextHasBeenSet;

                    /**
                     * Node Mapping
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<IntegrationNodeMapping> m_mappings;
                    bool m_mappingsHasBeenSet;

                    /**
                     * Task configuration mode, 0: Canvas 1: Form 3: Script
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskMode;
                    bool m_taskModeHasBeenSet;

                    /**
                     * Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_incharge;
                    bool m_inchargeHasBeenSet;

                    /**
                     * Offline new parameters
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    OfflineTaskAddParam m_offlineTaskAddEntity;
                    bool m_offlineTaskAddEntityHasBeenSet;

                    /**
                     * group name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * inlong manager url
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_inLongManagerUrl;
                    bool m_inLongManagerUrlHasBeenSet;

                    /**
                     * stream id
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_inLongStreamId;
                    bool m_inLongStreamIdHasBeenSet;

                    /**
                     * version
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_inLongManagerVersion;
                    bool m_inLongManagerVersionHasBeenSet;

                    /**
                     * inlong dataproxy url
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_dataProxyUrl;
                    bool m_dataProxyUrlHasBeenSet;

                    /**
                     * Whether the task version has been submitted for operation and maintenance
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_submit;
                    bool m_submitHasBeenSet;

                    /**
                     * Data Source Type: MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_inputDatasourceType;
                    bool m_inputDatasourceTypeHasBeenSet;

                    /**
                     * Data Source Type: MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_outputDatasourceType;
                    bool m_outputDatasourceTypeHasBeenSet;

                    /**
                     * Number of reads
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_numRecordsIn;
                    bool m_numRecordsInHasBeenSet;

                    /**
                     * Number of writes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_numRecordsOut;
                    bool m_numRecordsOutHasBeenSet;

                    /**
                     * Read latency
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_readerDelay;
                    bool m_readerDelayHasBeenSet;

                    /**
                     * Restart Times
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_numRestarts;
                    bool m_numRestartsHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Last task run time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_lastRunTime;
                    bool m_lastRunTimeHasBeenSet;

                    /**
                     * Task stop time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_stopTime;
                    bool m_stopTimeHasBeenSet;

                    /**
                     * Job Submitted?
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_hasVersion;
                    bool m_hasVersionHasBeenSet;

                    /**
                     * Is the task locked?
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * Task Locked By
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_locker;
                    bool m_lockerHasBeenSet;

                    /**
                     * Resource Consumption
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_runningCu;
                    bool m_runningCuHasBeenSet;

                    /**
                     * Associated Alert Rules for the Task
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_taskAlarmRegularList;
                    bool m_taskAlarmRegularListHasBeenSet;

                    /**
                     * Real-time task resource layering status: 0:Ongoing,1:Success,2:Failed
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_switchResource;
                    bool m_switchResourceHasBeenSet;

                    /**
                     * Real-time task reading phase: 0:Full Full,1:Partial Full,2:Full Incremental
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_readPhase;
                    bool m_readPhaseHasBeenSet;

                    /**
                     * Real-time Task Version Number
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * Offline task imported into orchestration space Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_arrangeSpaceTaskId;
                    bool m_arrangeSpaceTaskIdHasBeenSet;

                    /**
                     * Offline Task Status Differentiation 1.Not Submitted 2.Submitted 3.Exported
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_offlineTaskStatus;
                    bool m_offlineTaskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONTASKINFO_H_
