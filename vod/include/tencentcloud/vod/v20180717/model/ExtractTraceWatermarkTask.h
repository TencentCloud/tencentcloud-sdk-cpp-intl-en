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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ExtractTraceWatermarkTaskInput.h>
#include <tencentcloud/vod/v20180717/model/ExtractTraceWatermarkTaskOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * A digital watermark extraction task.
                */
                class ExtractTraceWatermarkTask : public AbstractModel
                {
                public:
                    ExtractTraceWatermarkTask();
                    ~ExtractTraceWatermarkTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The task ID.
                     * @return TaskId The task ID.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The task ID.
                     * @param TaskId The task ID.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取The task status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     * @return Status The task status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The task status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     * @param Status The task status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The error code. `0` indicates the task is successful. Other values indicate that the task failed.
<li>40000: Invalid input parameter.</li>
<li>60000: Source file error (e.g., video data is corrupted).</li>
<li>70000: Internal server error. Please try again.</li>
                     * @return ErrCode The error code. `0` indicates the task is successful. Other values indicate that the task failed.
<li>40000: Invalid input parameter.</li>
<li>60000: Source file error (e.g., video data is corrupted).</li>
<li>70000: Internal server error. Please try again.</li>
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置The error code. `0` indicates the task is successful. Other values indicate that the task failed.
<li>40000: Invalid input parameter.</li>
<li>60000: Source file error (e.g., video data is corrupted).</li>
<li>70000: Internal server error. Please try again.</li>
                     * @param ErrCode The error code. `0` indicates the task is successful. Other values indicate that the task failed.
<li>40000: Invalid input parameter.</li>
<li>60000: Source file error (e.g., video data is corrupted).</li>
<li>70000: Internal server error. Please try again.</li>
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
                     * 获取The error code. An empty string indicates the task is successful; other values indicate that the task failed. For details, see [Video processing error codes](https://intl.cloud.tencent.com/document/product/266/39145?lang=en&pg=#video-processing).
                     * @return ErrCodeExt The error code. An empty string indicates the task is successful; other values indicate that the task failed. For details, see [Video processing error codes](https://intl.cloud.tencent.com/document/product/266/39145?lang=en&pg=#video-processing).
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置The error code. An empty string indicates the task is successful; other values indicate that the task failed. For details, see [Video processing error codes](https://intl.cloud.tencent.com/document/product/266/39145?lang=en&pg=#video-processing).
                     * @param ErrCodeExt The error code. An empty string indicates the task is successful; other values indicate that the task failed. For details, see [Video processing error codes](https://intl.cloud.tencent.com/document/product/266/39145?lang=en&pg=#video-processing).
                     */
                    void SetErrCodeExt(const std::string& _errCodeExt);

                    /**
                     * 判断参数 ErrCodeExt 是否已赋值
                     * @return ErrCodeExt 是否已赋值
                     */
                    bool ErrCodeExtHasBeenSet() const;

                    /**
                     * 获取The information of a digital watermark extraction task.
                     * @return Input The information of a digital watermark extraction task.
                     */
                    ExtractTraceWatermarkTaskInput GetInput() const;

                    /**
                     * 设置The information of a digital watermark extraction task.
                     * @param Input The information of a digital watermark extraction task.
                     */
                    void SetInput(const ExtractTraceWatermarkTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取The output of a digital watermark extraction task.
                     * @return Output The output of a digital watermark extraction task.
                     */
                    ExtractTraceWatermarkTaskOutput GetOutput() const;

                    /**
                     * 设置The output of a digital watermark extraction task.
                     * @param Output The output of a digital watermark extraction task.
                     */
                    void SetOutput(const ExtractTraceWatermarkTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取The session ID, which is used for de-duplication. If there was a request with the same session ID in the last seven days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     * @return SessionId The session ID, which is used for de-duplication. If there was a request with the same session ID in the last seven days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The session ID, which is used for de-duplication. If there was a request with the same session ID in the last seven days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     * @param SessionId The session ID, which is used for de-duplication. If there was a request with the same session ID in the last seven days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     * @return SessionContext The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     * @param SessionContext The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * The task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The task status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The error code. `0` indicates the task is successful. Other values indicate that the task failed.
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
                     * The error code. An empty string indicates the task is successful; other values indicate that the task failed. For details, see [Video processing error codes](https://intl.cloud.tencent.com/document/product/266/39145?lang=en&pg=#video-processing).
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * The information of a digital watermark extraction task.
                     */
                    ExtractTraceWatermarkTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * The output of a digital watermark extraction task.
                     */
                    ExtractTraceWatermarkTaskOutput m_output;
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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKTASK_H_
