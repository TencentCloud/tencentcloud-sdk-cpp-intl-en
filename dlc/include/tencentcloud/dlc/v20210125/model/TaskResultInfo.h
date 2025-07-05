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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TASKRESULTINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TASKRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Column.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * The task result information.
                */
                class TaskResultInfo : public AbstractModel
                {
                public:
                    TaskResultInfo();
                    ~TaskResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique task ID
                     * @return TaskId Unique task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Unique task ID
                     * @param _taskId Unique task ID
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
                     * 获取Name of the default selected data source when the current job is executed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatasourceConnectionName Name of the default selected data source when the current job is executed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置Name of the default selected data source when the current job is executed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _datasourceConnectionName Name of the default selected data source when the current job is executed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取Name of the default selected database when the current job is executed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatabaseName Name of the default selected database when the current job is executed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Name of the default selected database when the current job is executed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _databaseName Name of the default selected database when the current job is executed
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The currently executed SQL statement. Each task contains one SQL statement.
                     * @return SQL The currently executed SQL statement. Each task contains one SQL statement.
                     * 
                     */
                    std::string GetSQL() const;

                    /**
                     * 设置The currently executed SQL statement. Each task contains one SQL statement.
                     * @param _sQL The currently executed SQL statement. Each task contains one SQL statement.
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
                     * 获取Type of the executed task. Valid values: `DDL`, `DML`, `DQL`.
                     * @return SQLType Type of the executed task. Valid values: `DDL`, `DML`, `DQL`.
                     * 
                     */
                    std::string GetSQLType() const;

                    /**
                     * 设置Type of the executed task. Valid values: `DDL`, `DML`, `DQL`.
                     * @param _sQLType Type of the executed task. Valid values: `DDL`, `DML`, `DQL`.
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
                     * 获取u200cThe current task status. Valid values: `0` (initializing), `1` (executing), `2` (executed), `3` (writing data), `4` (queuing), u200c`-1` (failed), and `-3` (canceled). Only when the task is successfully executed, a task execution result will be returned.
                     * @return State u200cThe current task status. Valid values: `0` (initializing), `1` (executing), `2` (executed), `3` (writing data), `4` (queuing), u200c`-1` (failed), and `-3` (canceled). Only when the task is successfully executed, a task execution result will be returned.
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置u200cThe current task status. Valid values: `0` (initializing), `1` (executing), `2` (executed), `3` (writing data), `4` (queuing), u200c`-1` (failed), and `-3` (canceled). Only when the task is successfully executed, a task execution result will be returned.
                     * @param _state u200cThe current task status. Valid values: `0` (initializing), `1` (executing), `2` (executed), `3` (writing data), `4` (queuing), u200c`-1` (failed), and `-3` (canceled). Only when the task is successfully executed, a task execution result will be returned.
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
                     * 获取Amount of the data scanned in bytes
                     * @return DataAmount Amount of the data scanned in bytes
                     * 
                     */
                    int64_t GetDataAmount() const;

                    /**
                     * 设置Amount of the data scanned in bytes
                     * @param _dataAmount Amount of the data scanned in bytes
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
                     * 获取Address of the COS bucket for storing the task result
                     * @return OutputPath Address of the COS bucket for storing the task result
                     * 
                     */
                    std::string GetOutputPath() const;

                    /**
                     * 设置Address of the COS bucket for storing the task result
                     * @param _outputPath Address of the COS bucket for storing the task result
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
                     * 获取Task creation timestamp
                     * @return CreateTime Task creation timestamp
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation timestamp
                     * @param _createTime Task creation timestamp
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
                     * 获取Task execution information. `success` will be returned if the task succeeds; otherwise, the failure cause will be returned.
                     * @return OutputMessage Task execution information. `success` will be returned if the task succeeds; otherwise, the failure cause will be returned.
                     * 
                     */
                    std::string GetOutputMessage() const;

                    /**
                     * 设置Task execution information. `success` will be returned if the task succeeds; otherwise, the failure cause will be returned.
                     * @param _outputMessage Task execution information. `success` will be returned if the task succeeds; otherwise, the failure cause will be returned.
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
                     * 获取Number of affected rows
                     * @return RowAffectInfo Number of affected rows
                     * 
                     */
                    std::string GetRowAffectInfo() const;

                    /**
                     * 设置Number of affected rows
                     * @param _rowAffectInfo Number of affected rows
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
                     * 获取Schema information of the result
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResultSchema Schema information of the result
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Column> GetResultSchema() const;

                    /**
                     * 设置Schema information of the result
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resultSchema Schema information of the result
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResultSchema(const std::vector<Column>& _resultSchema);

                    /**
                     * 判断参数 ResultSchema 是否已赋值
                     * @return ResultSchema 是否已赋值
                     * 
                     */
                    bool ResultSchemaHasBeenSet() const;

                    /**
                     * 获取Result information. After it is unescaped, each element of the outer array is a data row.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResultSet Result information. After it is unescaped, each element of the outer array is a data row.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResultSet() const;

                    /**
                     * 设置Result information. After it is unescaped, each element of the outer array is a data row.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resultSet Result information. After it is unescaped, each element of the outer array is a data row.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResultSet(const std::string& _resultSet);

                    /**
                     * 判断参数 ResultSet 是否已赋值
                     * @return ResultSet 是否已赋值
                     * 
                     */
                    bool ResultSetHasBeenSet() const;

                    /**
                     * 获取Pagination information. If there is no more result data, `nextToken` will be empty.
                     * @return NextToken Pagination information. If there is no more result data, `nextToken` will be empty.
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置Pagination information. If there is no more result data, `nextToken` will be empty.
                     * @param _nextToken Pagination information. If there is no more result data, `nextToken` will be empty.
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

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
                     * 获取Task progress details
                     * @return ProgressDetail Task progress details
                     * 
                     */
                    std::string GetProgressDetail() const;

                    /**
                     * 设置Task progress details
                     * @param _progressDetail Task progress details
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
                     * 获取Console display format. Valid values: `table`, `text`.
                     * @return DisplayFormat Console display format. Valid values: `table`, `text`.
                     * 
                     */
                    std::string GetDisplayFormat() const;

                    /**
                     * 设置Console display format. Valid values: `table`, `text`.
                     * @param _displayFormat Console display format. Valid values: `table`, `text`.
                     * 
                     */
                    void SetDisplayFormat(const std::string& _displayFormat);

                    /**
                     * 判断参数 DisplayFormat 是否已赋值
                     * @return DisplayFormat 是否已赋值
                     * 
                     */
                    bool DisplayFormatHasBeenSet() const;

                    /**
                     * 获取The task time in ms.
                     * @return TotalTime The task time in ms.
                     * 
                     */
                    int64_t GetTotalTime() const;

                    /**
                     * 设置The task time in ms.
                     * @param _totalTime The task time in ms.
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
                     * 获取Time consumed to get results
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QueryResultTime Time consumed to get results
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetQueryResultTime() const;

                    /**
                     * 设置Time consumed to get results
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _queryResultTime Time consumed to get results
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQueryResultTime(const double& _queryResultTime);

                    /**
                     * 判断参数 QueryResultTime 是否已赋值
                     * @return QueryResultTime 是否已赋值
                     * 
                     */
                    bool QueryResultTimeHasBeenSet() const;

                private:

                    /**
                     * Unique task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Name of the default selected data source when the current job is executed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * Name of the default selected database when the current job is executed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * The currently executed SQL statement. Each task contains one SQL statement.
                     */
                    std::string m_sQL;
                    bool m_sQLHasBeenSet;

                    /**
                     * Type of the executed task. Valid values: `DDL`, `DML`, `DQL`.
                     */
                    std::string m_sQLType;
                    bool m_sQLTypeHasBeenSet;

                    /**
                     * u200cThe current task status. Valid values: `0` (initializing), `1` (executing), `2` (executed), `3` (writing data), `4` (queuing), u200c`-1` (failed), and `-3` (canceled). Only when the task is successfully executed, a task execution result will be returned.
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Amount of the data scanned in bytes
                     */
                    int64_t m_dataAmount;
                    bool m_dataAmountHasBeenSet;

                    /**
                     * The compute time in ms.
                     */
                    int64_t m_usedTime;
                    bool m_usedTimeHasBeenSet;

                    /**
                     * Address of the COS bucket for storing the task result
                     */
                    std::string m_outputPath;
                    bool m_outputPathHasBeenSet;

                    /**
                     * Task creation timestamp
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task execution information. `success` will be returned if the task succeeds; otherwise, the failure cause will be returned.
                     */
                    std::string m_outputMessage;
                    bool m_outputMessageHasBeenSet;

                    /**
                     * Number of affected rows
                     */
                    std::string m_rowAffectInfo;
                    bool m_rowAffectInfoHasBeenSet;

                    /**
                     * Schema information of the result
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Column> m_resultSchema;
                    bool m_resultSchemaHasBeenSet;

                    /**
                     * Result information. After it is unescaped, each element of the outer array is a data row.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resultSet;
                    bool m_resultSetHasBeenSet;

                    /**
                     * Pagination information. If there is no more result data, `nextToken` will be empty.
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * Task progress (%)
                     */
                    int64_t m_percentage;
                    bool m_percentageHasBeenSet;

                    /**
                     * Task progress details
                     */
                    std::string m_progressDetail;
                    bool m_progressDetailHasBeenSet;

                    /**
                     * Console display format. Valid values: `table`, `text`.
                     */
                    std::string m_displayFormat;
                    bool m_displayFormatHasBeenSet;

                    /**
                     * The task time in ms.
                     */
                    int64_t m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * Time consumed to get results
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_queryResultTime;
                    bool m_queryResultTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TASKRESULTINFO_H_
