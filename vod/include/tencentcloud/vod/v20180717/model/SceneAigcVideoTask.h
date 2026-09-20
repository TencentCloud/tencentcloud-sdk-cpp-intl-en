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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCVIDEOTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCVIDEOTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcVideoTaskInput.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcVideoTaskOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Scenario-based AIGC video task info
                */
                class SceneAigcVideoTask : public AbstractModel
                {
                public:
                    SceneAigcVideoTask();
                    ~SceneAigcVideoTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
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
                     * 获取Task status. Valid values: <li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
                     * @return Status Task status. Valid values: <li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Valid values: <li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
                     * @param _status Task status. Valid values: <li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
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
                     * 获取Error code. A non-zero error code is returned when a source error occurs. If 0 is returned, use the ErrCode of each specific task.
                     * @return ErrCode Error code. A non-zero error code is returned when a source error occurs. If 0 is returned, use the ErrCode of each specific task.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. A non-zero error code is returned when a source error occurs. If 0 is returned, use the ErrCode of each specific task.
                     * @param _errCode Error code. A non-zero error code is returned when a source error occurs. If 0 is returned, use the ErrCode of each specific task.
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
                     * 获取Task progress, value range: [0-100].
                     * @return Progress Task progress, value range: [0-100].
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Task progress, value range: [0-100].
                     * @param _progress Task progress, value range: [0-100].
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
                     * 获取Input information of the AIGC video generation task.
                     * @return Input Input information of the AIGC video generation task.
                     * 
                     */
                    SceneAigcVideoTaskInput GetInput() const;

                    /**
                     * 设置Input information of the AIGC video generation task.
                     * @param _input Input information of the AIGC video generation task.
                     * 
                     */
                    void SetInput(const SceneAigcVideoTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output information of the AIGC video task.
                     * @return Output Output information of the AIGC video task.
                     * 
                     */
                    SceneAigcVideoTaskOutput GetOutput() const;

                    /**
                     * 设置Output information of the AIGC video task.
                     * @param _output Output information of the AIGC video task.
                     * 
                     */
                    void SetOutput(const SceneAigcVideoTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取An identifier for deduplication. If there has been a request with the same identifier within the past seven days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     * @return SessionId An identifier for deduplication. If there has been a request with the same identifier within the past seven days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置An identifier for deduplication. If there has been a request with the same identifier within the past seven days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     * @param _sessionId An identifier for deduplication. If there has been a request with the same identifier within the past seven days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
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
                     * 获取Source context, which is used to pass through the user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     * @return SessionContext Source context, which is used to pass through the user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Source context, which is used to pass through the user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     * @param _sessionContext Source context, which is used to pass through the user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
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
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task status. Valid values: <li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. A non-zero error code is returned when a source error occurs. If 0 is returned, use the ErrCode of each specific task.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Task progress, value range: [0-100].
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Input information of the AIGC video generation task.
                     */
                    SceneAigcVideoTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output information of the AIGC video task.
                     */
                    SceneAigcVideoTaskOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * An identifier for deduplication. If there has been a request with the same identifier within the past seven days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source context, which is used to pass through the user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCVIDEOTASK_H_
