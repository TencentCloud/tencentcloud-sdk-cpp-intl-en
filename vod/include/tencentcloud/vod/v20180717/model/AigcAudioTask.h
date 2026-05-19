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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcAudioTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AigcAudioTaskOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Create AIGC sound effect task info.
                */
                class AigcAudioTask : public AbstractModel
                {
                public:
                    AigcAudioTask();
                    ~AigcAudioTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task ID.</p>
                     * @return TaskId <p>Task ID.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _taskId <p>Task ID.</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Task status. Valid values: <li>PROCESSING: Processing; </li><li>FINISH: Completed.</li></p>
                     * @return Status <p>Task status. Valid values: <li>PROCESSING: Processing; </li><li>FINISH: Completed.</li></p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Task status. Valid values: <li>PROCESSING: Processing; </li><li>FINISH: Completed.</li></p>
                     * @param _status <p>Task status. Valid values: <li>PROCESSING: Processing; </li><li>FINISH: Completed.</li></p>
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
                     * 获取<p>Error code. Returns a non-zero error code for source errors. For zero returns, please use the ErrCode of each specific task.</p>
                     * @return ErrCode <p>Error code. Returns a non-zero error code for source errors. For zero returns, please use the ErrCode of each specific task.</p>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置<p>Error code. Returns a non-zero error code for source errors. For zero returns, please use the ErrCode of each specific task.</p>
                     * @param _errCode <p>Error code. Returns a non-zero error code for source errors. For zero returns, please use the ErrCode of each specific task.</p>
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
                     * 获取<p>Error code extension. A null string indicates success, while other values indicate failure.</p>
                     * @return ErrCodeExt <p>Error code extension. A null string indicates success, while other values indicate failure.</p>
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置<p>Error code extension. A null string indicates success, while other values indicate failure.</p>
                     * @param _errCodeExt <p>Error code extension. A null string indicates success, while other values indicate failure.</p>
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
                     * 获取<p>Task progress, in the range of [0-100].</p>
                     * @return Progress <p>Task progress, in the range of [0-100].</p>
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>Task progress, in the range of [0-100].</p>
                     * @param _progress <p>Task progress, in the range of [0-100].</p>
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>Input info of the AIGC audio task.</p>
                     * @return Input <p>Input info of the AIGC audio task.</p>
                     * 
                     */
                    AigcAudioTaskInput GetInput() const;

                    /**
                     * 设置<p>Input info of the AIGC audio task.</p>
                     * @param _input <p>Input info of the AIGC audio task.</p>
                     * 
                     */
                    void SetInput(const AigcAudioTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>AIGC audio task output information.</p>
                     * @return Output <p>AIGC audio task output information.</p>
                     * 
                     */
                    AigcAudioTaskOutput GetOutput() const;

                    /**
                     * 设置<p>AIGC audio task output information.</p>
                     * @param _output <p>AIGC audio task output information.</p>
                     * 
                     */
                    void SetOutput(const AigcAudioTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task status. Valid values: <li>PROCESSING: Processing; </li><li>FINISH: Completed.</li></p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Error code. Returns a non-zero error code for source errors. For zero returns, please use the ErrCode of each specific task.</p>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>Error code extension. A null string indicates success, while other values indicate failure.</p>
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * <p>Error message.</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>Task progress, in the range of [0-100].</p>
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>Input info of the AIGC audio task.</p>
                     */
                    AigcAudioTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>AIGC audio task output information.</p>
                     */
                    AigcAudioTaskOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOTASK_H_
