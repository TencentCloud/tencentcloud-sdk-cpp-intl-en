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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMTASKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DataTransformResouceInfo.h>
#include <tencentcloud/cls/v20201016/model/DataTransformSqlDataSource.h>
#include <tencentcloud/cls/v20201016/model/EnvInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Basic information of a data processing task
                */
                class DataTransformTaskInfo : public AbstractModel
                {
                public:
                    DataTransformTaskInfo();
                    ~DataTransformTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data processing task name
                     * @return Name Data processing task name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Data processing task name
                     * @param _name Data processing task name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Data processing task ID
                     * @return TaskId Data processing task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Data processing task ID
                     * @param _taskId Data processing task ID
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
                     * 获取Task status. Valid values: 1 (enabled) and 2 (disabled).
                     * @return EnableFlag Task status. Valid values: 1 (enabled) and 2 (disabled).
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置Task status. Valid values: 1 (enabled) and 2 (disabled).
                     * @param _enableFlag Task status. Valid values: 1 (enabled) and 2 (disabled).
                     * 
                     */
                    void SetEnableFlag(const int64_t& _enableFlag);

                    /**
                     * 判断参数 EnableFlag 是否已赋值
                     * @return EnableFlag 是否已赋值
                     * 
                     */
                    bool EnableFlagHasBeenSet() const;

                    /**
                     * 获取Processing task type, 1: DSL (processing task using custom language), 2: SQL (processing task using SQL)
                     * @return Type Processing task type, 1: DSL (processing task using custom language), 2: SQL (processing task using SQL)
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Processing task type, 1: DSL (processing task using custom language), 2: SQL (processing task using SQL)
                     * @param _type Processing task type, 1: DSL (processing task using custom language), 2: SQL (processing task using SQL)
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Source log topic
                     * @return SrcTopicId Source log topic
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置Source log topic
                     * @param _srcTopicId Source log topic
                     * 
                     */
                    void SetSrcTopicId(const std::string& _srcTopicId);

                    /**
                     * 判断参数 SrcTopicId 是否已赋值
                     * @return SrcTopicId 是否已赋值
                     * 
                     */
                    bool SrcTopicIdHasBeenSet() const;

                    /**
                     * 获取Current task status. Valid values: 1 (preparing), 2 (in progress), 3 (being stopped), and 4 (stopped).
                     * @return Status Current task status. Valid values: 1 (preparing), 2 (in progress), 3 (being stopped), and 4 (stopped).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Current task status. Valid values: 1 (preparing), 2 (in progress), 3 (being stopped), and 4 (stopped).
                     * @param _status Current task status. Valid values: 1 (preparing), 2 (in progress), 3 (being stopped), and 4 (stopped).
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
                     * 获取Creation time.
Time format: yyyy-MM-dd HH:mm:ss
                     * @return CreateTime Creation time.
Time format: yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
Time format: yyyy-MM-dd HH:mm:ss
                     * @param _createTime Creation time.
Time format: yyyy-MM-dd HH:mm:ss
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
                     * 获取Last modification time
Time format: yyyy-MM-dd HH:mm:ss
                     * @return UpdateTime Last modification time
Time format: yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modification time
Time format: yyyy-MM-dd HH:mm:ss
                     * @param _updateTime Last modification time
Time format: yyyy-MM-dd HH:mm:ss
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
                     * 获取Last enabled time. Modify this time if the cluster needs to be rebuilt.
Time format: yyyy-MM-dd HH:mm:ss
                     * @return LastEnableTime Last enabled time. Modify this time if the cluster needs to be rebuilt.
Time format: yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetLastEnableTime() const;

                    /**
                     * 设置Last enabled time. Modify this time if the cluster needs to be rebuilt.
Time format: yyyy-MM-dd HH:mm:ss
                     * @param _lastEnableTime Last enabled time. Modify this time if the cluster needs to be rebuilt.
Time format: yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetLastEnableTime(const std::string& _lastEnableTime);

                    /**
                     * 判断参数 LastEnableTime 是否已赋值
                     * @return LastEnableTime 是否已赋值
                     * 
                     */
                    bool LastEnableTimeHasBeenSet() const;

                    /**
                     * 获取Log topic name
                     * @return SrcTopicName Log topic name
                     * 
                     */
                    std::string GetSrcTopicName() const;

                    /**
                     * 设置Log topic name
                     * @param _srcTopicName Log topic name
                     * 
                     */
                    void SetSrcTopicName(const std::string& _srcTopicName);

                    /**
                     * 判断参数 SrcTopicName 是否已赋值
                     * @return SrcTopicName 是否已赋值
                     * 
                     */
                    bool SrcTopicNameHasBeenSet() const;

                    /**
                     * 获取Logset ID
                     * @return LogsetId Logset ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID
                     * @param _logsetId Logset ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Target topic ID and alias of the data processing task
                     * @return DstResources Target topic ID and alias of the data processing task
                     * 
                     */
                    std::vector<DataTransformResouceInfo> GetDstResources() const;

                    /**
                     * 设置Target topic ID and alias of the data processing task
                     * @param _dstResources Target topic ID and alias of the data processing task
                     * 
                     */
                    void SetDstResources(const std::vector<DataTransformResouceInfo>& _dstResources);

                    /**
                     * 判断参数 DstResources 是否已赋值
                     * @return DstResources 是否已赋值
                     * 
                     */
                    bool DstResourcesHasBeenSet() const;

                    /**
                     * 获取Processing logic function.
                     * @return EtlContent Processing logic function.
                     * 
                     */
                    std::string GetEtlContent() const;

                    /**
                     * 设置Processing logic function.
                     * @param _etlContent Processing logic function.
                     * 
                     */
                    void SetEtlContent(const std::string& _etlContent);

                    /**
                     * 判断参数 EtlContent 是否已赋值
                     * @return EtlContent 是否已赋值
                     * 
                     */
                    bool EtlContentHasBeenSet() const;

                    /**
                     * 获取Fallback Topic ID
                     * @return BackupTopicID Fallback Topic ID
                     * 
                     */
                    std::string GetBackupTopicID() const;

                    /**
                     * 设置Fallback Topic ID
                     * @param _backupTopicID Fallback Topic ID
                     * 
                     */
                    void SetBackupTopicID(const std::string& _backupTopicID);

                    /**
                     * 判断参数 BackupTopicID 是否已赋值
                     * @return BackupTopicID 是否已赋值
                     * 
                     */
                    bool BackupTopicIDHasBeenSet() const;

                    /**
                     * 获取Whether to discard log data after the limit is exceeded
                     * @return BackupGiveUpData Whether to discard log data after the limit is exceeded
                     * 
                     */
                    bool GetBackupGiveUpData() const;

                    /**
                     * 设置Whether to discard log data after the limit is exceeded
                     * @param _backupGiveUpData Whether to discard log data after the limit is exceeded
                     * 
                     */
                    void SetBackupGiveUpData(const bool& _backupGiveUpData);

                    /**
                     * 判断参数 BackupGiveUpData 是否已赋值
                     * @return BackupGiveUpData 是否已赋值
                     * 
                     */
                    bool BackupGiveUpDataHasBeenSet() const;

                    /**
                     * 获取Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     * @return HasServicesLog Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     * @param _hasServicesLog Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                    /**
                     * 获取Number of the target log topics of a task.
                     * @return TaskDstCount Number of the target log topics of a task.
                     * 
                     */
                    uint64_t GetTaskDstCount() const;

                    /**
                     * 设置Number of the target log topics of a task.
                     * @param _taskDstCount Number of the target log topics of a task.
                     * 
                     */
                    void SetTaskDstCount(const uint64_t& _taskDstCount);

                    /**
                     * 判断参数 TaskDstCount 是否已赋值
                     * @return TaskDstCount 是否已赋值
                     * 
                     */
                    bool TaskDstCountHasBeenSet() const;

                    /**
                     * 获取Data processing type. Valid values: 0: standard processing task; 1: pre-processing task.
                     * @return DataTransformType Data processing type. Valid values: 0: standard processing task; 1: pre-processing task.
                     * 
                     */
                    uint64_t GetDataTransformType() const;

                    /**
                     * 设置Data processing type. Valid values: 0: standard processing task; 1: pre-processing task.
                     * @param _dataTransformType Data processing type. Valid values: 0: standard processing task; 1: pre-processing task.
                     * 
                     */
                    void SetDataTransformType(const uint64_t& _dataTransformType);

                    /**
                     * 判断参数 DataTransformType 是否已赋值
                     * @return DataTransformType 是否已赋值
                     * 
                     */
                    bool DataTransformTypeHasBeenSet() const;

                    /**
                     * 获取Whether to keep the failure log status. Valid values: 1: no; 2: yes.
                     * @return KeepFailureLog Whether to keep the failure log status. Valid values: 1: no; 2: yes.
                     * 
                     */
                    uint64_t GetKeepFailureLog() const;

                    /**
                     * 设置Whether to keep the failure log status. Valid values: 1: no; 2: yes.
                     * @param _keepFailureLog Whether to keep the failure log status. Valid values: 1: no; 2: yes.
                     * 
                     */
                    void SetKeepFailureLog(const uint64_t& _keepFailureLog);

                    /**
                     * 判断参数 KeepFailureLog 是否已赋值
                     * @return KeepFailureLog 是否已赋值
                     * 
                     */
                    bool KeepFailureLogHasBeenSet() const;

                    /**
                     * 获取Field name of a failed log.
                     * @return FailureLogKey Field name of a failed log.
                     * 
                     */
                    std::string GetFailureLogKey() const;

                    /**
                     * 设置Field name of a failed log.
                     * @param _failureLogKey Field name of a failed log.
                     * 
                     */
                    void SetFailureLogKey(const std::string& _failureLogKey);

                    /**
                     * 判断参数 FailureLogKey 是否已赋值
                     * @return FailureLogKey 是否已赋值
                     * 
                     */
                    bool FailureLogKeyHasBeenSet() const;

                    /**
                     * 获取Specify the start time of data processing (a second-level timestamp).
-For any time range within the log topic lifecycle, if it exceeds the lifecycle, only process the part with data within the lifecycle.
                     * @return ProcessFromTimestamp Specify the start time of data processing (a second-level timestamp).
-For any time range within the log topic lifecycle, if it exceeds the lifecycle, only process the part with data within the lifecycle.
                     * 
                     */
                    uint64_t GetProcessFromTimestamp() const;

                    /**
                     * 设置Specify the start time of data processing (a second-level timestamp).
-For any time range within the log topic lifecycle, if it exceeds the lifecycle, only process the part with data within the lifecycle.
                     * @param _processFromTimestamp Specify the start time of data processing (a second-level timestamp).
-For any time range within the log topic lifecycle, if it exceeds the lifecycle, only process the part with data within the lifecycle.
                     * 
                     */
                    void SetProcessFromTimestamp(const uint64_t& _processFromTimestamp);

                    /**
                     * 判断参数 ProcessFromTimestamp 是否已赋值
                     * @return ProcessFromTimestamp 是否已赋值
                     * 
                     */
                    bool ProcessFromTimestampHasBeenSet() const;

                    /**
                     * 获取Specify the end time of data processing, a Unix second-level timestamp.
1. Cannot specify a future time
2. If left blank, it means that the task will run constantly.
                     * @return ProcessToTimestamp Specify the end time of data processing, a Unix second-level timestamp.
1. Cannot specify a future time
2. If left blank, it means that the task will run constantly.
                     * 
                     */
                    uint64_t GetProcessToTimestamp() const;

                    /**
                     * 设置Specify the end time of data processing, a Unix second-level timestamp.
1. Cannot specify a future time
2. If left blank, it means that the task will run constantly.
                     * @param _processToTimestamp Specify the end time of data processing, a Unix second-level timestamp.
1. Cannot specify a future time
2. If left blank, it means that the task will run constantly.
                     * 
                     */
                    void SetProcessToTimestamp(const uint64_t& _processToTimestamp);

                    /**
                     * 判断参数 ProcessToTimestamp 是否已赋值
                     * @return ProcessToTimestamp 是否已赋值
                     * 
                     */
                    bool ProcessToTimestampHasBeenSet() const;

                    /**
                     * 获取sql data source information
                     * @return DataTransformSqlDataSources sql data source information
                     * 
                     */
                    std::vector<DataTransformSqlDataSource> GetDataTransformSqlDataSources() const;

                    /**
                     * 设置sql data source information
                     * @param _dataTransformSqlDataSources sql data source information
                     * 
                     */
                    void SetDataTransformSqlDataSources(const std::vector<DataTransformSqlDataSource>& _dataTransformSqlDataSources);

                    /**
                     * 判断参数 DataTransformSqlDataSources 是否已赋值
                     * @return DataTransformSqlDataSources 是否已赋值
                     * 
                     */
                    bool DataTransformSqlDataSourcesHasBeenSet() const;

                    /**
                     * 获取Environment variable.
                     * @return EnvInfos Environment variable.
                     * 
                     */
                    std::vector<EnvInfo> GetEnvInfos() const;

                    /**
                     * 设置Environment variable.
                     * @param _envInfos Environment variable.
                     * 
                     */
                    void SetEnvInfos(const std::vector<EnvInfo>& _envInfos);

                    /**
                     * 判断参数 EnvInfos 是否已赋值
                     * @return EnvInfos 是否已赋值
                     * 
                     */
                    bool EnvInfosHasBeenSet() const;

                private:

                    /**
                     * Data processing task name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Data processing task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task status. Valid values: 1 (enabled) and 2 (disabled).
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * Processing task type, 1: DSL (processing task using custom language), 2: SQL (processing task using SQL)
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Source log topic
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * Current task status. Valid values: 1 (preparing), 2 (in progress), 3 (being stopped), and 4 (stopped).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time.
Time format: yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modification time
Time format: yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Last enabled time. Modify this time if the cluster needs to be rebuilt.
Time format: yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_lastEnableTime;
                    bool m_lastEnableTimeHasBeenSet;

                    /**
                     * Log topic name
                     */
                    std::string m_srcTopicName;
                    bool m_srcTopicNameHasBeenSet;

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Target topic ID and alias of the data processing task
                     */
                    std::vector<DataTransformResouceInfo> m_dstResources;
                    bool m_dstResourcesHasBeenSet;

                    /**
                     * Processing logic function.
                     */
                    std::string m_etlContent;
                    bool m_etlContentHasBeenSet;

                    /**
                     * Fallback Topic ID
                     */
                    std::string m_backupTopicID;
                    bool m_backupTopicIDHasBeenSet;

                    /**
                     * Whether to discard log data after the limit is exceeded
                     */
                    bool m_backupGiveUpData;
                    bool m_backupGiveUpDataHasBeenSet;

                    /**
                     * Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * Number of the target log topics of a task.
                     */
                    uint64_t m_taskDstCount;
                    bool m_taskDstCountHasBeenSet;

                    /**
                     * Data processing type. Valid values: 0: standard processing task; 1: pre-processing task.
                     */
                    uint64_t m_dataTransformType;
                    bool m_dataTransformTypeHasBeenSet;

                    /**
                     * Whether to keep the failure log status. Valid values: 1: no; 2: yes.
                     */
                    uint64_t m_keepFailureLog;
                    bool m_keepFailureLogHasBeenSet;

                    /**
                     * Field name of a failed log.
                     */
                    std::string m_failureLogKey;
                    bool m_failureLogKeyHasBeenSet;

                    /**
                     * Specify the start time of data processing (a second-level timestamp).
-For any time range within the log topic lifecycle, if it exceeds the lifecycle, only process the part with data within the lifecycle.
                     */
                    uint64_t m_processFromTimestamp;
                    bool m_processFromTimestampHasBeenSet;

                    /**
                     * Specify the end time of data processing, a Unix second-level timestamp.
1. Cannot specify a future time
2. If left blank, it means that the task will run constantly.
                     */
                    uint64_t m_processToTimestamp;
                    bool m_processToTimestampHasBeenSet;

                    /**
                     * sql data source information
                     */
                    std::vector<DataTransformSqlDataSource> m_dataTransformSqlDataSources;
                    bool m_dataTransformSqlDataSourcesHasBeenSet;

                    /**
                     * Environment variable.
                     */
                    std::vector<EnvInfo> m_envInfos;
                    bool m_envInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMTASKINFO_H_
