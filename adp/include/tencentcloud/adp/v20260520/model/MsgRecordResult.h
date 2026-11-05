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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDRESULT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * MsgRecordResult
                */
                class MsgRecordResult : public AbstractModel
                {
                public:
                    MsgRecordResult();
                    ~MsgRecordResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Indicates the call result of the message: 0=CALL_RESULT_UNKNOWN (all/unknown), 1=CALL_RESULT_SUCCESS (success), 2=CALL_RESULT_FAILED (failed). fail_reason (string) describes the failure reason when the call failed.
                     * @return CallResult Indicates the call result of the message: 0=CALL_RESULT_UNKNOWN (all/unknown), 1=CALL_RESULT_SUCCESS (success), 2=CALL_RESULT_FAILED (failed). fail_reason (string) describes the failure reason when the call failed.
                     * 
                     */
                    int64_t GetCallResult() const;

                    /**
                     * 设置Indicates the call result of the message: 0=CALL_RESULT_UNKNOWN (all/unknown), 1=CALL_RESULT_SUCCESS (success), 2=CALL_RESULT_FAILED (failed). fail_reason (string) describes the failure reason when the call failed.
                     * @param _callResult Indicates the call result of the message: 0=CALL_RESULT_UNKNOWN (all/unknown), 1=CALL_RESULT_SUCCESS (success), 2=CALL_RESULT_FAILED (failed). fail_reason (string) describes the failure reason when the call failed.
                     * 
                     */
                    void SetCallResult(const int64_t& _callResult);

                    /**
                     * 判断参数 CallResult 是否已赋值
                     * @return CallResult 是否已赋值
                     * 
                     */
                    bool CallResultHasBeenSet() const;

                    /**
                     * 获取Custom variable, json string
                     * @return CustomerVariable Custom variable, json string
                     * 
                     */
                    std::string GetCustomerVariable() const;

                    /**
                     * 设置Custom variable, json string
                     * @param _customerVariable Custom variable, json string
                     * 
                     */
                    void SetCustomerVariable(const std::string& _customerVariable);

                    /**
                     * 判断参数 CustomerVariable 是否已赋值
                     * @return CustomerVariable 是否已赋值
                     * 
                     */
                    bool CustomerVariableHasBeenSet() const;

                    /**
                     * 获取Failure cause.
                     * @return FailReason Failure cause.
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置Failure cause.
                     * @param _failReason Failure cause.
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取Time to first token
                     * @return FirstTokenLatency Time to first token
                     * 
                     */
                    uint64_t GetFirstTokenLatency() const;

                    /**
                     * 设置Time to first token
                     * @param _firstTokenLatency Time to first token
                     * 
                     */
                    void SetFirstTokenLatency(const uint64_t& _firstTokenLatency);

                    /**
                     * 判断参数 FirstTokenLatency 是否已赋值
                     * @return FirstTokenLatency 是否已赋值
                     * 
                     */
                    bool FirstTokenLatencyHasBeenSet() const;

                    /**
                     * 获取Number of input tokens.
                     * @return InputToken Number of input tokens.
                     * 
                     */
                    uint64_t GetInputToken() const;

                    /**
                     * 设置Number of input tokens.
                     * @param _inputToken Number of input tokens.
                     * 
                     */
                    void SetInputToken(const uint64_t& _inputToken);

                    /**
                     * 判断参数 InputToken 是否已赋值
                     * @return InputToken 是否已赋值
                     * 
                     */
                    bool InputTokenHasBeenSet() const;

                    /**
                     * 获取Number of output tokens.
                     * @return OutputToken Number of output tokens.
                     * 
                     */
                    uint64_t GetOutputToken() const;

                    /**
                     * 设置Number of output tokens.
                     * @param _outputToken Number of output tokens.
                     * 
                     */
                    void SetOutputToken(const uint64_t& _outputToken);

                    /**
                     * 判断参数 OutputToken 是否已赋值
                     * @return OutputToken 是否已赋值
                     * 
                     */
                    bool OutputTokenHasBeenSet() const;

                    /**
                     * 获取Total number of tokens.
                     * @return TotalToken Total number of tokens.
                     * 
                     */
                    uint64_t GetTotalToken() const;

                    /**
                     * 设置Total number of tokens.
                     * @param _totalToken Total number of tokens.
                     * 
                     */
                    void SetTotalToken(const uint64_t& _totalToken);

                    /**
                     * 判断参数 TotalToken 是否已赋值
                     * @return TotalToken 是否已赋值
                     * 
                     */
                    bool TotalTokenHasBeenSet() const;

                    /**
                     * 获取Total token duration
                     * @return TotalTokenLatency Total token duration
                     * 
                     */
                    uint64_t GetTotalTokenLatency() const;

                    /**
                     * 设置Total token duration
                     * @param _totalTokenLatency Total token duration
                     * 
                     */
                    void SetTotalTokenLatency(const uint64_t& _totalTokenLatency);

                    /**
                     * 判断参数 TotalTokenLatency 是否已赋值
                     * @return TotalTokenLatency 是否已赋值
                     * 
                     */
                    bool TotalTokenLatencyHasBeenSet() const;

                private:

                    /**
                     * Indicates the call result of the message: 0=CALL_RESULT_UNKNOWN (all/unknown), 1=CALL_RESULT_SUCCESS (success), 2=CALL_RESULT_FAILED (failed). fail_reason (string) describes the failure reason when the call failed.
                     */
                    int64_t m_callResult;
                    bool m_callResultHasBeenSet;

                    /**
                     * Custom variable, json string
                     */
                    std::string m_customerVariable;
                    bool m_customerVariableHasBeenSet;

                    /**
                     * Failure cause.
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * Time to first token
                     */
                    uint64_t m_firstTokenLatency;
                    bool m_firstTokenLatencyHasBeenSet;

                    /**
                     * Number of input tokens.
                     */
                    uint64_t m_inputToken;
                    bool m_inputTokenHasBeenSet;

                    /**
                     * Number of output tokens.
                     */
                    uint64_t m_outputToken;
                    bool m_outputTokenHasBeenSet;

                    /**
                     * Total number of tokens.
                     */
                    uint64_t m_totalToken;
                    bool m_totalTokenHasBeenSet;

                    /**
                     * Total token duration
                     */
                    uint64_t m_totalTokenLatency;
                    bool m_totalTokenLatencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDRESULT_H_
