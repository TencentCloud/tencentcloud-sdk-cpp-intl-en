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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAPROCESSTASKTRANSCODERESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAPROCESSTASKTRANSCODERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TranscodeTaskInput.h>
#include <tencentcloud/mps/v20190612/model/MediaTranscodeItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Result type of a transcoding task
                */
                class MediaProcessTaskTranscodeResult : public AbstractModel
                {
                public:
                    MediaProcessTaskTranscodeResult();
                    ~MediaProcessTaskTranscodeResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     * @return Status Task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     * @param _status Task status. Valid values: PROCESSING, SUCCESS, FAIL.
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
                     * 获取The error code. An empty string indicates the task is successful; any other value returned indicates the task failed. For details, see [Error Codes](https://intl.cloud.tencent.com/document/product/1041/40249).
                     * @return ErrCodeExt The error code. An empty string indicates the task is successful; any other value returned indicates the task failed. For details, see [Error Codes](https://intl.cloud.tencent.com/document/product/1041/40249).
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置The error code. An empty string indicates the task is successful; any other value returned indicates the task failed. For details, see [Error Codes](https://intl.cloud.tencent.com/document/product/1041/40249).
                     * @param _errCodeExt The error code. An empty string indicates the task is successful; any other value returned indicates the task failed. For details, see [Error Codes](https://intl.cloud.tencent.com/document/product/1041/40249).
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
                     * 获取Error code. 0 indicates the task is successful; otherwise it is failed. This parameter is no longer recommended. Consider using the new error code parameter ErrCodeExt.
                     * @return ErrCode Error code. 0 indicates the task is successful; otherwise it is failed. This parameter is no longer recommended. Consider using the new error code parameter ErrCodeExt.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. 0 indicates the task is successful; otherwise it is failed. This parameter is no longer recommended. Consider using the new error code parameter ErrCodeExt.
                     * @param _errCode Error code. 0 indicates the task is successful; otherwise it is failed. This parameter is no longer recommended. Consider using the new error code parameter ErrCodeExt.
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
                     * 获取Input for a transcoding task.
                     * @return Input Input for a transcoding task.
                     * 
                     */
                    TranscodeTaskInput GetInput() const;

                    /**
                     * 设置Input for a transcoding task.
                     * @param _input Input for a transcoding task.
                     * 
                     */
                    void SetInput(const TranscodeTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output of a transcoding task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Output Output of a transcoding task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaTranscodeItem GetOutput() const;

                    /**
                     * 设置Output of a transcoding task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _output Output of a transcoding task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutput(const MediaTranscodeItem& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Transcoding progress, with a value range of [0-100].
                     * @return Progress Transcoding progress, with a value range of [0-100].
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Transcoding progress, with a value range of [0-100].
                     * @param _progress Transcoding progress, with a value range of [0-100].
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
                     * Task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The error code. An empty string indicates the task is successful; any other value returned indicates the task failed. For details, see [Error Codes](https://intl.cloud.tencent.com/document/product/1041/40249).
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * Error code. 0 indicates the task is successful; otherwise it is failed. This parameter is no longer recommended. Consider using the new error code parameter ErrCodeExt.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Input for a transcoding task.
                     */
                    TranscodeTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output of a transcoding task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaTranscodeItem m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Transcoding progress, with a value range of [0-100].
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAPROCESSTASKTRANSCODERESULT_H_
