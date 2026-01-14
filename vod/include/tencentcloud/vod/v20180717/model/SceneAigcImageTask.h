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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGETASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcImageTaskInput.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcImageTaskOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Scenario-based AIGC Image Generation Task Information
                */
                class SceneAigcImageTask : public AbstractModel
                {
                public:
                    SceneAigcImageTask();
                    ~SceneAigcImageTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The task ID.
                     * @return TaskId The task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The task ID.
                     * @param _taskId The task ID.
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
                     * 获取Task status, value: <li>PROCESSING: processing;</li><li>FINISH: completed.</li>
                     * @return Status Task status, value: <li>PROCESSING: processing;</li><li>FINISH: completed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status, value: <li>PROCESSING: processing;</li><li>FINISH: completed.</li>
                     * @param _status Task status, value: <li>PROCESSING: processing;</li><li>FINISH: completed.</li>
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
                     * 获取Error code. A non-zero error code is returned when the source is abnormal. If 0 is returned, use the ErrCode of each specific task.
                     * @return ErrCode Error code. A non-zero error code is returned when the source is abnormal. If 0 is returned, use the ErrCode of each specific task.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. A non-zero error code is returned when the source is abnormal. If 0 is returned, use the ErrCode of each specific task.
                     * @param _errCode Error code. A non-zero error code is returned when the source is abnormal. If 0 is returned, use the ErrCode of each specific task.
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
                     * 获取Error message. If the source is abnormal, the corresponding exception message is returned. Otherwise, use the message of each specific task.
                     * @return Message Error message. If the source is abnormal, the corresponding exception message is returned. Otherwise, use the message of each specific task.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message. If the source is abnormal, the corresponding exception message is returned. Otherwise, use the message of each specific task.
                     * @param _message Error message. If the source is abnormal, the corresponding exception message is returned. Otherwise, use the message of each specific task.
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
                     * 获取The execution progress of a single adaptive bitrate stream. Value range: 0-100.
                     * @return Progress The execution progress of a single adaptive bitrate stream. Value range: 0-100.
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置The execution progress of a single adaptive bitrate stream. Value range: 0-100.
                     * @param _progress The execution progress of a single adaptive bitrate stream. Value range: 0-100.
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
                     * 获取Input of AIGC image task.
                     * @return Input Input of AIGC image task.
                     * 
                     */
                    SceneAigcImageTaskInput GetInput() const;

                    /**
                     * 设置Input of AIGC image task.
                     * @param _input Input of AIGC image task.
                     * 
                     */
                    void SetInput(const SceneAigcImageTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output of AIGC image task.
                     * @return Output Output of AIGC image task.
                     * 
                     */
                    SceneAigcImageTaskOutput GetOutput() const;

                    /**
                     * 设置Output of AIGC image task.
                     * @param _output Output of AIGC image task.
                     * 
                     */
                    void SetOutput(const SceneAigcImageTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is not carried or is left empty, no deduplication will be performed.
                     * @return SessionId ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is not carried or is left empty, no deduplication will be performed.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is not carried or is left empty, no deduplication will be performed.
                     * @param _sessionId ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is not carried or is left empty, no deduplication will be performed.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取The source context which is used to pass through the user request information. The task flow status change callback will return the value of this parameter. It can contain up to 1000 characters.
                     * @return SessionContext The source context which is used to pass through the user request information. The task flow status change callback will return the value of this parameter. It can contain up to 1000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置The source context which is used to pass through the user request information. The task flow status change callback will return the value of this parameter. It can contain up to 1000 characters.
                     * @param _sessionContext The source context which is used to pass through the user request information. The task flow status change callback will return the value of this parameter. It can contain up to 1000 characters.
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * The task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task status, value: <li>PROCESSING: processing;</li><li>FINISH: completed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. A non-zero error code is returned when the source is abnormal. If 0 is returned, use the ErrCode of each specific task.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message. If the source is abnormal, the corresponding exception message is returned. Otherwise, use the message of each specific task.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * The execution progress of a single adaptive bitrate stream. Value range: 0-100.
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Input of AIGC image task.
                     */
                    SceneAigcImageTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output of AIGC image task.
                     */
                    SceneAigcImageTaskOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is not carried or is left empty, no deduplication will be performed.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * The source context which is used to pass through the user request information. The task flow status change callback will return the value of this parameter. It can contain up to 1000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGETASK_H_
