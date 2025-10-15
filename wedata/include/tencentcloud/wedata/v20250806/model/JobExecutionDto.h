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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_JOBEXECUTIONDTO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_JOBEXECUTIONDTO_H_

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
                * Describes the subtask of a business submission JOB.
                */
                class JobExecutionDto : public AbstractModel
                {
                public:
                    JobExecutionDto();
                    ~JobExecutionDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Job ID of the data exploration.

                     * @return JobId Job ID of the data exploration.

                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Job ID of the data exploration.

                     * @param _jobId Job ID of the data exploration.

                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Query job ID.

                     * @return JobExecutionId Query job ID.

                     * 
                     */
                    std::string GetJobExecutionId() const;

                    /**
                     * 设置Query job ID.

                     * @param _jobExecutionId Query job ID.

                     * 
                     */
                    void SetJobExecutionId(const std::string& _jobExecutionId);

                    /**
                     * 判断参数 JobExecutionId 是否已赋值
                     * @return JobExecutionId 是否已赋值
                     * 
                     */
                    bool JobExecutionIdHasBeenSet() const;

                    /**
                     * 获取Specifies the subquery name.

                     * @return JobExecutionName Specifies the subquery name.

                     * 
                     */
                    std::string GetJobExecutionName() const;

                    /**
                     * 设置Specifies the subquery name.

                     * @param _jobExecutionName Specifies the subquery name.

                     * 
                     */
                    void SetJobExecutionName(const std::string& _jobExecutionName);

                    /**
                     * 判断参数 JobExecutionName 是否已赋值
                     * @return JobExecutionName 是否已赋值
                     * 
                     */
                    bool JobExecutionNameHasBeenSet() const;

                    /**
                     * 获取Specifies the subquery sql content.

                     * @return ScriptContent Specifies the subquery sql content.

                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置Specifies the subquery sql content.

                     * @param _scriptContent Specifies the subquery sql content.

                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                    /**
                     * 获取Subquery status.

                     * @return Status Subquery status.

                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Subquery status.

                     * @param _status Subquery status.

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
                     * 获取Execution phase.

                     * @return ExecuteStageInfo Execution phase.

                     * 
                     */
                    std::string GetExecuteStageInfo() const;

                    /**
                     * 设置Execution phase.

                     * @param _executeStageInfo Execution phase.

                     * 
                     */
                    void SetExecuteStageInfo(const std::string& _executeStageInfo);

                    /**
                     * 判断参数 ExecuteStageInfo 是否已赋值
                     * @return ExecuteStageInfo 是否已赋值
                     * 
                     */
                    bool ExecuteStageInfoHasBeenSet() const;

                    /**
                     * 获取Log path

                     * @return LogFilePath Log path

                     * 
                     */
                    std::string GetLogFilePath() const;

                    /**
                     * 设置Log path

                     * @param _logFilePath Log path

                     * 
                     */
                    void SetLogFilePath(const std::string& _logFilePath);

                    /**
                     * 判断参数 LogFilePath 是否已赋值
                     * @return LogFilePath 是否已赋值
                     * 
                     */
                    bool LogFilePathHasBeenSet() const;

                    /**
                     * 获取Result path for download.

                     * @return ResultFilePath Result path for download.

                     * 
                     */
                    std::string GetResultFilePath() const;

                    /**
                     * 设置Result path for download.

                     * @param _resultFilePath Result path for download.

                     * 
                     */
                    void SetResultFilePath(const std::string& _resultFilePath);

                    /**
                     * 判断参数 ResultFilePath 是否已赋值
                     * @return ResultFilePath 是否已赋值
                     * 
                     */
                    bool ResultFilePathHasBeenSet() const;

                    /**
                     * 获取Preview result path.

                     * @return ResultPreviewFilePath Preview result path.

                     * 
                     */
                    std::string GetResultPreviewFilePath() const;

                    /**
                     * 设置Preview result path.

                     * @param _resultPreviewFilePath Preview result path.

                     * 
                     */
                    void SetResultPreviewFilePath(const std::string& _resultPreviewFilePath);

                    /**
                     * 判断参数 ResultPreviewFilePath 是否已赋值
                     * @return ResultPreviewFilePath 是否已赋值
                     * 
                     */
                    bool ResultPreviewFilePathHasBeenSet() const;

                    /**
                     * 获取Total number of lines in the task execution result.

                     * @return ResultTotalCount Total number of lines in the task execution result.

                     * 
                     */
                    int64_t GetResultTotalCount() const;

                    /**
                     * 设置Total number of lines in the task execution result.

                     * @param _resultTotalCount Total number of lines in the task execution result.

                     * 
                     */
                    void SetResultTotalCount(const int64_t& _resultTotalCount);

                    /**
                     * 判断参数 ResultTotalCount 是否已赋值
                     * @return ResultTotalCount 是否已赋值
                     * 
                     */
                    bool ResultTotalCountHasBeenSet() const;

                    /**
                     * 获取Update time.

                     * @return UpdateTime Update time.

                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.

                     * @param _updateTime Update time.

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
                     * 获取End time.


                     * @return EndTime End time.


                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.


                     * @param _endTime End time.


                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Duration. specifies the time taken.

                     * @return TimeCost Duration. specifies the time taken.

                     * 
                     */
                    int64_t GetTimeCost() const;

                    /**
                     * 设置Duration. specifies the time taken.

                     * @param _timeCost Duration. specifies the time taken.

                     * 
                     */
                    void SetTimeCost(const int64_t& _timeCost);

                    /**
                     * 判断参数 TimeCost 是否已赋值
                     * @return TimeCost 是否已赋值
                     * 
                     */
                    bool TimeCostHasBeenSet() const;

                    /**
                     * 获取SQL content in the context.

                     * @return ContextScriptContent SQL content in the context.

                     * 
                     */
                    std::vector<std::string> GetContextScriptContent() const;

                    /**
                     * 设置SQL content in the context.

                     * @param _contextScriptContent SQL content in the context.

                     * 
                     */
                    void SetContextScriptContent(const std::vector<std::string>& _contextScriptContent);

                    /**
                     * 判断参数 ContextScriptContent 是否已赋值
                     * @return ContextScriptContent 是否已赋值
                     * 
                     */
                    bool ContextScriptContentHasBeenSet() const;

                    /**
                     * 获取Specifies the preview row count for task execution results.

                     * @return ResultPreviewCount Specifies the preview row count for task execution results.

                     * 
                     */
                    int64_t GetResultPreviewCount() const;

                    /**
                     * 设置Specifies the preview row count for task execution results.

                     * @param _resultPreviewCount Specifies the preview row count for task execution results.

                     * 
                     */
                    void SetResultPreviewCount(const int64_t& _resultPreviewCount);

                    /**
                     * 判断参数 ResultPreviewCount 是否已赋值
                     * @return ResultPreviewCount 是否已赋值
                     * 
                     */
                    bool ResultPreviewCountHasBeenSet() const;

                    /**
                     * 获取Specifies the number of affected rows in task execution.

                     * @return ResultEffectCount Specifies the number of affected rows in task execution.

                     * 
                     */
                    int64_t GetResultEffectCount() const;

                    /**
                     * 设置Specifies the number of affected rows in task execution.

                     * @param _resultEffectCount Specifies the number of affected rows in task execution.

                     * 
                     */
                    void SetResultEffectCount(const int64_t& _resultEffectCount);

                    /**
                     * 判断参数 ResultEffectCount 是否已赋值
                     * @return ResultEffectCount 是否已赋值
                     * 
                     */
                    bool ResultEffectCountHasBeenSet() const;

                    /**
                     * 获取Whether the full result is being collected: default false. true indicates the full result is being collected, for the frontend to determine whether to continue to poll.

                     * @return CollectingTotalResult Whether the full result is being collected: default false. true indicates the full result is being collected, for the frontend to determine whether to continue to poll.

                     * 
                     */
                    bool GetCollectingTotalResult() const;

                    /**
                     * 设置Whether the full result is being collected: default false. true indicates the full result is being collected, for the frontend to determine whether to continue to poll.

                     * @param _collectingTotalResult Whether the full result is being collected: default false. true indicates the full result is being collected, for the frontend to determine whether to continue to poll.

                     * 
                     */
                    void SetCollectingTotalResult(const bool& _collectingTotalResult);

                    /**
                     * 判断参数 CollectingTotalResult 是否已赋值
                     * @return CollectingTotalResult 是否已赋值
                     * 
                     */
                    bool CollectingTotalResultHasBeenSet() const;

                    /**
                     * 获取Specifies whether to truncate the script content.

                     * @return ScriptContentTruncate Specifies whether to truncate the script content.

                     * 
                     */
                    bool GetScriptContentTruncate() const;

                    /**
                     * 设置Specifies whether to truncate the script content.

                     * @param _scriptContentTruncate Specifies whether to truncate the script content.

                     * 
                     */
                    void SetScriptContentTruncate(const bool& _scriptContentTruncate);

                    /**
                     * 判断参数 ScriptContentTruncate 是否已赋值
                     * @return ScriptContentTruncate 是否已赋值
                     * 
                     */
                    bool ScriptContentTruncateHasBeenSet() const;

                private:

                    /**
                     * Job ID of the data exploration.

                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Query job ID.

                     */
                    std::string m_jobExecutionId;
                    bool m_jobExecutionIdHasBeenSet;

                    /**
                     * Specifies the subquery name.

                     */
                    std::string m_jobExecutionName;
                    bool m_jobExecutionNameHasBeenSet;

                    /**
                     * Specifies the subquery sql content.

                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * Subquery status.

                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time.

                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Execution phase.

                     */
                    std::string m_executeStageInfo;
                    bool m_executeStageInfoHasBeenSet;

                    /**
                     * Log path

                     */
                    std::string m_logFilePath;
                    bool m_logFilePathHasBeenSet;

                    /**
                     * Result path for download.

                     */
                    std::string m_resultFilePath;
                    bool m_resultFilePathHasBeenSet;

                    /**
                     * Preview result path.

                     */
                    std::string m_resultPreviewFilePath;
                    bool m_resultPreviewFilePathHasBeenSet;

                    /**
                     * Total number of lines in the task execution result.

                     */
                    int64_t m_resultTotalCount;
                    bool m_resultTotalCountHasBeenSet;

                    /**
                     * Update time.

                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * End time.


                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Duration. specifies the time taken.

                     */
                    int64_t m_timeCost;
                    bool m_timeCostHasBeenSet;

                    /**
                     * SQL content in the context.

                     */
                    std::vector<std::string> m_contextScriptContent;
                    bool m_contextScriptContentHasBeenSet;

                    /**
                     * Specifies the preview row count for task execution results.

                     */
                    int64_t m_resultPreviewCount;
                    bool m_resultPreviewCountHasBeenSet;

                    /**
                     * Specifies the number of affected rows in task execution.

                     */
                    int64_t m_resultEffectCount;
                    bool m_resultEffectCountHasBeenSet;

                    /**
                     * Whether the full result is being collected: default false. true indicates the full result is being collected, for the frontend to determine whether to continue to poll.

                     */
                    bool m_collectingTotalResult;
                    bool m_collectingTotalResultHasBeenSet;

                    /**
                     * Specifies whether to truncate the script content.

                     */
                    bool m_scriptContentTruncate;
                    bool m_scriptContentTruncateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_JOBEXECUTIONDTO_H_
