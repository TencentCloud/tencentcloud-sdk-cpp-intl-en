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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKREELRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKREELRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskReelInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskReelOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Type of the intelligent video editing result.
                */
                class AiAnalysisTaskReelResult : public AbstractModel
                {
                public:
                    AiAnalysisTaskReelResult();
                    ~AiAnalysisTaskReelResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task status. Valid values are PROCESSING, SUCCESS, and FAIL.
                     * @return Status Task status. Valid values are PROCESSING, SUCCESS, and FAIL.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Valid values are PROCESSING, SUCCESS, and FAIL.
                     * @param _status Task status. Valid values are PROCESSING, SUCCESS, and FAIL.
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
                     * 获取Error code. 0: Task successful. Other values: Task failed.
                     * @return ErrCode Error code. 0: Task successful. Other values: Task failed.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. 0: Task successful. Other values: Task failed.
                     * @param _errCode Error code. 0: Task successful. Other values: Task failed.
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Error message.
                     * @return Message Error message.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
                     * @param _message Error message.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Input of the intelligent video editing task.
                     * @return Input Input of the intelligent video editing task.
                     * 
                     */
                    AiAnalysisTaskReelInput GetInput() const;

                    /**
                     * 设置Input of the intelligent video editing task.
                     * @param _input Input of the intelligent video editing task.
                     * 
                     */
                    void SetInput(const AiAnalysisTaskReelInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output of the intelligent video editing task.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Output Output of the intelligent video editing task.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiAnalysisTaskReelOutput GetOutput() const;

                    /**
                     * 设置Output of the intelligent video editing task.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _output Output of the intelligent video editing task.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutput(const AiAnalysisTaskReelOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Error code. An empty string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of MPS error codes.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrCodeExt Error code. An empty string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of MPS error codes.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置Error code. An empty string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of MPS error codes.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errCodeExt Error code. An empty string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of MPS error codes.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrCodeExt(const std::string& _errCodeExt);

                    /**
                     * 判断参数 ErrCodeExt 是否已赋值
                     * @return ErrCodeExt 是否已赋值
                     * 
                     */
                    bool ErrCodeExtHasBeenSet() const;

                    /**
                     * 获取Task progress.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Progress Task progress.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置Task progress.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _progress Task progress.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Task start time, in ISO date and time format.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BeginProcessTime Task start time, in ISO date and time format.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 设置Task start time, in ISO date and time format.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _beginProcessTime Task start time, in ISO date and time format.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBeginProcessTime(const std::string& _beginProcessTime);

                    /**
                     * 判断参数 BeginProcessTime 是否已赋值
                     * @return BeginProcessTime 是否已赋值
                     * 
                     */
                    bool BeginProcessTimeHasBeenSet() const;

                    /**
                     * 获取Task completion time, in ISO date and time format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FinishTime Task completion time, in ISO date and time format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置Task completion time, in ISO date and time format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _finishTime Task completion time, in ISO date and time format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                private:

                    /**
                     * Task status. Valid values are PROCESSING, SUCCESS, and FAIL.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. 0: Task successful. Other values: Task failed.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Input of the intelligent video editing task.
                     */
                    AiAnalysisTaskReelInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output of the intelligent video editing task.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskReelOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Error code. An empty string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of MPS error codes.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * Task progress.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Task start time, in ISO date and time format.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * Task completion time, in ISO date and time format.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKREELRESULT_H_
