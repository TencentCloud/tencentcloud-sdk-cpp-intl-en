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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIATASK_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIATASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/EditMediaTaskInput.h>
#include <tencentcloud/mps/v20190612/model/EditMediaTaskOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Video editing task information
                */
                class EditMediaTask : public AbstractModel
                {
                public:
                    EditMediaTask();
                    ~EditMediaTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param TaskId Task ID.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
                     * @return Status Task status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
                     * @param Status Task status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error code
<li>0: success;</li>
<li>Other values: failure.</li>
                     * @return ErrCode Error code
<li>0: success;</li>
<li>Other values: failure.</li>
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code
<li>0: success;</li>
<li>Other values: failure.</li>
                     * @param ErrCode Error code
<li>0: success;</li>
<li>Other values: failure.</li>
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Error message.
                     * @return Message Error message.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
                     * @param Message Error message.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Input of video editing task.
                     * @return Input Input of video editing task.
                     */
                    EditMediaTaskInput GetInput() const;

                    /**
                     * 设置Input of video editing task.
                     * @param Input Input of video editing task.
                     */
                    void SetInput(const EditMediaTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output of video editing task.
                     * @return Output Output of video editing task.
                     */
                    EditMediaTaskOutput GetOutput() const;

                    /**
                     * 设置Output of video editing task.
                     * @param Output Output of video editing task.
                     */
                    void SetOutput(const EditMediaTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code
<li>0: success;</li>
<li>Other values: failure.</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Input of video editing task.
                     */
                    EditMediaTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output of video editing task.
                     */
                    EditMediaTaskOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIATASK_H_
