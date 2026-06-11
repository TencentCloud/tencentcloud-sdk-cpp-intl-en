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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDATATRANSFORMREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDATATRANSFORMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DataTransformResouceInfo.h>
#include <tencentcloud/cls/v20201016/model/PreviewLogStatistic.h>
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
                * CreateDataTransform request structure.
                */
                class CreateDataTransformRequest : public AbstractModel
                {
                public:
                    CreateDataTransformRequest();
                    ~CreateDataTransformRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task type. 1: Specify topic; 2: Dynamic creation. For details, please refer to Creating Processing Task Document (https://intl.cloud.tencent.com/document/product/614/63940?from_cn_redirect=1).
                     * @return FuncType Task type. 1: Specify topic; 2: Dynamic creation. For details, please refer to Creating Processing Task Document (https://intl.cloud.tencent.com/document/product/614/63940?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetFuncType() const;

                    /**
                     * 设置Task type. 1: Specify topic; 2: Dynamic creation. For details, please refer to Creating Processing Task Document (https://intl.cloud.tencent.com/document/product/614/63940?from_cn_redirect=1).
                     * @param _funcType Task type. 1: Specify topic; 2: Dynamic creation. For details, please refer to Creating Processing Task Document (https://intl.cloud.tencent.com/document/product/614/63940?from_cn_redirect=1).
                     * 
                     */
                    void SetFuncType(const int64_t& _funcType);

                    /**
                     * 判断参数 FuncType 是否已赋值
                     * @return FuncType 是否已赋值
                     * 
                     */
                    bool FuncTypeHasBeenSet() const;

                    /**
                     * 获取Log topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @return SrcTopicId Log topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置Log topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @param _srcTopicId Log topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
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
                     * 获取Processing task name
Name limit
-Cannot be an empty string
-Cannot contain character '|'
-Longest 128 characters
                     * @return Name Processing task name
Name limit
-Cannot be an empty string
-Cannot contain character '|'
-Longest 128 characters
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Processing task name
Name limit
-Cannot be an empty string
-Cannot contain character '|'
-Longest 128 characters
                     * @param _name Processing task name
Name limit
-Cannot be an empty string
-Cannot contain character '|'
-Longest 128 characters
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
                     * 获取Processing statement. When FuncType is 2, EtlContent must use [log_auto_output](https://www.tencentcloud.com/document/product/614/70733?from_cn_redirect=1#b3c58797-4825-4807-bef4-68106e25024f). 

Other reference documents

-[Create a processing task](https://www.tencentcloud.com/document/product/614/63940?from_cn_redirect=1) 
-[Function overview](https://www.tencentcloud.com/document/product/614/70395?from_cn_redirect=1)
                     * @return EtlContent Processing statement. When FuncType is 2, EtlContent must use [log_auto_output](https://www.tencentcloud.com/document/product/614/70733?from_cn_redirect=1#b3c58797-4825-4807-bef4-68106e25024f). 

Other reference documents

-[Create a processing task](https://www.tencentcloud.com/document/product/614/63940?from_cn_redirect=1) 
-[Function overview](https://www.tencentcloud.com/document/product/614/70395?from_cn_redirect=1)
                     * 
                     */
                    std::string GetEtlContent() const;

                    /**
                     * 设置Processing statement. When FuncType is 2, EtlContent must use [log_auto_output](https://www.tencentcloud.com/document/product/614/70733?from_cn_redirect=1#b3c58797-4825-4807-bef4-68106e25024f). 

Other reference documents

-[Create a processing task](https://www.tencentcloud.com/document/product/614/63940?from_cn_redirect=1) 
-[Function overview](https://www.tencentcloud.com/document/product/614/70395?from_cn_redirect=1)
                     * @param _etlContent Processing statement. When FuncType is 2, EtlContent must use [log_auto_output](https://www.tencentcloud.com/document/product/614/70733?from_cn_redirect=1#b3c58797-4825-4807-bef4-68106e25024f). 

Other reference documents

-[Create a processing task](https://www.tencentcloud.com/document/product/614/63940?from_cn_redirect=1) 
-[Function overview](https://www.tencentcloud.com/document/product/614/70395?from_cn_redirect=1)
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
                     * 获取Processing type.
1: Process preview using random data from the source log topic; 2: Process preview using user-defined test data; 3: Create real processing tasks.
                     * @return TaskType Processing type.
1: Process preview using random data from the source log topic; 2: Process preview using user-defined test data; 3: Create real processing tasks.
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置Processing type.
1: Process preview using random data from the source log topic; 2: Process preview using user-defined test data; 3: Create real processing tasks.
                     * @param _taskType Processing type.
1: Process preview using random data from the source log topic; 2: Process preview using user-defined test data; 3: Create real processing tasks.
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
                     * 获取Target topic_id and alias of the processing task. This parameter is required when FuncType=1, and not required when FuncType=2.
Target topic_id. Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
Alias limitation: 1. Cannot be an empty string. 2. Cannot contain the character '|'.

                     * @return DstResources Target topic_id and alias of the processing task. This parameter is required when FuncType=1, and not required when FuncType=2.
Target topic_id. Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
Alias limitation: 1. Cannot be an empty string. 2. Cannot contain the character '|'.

                     * 
                     */
                    std::vector<DataTransformResouceInfo> GetDstResources() const;

                    /**
                     * 设置Target topic_id and alias of the processing task. This parameter is required when FuncType=1, and not required when FuncType=2.
Target topic_id. Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
Alias limitation: 1. Cannot be an empty string. 2. Cannot contain the character '|'.

                     * @param _dstResources Target topic_id and alias of the processing task. This parameter is required when FuncType=1, and not required when FuncType=2.
Target topic_id. Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
Alias limitation: 1. Cannot be an empty string. 2. Cannot contain the character '|'.

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
                     * 获取Test data for preview processing results
Obtain the target log topic ID through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @return PreviewLogStatistics Test data for preview processing results
Obtain the target log topic ID through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * 
                     */
                    std::vector<PreviewLogStatistic> GetPreviewLogStatistics() const;

                    /**
                     * 设置Test data for preview processing results
Obtain the target log topic ID through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @param _previewLogStatistics Test data for preview processing results
Obtain the target log topic ID through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * 
                     */
                    void SetPreviewLogStatistics(const std::vector<PreviewLogStatistic>& _previewLogStatistics);

                    /**
                     * 判断参数 PreviewLogStatistics 是否已赋值
                     * @return PreviewLogStatistics 是否已赋值
                     * 
                     */
                    bool PreviewLogStatisticsHasBeenSet() const;

                    /**
                     * 获取When FuncType is 2, whether to discard data if the count of dynamically created logsets and log topics exceeds product specification limits, default false.

false: Create a fallback logset and log topic and write to fallback topic.
true: Discard log data.
                     * @return BackupGiveUpData When FuncType is 2, whether to discard data if the count of dynamically created logsets and log topics exceeds product specification limits, default false.

false: Create a fallback logset and log topic and write to fallback topic.
true: Discard log data.
                     * 
                     */
                    bool GetBackupGiveUpData() const;

                    /**
                     * 设置When FuncType is 2, whether to discard data if the count of dynamically created logsets and log topics exceeds product specification limits, default false.

false: Create a fallback logset and log topic and write to fallback topic.
true: Discard log data.
                     * @param _backupGiveUpData When FuncType is 2, whether to discard data if the count of dynamically created logsets and log topics exceeds product specification limits, default false.

false: Create a fallback logset and log topic and write to fallback topic.
true: Discard log data.
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
                     * 获取Data processing type. Valid values: 0: standard processing task; 1: pre-processing task. A pre-processing task can process the collected logs and then write them into a log topic.
                     * @return DataTransformType Data processing type. Valid values: 0: standard processing task; 1: pre-processing task. A pre-processing task can process the collected logs and then write them into a log topic.
                     * 
                     */
                    uint64_t GetDataTransformType() const;

                    /**
                     * 设置Data processing type. Valid values: 0: standard processing task; 1: pre-processing task. A pre-processing task can process the collected logs and then write them into a log topic.
                     * @param _dataTransformType Data processing type. Valid values: 0: standard processing task; 1: pre-processing task. A pre-processing task can process the collected logs and then write them into a log topic.
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
                     * 获取Log status of failed jobs, 1: not retain (default), 2: retain.
                     * @return KeepFailureLog Log status of failed jobs, 1: not retain (default), 2: retain.
                     * 
                     */
                    uint64_t GetKeepFailureLog() const;

                    /**
                     * 设置Log status of failed jobs, 1: not retain (default), 2: retain.
                     * @param _keepFailureLog Log status of failed jobs, 1: not retain (default), 2: retain.
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
                     * 获取Specify the start time of data processing, a Unix second-level timestamp.
-For any time range within the log topic lifecycle, if it exceeds the lifecycle, only process the part with data within the lifecycle.
                     * @return ProcessFromTimestamp Specify the start time of data processing, a Unix second-level timestamp.
-For any time range within the log topic lifecycle, if it exceeds the lifecycle, only process the part with data within the lifecycle.
                     * 
                     */
                    uint64_t GetProcessFromTimestamp() const;

                    /**
                     * 设置Specify the start time of data processing, a Unix second-level timestamp.
-For any time range within the log topic lifecycle, if it exceeds the lifecycle, only process the part with data within the lifecycle.
                     * @param _processFromTimestamp Specify the start time of data processing, a Unix second-level timestamp.
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

-Cannot specify a future time
-Leave blank to run constantly
                     * @return ProcessToTimestamp Specify the end time of data processing, a Unix second-level timestamp.

-Cannot specify a future time
-Leave blank to run constantly
                     * 
                     */
                    uint64_t GetProcessToTimestamp() const;

                    /**
                     * 设置Specify the end time of data processing, a Unix second-level timestamp.

-Cannot specify a future time
-Leave blank to run constantly
                     * @param _processToTimestamp Specify the end time of data processing, a Unix second-level timestamp.

-Cannot specify a future time
-Leave blank to run constantly
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
                     * 获取Preview a task (TaskType is 1 or 2) that is already created and used the capacity to associate with external data. This parameter is required.
Data processing task ID - Search the data processing task list basic information (https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1) to get the data processing task ID.
                     * @return TaskId Preview a task (TaskType is 1 or 2) that is already created and used the capacity to associate with external data. This parameter is required.
Data processing task ID - Search the data processing task list basic information (https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1) to get the data processing task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Preview a task (TaskType is 1 or 2) that is already created and used the capacity to associate with external data. This parameter is required.
Data processing task ID - Search the data processing task list basic information (https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1) to get the data processing task ID.
                     * @param _taskId Preview a task (TaskType is 1 or 2) that is already created and used the capacity to associate with external data. This parameter is required.
Data processing task ID - Search the data processing task list basic information (https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1) to get the data processing task ID.
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
                     * 获取Associated data source information
                     * @return DataTransformSqlDataSources Associated data source information
                     * 
                     */
                    std::vector<DataTransformSqlDataSource> GetDataTransformSqlDataSources() const;

                    /**
                     * 设置Associated data source information
                     * @param _dataTransformSqlDataSources Associated data source information
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
                     * 获取Set environment variable
                     * @return EnvInfos Set environment variable
                     * 
                     */
                    std::vector<EnvInfo> GetEnvInfos() const;

                    /**
                     * 设置Set environment variable
                     * @param _envInfos Set environment variable
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
                     * Task type. 1: Specify topic; 2: Dynamic creation. For details, please refer to Creating Processing Task Document (https://intl.cloud.tencent.com/document/product/614/63940?from_cn_redirect=1).
                     */
                    int64_t m_funcType;
                    bool m_funcTypeHasBeenSet;

                    /**
                     * Log topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * Processing task name
Name limit
-Cannot be an empty string
-Cannot contain character '|'
-Longest 128 characters
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Processing statement. When FuncType is 2, EtlContent must use [log_auto_output](https://www.tencentcloud.com/document/product/614/70733?from_cn_redirect=1#b3c58797-4825-4807-bef4-68106e25024f). 

Other reference documents

-[Create a processing task](https://www.tencentcloud.com/document/product/614/63940?from_cn_redirect=1) 
-[Function overview](https://www.tencentcloud.com/document/product/614/70395?from_cn_redirect=1)
                     */
                    std::string m_etlContent;
                    bool m_etlContentHasBeenSet;

                    /**
                     * Processing type.
1: Process preview using random data from the source log topic; 2: Process preview using user-defined test data; 3: Create real processing tasks.
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Target topic_id and alias of the processing task. This parameter is required when FuncType=1, and not required when FuncType=2.
Target topic_id. Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
Alias limitation: 1. Cannot be an empty string. 2. Cannot contain the character '|'.

                     */
                    std::vector<DataTransformResouceInfo> m_dstResources;
                    bool m_dstResourcesHasBeenSet;

                    /**
                     * Task status. Valid values: 1 (enabled) and 2 (disabled).
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * Test data for preview processing results
Obtain the target log topic ID through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     */
                    std::vector<PreviewLogStatistic> m_previewLogStatistics;
                    bool m_previewLogStatisticsHasBeenSet;

                    /**
                     * When FuncType is 2, whether to discard data if the count of dynamically created logsets and log topics exceeds product specification limits, default false.

false: Create a fallback logset and log topic and write to fallback topic.
true: Discard log data.
                     */
                    bool m_backupGiveUpData;
                    bool m_backupGiveUpDataHasBeenSet;

                    /**
                     * Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * Data processing type. Valid values: 0: standard processing task; 1: pre-processing task. A pre-processing task can process the collected logs and then write them into a log topic.
                     */
                    uint64_t m_dataTransformType;
                    bool m_dataTransformTypeHasBeenSet;

                    /**
                     * Log status of failed jobs, 1: not retain (default), 2: retain.
                     */
                    uint64_t m_keepFailureLog;
                    bool m_keepFailureLogHasBeenSet;

                    /**
                     * Field name of a failed log.
                     */
                    std::string m_failureLogKey;
                    bool m_failureLogKeyHasBeenSet;

                    /**
                     * Specify the start time of data processing, a Unix second-level timestamp.
-For any time range within the log topic lifecycle, if it exceeds the lifecycle, only process the part with data within the lifecycle.
                     */
                    uint64_t m_processFromTimestamp;
                    bool m_processFromTimestampHasBeenSet;

                    /**
                     * Specify the end time of data processing, a Unix second-level timestamp.

-Cannot specify a future time
-Leave blank to run constantly
                     */
                    uint64_t m_processToTimestamp;
                    bool m_processToTimestampHasBeenSet;

                    /**
                     * Preview a task (TaskType is 1 or 2) that is already created and used the capacity to associate with external data. This parameter is required.
Data processing task ID - Search the data processing task list basic information (https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1) to get the data processing task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Associated data source information
                     */
                    std::vector<DataTransformSqlDataSource> m_dataTransformSqlDataSources;
                    bool m_dataTransformSqlDataSourcesHasBeenSet;

                    /**
                     * Set environment variable
                     */
                    std::vector<EnvInfo> m_envInfos;
                    bool m_envInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDATATRANSFORMREQUEST_H_
