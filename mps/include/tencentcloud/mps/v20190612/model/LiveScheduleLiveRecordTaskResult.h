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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESCHEDULELIVERECORDTASKRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESCHEDULELIVERECORDTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveRecordTaskInput.h>
#include <tencentcloud/mps/v20190612/model/LiveRecordResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The result of a live scheme's live recording task.
                */
                class LiveScheduleLiveRecordTaskResult : public AbstractModel
                {
                public:
                    LiveScheduleLiveRecordTaskResult();
                    ~LiveScheduleLiveRecordTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The task status. Valid values: `PROCESSING`, `SUCCESS`, `FAIL`.
                     * @return Status The task status. Valid values: `PROCESSING`, `SUCCESS`, `FAIL`.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The task status. Valid values: `PROCESSING`, `SUCCESS`, `FAIL`.
                     * @param _status The task status. Valid values: `PROCESSING`, `SUCCESS`, `FAIL`.
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
                     * 获取The error code. An empty string indicates the task is successful; any other value indicates the task has failed. For details, see [Error Codes](https://www.tencentcloud.com/document/product/1041/40249).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ErrCodeExt The error code. An empty string indicates the task is successful; any other value indicates the task has failed. For details, see [Error Codes](https://www.tencentcloud.com/document/product/1041/40249).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置The error code. An empty string indicates the task is successful; any other value indicates the task has failed. For details, see [Error Codes](https://www.tencentcloud.com/document/product/1041/40249).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _errCodeExt The error code. An empty string indicates the task is successful; any other value indicates the task has failed. For details, see [Error Codes](https://www.tencentcloud.com/document/product/1041/40249).
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取The error code. `0` indicates the task is successful; other values indicate the task has failed. This parameter is not recommended. Please use `ErrCodeExt` instead.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ErrCode The error code. `0` indicates the task is successful; other values indicate the task has failed. This parameter is not recommended. Please use `ErrCodeExt` instead.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置The error code. `0` indicates the task is successful; other values indicate the task has failed. This parameter is not recommended. Please use `ErrCodeExt` instead.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _errCode The error code. `0` indicates the task is successful; other values indicate the task has failed. This parameter is not recommended. Please use `ErrCodeExt` instead.
Note: This field may return·null, indicating that no valid values can be obtained.
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
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Message The error message.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置The error message.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _message The error message.
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取The input of a live recording task.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Input The input of a live recording task.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    LiveRecordTaskInput GetInput() const;

                    /**
                     * 设置The input of a live recording task.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _input The input of a live recording task.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInput(const LiveRecordTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取The output of a live recording task.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Output The output of a live recording task.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    LiveRecordResult GetOutput() const;

                    /**
                     * 设置The output of a live recording task.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _output The output of a live recording task.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutput(const LiveRecordResult& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取The time when the task was started, in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return BeginProcessTime The time when the task was started, in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 设置The time when the task was started, in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _beginProcessTime The time when the task was started, in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取The time when the task was completed, in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return FinishTime The time when the task was completed, in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置The time when the task was completed, in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _finishTime The time when the task was completed, in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * The task status. Valid values: `PROCESSING`, `SUCCESS`, `FAIL`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The error code. An empty string indicates the task is successful; any other value indicates the task has failed. For details, see [Error Codes](https://www.tencentcloud.com/document/product/1041/40249).
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * The error code. `0` indicates the task is successful; other values indicate the task has failed. This parameter is not recommended. Please use `ErrCodeExt` instead.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * The error message.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * The input of a live recording task.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    LiveRecordTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * The output of a live recording task.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    LiveRecordResult m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * The time when the task was started, in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * The time when the task was completed, in [ISO date format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESCHEDULELIVERECORDTASKRESULT_H_
