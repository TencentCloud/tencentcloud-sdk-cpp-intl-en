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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHORIZONTALTOVERTICALRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHORIZONTALTOVERTICALRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskHorizontalToVerticalInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskHorizontalToVerticalOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Intelligent landscape-to-portrait result type.
                */
                class AiAnalysisTaskHorizontalToVerticalResult : public AbstractModel
                {
                public:
                    AiAnalysisTaskHorizontalToVerticalResult();
                    ~AiAnalysisTaskHorizontalToVerticalResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task status. Valid values are `PROCESSING`, `SUCCESS`, and `FAIL`.
                     * @return Status Task status. Valid values are `PROCESSING`, `SUCCESS`, and `FAIL`.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Valid values are `PROCESSING`, `SUCCESS`, and `FAIL`.
                     * @param _status Task status. Valid values are `PROCESSING`, `SUCCESS`, and `FAIL`.
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
                     * 获取Error message
                     * @return Message Error message
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message
                     * @param _message Error message
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
                     * 获取Intelligent horizontal-to-vertical task input.
                     * @return Input Intelligent horizontal-to-vertical task input.
                     * 
                     */
                    AiAnalysisTaskHorizontalToVerticalInput GetInput() const;

                    /**
                     * 设置Intelligent horizontal-to-vertical task input.
                     * @param _input Intelligent horizontal-to-vertical task input.
                     * 
                     */
                    void SetInput(const AiAnalysisTaskHorizontalToVerticalInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Intelligent horizontal-to-vertical task output.
                     * @return Output Intelligent horizontal-to-vertical task output.
                     * 
                     */
                    AiAnalysisTaskHorizontalToVerticalOutput GetOutput() const;

                    /**
                     * 设置Intelligent horizontal-to-vertical task output.
                     * @param _output Intelligent horizontal-to-vertical task output.
                     * 
                     */
                    void SetOutput(const AiAnalysisTaskHorizontalToVerticalOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * Task status. Valid values are `PROCESSING`, `SUCCESS`, and `FAIL`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. 0: successful; other values: failed.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Intelligent horizontal-to-vertical task input.
                     */
                    AiAnalysisTaskHorizontalToVerticalInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Intelligent horizontal-to-vertical task output.
                     */
                    AiAnalysisTaskHorizontalToVerticalOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHORIZONTALTOVERTICALRESULT_H_
