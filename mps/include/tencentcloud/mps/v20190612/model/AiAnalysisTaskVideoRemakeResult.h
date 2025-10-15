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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKVIDEOREMAKERESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKVIDEOREMAKERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskVideoRemakeInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskVideoRemakeOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Video deduplication result data structure.
                */
                class AiAnalysisTaskVideoRemakeResult : public AbstractModel
                {
                public:
                    AiAnalysisTaskVideoRemakeResult();
                    ~AiAnalysisTaskVideoRemakeResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the task status. valid values: `PROCESSING`, `SUCCESS`, and `FAIL`.
                     * @return Status Specifies the task status. valid values: `PROCESSING`, `SUCCESS`, and `FAIL`.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Specifies the task status. valid values: `PROCESSING`, `SUCCESS`, and `FAIL`.
                     * @param _status Specifies the task status. valid values: `PROCESSING`, `SUCCESS`, and `FAIL`.
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
                     * 获取Error code. 0: success. other values: failure.
                     * @return ErrCode Error code. 0: success. other values: failure.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. 0: success. other values: failure.
                     * @param _errCode Error code. 0: success. other values: failure.
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
                     * 获取Deduplication task input.
                     * @return Input Deduplication task input.
                     * 
                     */
                    AiAnalysisTaskVideoRemakeInput GetInput() const;

                    /**
                     * 设置Deduplication task input.
                     * @param _input Deduplication task input.
                     * 
                     */
                    void SetInput(const AiAnalysisTaskVideoRemakeInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Task output.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Output Task output.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    AiAnalysisTaskVideoRemakeOutput GetOutput() const;

                    /**
                     * 设置Task output.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _output Task output.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOutput(const AiAnalysisTaskVideoRemakeOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * Specifies the task status. valid values: `PROCESSING`, `SUCCESS`, and `FAIL`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. 0: success. other values: failure.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Deduplication task input.
                     */
                    AiAnalysisTaskVideoRemakeInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Task output.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    AiAnalysisTaskVideoRemakeOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKVIDEOREMAKERESULT_H_
