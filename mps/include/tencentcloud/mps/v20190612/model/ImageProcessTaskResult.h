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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEPROCESSTASKRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEPROCESSTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageProcessTaskOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Result type of the image processing task.
                */
                class ImageProcessTaskResult : public AbstractModel
                {
                public:
                    ImageProcessTaskResult();
                    ~ImageProcessTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task status, including PROCESSING, SUCCESS, and FAIL.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Task status, including PROCESSING, SUCCESS, and FAIL.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status, including PROCESSING, SUCCESS, and FAIL.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _status Task status, including PROCESSING, SUCCESS, and FAIL.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of [MPS error codes](https://www.tencentcloud.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * @return ErrMsg Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of [MPS error codes](https://www.tencentcloud.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of [MPS error codes](https://www.tencentcloud.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * @param _errMsg Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of [MPS error codes](https://www.tencentcloud.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取Error message.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Message Error message.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _message Error message.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Transcoding task output.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Output Transcoding task output.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ImageProcessTaskOutput GetOutput() const;

                    /**
                     * 设置Transcoding task output.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _output Transcoding task output.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOutput(const ImageProcessTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Transcoding progress, with a value range of [0-100].
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Progress Transcoding progress, with a value range of [0-100].
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Transcoding progress, with a value range of [0-100].
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _progress Transcoding progress, with a value range of [0-100].
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Task status, including PROCESSING, SUCCESS, and FAIL.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of [MPS error codes](https://www.tencentcloud.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * Error message.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Transcoding task output.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ImageProcessTaskOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Transcoding progress, with a value range of [0-100].
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEPROCESSTASKRESULT_H_
