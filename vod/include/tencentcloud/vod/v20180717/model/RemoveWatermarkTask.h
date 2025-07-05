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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REMOVEWATERMARKTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REMOVEWATERMARKTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RemoveWaterMarkTaskInput.h>
#include <tencentcloud/vod/v20180717/model/RemoveWaterMarkTaskOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * The information of a watermark removal task. This parameter is valid only if `TaskType` is `RemoveWatermark`.
                */
                class RemoveWatermarkTask : public AbstractModel
                {
                public:
                    RemoveWatermarkTask();
                    ~RemoveWatermarkTask() = default;
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
                     * 获取The task flow status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     * @return Status The task flow status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The task flow status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     * @param _status The task flow status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
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
                     * 获取Error code. An empty string indicates the task is successful; other values indicate failure. For details, see [Video processing error codes](https://intl.cloud.tencent.com/document/product/266/39145?lang=en&pg=#video-processing).
                     * @return ErrCodeExt Error code. An empty string indicates the task is successful; other values indicate failure. For details, see [Video processing error codes](https://intl.cloud.tencent.com/document/product/266/39145?lang=en&pg=#video-processing).
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置Error code. An empty string indicates the task is successful; other values indicate failure. For details, see [Video processing error codes](https://intl.cloud.tencent.com/document/product/266/39145?lang=en&pg=#video-processing).
                     * @param _errCodeExt Error code. An empty string indicates the task is successful; other values indicate failure. For details, see [Video processing error codes](https://intl.cloud.tencent.com/document/product/266/39145?lang=en&pg=#video-processing).
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
                     * 获取Error code. 0: Successful; other values: Failed.
<li>40000: Invalid input parameter.</li>
<li>60000: Source file error (e.g., video data is corrupted).</li>
<li>70000: Internal server error. Please try again.</li>
                     * @return ErrCode Error code. 0: Successful; other values: Failed.
<li>40000: Invalid input parameter.</li>
<li>60000: Source file error (e.g., video data is corrupted).</li>
<li>70000: Internal server error. Please try again.</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. 0: Successful; other values: Failed.
<li>40000: Invalid input parameter.</li>
<li>60000: Source file error (e.g., video data is corrupted).</li>
<li>70000: Internal server error. Please try again.</li>
                     * @param _errCode Error code. 0: Successful; other values: Failed.
<li>40000: Invalid input parameter.</li>
<li>60000: Source file error (e.g., video data is corrupted).</li>
<li>70000: Internal server error. Please try again.</li>
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
                     * 获取The error message.
                     * @return Message The error message.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置The error message.
                     * @param _message The error message.
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
                     * 获取The input of a watermark removal task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Input The input of a watermark removal task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RemoveWaterMarkTaskInput GetInput() const;

                    /**
                     * 设置The input of a watermark removal task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _input The input of a watermark removal task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInput(const RemoveWaterMarkTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取The output of a watermark removal task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Output The output of a watermark removal task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RemoveWaterMarkTaskOutput GetOutput() const;

                    /**
                     * 设置The output of a watermark removal task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _output The output of a watermark removal task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutput(const RemoveWaterMarkTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取The session ID, which is used for de-duplication. If there was a request with the same session ID in the last seven days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     * @return SessionId The session ID, which is used for de-duplication. If there was a request with the same session ID in the last seven days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The session ID, which is used for de-duplication. If there was a request with the same session ID in the last seven days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     * @param _sessionId The session ID, which is used for de-duplication. If there was a request with the same session ID in the last seven days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
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
                     * 获取The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     * @return SessionContext The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     * @param _sessionContext The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
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
                     * The task flow status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. An empty string indicates the task is successful; other values indicate failure. For details, see [Video processing error codes](https://intl.cloud.tencent.com/document/product/266/39145?lang=en&pg=#video-processing).
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * Error code. 0: Successful; other values: Failed.
<li>40000: Invalid input parameter.</li>
<li>60000: Source file error (e.g., video data is corrupted).</li>
<li>70000: Internal server error. Please try again.</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * The error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * The input of a watermark removal task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RemoveWaterMarkTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * The output of a watermark removal task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RemoveWaterMarkTaskOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * The session ID, which is used for de-duplication. If there was a request with the same session ID in the last seven days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REMOVEWATERMARKTASK_H_
