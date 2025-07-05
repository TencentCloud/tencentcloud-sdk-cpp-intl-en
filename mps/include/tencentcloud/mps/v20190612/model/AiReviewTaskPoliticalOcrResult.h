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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWTASKPOLITICALOCRRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWTASKPOLITICALOCRRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiReviewPoliticalOcrTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiReviewPoliticalOcrTaskOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The result of OCR-based detection of politically sensitive information.
                */
                class AiReviewTaskPoliticalOcrResult : public AbstractModel
                {
                public:
                    AiReviewTaskPoliticalOcrResult();
                    ~AiReviewTaskPoliticalOcrResult() = default;
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message Error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _message Error message.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The input parameter for OCR-based detection of politically sensitive information.
                     * @return Input The input parameter for OCR-based detection of politically sensitive information.
                     * 
                     */
                    AiReviewPoliticalOcrTaskInput GetInput() const;

                    /**
                     * 设置The input parameter for OCR-based detection of politically sensitive information.
                     * @param _input The input parameter for OCR-based detection of politically sensitive information.
                     * 
                     */
                    void SetInput(const AiReviewPoliticalOcrTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取The output of OCR-based detection of politically sensitive information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Output The output of OCR-based detection of politically sensitive information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    AiReviewPoliticalOcrTaskOutput GetOutput() const;

                    /**
                     * 设置The output of OCR-based detection of politically sensitive information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _output The output of OCR-based detection of politically sensitive information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutput(const AiReviewPoliticalOcrTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * The input parameter for OCR-based detection of politically sensitive information.
                     */
                    AiReviewPoliticalOcrTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * The output of OCR-based detection of politically sensitive information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    AiReviewPoliticalOcrTaskOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWTASKPOLITICALOCRRESULT_H_
