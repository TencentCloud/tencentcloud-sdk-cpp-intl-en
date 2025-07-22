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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULERECOGNITIONTASKRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULERECOGNITIONTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The result of a content recognition task of a scheme.
                */
                class ScheduleRecognitionTaskResult : public AbstractModel
                {
                public:
                    ScheduleRecognitionTaskResult();
                    ~ScheduleRecognitionTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     * @return Status The task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     * @param _status The task status. Valid values: PROCESSING, SUCCESS, FAIL.
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
                     * 获取The error code. An empty string indicates the task is successful; any other value returned indicates the task has failed. For details, see [Error Codes](https://intl.cloud.tencent.com/document/product/1041/40249).
                     * @return ErrCodeExt The error code. An empty string indicates the task is successful; any other value returned indicates the task has failed. For details, see [Error Codes](https://intl.cloud.tencent.com/document/product/1041/40249).
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置The error code. An empty string indicates the task is successful; any other value returned indicates the task has failed. For details, see [Error Codes](https://intl.cloud.tencent.com/document/product/1041/40249).
                     * @param _errCodeExt The error code. An empty string indicates the task is successful; any other value returned indicates the task has failed. For details, see [Error Codes](https://intl.cloud.tencent.com/document/product/1041/40249).
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
                     * 获取The error code. 0 indicates the task is successful; other values indicate the task has failed. This parameter is not recommended. Please use `ErrCodeExt` instead.
                     * @return ErrCode The error code. 0 indicates the task is successful; other values indicate the task has failed. This parameter is not recommended. Please use `ErrCodeExt` instead.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置The error code. 0 indicates the task is successful; other values indicate the task has failed. This parameter is not recommended. Please use `ErrCodeExt` instead.
                     * @param _errCode The error code. 0 indicates the task is successful; other values indicate the task has failed. This parameter is not recommended. Please use `ErrCodeExt` instead.
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
                     * 获取The error message.
                     * @return Message The error message.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置The error message.
                     * @param _message The error message.
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
                     * 获取The input of the content recognition task.
                     * @return Input The input of the content recognition task.
                     * 
                     */
                    AiRecognitionTaskInput GetInput() const;

                    /**
                     * 设置The input of the content recognition task.
                     * @param _input The input of the content recognition task.
                     * 
                     */
                    void SetInput(const AiRecognitionTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output of the identification task.
                     * @return Output Output of the identification task.
                     * 
                     */
                    std::vector<AiRecognitionResult> GetOutput() const;

                    /**
                     * 设置Output of the identification task.
                     * @param _output Output of the identification task.
                     * 
                     */
                    void SetOutput(const std::vector<AiRecognitionResult>& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Task execution start time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @return BeginProcessTime Task execution start time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 设置Task execution start time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @param _beginProcessTime Task execution start time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
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
                     * 获取Task execution completion time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @return FinishTime Task execution completion time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置Task execution completion time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @param _finishTime Task execution completion time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
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
                     * The task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The error code. An empty string indicates the task is successful; any other value returned indicates the task has failed. For details, see [Error Codes](https://intl.cloud.tencent.com/document/product/1041/40249).
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * The error code. 0 indicates the task is successful; other values indicate the task has failed. This parameter is not recommended. Please use `ErrCodeExt` instead.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * The error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * The input of the content recognition task.
                     */
                    AiRecognitionTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output of the identification task.
                     */
                    std::vector<AiRecognitionResult> m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Task execution start time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * Task execution completion time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULERECOGNITIONTASKRESULT_H_
