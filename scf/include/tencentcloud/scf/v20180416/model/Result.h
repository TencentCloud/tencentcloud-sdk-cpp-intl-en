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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_RESULT_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_RESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Response of the executed function
                */
                class Result : public AbstractModel
                {
                public:
                    Result();
                    ~Result() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取It indicates the log output during the function execution. Null is returned for asynchronous invocations.
                     * @return Log It indicates the log output during the function execution. Null is returned for asynchronous invocations.
                     */
                    std::string GetLog() const;

                    /**
                     * 设置It indicates the log output during the function execution. Null is returned for asynchronous invocations.
                     * @param Log It indicates the log output during the function execution. Null is returned for asynchronous invocations.
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取It indicates the response from the executed function. Null is returned for asynchronous invocations.
                     * @return RetMsg It indicates the response from the executed function. Null is returned for asynchronous invocations.
                     */
                    std::string GetRetMsg() const;

                    /**
                     * 设置It indicates the response from the executed function. Null is returned for asynchronous invocations.
                     * @param RetMsg It indicates the response from the executed function. Null is returned for asynchronous invocations.
                     */
                    void SetRetMsg(const std::string& _retMsg);

                    /**
                     * 判断参数 RetMsg 是否已赋值
                     * @return RetMsg 是否已赋值
                     */
                    bool RetMsgHasBeenSet() const;

                    /**
                     * 获取It indicates the error message of the executed function. Null is returned for asynchronous invocations.
                     * @return ErrMsg It indicates the error message of the executed function. Null is returned for asynchronous invocations.
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置It indicates the error message of the executed function. Null is returned for asynchronous invocations.
                     * @param ErrMsg It indicates the error message of the executed function. Null is returned for asynchronous invocations.
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取It indicates the memory size (in bytes) when the function is running. Null is returned for asynchronous invocations.
                     * @return MemUsage It indicates the memory size (in bytes) when the function is running. Null is returned for asynchronous invocations.
                     */
                    int64_t GetMemUsage() const;

                    /**
                     * 设置It indicates the memory size (in bytes) when the function is running. Null is returned for asynchronous invocations.
                     * @param MemUsage It indicates the memory size (in bytes) when the function is running. Null is returned for asynchronous invocations.
                     */
                    void SetMemUsage(const int64_t& _memUsage);

                    /**
                     * 判断参数 MemUsage 是否已赋值
                     * @return MemUsage 是否已赋值
                     */
                    bool MemUsageHasBeenSet() const;

                    /**
                     * 获取It indicates the duration (in milliseconds) required for running the function. Null is returned for asynchronous invocations.
                     * @return Duration It indicates the duration (in milliseconds) required for running the function. Null is returned for asynchronous invocations.
                     */
                    double GetDuration() const;

                    /**
                     * 设置It indicates the duration (in milliseconds) required for running the function. Null is returned for asynchronous invocations.
                     * @param Duration It indicates the duration (in milliseconds) required for running the function. Null is returned for asynchronous invocations.
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取It indicates the billing duration (in milliseconds) for the function. Null is returned for asynchronous invocations.
                     * @return BillDuration It indicates the billing duration (in milliseconds) for the function. Null is returned for asynchronous invocations.
                     */
                    int64_t GetBillDuration() const;

                    /**
                     * 设置It indicates the billing duration (in milliseconds) for the function. Null is returned for asynchronous invocations.
                     * @param BillDuration It indicates the billing duration (in milliseconds) for the function. Null is returned for asynchronous invocations.
                     */
                    void SetBillDuration(const int64_t& _billDuration);

                    /**
                     * 判断参数 BillDuration 是否已赋值
                     * @return BillDuration 是否已赋值
                     */
                    bool BillDurationHasBeenSet() const;

                    /**
                     * 获取ID of the executed function
                     * @return FunctionRequestId ID of the executed function
                     */
                    std::string GetFunctionRequestId() const;

                    /**
                     * 设置ID of the executed function
                     * @param FunctionRequestId ID of the executed function
                     */
                    void SetFunctionRequestId(const std::string& _functionRequestId);

                    /**
                     * 判断参数 FunctionRequestId 是否已赋值
                     * @return FunctionRequestId 是否已赋值
                     */
                    bool FunctionRequestIdHasBeenSet() const;

                    /**
                     * 获取The [status code](https://intl.cloud.tencent.com/document/product/583/42611?from_cn_redirect=1) of the request. It’s not available for `Invoke` API. 
                     * @return InvokeResult The [status code](https://intl.cloud.tencent.com/document/product/583/42611?from_cn_redirect=1) of the request. It’s not available for `Invoke` API. 
                     */
                    int64_t GetInvokeResult() const;

                    /**
                     * 设置The [status code](https://intl.cloud.tencent.com/document/product/583/42611?from_cn_redirect=1) of the request. It’s not available for `Invoke` API. 
                     * @param InvokeResult The [status code](https://intl.cloud.tencent.com/document/product/583/42611?from_cn_redirect=1) of the request. It’s not available for `Invoke` API. 
                     */
                    void SetInvokeResult(const int64_t& _invokeResult);

                    /**
                     * 判断参数 InvokeResult 是否已赋值
                     * @return InvokeResult 是否已赋值
                     */
                    bool InvokeResultHasBeenSet() const;

                private:

                    /**
                     * It indicates the log output during the function execution. Null is returned for asynchronous invocations.
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                    /**
                     * It indicates the response from the executed function. Null is returned for asynchronous invocations.
                     */
                    std::string m_retMsg;
                    bool m_retMsgHasBeenSet;

                    /**
                     * It indicates the error message of the executed function. Null is returned for asynchronous invocations.
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * It indicates the memory size (in bytes) when the function is running. Null is returned for asynchronous invocations.
                     */
                    int64_t m_memUsage;
                    bool m_memUsageHasBeenSet;

                    /**
                     * It indicates the duration (in milliseconds) required for running the function. Null is returned for asynchronous invocations.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * It indicates the billing duration (in milliseconds) for the function. Null is returned for asynchronous invocations.
                     */
                    int64_t m_billDuration;
                    bool m_billDurationHasBeenSet;

                    /**
                     * ID of the executed function
                     */
                    std::string m_functionRequestId;
                    bool m_functionRequestIdHasBeenSet;

                    /**
                     * The [status code](https://intl.cloud.tencent.com/document/product/583/42611?from_cn_redirect=1) of the request. It’s not available for `Invoke` API. 
                     */
                    int64_t m_invokeResult;
                    bool m_invokeResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_RESULT_H_
