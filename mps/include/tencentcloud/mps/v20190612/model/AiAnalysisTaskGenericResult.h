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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKGENERICRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKGENERICRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskGenericInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskGenericOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Intelligent Analysis common result type.
                */
                class AiAnalysisTaskGenericResult : public AbstractModel
                {
                public:
                    AiAnalysisTaskGenericResult();
                    ~AiAnalysisTaskGenericResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task status. Valid values are PROCESSING, SUCCESS, and FAIL.</p><p>Enumeration values: </p><ul><li>PROCESSING: Processing</li><li>SUCCESS: Success</li><li>FAIL: Failure</li></ul>
                     * @return Status <p>Task status. Valid values are PROCESSING, SUCCESS, and FAIL.</p><p>Enumeration values: </p><ul><li>PROCESSING: Processing</li><li>SUCCESS: Success</li><li>FAIL: Failure</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Task status. Valid values are PROCESSING, SUCCESS, and FAIL.</p><p>Enumeration values: </p><ul><li>PROCESSING: Processing</li><li>SUCCESS: Success</li><li>FAIL: Failure</li></ul>
                     * @param _status <p>Task status. Valid values are PROCESSING, SUCCESS, and FAIL.</p><p>Enumeration values: </p><ul><li>PROCESSING: Processing</li><li>SUCCESS: Success</li><li>FAIL: Failure</li></ul>
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
                     * 获取<p>Error code. 0: Successful. Other values: Failed.</p>
                     * @return ErrCode <p>Error code. 0: Successful. Other values: Failed.</p>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置<p>Error code. 0: Successful. Other values: Failed.</p>
                     * @param _errCode <p>Error code. 0: Successful. Other values: Failed.</p>
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
                     * 获取<p>Error message.</p>
                     * @return Message <p>Error message.</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>Error message.</p>
                     * @param _message <p>Error message.</p>
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
                     * 获取<p>Intelligent analysis task input.</p>
                     * @return Input <p>Intelligent analysis task input.</p>
                     * 
                     */
                    AiAnalysisTaskGenericInput GetInput() const;

                    /**
                     * 设置<p>Intelligent analysis task input.</p>
                     * @param _input <p>Intelligent analysis task input.</p>
                     * 
                     */
                    void SetInput(const AiAnalysisTaskGenericInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>Intelligent analysis task output.</p>
                     * @return Output <p>Intelligent analysis task output.</p>
                     * 
                     */
                    AiAnalysisTaskGenericOutput GetOutput() const;

                    /**
                     * 设置<p>Intelligent analysis task output.</p>
                     * @param _output <p>Intelligent analysis task output.</p>
                     * 
                     */
                    void SetOutput(const AiAnalysisTaskGenericOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * <p>Task status. Valid values are PROCESSING, SUCCESS, and FAIL.</p><p>Enumeration values: </p><ul><li>PROCESSING: Processing</li><li>SUCCESS: Success</li><li>FAIL: Failure</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Error code. 0: Successful. Other values: Failed.</p>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>Error message.</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>Intelligent analysis task input.</p>
                     */
                    AiAnalysisTaskGenericInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>Intelligent analysis task output.</p>
                     */
                    AiAnalysisTaskGenericOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKGENERICRESULT_H_
