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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKBATCHOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKBATCHOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskTransTextResultOutput.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskAsrFullTextResultOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Output information for smart subtitle tasks.
                */
                class SmartSubtitleTaskBatchOutput : public AbstractModel
                {
                public:
                    SmartSubtitleTaskBatchOutput();
                    ~SmartSubtitleTaskBatchOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取Task status, including PROCESSING, SUCCESS, and FAIL.
                     * @return Status Task status, including PROCESSING, SUCCESS, and FAIL.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status, including PROCESSING, SUCCESS, and FAIL.
                     * @param _status Task status, including PROCESSING, SUCCESS, and FAIL.
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
                     * 获取Error code. An empty string indicates that the task is successful, and other values indicate that the task has failed. For specific values, see [Error Codes] (https://intl.cloud.tencent.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * @return ErrCodeExt Error code. An empty string indicates that the task is successful, and other values indicate that the task has failed. For specific values, see [Error Codes] (https://intl.cloud.tencent.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置Error code. An empty string indicates that the task is successful, and other values indicate that the task has failed. For specific values, see [Error Codes] (https://intl.cloud.tencent.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * @param _errCodeExt Error code. An empty string indicates that the task is successful, and other values indicate that the task has failed. For specific values, see [Error Codes] (https://intl.cloud.tencent.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
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
                     * 获取Translation task output information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TransTextTask Translation task output information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SmartSubtitleTaskTransTextResultOutput GetTransTextTask() const;

                    /**
                     * 设置Translation task output information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _transTextTask Translation task output information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTransTextTask(const SmartSubtitleTaskTransTextResultOutput& _transTextTask);

                    /**
                     * 判断参数 TransTextTask 是否已赋值
                     * @return TransTextTask 是否已赋值
                     * 
                     */
                    bool TransTextTaskHasBeenSet() const;

                    /**
                     * 获取Output information on the full speech recognition task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AsrFullTextTask Output information on the full speech recognition task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SmartSubtitleTaskAsrFullTextResultOutput GetAsrFullTextTask() const;

                    /**
                     * 设置Output information on the full speech recognition task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _asrFullTextTask Output information on the full speech recognition task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAsrFullTextTask(const SmartSubtitleTaskAsrFullTextResultOutput& _asrFullTextTask);

                    /**
                     * 判断参数 AsrFullTextTask 是否已赋值
                     * @return AsrFullTextTask 是否已赋值
                     * 
                     */
                    bool AsrFullTextTaskHasBeenSet() const;

                private:

                    /**
                     * Task progress.
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Task status, including PROCESSING, SUCCESS, and FAIL.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. An empty string indicates that the task is successful, and other values indicate that the task has failed. For specific values, see [Error Codes] (https://intl.cloud.tencent.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Translation task output information.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SmartSubtitleTaskTransTextResultOutput m_transTextTask;
                    bool m_transTextTaskHasBeenSet;

                    /**
                     * Output information on the full speech recognition task.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SmartSubtitleTaskAsrFullTextResultOutput m_asrFullTextTask;
                    bool m_asrFullTextTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKBATCHOUTPUT_H_
