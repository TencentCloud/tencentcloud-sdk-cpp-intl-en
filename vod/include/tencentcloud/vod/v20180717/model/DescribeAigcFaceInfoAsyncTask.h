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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCFACEINFOASYNCTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCFACEINFOASYNCTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcFaceInfoAsyncInput.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcFaceInfoAsyncOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Asynchronously fetch AIGC face information tasks.
                */
                class DescribeAigcFaceInfoAsyncTask : public AbstractModel
                {
                public:
                    DescribeAigcFaceInfoAsyncTask();
                    ~DescribeAigcFaceInfoAsyncTask() = default;
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
                     * 获取<p>Error code. It returns a non-zero error code in case of a source error. Please use the ErrCode of each specific task when it returns 0.</p>
                     * @return ErrCode <p>Error code. It returns a non-zero error code in case of a source error. Please use the ErrCode of each specific task when it returns 0.</p>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置<p>Error code. It returns a non-zero error code in case of a source error. Please use the ErrCode of each specific task when it returns 0.</p>
                     * @param _errCode <p>Error code. It returns a non-zero error code in case of a source error. Please use the ErrCode of each specific task when it returns 0.</p>
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
                     * 获取<p>Extended error codes.</p><p>Parameter format: extended error codes.</p><p>Enumeration values:</p><ul><li>RequestLimitExceeded: The call exceeds the concurrency limit.</li><li>InvalidParameterValue: Parameter error.</li><li>InternalError: Internal error.</li><li>FailedOperation: Operation failed.</li></ul>
                     * @return ErrCodeExt <p>Extended error codes.</p><p>Parameter format: extended error codes.</p><p>Enumeration values:</p><ul><li>RequestLimitExceeded: The call exceeds the concurrency limit.</li><li>InvalidParameterValue: Parameter error.</li><li>InternalError: Internal error.</li><li>FailedOperation: Operation failed.</li></ul>
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置<p>Extended error codes.</p><p>Parameter format: extended error codes.</p><p>Enumeration values:</p><ul><li>RequestLimitExceeded: The call exceeds the concurrency limit.</li><li>InvalidParameterValue: Parameter error.</li><li>InternalError: Internal error.</li><li>FailedOperation: Operation failed.</li></ul>
                     * @param _errCodeExt <p>Extended error codes.</p><p>Parameter format: extended error codes.</p><p>Enumeration values:</p><ul><li>RequestLimitExceeded: The call exceeds the concurrency limit.</li><li>InvalidParameterValue: Parameter error.</li><li>InternalError: Internal error.</li><li>FailedOperation: Operation failed.</li></ul>
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
                     * 获取<p>Input information to asynchronously fetch face information of the AIGC task.</p>
                     * @return Input <p>Input information to asynchronously fetch face information of the AIGC task.</p>
                     * 
                     */
                    DescribeAigcFaceInfoAsyncInput GetInput() const;

                    /**
                     * 设置<p>Input information to asynchronously fetch face information of the AIGC task.</p>
                     * @param _input <p>Input information to asynchronously fetch face information of the AIGC task.</p>
                     * 
                     */
                    void SetInput(const DescribeAigcFaceInfoAsyncInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>Asynchronously fetch the output message of the human face information task for AIGC.</p>
                     * @return Output <p>Asynchronously fetch the output message of the human face information task for AIGC.</p>
                     * 
                     */
                    DescribeAigcFaceInfoAsyncOutput GetOutput() const;

                    /**
                     * 设置<p>Asynchronously fetch the output message of the human face information task for AIGC.</p>
                     * @param _output <p>Asynchronously fetch the output message of the human face information task for AIGC.</p>
                     * 
                     */
                    void SetOutput(const DescribeAigcFaceInfoAsyncOutput& _output);

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
                     * <p>Error code. It returns a non-zero error code in case of a source error. Please use the ErrCode of each specific task when it returns 0.</p>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>Extended error codes.</p><p>Parameter format: extended error codes.</p><p>Enumeration values:</p><ul><li>RequestLimitExceeded: The call exceeds the concurrency limit.</li><li>InvalidParameterValue: Parameter error.</li><li>InternalError: Internal error.</li><li>FailedOperation: Operation failed.</li></ul>
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
                     * <p>Input information to asynchronously fetch face information of the AIGC task.</p>
                     */
                    DescribeAigcFaceInfoAsyncInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>Asynchronously fetch the output message of the human face information task for AIGC.</p>
                     */
                    DescribeAigcFaceInfoAsyncOutput m_output;
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCFACEINFOASYNCTASK_H_
