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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_FUNCTIONLOG_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_FUNCTIONLOG_H_

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
                * Log information
                */
                class FunctionLog : public AbstractModel
                {
                public:
                    FunctionLog();
                    ~FunctionLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Function name
                     * @return FunctionName Function name
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function name
                     * @param _functionName Function name
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Return value after the function is executed
                     * @return RetMsg Return value after the function is executed
                     * 
                     */
                    std::string GetRetMsg() const;

                    /**
                     * 设置Return value after the function is executed
                     * @param _retMsg Return value after the function is executed
                     * 
                     */
                    void SetRetMsg(const std::string& _retMsg);

                    /**
                     * 判断参数 RetMsg 是否已赋值
                     * @return RetMsg 是否已赋值
                     * 
                     */
                    bool RetMsgHasBeenSet() const;

                    /**
                     * 获取RequestId corresponding to the executed function
                     * @return RequestId RequestId corresponding to the executed function
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置RequestId corresponding to the executed function
                     * @param _requestId RequestId corresponding to the executed function
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取Start time of the function execution
                     * @return StartTime Start time of the function execution
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the function execution
                     * @param _startTime Start time of the function execution
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Function execution result. `0` indicates successful execution and other values indicate failure.
                     * @return RetCode Function execution result. `0` indicates successful execution and other values indicate failure.
                     * 
                     */
                    int64_t GetRetCode() const;

                    /**
                     * 设置Function execution result. `0` indicates successful execution and other values indicate failure.
                     * @param _retCode Function execution result. `0` indicates successful execution and other values indicate failure.
                     * 
                     */
                    void SetRetCode(const int64_t& _retCode);

                    /**
                     * 判断参数 RetCode 是否已赋值
                     * @return RetCode 是否已赋值
                     * 
                     */
                    bool RetCodeHasBeenSet() const;

                    /**
                     * 获取It specifies whether the function invocation is finished. `1` indicates execution completion and other values indicate that exceptions occurred during the invocation.
                     * @return InvokeFinished It specifies whether the function invocation is finished. `1` indicates execution completion and other values indicate that exceptions occurred during the invocation.
                     * 
                     */
                    int64_t GetInvokeFinished() const;

                    /**
                     * 设置It specifies whether the function invocation is finished. `1` indicates execution completion and other values indicate that exceptions occurred during the invocation.
                     * @param _invokeFinished It specifies whether the function invocation is finished. `1` indicates execution completion and other values indicate that exceptions occurred during the invocation.
                     * 
                     */
                    void SetInvokeFinished(const int64_t& _invokeFinished);

                    /**
                     * 判断参数 InvokeFinished 是否已赋值
                     * @return InvokeFinished 是否已赋值
                     * 
                     */
                    bool InvokeFinishedHasBeenSet() const;

                    /**
                     * 获取Duration of the function execution. The unit is millisecond (ms).
                     * @return Duration Duration of the function execution. The unit is millisecond (ms).
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Duration of the function execution. The unit is millisecond (ms).
                     * @param _duration Duration of the function execution. The unit is millisecond (ms).
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Function billing duration. The unit is millisecond (ms). The value is rounded up to a multiple of 100 ms.
                     * @return BillDuration Function billing duration. The unit is millisecond (ms). The value is rounded up to a multiple of 100 ms.
                     * 
                     */
                    int64_t GetBillDuration() const;

                    /**
                     * 设置Function billing duration. The unit is millisecond (ms). The value is rounded up to a multiple of 100 ms.
                     * @param _billDuration Function billing duration. The unit is millisecond (ms). The value is rounded up to a multiple of 100 ms.
                     * 
                     */
                    void SetBillDuration(const int64_t& _billDuration);

                    /**
                     * 判断参数 BillDuration 是否已赋值
                     * @return BillDuration 是否已赋值
                     * 
                     */
                    bool BillDurationHasBeenSet() const;

                    /**
                     * 获取Actual memory size used during the function execution. The unit is byte.
                     * @return MemUsage Actual memory size used during the function execution. The unit is byte.
                     * 
                     */
                    int64_t GetMemUsage() const;

                    /**
                     * 设置Actual memory size used during the function execution. The unit is byte.
                     * @param _memUsage Actual memory size used during the function execution. The unit is byte.
                     * 
                     */
                    void SetMemUsage(const int64_t& _memUsage);

                    /**
                     * 判断参数 MemUsage 是否已赋值
                     * @return MemUsage 是否已赋值
                     * 
                     */
                    bool MemUsageHasBeenSet() const;

                    /**
                     * 获取Function execution logs
                     * @return Log Function execution logs
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置Function execution logs
                     * @param _log Function execution logs
                     * 
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取Log level
                     * @return Level Log level
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Log level
                     * @param _level Log level
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Log source
                     * @return Source Log source
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Log source
                     * @param _source Log source
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Number of retries
                     * @return RetryNum Number of retries
                     * 
                     */
                    uint64_t GetRetryNum() const;

                    /**
                     * 设置Number of retries
                     * @param _retryNum Number of retries
                     * 
                     */
                    void SetRetryNum(const uint64_t& _retryNum);

                    /**
                     * 判断参数 RetryNum 是否已赋值
                     * @return RetryNum 是否已赋值
                     * 
                     */
                    bool RetryNumHasBeenSet() const;

                private:

                    /**
                     * Function name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Return value after the function is executed
                     */
                    std::string m_retMsg;
                    bool m_retMsgHasBeenSet;

                    /**
                     * RequestId corresponding to the executed function
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * Start time of the function execution
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Function execution result. `0` indicates successful execution and other values indicate failure.
                     */
                    int64_t m_retCode;
                    bool m_retCodeHasBeenSet;

                    /**
                     * It specifies whether the function invocation is finished. `1` indicates execution completion and other values indicate that exceptions occurred during the invocation.
                     */
                    int64_t m_invokeFinished;
                    bool m_invokeFinishedHasBeenSet;

                    /**
                     * Duration of the function execution. The unit is millisecond (ms).
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Function billing duration. The unit is millisecond (ms). The value is rounded up to a multiple of 100 ms.
                     */
                    int64_t m_billDuration;
                    bool m_billDurationHasBeenSet;

                    /**
                     * Actual memory size used during the function execution. The unit is byte.
                     */
                    int64_t m_memUsage;
                    bool m_memUsageHasBeenSet;

                    /**
                     * Function execution logs
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                    /**
                     * Log level
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Log source
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Number of retries
                     */
                    uint64_t m_retryNum;
                    bool m_retryNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_FUNCTIONLOG_H_
