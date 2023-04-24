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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHIGHLIGHTRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHIGHLIGHTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskHighlightInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskHighlightOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The result of an intelligent highlight generation task.
                */
                class AiAnalysisTaskHighlightResult : public AbstractModel
                {
                public:
                    AiAnalysisTaskHighlightResult();
                    ~AiAnalysisTaskHighlightResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The task status. Valid values: `PROCESSING`, `SUCCESS`, `FAIL`.
                     * @return Status The task status. Valid values: `PROCESSING`, `SUCCESS`, `FAIL`.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The task status. Valid values: `PROCESSING`, `SUCCESS`, `FAIL`.
                     * @param Status The task status. Valid values: `PROCESSING`, `SUCCESS`, `FAIL`.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error code. `0`: The task succeeded; other values: The task failed.
                     * @return ErrCode Error code. `0`: The task succeeded; other values: The task failed.
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. `0`: The task succeeded; other values: The task failed.
                     * @param ErrCode Error code. `0`: The task succeeded; other values: The task failed.
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取The error message.
                     * @return Message The error message.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置The error message.
                     * @param Message The error message.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取The input of the intelligent highlight generation task.
                     * @return Input The input of the intelligent highlight generation task.
                     */
                    AiAnalysisTaskHighlightInput GetInput() const;

                    /**
                     * 设置The input of the intelligent highlight generation task.
                     * @param Input The input of the intelligent highlight generation task.
                     */
                    void SetInput(const AiAnalysisTaskHighlightInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取The output of the intelligent highlight generation task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Output The output of the intelligent highlight generation task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskHighlightOutput GetOutput() const;

                    /**
                     * 设置The output of the intelligent highlight generation task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Output The output of the intelligent highlight generation task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOutput(const AiAnalysisTaskHighlightOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * The task status. Valid values: `PROCESSING`, `SUCCESS`, `FAIL`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. `0`: The task succeeded; other values: The task failed.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * The error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * The input of the intelligent highlight generation task.
                     */
                    AiAnalysisTaskHighlightInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * The output of the intelligent highlight generation task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskHighlightOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHIGHLIGHTRESULT_H_
