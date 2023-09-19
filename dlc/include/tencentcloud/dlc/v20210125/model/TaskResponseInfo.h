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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TASKRESPONSEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TASKRESPONSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CommonMetrics.h>
#include <tencentcloud/dlc/v20210125/model/SparkMonitorMetrics.h>
#include <tencentcloud/dlc/v20210125/model/PrestoMonitorMetrics.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * The task instance.
                */
                class TaskResponseInfo : public AbstractModel
                {
                public:
                    TaskResponseInfo();
                    ~TaskResponseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database name of the task
                     * @return DatabaseName Database name of the task
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database name of the task
                     * @param _databaseName Database name of the task
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取Data volume of the task
                     * @return DataAmount Data volume of the task
                     * 
                     */
                    int64_t GetDataAmount() const;

                    /**
                     * 设置Data volume of the task
                     * @param _dataAmount Data volume of the task
                     * 
                     */
                    void SetDataAmount(const int64_t& _dataAmount);

                    /**
                     * 判断参数 DataAmount 是否已赋值
                     * @return DataAmount 是否已赋值
                     * 
                     */
                    bool DataAmountHasBeenSet() const;

                    /**
                     * 获取Task ID
                     * @return Id Task ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Task ID
                     * @param _id Task ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取The compute time in ms.
                     * @return UsedTime The compute time in ms.
                     * 
                     */
                    int64_t GetUsedTime() const;

                    /**
                     * 设置The compute time in ms.
                     * @param _usedTime The compute time in ms.
                     * 
                     */
                    void SetUsedTime(const int64_t& _usedTime);

                    /**
                     * 判断参数 UsedTime 是否已赋值
                     * @return UsedTime 是否已赋值
                     * 
                     */
                    bool UsedTimeHasBeenSet() const;

                    /**
                     * 获取Task output path
                     * @return OutputPath Task output path
                     * 
                     */
                    std::string GetOutputPath() const;

                    /**
                     * 设置Task output path
                     * @param _outputPath Task output path
                     * 
                     */
                    void SetOutputPath(const std::string& _outputPath);

                    /**
                     * 判断参数 OutputPath 是否已赋值
                     * @return OutputPath 是否已赋值
                     * 
                     */
                    bool OutputPathHasBeenSet() const;

                    /**
                     * 获取Task creation time
                     * @return CreateTime Task creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation time
                     * @param _createTime Task creation time
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
                     * 获取The task status. Valid values: `0` (initializing), `1` (executing), `2` (executed), `3` (writing data), `4` (queuing), `-1` (failed), and `-3` (canceled).
                     * @return State The task status. Valid values: `0` (initializing), `1` (executing), `2` (executed), `3` (writing data), `4` (queuing), `-1` (failed), and `-3` (canceled).
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置The task status. Valid values: `0` (initializing), `1` (executing), `2` (executed), `3` (writing data), `4` (queuing), `-1` (failed), and `-3` (canceled).
                     * @param _state The task status. Valid values: `0` (initializing), `1` (executing), `2` (executed), `3` (writing data), `4` (queuing), `-1` (failed), and `-3` (canceled).
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取SQL statement type of the task, such as DDL and DML.
                     * @return SQLType SQL statement type of the task, such as DDL and DML.
                     * 
                     */
                    std::string GetSQLType() const;

                    /**
                     * 设置SQL statement type of the task, such as DDL and DML.
                     * @param _sQLType SQL statement type of the task, such as DDL and DML.
                     * 
                     */
                    void SetSQLType(const std::string& _sQLType);

                    /**
                     * 判断参数 SQLType 是否已赋值
                     * @return SQLType 是否已赋值
                     * 
                     */
                    bool SQLTypeHasBeenSet() const;

                    /**
                     * 获取SQL statement of the task
                     * @return SQL SQL statement of the task
                     * 
                     */
                    std::string GetSQL() const;

                    /**
                     * 设置SQL statement of the task
                     * @param _sQL SQL statement of the task
                     * 
                     */
                    void SetSQL(const std::string& _sQL);

                    /**
                     * 判断参数 SQL 是否已赋值
                     * @return SQL 是否已赋值
                     * 
                     */
                    bool SQLHasBeenSet() const;

                    /**
                     * 获取Whether the result has expired
                     * @return ResultExpired Whether the result has expired
                     * 
                     */
                    bool GetResultExpired() const;

                    /**
                     * 设置Whether the result has expired
                     * @param _resultExpired Whether the result has expired
                     * 
                     */
                    void SetResultExpired(const bool& _resultExpired);

                    /**
                     * 判断参数 ResultExpired 是否已赋值
                     * @return ResultExpired 是否已赋值
                     * 
                     */
                    bool ResultExpiredHasBeenSet() const;

                    /**
                     * 获取Number of affected data rows
                     * @return RowAffectInfo Number of affected data rows
                     * 
                     */
                    std::string GetRowAffectInfo() const;

                    /**
                     * 设置Number of affected data rows
                     * @param _rowAffectInfo Number of affected data rows
                     * 
                     */
                    void SetRowAffectInfo(const std::string& _rowAffectInfo);

                    /**
                     * 判断参数 RowAffectInfo 是否已赋值
                     * @return RowAffectInfo 是否已赋值
                     * 
                     */
                    bool RowAffectInfoHasBeenSet() const;

                    /**
                     * 获取Dataset of task results
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataSet Dataset of task results
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataSet() const;

                    /**
                     * 设置Dataset of task results
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataSet Dataset of task results
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataSet(const std::string& _dataSet);

                    /**
                     * 判断参数 DataSet 是否已赋值
                     * @return DataSet 是否已赋值
                     * 
                     */
                    bool DataSetHasBeenSet() const;

                    /**
                     * 获取Failure information, such as `errorMessage`. This field has been disused.
                     * @return Error Failure information, such as `errorMessage`. This field has been disused.
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置Failure information, such as `errorMessage`. This field has been disused.
                     * @param _error Failure information, such as `errorMessage`. This field has been disused.
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取Task progress (%)
                     * @return Percentage Task progress (%)
                     * 
                     */
                    int64_t GetPercentage() const;

                    /**
                     * 设置Task progress (%)
                     * @param _percentage Task progress (%)
                     * 
                     */
                    void SetPercentage(const int64_t& _percentage);

                    /**
                     * 判断参数 Percentage 是否已赋值
                     * @return Percentage 是否已赋值
                     * 
                     */
                    bool PercentageHasBeenSet() const;

                    /**
                     * 获取Output information of task execution
                     * @return OutputMessage Output information of task execution
                     * 
                     */
                    std::string GetOutputMessage() const;

                    /**
                     * 设置Output information of task execution
                     * @param _outputMessage Output information of task execution
                     * 
                     */
                    void SetOutputMessage(const std::string& _outputMessage);

                    /**
                     * 判断参数 OutputMessage 是否已赋值
                     * @return OutputMessage 是否已赋值
                     * 
                     */
                    bool OutputMessageHasBeenSet() const;

                    /**
                     * 获取Type of the engine executing the SQL statement
                     * @return TaskType Type of the engine executing the SQL statement
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Type of the engine executing the SQL statement
                     * @param _taskType Type of the engine executing the SQL statement
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Task progress details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProgressDetail Task progress details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProgressDetail() const;

                    /**
                     * 设置Task progress details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _progressDetail Task progress details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProgressDetail(const std::string& _progressDetail);

                    /**
                     * 判断参数 ProgressDetail 是否已赋值
                     * @return ProgressDetail 是否已赋值
                     * 
                     */
                    bool ProgressDetailHasBeenSet() const;

                    /**
                     * 获取Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Task end time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Compute resource ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataEngineId Compute resource ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置Compute resource ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataEngineId Compute resource ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取Sub-UIN that executes the SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OperateUin Sub-UIN that executes the SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置Sub-UIN that executes the SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operateUin Sub-UIN that executes the SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperateUin(const std::string& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

                    /**
                     * 获取Compute resource name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataEngineName Compute resource name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置Compute resource name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataEngineName Compute resource name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取Whether the import type is local import or COS
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InputType Whether the import type is local import or COS
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置Whether the import type is local import or COS
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _inputType Whether the import type is local import or COS
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取Import configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InputConf Import configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInputConf() const;

                    /**
                     * 设置Import configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _inputConf Import configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInputConf(const std::string& _inputConf);

                    /**
                     * 判断参数 InputConf 是否已赋值
                     * @return InputConf 是否已赋值
                     * 
                     */
                    bool InputConfHasBeenSet() const;

                    /**
                     * 获取Number of data entries
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataNumber Number of data entries
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDataNumber() const;

                    /**
                     * 设置Number of data entries
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataNumber Number of data entries
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataNumber(const int64_t& _dataNumber);

                    /**
                     * 判断参数 DataNumber 是否已赋值
                     * @return DataNumber 是否已赋值
                     * 
                     */
                    bool DataNumberHasBeenSet() const;

                    /**
                     * 获取Whether the data can be downloaded
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CanDownload Whether the data can be downloaded
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetCanDownload() const;

                    /**
                     * 设置Whether the data can be downloaded
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _canDownload Whether the data can be downloaded
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCanDownload(const bool& _canDownload);

                    /**
                     * 判断参数 CanDownload 是否已赋值
                     * @return CanDownload 是否已赋值
                     * 
                     */
                    bool CanDownloadHasBeenSet() const;

                    /**
                     * 获取User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserAlias User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userAlias User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     * 
                     */
                    bool UserAliasHasBeenSet() const;

                    /**
                     * 获取Spark application job name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SparkJobName Spark application job name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSparkJobName() const;

                    /**
                     * 设置Spark application job name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sparkJobName Spark application job name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSparkJobName(const std::string& _sparkJobName);

                    /**
                     * 判断参数 SparkJobName 是否已赋值
                     * @return SparkJobName 是否已赋值
                     * 
                     */
                    bool SparkJobNameHasBeenSet() const;

                    /**
                     * 获取Spark application job ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SparkJobId Spark application job ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSparkJobId() const;

                    /**
                     * 设置Spark application job ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sparkJobId Spark application job ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSparkJobId(const std::string& _sparkJobId);

                    /**
                     * 判断参数 SparkJobId 是否已赋值
                     * @return SparkJobId 是否已赋值
                     * 
                     */
                    bool SparkJobIdHasBeenSet() const;

                    /**
                     * 获取JAR file of the Spark application entry
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SparkJobFile JAR file of the Spark application entry
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSparkJobFile() const;

                    /**
                     * 设置JAR file of the Spark application entry
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sparkJobFile JAR file of the Spark application entry
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSparkJobFile(const std::string& _sparkJobFile);

                    /**
                     * 判断参数 SparkJobFile 是否已赋值
                     * @return SparkJobFile 是否已赋值
                     * 
                     */
                    bool SparkJobFileHasBeenSet() const;

                    /**
                     * 获取Spark UI URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UiUrl Spark UI URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUiUrl() const;

                    /**
                     * 设置Spark UI URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uiUrl Spark UI URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUiUrl(const std::string& _uiUrl);

                    /**
                     * 判断参数 UiUrl 是否已赋值
                     * @return UiUrl 是否已赋值
                     * 
                     */
                    bool UiUrlHasBeenSet() const;

                    /**
                     * 获取The task time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalTime The task time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalTime() const;

                    /**
                     * 设置The task time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalTime The task time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalTime(const int64_t& _totalTime);

                    /**
                     * 判断参数 TotalTime 是否已赋值
                     * @return TotalTime 是否已赋值
                     * 
                     */
                    bool TotalTimeHasBeenSet() const;

                    /**
                     * 获取The program entry parameter for running a task under a Spark job.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CmdArgs The program entry parameter for running a task under a Spark job.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCmdArgs() const;

                    /**
                     * 设置The program entry parameter for running a task under a Spark job.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cmdArgs The program entry parameter for running a task under a Spark job.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCmdArgs(const std::string& _cmdArgs);

                    /**
                     * 判断参数 CmdArgs 是否已赋值
                     * @return CmdArgs 是否已赋值
                     * 
                     */
                    bool CmdArgsHasBeenSet() const;

                    /**
                     * 获取The image version of the cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageVersion The image version of the cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置The image version of the cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageVersion The image version of the cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImageVersion(const std::string& _imageVersion);

                    /**
                     * 判断参数 ImageVersion 是否已赋值
                     * @return ImageVersion 是否已赋值
                     * 
                     */
                    bool ImageVersionHasBeenSet() const;

                    /**
                     * 获取The driver size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DriverSize The driver size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDriverSize() const;

                    /**
                     * 设置The driver size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _driverSize The driver size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDriverSize(const std::string& _driverSize);

                    /**
                     * 判断参数 DriverSize 是否已赋值
                     * @return DriverSize 是否已赋值
                     * 
                     */
                    bool DriverSizeHasBeenSet() const;

                    /**
                     * 获取The executor size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutorSize The executor size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutorSize() const;

                    /**
                     * 设置The executor size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executorSize The executor size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutorSize(const std::string& _executorSize);

                    /**
                     * 判断参数 ExecutorSize 是否已赋值
                     * @return ExecutorSize 是否已赋值
                     * 
                     */
                    bool ExecutorSizeHasBeenSet() const;

                    /**
                     * 获取The executor count. The minimum value is 1 and the maximum value is less than the cluster specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutorNums The executor count. The minimum value is 1 and the maximum value is less than the cluster specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetExecutorNums() const;

                    /**
                     * 设置The executor count. The minimum value is 1 and the maximum value is less than the cluster specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executorNums The executor count. The minimum value is 1 and the maximum value is less than the cluster specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutorNums(const uint64_t& _executorNums);

                    /**
                     * 判断参数 ExecutorNums 是否已赋值
                     * @return ExecutorNums 是否已赋值
                     * 
                     */
                    bool ExecutorNumsHasBeenSet() const;

                    /**
                     * 获取The maximum executor count (in dynamic mode). The minimum value is 1 and the maximum value is less than the cluster specification. If you set `ExecutorMaxNumbers` to a value smaller than that of `ExecutorNums`, the value of `ExecutorMaxNumbers` is automatically changed to that of `ExecutorNums`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutorMaxNumbers The maximum executor count (in dynamic mode). The minimum value is 1 and the maximum value is less than the cluster specification. If you set `ExecutorMaxNumbers` to a value smaller than that of `ExecutorNums`, the value of `ExecutorMaxNumbers` is automatically changed to that of `ExecutorNums`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetExecutorMaxNumbers() const;

                    /**
                     * 设置The maximum executor count (in dynamic mode). The minimum value is 1 and the maximum value is less than the cluster specification. If you set `ExecutorMaxNumbers` to a value smaller than that of `ExecutorNums`, the value of `ExecutorMaxNumbers` is automatically changed to that of `ExecutorNums`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executorMaxNumbers The maximum executor count (in dynamic mode). The minimum value is 1 and the maximum value is less than the cluster specification. If you set `ExecutorMaxNumbers` to a value smaller than that of `ExecutorNums`, the value of `ExecutorMaxNumbers` is automatically changed to that of `ExecutorNums`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutorMaxNumbers(const uint64_t& _executorMaxNumbers);

                    /**
                     * 判断参数 ExecutorMaxNumbers 是否已赋值
                     * @return ExecutorMaxNumbers 是否已赋值
                     * 
                     */
                    bool ExecutorMaxNumbersHasBeenSet() const;

                    /**
                     * 获取Common task metrics
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return CommonMetrics Common task metrics
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    CommonMetrics GetCommonMetrics() const;

                    /**
                     * 设置Common task metrics
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _commonMetrics Common task metrics
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCommonMetrics(const CommonMetrics& _commonMetrics);

                    /**
                     * 判断参数 CommonMetrics 是否已赋值
                     * @return CommonMetrics 是否已赋值
                     * 
                     */
                    bool CommonMetricsHasBeenSet() const;

                    /**
                     * 获取The Spark task metrics.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return SparkMonitorMetrics The Spark task metrics.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    SparkMonitorMetrics GetSparkMonitorMetrics() const;

                    /**
                     * 设置The Spark task metrics.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _sparkMonitorMetrics The Spark task metrics.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSparkMonitorMetrics(const SparkMonitorMetrics& _sparkMonitorMetrics);

                    /**
                     * 判断参数 SparkMonitorMetrics 是否已赋值
                     * @return SparkMonitorMetrics 是否已赋值
                     * 
                     */
                    bool SparkMonitorMetricsHasBeenSet() const;

                    /**
                     * 获取The Presto task metrics.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return PrestoMonitorMetrics The Presto task metrics.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    PrestoMonitorMetrics GetPrestoMonitorMetrics() const;

                    /**
                     * 设置The Presto task metrics.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _prestoMonitorMetrics The Presto task metrics.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrestoMonitorMetrics(const PrestoMonitorMetrics& _prestoMonitorMetrics);

                    /**
                     * 判断参数 PrestoMonitorMetrics 是否已赋值
                     * @return PrestoMonitorMetrics 是否已赋值
                     * 
                     */
                    bool PrestoMonitorMetricsHasBeenSet() const;

                private:

                    /**
                     * Database name of the task
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Data volume of the task
                     */
                    int64_t m_dataAmount;
                    bool m_dataAmountHasBeenSet;

                    /**
                     * Task ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * The compute time in ms.
                     */
                    int64_t m_usedTime;
                    bool m_usedTimeHasBeenSet;

                    /**
                     * Task output path
                     */
                    std::string m_outputPath;
                    bool m_outputPathHasBeenSet;

                    /**
                     * Task creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The task status. Valid values: `0` (initializing), `1` (executing), `2` (executed), `3` (writing data), `4` (queuing), `-1` (failed), and `-3` (canceled).
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * SQL statement type of the task, such as DDL and DML.
                     */
                    std::string m_sQLType;
                    bool m_sQLTypeHasBeenSet;

                    /**
                     * SQL statement of the task
                     */
                    std::string m_sQL;
                    bool m_sQLHasBeenSet;

                    /**
                     * Whether the result has expired
                     */
                    bool m_resultExpired;
                    bool m_resultExpiredHasBeenSet;

                    /**
                     * Number of affected data rows
                     */
                    std::string m_rowAffectInfo;
                    bool m_rowAffectInfoHasBeenSet;

                    /**
                     * Dataset of task results
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataSet;
                    bool m_dataSetHasBeenSet;

                    /**
                     * Failure information, such as `errorMessage`. This field has been disused.
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * Task progress (%)
                     */
                    int64_t m_percentage;
                    bool m_percentageHasBeenSet;

                    /**
                     * Output information of task execution
                     */
                    std::string m_outputMessage;
                    bool m_outputMessageHasBeenSet;

                    /**
                     * Type of the engine executing the SQL statement
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task progress details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_progressDetail;
                    bool m_progressDetailHasBeenSet;

                    /**
                     * Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Compute resource ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * Sub-UIN that executes the SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * Compute resource name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * Whether the import type is local import or COS
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * Import configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_inputConf;
                    bool m_inputConfHasBeenSet;

                    /**
                     * Number of data entries
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dataNumber;
                    bool m_dataNumberHasBeenSet;

                    /**
                     * Whether the data can be downloaded
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_canDownload;
                    bool m_canDownloadHasBeenSet;

                    /**
                     * User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                    /**
                     * Spark application job name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sparkJobName;
                    bool m_sparkJobNameHasBeenSet;

                    /**
                     * Spark application job ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sparkJobId;
                    bool m_sparkJobIdHasBeenSet;

                    /**
                     * JAR file of the Spark application entry
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sparkJobFile;
                    bool m_sparkJobFileHasBeenSet;

                    /**
                     * Spark UI URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uiUrl;
                    bool m_uiUrlHasBeenSet;

                    /**
                     * The task time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * The program entry parameter for running a task under a Spark job.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cmdArgs;
                    bool m_cmdArgsHasBeenSet;

                    /**
                     * The image version of the cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                    /**
                     * The driver size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_driverSize;
                    bool m_driverSizeHasBeenSet;

                    /**
                     * The executor size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executorSize;
                    bool m_executorSizeHasBeenSet;

                    /**
                     * The executor count. The minimum value is 1 and the maximum value is less than the cluster specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_executorNums;
                    bool m_executorNumsHasBeenSet;

                    /**
                     * The maximum executor count (in dynamic mode). The minimum value is 1 and the maximum value is less than the cluster specification. If you set `ExecutorMaxNumbers` to a value smaller than that of `ExecutorNums`, the value of `ExecutorMaxNumbers` is automatically changed to that of `ExecutorNums`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_executorMaxNumbers;
                    bool m_executorMaxNumbersHasBeenSet;

                    /**
                     * Common task metrics
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    CommonMetrics m_commonMetrics;
                    bool m_commonMetricsHasBeenSet;

                    /**
                     * The Spark task metrics.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    SparkMonitorMetrics m_sparkMonitorMetrics;
                    bool m_sparkMonitorMetricsHasBeenSet;

                    /**
                     * The Presto task metrics.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    PrestoMonitorMetrics m_prestoMonitorMetrics;
                    bool m_prestoMonitorMetricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TASKRESPONSEINFO_H_
