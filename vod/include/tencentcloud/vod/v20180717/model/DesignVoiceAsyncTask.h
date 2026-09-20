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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESIGNVOICEASYNCTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESIGNVOICEASYNCTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/DesignVoiceAsyncInput.h>
#include <tencentcloud/vod/v20180717/model/DesignVoiceAsyncOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Timbre design task.
                */
                class DesignVoiceAsyncTask : public AbstractModel
                {
                public:
                    DesignVoiceAsyncTask();
                    ~DesignVoiceAsyncTask() = default;
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
                     * 获取<p>Task status. Valid values: </p><li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
                     * @return Status <p>Task status. Valid values: </p><li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Task status. Valid values: </p><li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
                     * @param _status <p>Task status. Valid values: </p><li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
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
                     * 获取<p>Error code. 0 indicates success, and other values indicate failure:</p><li>40000: invalid input parameters. Check the input parameters;</li><li>60000: source file error (for example, video data damage). Confirm whether the source file is normal;</li><li>70000: internal service error. Retry is recommended.</li>
                     * @return ErrCode <p>Error code. 0 indicates success, and other values indicate failure:</p><li>40000: invalid input parameters. Check the input parameters;</li><li>60000: source file error (for example, video data damage). Confirm whether the source file is normal;</li><li>70000: internal service error. Retry is recommended.</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置<p>Error code. 0 indicates success, and other values indicate failure:</p><li>40000: invalid input parameters. Check the input parameters;</li><li>60000: source file error (for example, video data damage). Confirm whether the source file is normal;</li><li>70000: internal service error. Retry is recommended.</li>
                     * @param _errCode <p>Error code. 0 indicates success, and other values indicate failure:</p><li>40000: invalid input parameters. Check the input parameters;</li><li>60000: source file error (for example, video data damage). Confirm whether the source file is normal;</li><li>70000: internal service error. Retry is recommended.</li>
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
                     * 获取<p>Error code. An empty string indicates success, and other values indicate failure. For values, see <a href="https://www.tencentcloud.com/document/product/266/50368?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">video processing error code</a> list.</p>
                     * @return ErrCodeExt <p>Error code. An empty string indicates success, and other values indicate failure. For values, see <a href="https://www.tencentcloud.com/document/product/266/50368?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">video processing error code</a> list.</p>
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置<p>Error code. An empty string indicates success, and other values indicate failure. For values, see <a href="https://www.tencentcloud.com/document/product/266/50368?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">video processing error code</a> list.</p>
                     * @param _errCodeExt <p>Error code. An empty string indicates success, and other values indicate failure. For values, see <a href="https://www.tencentcloud.com/document/product/266/50368?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">video processing error code</a> list.</p>
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
                     * 获取<p>Timbre design task input information.</p>
                     * @return Input <p>Timbre design task input information.</p>
                     * 
                     */
                    DesignVoiceAsyncInput GetInput() const;

                    /**
                     * 设置<p>Timbre design task input information.</p>
                     * @param _input <p>Timbre design task input information.</p>
                     * 
                     */
                    void SetInput(const DesignVoiceAsyncInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>Timbre design task output information.</p>
                     * @return Output <p>Timbre design task output information.</p>
                     * 
                     */
                    DesignVoiceAsyncOutput GetOutput() const;

                    /**
                     * 设置<p>Timbre design task output information.</p>
                     * @param _output <p>Timbre design task output information.</p>
                     * 
                     */
                    void SetOutput(const DesignVoiceAsyncOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @return SessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @param _sessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
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
                     * 获取<p>Source context. This is used to pass user request information. The task status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @return SessionContext <p>Source context. This is used to pass user request information. The task status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Source context. This is used to pass user request information. The task status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @param _sessionContext <p>Source context. This is used to pass user request information. The task status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取<p>Pull upload progress, in the range of [0,100].</p>
                     * @return Progress <p>Pull upload progress, in the range of [0,100].</p>
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>Pull upload progress, in the range of [0,100].</p>
                     * @param _progress <p>Pull upload progress, in the range of [0,100].</p>
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task status. Valid values: </p><li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Error code. 0 indicates success, and other values indicate failure:</p><li>40000: invalid input parameters. Check the input parameters;</li><li>60000: source file error (for example, video data damage). Confirm whether the source file is normal;</li><li>70000: internal service error. Retry is recommended.</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>Error message.</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>Error code. An empty string indicates success, and other values indicate failure. For values, see <a href="https://www.tencentcloud.com/document/product/266/50368?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">video processing error code</a> list.</p>
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * <p>Timbre design task input information.</p>
                     */
                    DesignVoiceAsyncInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>Timbre design task output information.</p>
                     */
                    DesignVoiceAsyncOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Source context. This is used to pass user request information. The task status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Pull upload progress, in the range of [0,100].</p>
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESIGNVOICEASYNCTASK_H_
