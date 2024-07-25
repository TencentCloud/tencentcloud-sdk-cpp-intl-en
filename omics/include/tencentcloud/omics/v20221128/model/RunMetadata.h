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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RUNMETADATA_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RUNMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * Run job details
                */
                class RunMetadata : public AbstractModel
                {
                public:
                    RunMetadata();
                    ~RunMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Run type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RunType Run type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRunType() const;

                    /**
                     * 设置Run type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _runType Run type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRunType(const std::string& _runType);

                    /**
                     * 判断参数 RunType 是否已赋值
                     * @return RunType 是否已赋值
                     * 
                     */
                    bool RunTypeHasBeenSet() const;

                    /**
                     * 获取Run ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RunId Run ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRunId() const;

                    /**
                     * 设置Run ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _runId Run ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRunId(const std::string& _runId);

                    /**
                     * 判断参数 RunId 是否已赋值
                     * @return RunId 是否已赋值
                     * 
                     */
                    bool RunIdHasBeenSet() const;

                    /**
                     * 获取Parent layer ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParentId Parent layer ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置Parent layer ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _parentId Parent layer ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取Job ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobId Job ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Job ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobId Job ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Job name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CallName Job name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCallName() const;

                    /**
                     * 设置Job name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _callName Job name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCallName(const std::string& _callName);

                    /**
                     * 判断参数 CallName 是否已赋值
                     * @return CallName 是否已赋值
                     * 
                     */
                    bool CallNameHasBeenSet() const;

                    /**
                     * 获取Scatter index
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScatterIndex Scatter index
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScatterIndex() const;

                    /**
                     * 设置Scatter index
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scatterIndex Scatter index
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScatterIndex(const std::string& _scatterIndex);

                    /**
                     * 判断参数 ScatterIndex 是否已赋值
                     * @return ScatterIndex 是否已赋值
                     * 
                     */
                    bool ScatterIndexHasBeenSet() const;

                    /**
                     * 获取Input
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Input Input
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置Input
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _input Input
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Output Output
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置Output
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _output Output
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorMessage Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorMessage Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Submission time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubmitTime Submission time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubmitTime() const;

                    /**
                     * 设置Submission time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _submitTime Submission time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubmitTime(const std::string& _submitTime);

                    /**
                     * 判断参数 SubmitTime 是否已赋值
                     * @return SubmitTime 是否已赋值
                     * 
                     */
                    bool SubmitTimeHasBeenSet() const;

                    /**
                     * 获取End time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime End time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime End time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Command Line
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Command Command Line
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置Command Line
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _command Command Line
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取Runtime
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Runtime Runtime
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置Runtime
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _runtime Runtime
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取Preprocessing
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Preprocess Preprocessing
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetPreprocess() const;

                    /**
                     * 设置Preprocessing
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _preprocess Preprocessing
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPreprocess(const bool& _preprocess);

                    /**
                     * 判断参数 Preprocess 是否已赋值
                     * @return Preprocess 是否已赋值
                     * 
                     */
                    bool PreprocessHasBeenSet() const;

                    /**
                     * 获取Post-processing
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PostProcess Post-processing
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetPostProcess() const;

                    /**
                     * 设置Post-processing
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _postProcess Post-processing
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPostProcess(const bool& _postProcess);

                    /**
                     * 判断参数 PostProcess 是否已赋值
                     * @return PostProcess 是否已赋值
                     * 
                     */
                    bool PostProcessHasBeenSet() const;

                    /**
                     * 获取Cache hit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CallCached Cache hit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetCallCached() const;

                    /**
                     * 设置Cache hit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _callCached Cache hit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCallCached(const bool& _callCached);

                    /**
                     * 判断参数 CallCached 是否已赋值
                     * @return CallCached 是否已赋值
                     * 
                     */
                    bool CallCachedHasBeenSet() const;

                    /**
                     * 获取Standard output
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Stdout Standard output
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStdout() const;

                    /**
                     * 设置Standard output
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stdout Standard output
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStdout(const std::string& _stdout);

                    /**
                     * 判断参数 Stdout 是否已赋值
                     * @return Stdout 是否已赋值
                     * 
                     */
                    bool StdoutHasBeenSet() const;

                    /**
                     * 获取Error output
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Stderr Error output
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStderr() const;

                    /**
                     * 设置Error output
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stderr Error output
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStderr(const std::string& _stderr);

                    /**
                     * 判断参数 Stderr 是否已赋值
                     * @return Stderr 是否已赋值
                     * 
                     */
                    bool StderrHasBeenSet() const;

                    /**
                     * 获取Other information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Meta Other information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMeta() const;

                    /**
                     * 设置Other information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _meta Other information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMeta(const std::string& _meta);

                    /**
                     * 判断参数 Meta 是否已赋值
                     * @return Meta 是否已赋值
                     * 
                     */
                    bool MetaHasBeenSet() const;

                private:

                    /**
                     * Run type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_runType;
                    bool m_runTypeHasBeenSet;

                    /**
                     * Run ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_runId;
                    bool m_runIdHasBeenSet;

                    /**
                     * Parent layer ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * Job ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Job name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_callName;
                    bool m_callNameHasBeenSet;

                    /**
                     * Scatter index
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scatterIndex;
                    bool m_scatterIndexHasBeenSet;

                    /**
                     * Input
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Submission time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_submitTime;
                    bool m_submitTimeHasBeenSet;

                    /**
                     * End time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Command Line
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * Runtime
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * Preprocessing
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_preprocess;
                    bool m_preprocessHasBeenSet;

                    /**
                     * Post-processing
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_postProcess;
                    bool m_postProcessHasBeenSet;

                    /**
                     * Cache hit
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_callCached;
                    bool m_callCachedHasBeenSet;

                    /**
                     * Standard output
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stdout;
                    bool m_stdoutHasBeenSet;

                    /**
                     * Error output
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stderr;
                    bool m_stderrHasBeenSet;

                    /**
                     * Other information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_meta;
                    bool m_metaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUNMETADATA_H_
