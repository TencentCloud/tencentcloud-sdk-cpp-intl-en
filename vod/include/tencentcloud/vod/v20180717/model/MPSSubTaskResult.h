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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTASKRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSTaskOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * MPS specific subtask query result type.
                */
                class MPSSubTaskResult : public AbstractModel
                {
                public:
                    MPSSubTaskResult();
                    ~MPSSubTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task type. Specific subtask type in the MPS WorkflowTask structure. Value: <li>AiAnalysis.DeLogo: Intelligent erasure task.</li>
                     * @return TaskType Task type. Specific subtask type in the MPS WorkflowTask structure. Value: <li>AiAnalysis.DeLogo: Intelligent erasure task.</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type. Specific subtask type in the MPS WorkflowTask structure. Value: <li>AiAnalysis.DeLogo: Intelligent erasure task.</li>
                     * @param _taskType Task type. Specific subtask type in the MPS WorkflowTask structure. Value: <li>AiAnalysis.DeLogo: Intelligent erasure task.</li>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Task status. There are three types: PROCESSING, SUCCESS, and FAIL.
                     * @return Status Task status. There are three types: PROCESSING, SUCCESS, and FAIL.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. There are three types: PROCESSING, SUCCESS, and FAIL.
                     * @param _status Task status. There are three types: PROCESSING, SUCCESS, and FAIL.
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
                     * 获取Error code. Returns 0 for success, other values for failure.
                     * @return ErrCode Error code. Returns 0 for success, other values for failure.
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置Error code. Returns 0 for success, other values for failure.
                     * @param _errCode Error code. Returns 0 for success, other values for failure.
                     * 
                     */
                    void SetErrCode(const std::string& _errCode);

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
                     * 获取MPS media processing task input. This field corresponds to the Input result in the MPS task response and is returned in JSON format.
                     * @return Input MPS media processing task input. This field corresponds to the Input result in the MPS task response and is returned in JSON format.
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置MPS media processing task input. This field corresponds to the Input result in the MPS task response and is returned in JSON format.
                     * @param _input MPS media processing task input. This field corresponds to the Input result in the MPS task response and is returned in JSON format.
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
                     * 获取MPS media processing task output.
                     * @return Output MPS media processing task output.
                     * 
                     */
                    MPSTaskOutput GetOutput() const;

                    /**
                     * 设置MPS media processing task output.
                     * @param _output MPS media processing task output.
                     * 
                     */
                    void SetOutput(const MPSTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * Task type. Specific subtask type in the MPS WorkflowTask structure. Value: <li>AiAnalysis.DeLogo: Intelligent erasure task.</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task status. There are three types: PROCESSING, SUCCESS, and FAIL.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. Returns 0 for success, other values for failure.
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * MPS media processing task input. This field corresponds to the Input result in the MPS task response and is returned in JSON format.
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * MPS media processing task output.
                     */
                    MPSTaskOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTASKRESULT_H_
