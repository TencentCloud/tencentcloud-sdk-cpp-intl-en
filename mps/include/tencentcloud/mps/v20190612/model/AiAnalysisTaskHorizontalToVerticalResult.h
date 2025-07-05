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
                     * 获取Task status, including PROCESSING, SUCCESS, and FAIL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Task status, including PROCESSING, SUCCESS, and FAIL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status, including PROCESSING, SUCCESS, and FAIL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Task status, including PROCESSING, SUCCESS, and FAIL.
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
                     * 获取Error code. 0: Task successful. Other values: Task failed.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrCode Error code. 0: Task successful. Other values: Task failed.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. 0: Task successful. Other values: Task failed.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errCode Error code. 0: Task successful. Other values: Task failed.

Note: This field may return null, indicating that no valid values can be obtained.
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

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message Error message

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _message Error message

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Intelligent landscape-to-portrait task input.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Input Intelligent landscape-to-portrait task input.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiAnalysisTaskHorizontalToVerticalInput GetInput() const;

                    /**
                     * 设置Intelligent landscape-to-portrait task input.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _input Intelligent landscape-to-portrait task input.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Intelligent landscape-to-portrait task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Output Intelligent landscape-to-portrait task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiAnalysisTaskHorizontalToVerticalOutput GetOutput() const;

                    /**
                     * 设置Intelligent landscape-to-portrait task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _output Intelligent landscape-to-portrait task output.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Task status, including PROCESSING, SUCCESS, and FAIL.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. 0: Task successful. Other values: Task failed.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Intelligent landscape-to-portrait task input.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskHorizontalToVerticalInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Intelligent landscape-to-portrait task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskHorizontalToVerticalOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHORIZONTALTOVERTICALRESULT_H_
