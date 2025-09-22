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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASETASKRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASETASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SmartEraseTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskDelLogoOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Smart erasure task result.
                */
                class SmartEraseTaskResult : public AbstractModel
                {
                public:
                    SmartEraseTaskResult();
                    ~SmartEraseTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Error code. An empty string indicates that the task is successful, and other values indicate that the task has failed. For specific values, see [Error Codes] (https://www.tencentcloud.comom/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * @return ErrCodeExt Error code. An empty string indicates that the task is successful, and other values indicate that the task has failed. For specific values, see [Error Codes] (https://www.tencentcloud.comom/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置Error code. An empty string indicates that the task is successful, and other values indicate that the task has failed. For specific values, see [Error Codes] (https://www.tencentcloud.comom/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * @param _errCodeExt Error code. An empty string indicates that the task is successful, and other values indicate that the task has failed. For specific values, see [Error Codes] (https://www.tencentcloud.comom/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
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
                     * 获取Input of the smart erasure task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Input Input of the smart erasure task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SmartEraseTaskInput GetInput() const;

                    /**
                     * 设置Input of the smart erasure task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _input Input of the smart erasure task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInput(const SmartEraseTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output of the smart erasure task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Output Output of the smart erasure task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    AiAnalysisTaskDelLogoOutput GetOutput() const;

                    /**
                     * 设置Output of the smart erasure task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _output Output of the smart erasure task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOutput(const AiAnalysisTaskDelLogoOutput& _output);

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

                    /**
                     * 获取Task execution start time in ISO datetime format.
                     * @return BeginProcessTime Task execution start time in ISO datetime format.
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 设置Task execution start time in ISO datetime format.
                     * @param _beginProcessTime Task execution start time in ISO datetime format.
                     * 
                     */
                    void SetBeginProcessTime(const std::string& _beginProcessTime);

                    /**
                     * 判断参数 BeginProcessTime 是否已赋值
                     * @return BeginProcessTime 是否已赋值
                     * 
                     */
                    bool BeginProcessTimeHasBeenSet() const;

                    /**
                     * 获取Task execution completion time in ISO datetime format.
                     * @return FinishTime Task execution completion time in ISO datetime format.
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置Task execution completion time in ISO datetime format.
                     * @param _finishTime Task execution completion time in ISO datetime format.
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                private:

                    /**
                     * Task status, including PROCESSING, SUCCESS, and FAIL.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. An empty string indicates that the task is successful, and other values indicate that the task has failed. For specific values, see [Error Codes] (https://www.tencentcloud.comom/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Input of the smart erasure task.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SmartEraseTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output of the smart erasure task.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    AiAnalysisTaskDelLogoOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Task progress.		
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Task execution start time in ISO datetime format.
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * Task execution completion time in ISO datetime format.
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASETASKRESULT_H_
