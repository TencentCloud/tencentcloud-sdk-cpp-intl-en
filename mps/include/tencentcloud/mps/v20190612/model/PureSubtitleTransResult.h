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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PURESUBTITLETRANSRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PURESUBTITLETRANSRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskResultInput.h>
#include <tencentcloud/mps/v20190612/model/PureSubtitleTransResultOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Translation result of pure subtitle files.
                */
                class PureSubtitleTransResult : public AbstractModel
                {
                public:
                    PureSubtitleTransResult();
                    ~PureSubtitleTransResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task status (the three valid values are as follows):
- PROCESSING
- SUCCESS 
- FAIL
                     * @return Status Task status (the three valid values are as follows):
- PROCESSING
- SUCCESS 
- FAIL
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status (the three valid values are as follows):
- PROCESSING
- SUCCESS 
- FAIL
                     * @param _status Task status (the three valid values are as follows):
- PROCESSING
- SUCCESS 
- FAIL
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
                     * 获取Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of Media Processing Service (MPS) error codes.
                     * @return ErrCodeExt Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of Media Processing Service (MPS) error codes.
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of Media Processing Service (MPS) error codes.
                     * @param _errCodeExt Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of Media Processing Service (MPS) error codes.
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
                     * 获取Error code. 0 indicates that the task is successful, and other values indicate that the task has failed. (This field is not recommended. Use the new error code field ErrCodeExt instead.)
                     * @return ErrCode Error code. 0 indicates that the task is successful, and other values indicate that the task has failed. (This field is not recommended. Use the new error code field ErrCodeExt instead.)
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. 0 indicates that the task is successful, and other values indicate that the task has failed. (This field is not recommended. Use the new error code field ErrCodeExt instead.)
                     * @param _errCode Error code. 0 indicates that the task is successful, and other values indicate that the task has failed. (This field is not recommended. Use the new error code field ErrCodeExt instead.)
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
                     * 获取Error message
                     * @return Message Error message
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message
                     * @param _message Error message
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
                     * 获取Translation task input information.
                     * @return Input Translation task input information.
                     * 
                     */
                    SmartSubtitleTaskResultInput GetInput() const;

                    /**
                     * 设置Translation task input information.
                     * @param _input Translation task input information.
                     * 
                     */
                    void SetInput(const SmartSubtitleTaskResultInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Translation output result of pure subtitle files.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Output Translation output result of pure subtitle files.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PureSubtitleTransResultOutput GetOutput() const;

                    /**
                     * 设置Translation output result of pure subtitle files.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _output Translation output result of pure subtitle files.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutput(const PureSubtitleTransResultOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Task progress.
                     * @return Progress Task progress.
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置Task progress.
                     * @param _progress Task progress.
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * Task status (the three valid values are as follows):
- PROCESSING
- SUCCESS 
- FAIL
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of Media Processing Service (MPS) error codes.
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * Error code. 0 indicates that the task is successful, and other values indicate that the task has failed. (This field is not recommended. Use the new error code field ErrCodeExt instead.)
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Translation task input information.
                     */
                    SmartSubtitleTaskResultInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Translation output result of pure subtitle files.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PureSubtitleTransResultOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Task progress.
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PURESUBTITLETRANSRESULT_H_
