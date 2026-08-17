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
                * AI narration and video re-creation result type
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
                     * 获取AI narration and video re-creation task input.
                     * @return Input AI narration and video re-creation task input.
                     * 
                     */
                    AiAnalysisTaskReelInput GetInput() const;

                    /**
                     * 设置AI narration and video re-creation task input.
                     * @param _input AI narration and video re-creation task input.
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
                     * 获取
                     * @return Output 
                     * 
                     */
                    AiAnalysisTaskReelOutput GetOutput() const;

                    /**
                     * 设置
                     * @param _output 
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
                     * 获取
                     * @return ErrCodeExt 
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置
                     * @param _errCodeExt 
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
                     * 获取
                     * @return Progress 
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置
                     * @param _progress 
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
                     * 获取
                     * @return BeginProcessTime 
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 设置
                     * @param _beginProcessTime 
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
                     * 获取
                     * @return FinishTime 
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置
                     * @param _finishTime 
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
                     * AI narration and video re-creation task input.
                     */
                    AiAnalysisTaskReelInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskReelOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKREELRESULT_H_
