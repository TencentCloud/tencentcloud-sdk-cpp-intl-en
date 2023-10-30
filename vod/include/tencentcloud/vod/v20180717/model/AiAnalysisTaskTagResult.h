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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKTAGRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKTAGRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskTagInput.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskTagOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Result type of intelligent tagging task
                */
                class AiAnalysisTaskTagResult : public AbstractModel
                {
                public:
                    AiAnalysisTaskTagResult();
                    ~AiAnalysisTaskTagResult() = default;
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
                     * 获取Error code. An empty string indicates the task is successful; other values indicate failure. For details, see [Video Processing Error Codes](https://intl.cloud.tencent.com/zh/document/product/266/39145).
                     * @return ErrCodeExt Error code. An empty string indicates the task is successful; other values indicate failure. For details, see [Video Processing Error Codes](https://intl.cloud.tencent.com/zh/document/product/266/39145).
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置Error code. An empty string indicates the task is successful; other values indicate failure. For details, see [Video Processing Error Codes](https://intl.cloud.tencent.com/zh/document/product/266/39145).
                     * @param _errCodeExt Error code. An empty string indicates the task is successful; other values indicate failure. For details, see [Video Processing Error Codes](https://intl.cloud.tencent.com/zh/document/product/266/39145).
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
                     * 获取Error code. 0 indicates the task is successful; other values indicate failure. You’re not recommended to use this parameter, but to use the new parameter `ErrCodeExt`.
                     * @return ErrCode Error code. 0 indicates the task is successful; other values indicate failure. You’re not recommended to use this parameter, but to use the new parameter `ErrCodeExt`.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. 0 indicates the task is successful; other values indicate failure. You’re not recommended to use this parameter, but to use the new parameter `ErrCodeExt`.
                     * @param _errCode Error code. 0 indicates the task is successful; other values indicate failure. You’re not recommended to use this parameter, but to use the new parameter `ErrCodeExt`.
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
                     * 获取Input of intelligent tagging task.
                     * @return Input Input of intelligent tagging task.
                     * 
                     */
                    AiAnalysisTaskTagInput GetInput() const;

                    /**
                     * 设置Input of intelligent tagging task.
                     * @param _input Input of intelligent tagging task.
                     * 
                     */
                    void SetInput(const AiAnalysisTaskTagInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output of intelligent tagging task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Output Output of intelligent tagging task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiAnalysisTaskTagOutput GetOutput() const;

                    /**
                     * 设置Output of intelligent tagging task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _output Output of intelligent tagging task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutput(const AiAnalysisTaskTagOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取The progress of an intelligent labeling task. Value range: 0-100.
                     * @return Progress The progress of an intelligent labeling task. Value range: 0-100.
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置The progress of an intelligent labeling task. Value range: 0-100.
                     * @param _progress The progress of an intelligent labeling task. Value range: 0-100.
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
                     * 获取
                     * @return BeginProcessTime 
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 设置
                     * @param _beginProcessTime 
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
                     * 获取
                     * @return FinishTime 
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置
                     * @param _finishTime 
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
                     * Task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. An empty string indicates the task is successful; other values indicate failure. For details, see [Video Processing Error Codes](https://intl.cloud.tencent.com/zh/document/product/266/39145).
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * Error code. 0 indicates the task is successful; other values indicate failure. You’re not recommended to use this parameter, but to use the new parameter `ErrCodeExt`.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Input of intelligent tagging task.
                     */
                    AiAnalysisTaskTagInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output of intelligent tagging task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskTagOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * The progress of an intelligent labeling task. Value range: 0-100.
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKTAGRESULT_H_
