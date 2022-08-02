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


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Task instance
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
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database name of the task
                     * @param DatabaseName Database name of the task
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取Data volume of the task
                     * @return DataAmount Data volume of the task
                     */
                    int64_t GetDataAmount() const;

                    /**
                     * 设置Data volume of the task
                     * @param DataAmount Data volume of the task
                     */
                    void SetDataAmount(const int64_t& _dataAmount);

                    /**
                     * 判断参数 DataAmount 是否已赋值
                     * @return DataAmount 是否已赋值
                     */
                    bool DataAmountHasBeenSet() const;

                    /**
                     * 获取Task ID
                     * @return Id Task ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置Task ID
                     * @param Id Task ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Computing time in ms
                     * @return UsedTime Computing time in ms
                     */
                    int64_t GetUsedTime() const;

                    /**
                     * 设置Computing time in ms
                     * @param UsedTime Computing time in ms
                     */
                    void SetUsedTime(const int64_t& _usedTime);

                    /**
                     * 判断参数 UsedTime 是否已赋值
                     * @return UsedTime 是否已赋值
                     */
                    bool UsedTimeHasBeenSet() const;

                    /**
                     * 获取Task output path
                     * @return OutputPath Task output path
                     */
                    std::string GetOutputPath() const;

                    /**
                     * 设置Task output path
                     * @param OutputPath Task output path
                     */
                    void SetOutputPath(const std::string& _outputPath);

                    /**
                     * 判断参数 OutputPath 是否已赋值
                     * @return OutputPath 是否已赋值
                     */
                    bool OutputPathHasBeenSet() const;

                    /**
                     * 获取Task creation time
                     * @return CreateTime Task creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation time
                     * @param CreateTime Task creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values: `0` (initial), `1` (executing), `2` (executed successfully), `-1` (failed to execute), `-3` (canceled).
                     * @return State Task status. Valid values: `0` (initial), `1` (executing), `2` (executed successfully), `-1` (failed to execute), `-3` (canceled).
                     */
                    int64_t GetState() const;

                    /**
                     * 设置Task status. Valid values: `0` (initial), `1` (executing), `2` (executed successfully), `-1` (failed to execute), `-3` (canceled).
                     * @param State Task status. Valid values: `0` (initial), `1` (executing), `2` (executed successfully), `-1` (failed to execute), `-3` (canceled).
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取SQL statement type of the task, such as DDL and DML.
                     * @return SQLType SQL statement type of the task, such as DDL and DML.
                     */
                    std::string GetSQLType() const;

                    /**
                     * 设置SQL statement type of the task, such as DDL and DML.
                     * @param SQLType SQL statement type of the task, such as DDL and DML.
                     */
                    void SetSQLType(const std::string& _sQLType);

                    /**
                     * 判断参数 SQLType 是否已赋值
                     * @return SQLType 是否已赋值
                     */
                    bool SQLTypeHasBeenSet() const;

                    /**
                     * 获取SQL statement of the task
                     * @return SQL SQL statement of the task
                     */
                    std::string GetSQL() const;

                    /**
                     * 设置SQL statement of the task
                     * @param SQL SQL statement of the task
                     */
                    void SetSQL(const std::string& _sQL);

                    /**
                     * 判断参数 SQL 是否已赋值
                     * @return SQL 是否已赋值
                     */
                    bool SQLHasBeenSet() const;

                    /**
                     * 获取Whether the result has expired
                     * @return ResultExpired Whether the result has expired
                     */
                    bool GetResultExpired() const;

                    /**
                     * 设置Whether the result has expired
                     * @param ResultExpired Whether the result has expired
                     */
                    void SetResultExpired(const bool& _resultExpired);

                    /**
                     * 判断参数 ResultExpired 是否已赋值
                     * @return ResultExpired 是否已赋值
                     */
                    bool ResultExpiredHasBeenSet() const;

                    /**
                     * 获取Number of affected data rows
                     * @return RowAffectInfo Number of affected data rows
                     */
                    std::string GetRowAffectInfo() const;

                    /**
                     * 设置Number of affected data rows
                     * @param RowAffectInfo Number of affected data rows
                     */
                    void SetRowAffectInfo(const std::string& _rowAffectInfo);

                    /**
                     * 判断参数 RowAffectInfo 是否已赋值
                     * @return RowAffectInfo 是否已赋值
                     */
                    bool RowAffectInfoHasBeenSet() const;

                    /**
                     * 获取Dataset of task results
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataSet Dataset of task results
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDataSet() const;

                    /**
                     * 设置Dataset of task results
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DataSet Dataset of task results
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDataSet(const std::string& _dataSet);

                    /**
                     * 判断参数 DataSet 是否已赋值
                     * @return DataSet 是否已赋值
                     */
                    bool DataSetHasBeenSet() const;

                    /**
                     * 获取Failure information, such as `errorMessage`. This field has been disused.
                     * @return Error Failure information, such as `errorMessage`. This field has been disused.
                     */
                    std::string GetError() const;

                    /**
                     * 设置Failure information, such as `errorMessage`. This field has been disused.
                     * @param Error Failure information, such as `errorMessage`. This field has been disused.
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取Task progress (%)
                     * @return Percentage Task progress (%)
                     */
                    int64_t GetPercentage() const;

                    /**
                     * 设置Task progress (%)
                     * @param Percentage Task progress (%)
                     */
                    void SetPercentage(const int64_t& _percentage);

                    /**
                     * 判断参数 Percentage 是否已赋值
                     * @return Percentage 是否已赋值
                     */
                    bool PercentageHasBeenSet() const;

                    /**
                     * 获取Output information of task execution
                     * @return OutputMessage Output information of task execution
                     */
                    std::string GetOutputMessage() const;

                    /**
                     * 设置Output information of task execution
                     * @param OutputMessage Output information of task execution
                     */
                    void SetOutputMessage(const std::string& _outputMessage);

                    /**
                     * 判断参数 OutputMessage 是否已赋值
                     * @return OutputMessage 是否已赋值
                     */
                    bool OutputMessageHasBeenSet() const;

                    /**
                     * 获取Type of the engine executing the SQL statement
                     * @return TaskType Type of the engine executing the SQL statement
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Type of the engine executing the SQL statement
                     * @param TaskType Type of the engine executing the SQL statement
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Task progress details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProgressDetail Task progress details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProgressDetail() const;

                    /**
                     * 设置Task progress details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ProgressDetail Task progress details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProgressDetail(const std::string& _progressDetail);

                    /**
                     * 判断参数 ProgressDetail 是否已赋值
                     * @return ProgressDetail 是否已赋值
                     */
                    bool ProgressDetailHasBeenSet() const;

                    /**
                     * 获取Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UpdateTime Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Compute resource ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataEngineId Compute resource ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置Compute resource ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DataEngineId Compute resource ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取Sub-UIN that executes the SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OperateUin Sub-UIN that executes the SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置Sub-UIN that executes the SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OperateUin Sub-UIN that executes the SQL statement
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOperateUin(const std::string& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     */
                    bool OperateUinHasBeenSet() const;

                    /**
                     * 获取Compute resource name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataEngineName Compute resource name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置Compute resource name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DataEngineName Compute resource name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取Whether the import type is local import or COS
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InputType Whether the import type is local import or COS
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置Whether the import type is local import or COS
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InputType Whether the import type is local import or COS
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取Import configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InputConf Import configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInputConf() const;

                    /**
                     * 设置Import configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InputConf Import configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInputConf(const std::string& _inputConf);

                    /**
                     * 判断参数 InputConf 是否已赋值
                     * @return InputConf 是否已赋值
                     */
                    bool InputConfHasBeenSet() const;

                    /**
                     * 获取Number of data entries
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataNumber Number of data entries
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetDataNumber() const;

                    /**
                     * 设置Number of data entries
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DataNumber Number of data entries
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDataNumber(const int64_t& _dataNumber);

                    /**
                     * 判断参数 DataNumber 是否已赋值
                     * @return DataNumber 是否已赋值
                     */
                    bool DataNumberHasBeenSet() const;

                    /**
                     * 获取Whether the data can be downloaded
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CanDownload Whether the data can be downloaded
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetCanDownload() const;

                    /**
                     * 设置Whether the data can be downloaded
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CanDownload Whether the data can be downloaded
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCanDownload(const bool& _canDownload);

                    /**
                     * 判断参数 CanDownload 是否已赋值
                     * @return CanDownload 是否已赋值
                     */
                    bool CanDownloadHasBeenSet() const;

                    /**
                     * 获取User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserAlias User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UserAlias User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     */
                    bool UserAliasHasBeenSet() const;

                    /**
                     * 获取Spark application job name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SparkJobName Spark application job name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSparkJobName() const;

                    /**
                     * 设置Spark application job name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SparkJobName Spark application job name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSparkJobName(const std::string& _sparkJobName);

                    /**
                     * 判断参数 SparkJobName 是否已赋值
                     * @return SparkJobName 是否已赋值
                     */
                    bool SparkJobNameHasBeenSet() const;

                    /**
                     * 获取Spark application job ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SparkJobId Spark application job ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSparkJobId() const;

                    /**
                     * 设置Spark application job ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SparkJobId Spark application job ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSparkJobId(const std::string& _sparkJobId);

                    /**
                     * 判断参数 SparkJobId 是否已赋值
                     * @return SparkJobId 是否已赋值
                     */
                    bool SparkJobIdHasBeenSet() const;

                    /**
                     * 获取JAR file of the Spark application entry
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SparkJobFile JAR file of the Spark application entry
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSparkJobFile() const;

                    /**
                     * 设置JAR file of the Spark application entry
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SparkJobFile JAR file of the Spark application entry
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSparkJobFile(const std::string& _sparkJobFile);

                    /**
                     * 判断参数 SparkJobFile 是否已赋值
                     * @return SparkJobFile 是否已赋值
                     */
                    bool SparkJobFileHasBeenSet() const;

                    /**
                     * 获取Spark UI URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UiUrl Spark UI URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUiUrl() const;

                    /**
                     * 设置Spark UI URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UiUrl Spark UI URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUiUrl(const std::string& _uiUrl);

                    /**
                     * 判断参数 UiUrl 是否已赋值
                     * @return UiUrl 是否已赋值
                     */
                    bool UiUrlHasBeenSet() const;

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
                     * Computing time in ms
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
                     * Task status. Valid values: `0` (initial), `1` (executing), `2` (executed successfully), `-1` (failed to execute), `-3` (canceled).
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TASKRESPONSEINFO_H_
