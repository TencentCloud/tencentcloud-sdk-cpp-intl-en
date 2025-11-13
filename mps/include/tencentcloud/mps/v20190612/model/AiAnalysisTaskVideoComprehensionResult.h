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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKVIDEOCOMPREHENSIONRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKVIDEOCOMPREHENSIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskVideoComprehensionInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskVideoComprehensionOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Video (audio) recognition result.
                */
                class AiAnalysisTaskVideoComprehensionResult : public AbstractModel
                {
                public:
                    AiAnalysisTaskVideoComprehensionResult();
                    ~AiAnalysisTaskVideoComprehensionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task status. Valid values: `PROCESSING`, `SUCCESS`, and `FAIL`.
                     * @return Status Task status. Valid values: `PROCESSING`, `SUCCESS`, and `FAIL`.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Valid values: `PROCESSING`, `SUCCESS`, and `FAIL`.
                     * @param _status Task status. Valid values: `PROCESSING`, `SUCCESS`, and `FAIL`.
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
                     * 获取Error code. 0: successful; other values: failed.
                     * @return ErrCode Error code. 0: successful; other values: failed.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. 0: successful; other values: failed.
                     * @param _errCode Error code. 0: successful; other values: failed.
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
                     * 获取Input file for video (audio) recognition.
                     * @return Input Input file for video (audio) recognition.
                     * 
                     */
                    AiAnalysisTaskVideoComprehensionInput GetInput() const;

                    /**
                     * 设置Input file for video (audio) recognition.
                     * @param _input Input file for video (audio) recognition.
                     * 
                     */
                    void SetInput(const AiAnalysisTaskVideoComprehensionInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output file for video (audio) recognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Output Output file for video (audio) recognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiAnalysisTaskVideoComprehensionOutput GetOutput() const;

                    /**
                     * 设置Output file for video (audio) recognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _output Output file for video (audio) recognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutput(const AiAnalysisTaskVideoComprehensionOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of MPS error codes.
                     * @return ErrCodeExt Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of MPS error codes.
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of MPS error codes.
                     * @param _errCodeExt Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of MPS error codes.
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
                     * 获取Task progress
                     * @return Progress Task progress
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置Task progress
                     * @param _progress Task progress
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
                     * 获取Starting time of task execution, in ISO date and time format.
                     * @return BeginProcessTime Starting time of task execution, in ISO date and time format.
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 设置Starting time of task execution, in ISO date and time format.
                     * @param _beginProcessTime Starting time of task execution, in ISO date and time format.
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
                     * 获取Completion time of task execution, in ISO date and time format.
                     * @return FinishTime Completion time of task execution, in ISO date and time format.
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置Completion time of task execution, in ISO date and time format.
                     * @param _finishTime Completion time of task execution, in ISO date and time format.
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
                     * Task status. Valid values: `PROCESSING`, `SUCCESS`, and `FAIL`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. 0: successful; other values: failed.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Input file for video (audio) recognition.
                     */
                    AiAnalysisTaskVideoComprehensionInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output file for video (audio) recognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskVideoComprehensionOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of MPS error codes.
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * Task progress
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Starting time of task execution, in ISO date and time format.
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * Completion time of task execution, in ISO date and time format.
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKVIDEOCOMPREHENSIONRESULT_H_
