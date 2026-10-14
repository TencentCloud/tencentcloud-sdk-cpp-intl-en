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
                     * 获取Function name.
                     * @return FunctionName Function name.
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function name.
                     * @param _functionName Function name.
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
                     * 获取Returned value after function execution
                     * @return RetMsg Returned value after function execution
                     * 
                     */
                    std::string GetRetMsg() const;

                    /**
                     * 设置Returned value after function execution
                     * @param _retMsg Returned value after function execution
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
                     * 获取requestId for executing the function
                     * @return RequestId requestId for executing the function
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置requestId for executing the function
                     * @param _requestId requestId for executing the function
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
                     * 获取Time point when the function starts execution
                     * @return StartTime Time point when the function starts execution
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Time point when the function starts execution
                     * @param _startTime Time point when the function starts execution
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
                     * 获取Function execution result. 0 indicates successful execution, 2 indicates the function is running, 3 indicates an execution interrupt, and other values indicate failure.
                     * @return RetCode Function execution result. 0 indicates successful execution, 2 indicates the function is running, 3 indicates an execution interrupt, and other values indicate failure.
                     * 
                     */
                    int64_t GetRetCode() const;

                    /**
                     * 设置Function execution result. 0 indicates successful execution, 2 indicates the function is running, 3 indicates an execution interrupt, and other values indicate failure.
                     * @param _retCode Function execution result. 0 indicates successful execution, 2 indicates the function is running, 3 indicates an execution interrupt, and other values indicate failure.
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
                     * 获取Whether the function call ends. If so, 1 means execution ended, and additional values indicate a call exception.
                     * @return InvokeFinished Whether the function call ends. If so, 1 means execution ended, and additional values indicate a call exception.
                     * 
                     */
                    int64_t GetInvokeFinished() const;

                    /**
                     * 设置Whether the function call ends. If so, 1 means execution ended, and additional values indicate a call exception.
                     * @param _invokeFinished Whether the function call ends. If so, 1 means execution ended, and additional values indicate a call exception.
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
                     * 获取Function execution duration in milliseconds.
                     * @return Duration Function execution duration in milliseconds.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Function execution duration in milliseconds.
                     * @param _duration Function execution duration in milliseconds.
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
                     * 获取Billing duration of a function. It is rounded up to the nearest 100 ms based on the duration, in ms.
                     * @return BillDuration Billing duration of a function. It is rounded up to the nearest 100 ms based on the duration, in ms.
                     * 
                     */
                    int64_t GetBillDuration() const;

                    /**
                     * 设置Billing duration of a function. It is rounded up to the nearest 100 ms based on the duration, in ms.
                     * @param _billDuration Billing duration of a function. It is rounded up to the nearest 100 ms based on the duration, in ms.
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
                     * 获取Memory size actually consumed during function execution, in bytes.
                     * @return MemUsage Memory size actually consumed during function execution, in bytes.
                     * 
                     */
                    int64_t GetMemUsage() const;

                    /**
                     * 设置Memory size actually consumed during function execution, in bytes.
                     * @param _memUsage Memory size actually consumed during function execution, in bytes.
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
                     * 获取Log output during function execution
                     * @return Log Log output during function execution
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置Log output during function execution
                     * @param _log Log output during function execution
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
                     * 获取Log level.
                     * @return Level Log level.
                     * @deprecated
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Log level.
                     * @param _level Log level.
                     * @deprecated
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * @deprecated
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Log source
                     * @return Source Log source
                     * @deprecated
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Log source
                     * @param _source Log source
                     * @deprecated
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * @deprecated
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Number of retries.
                     * @return RetryNum Number of retries.
                     * 
                     */
                    uint64_t GetRetryNum() const;

                    /**
                     * 设置Number of retries.
                     * @param _retryNum Number of retries.
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
                     * Function name.
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Returned value after function execution
                     */
                    std::string m_retMsg;
                    bool m_retMsgHasBeenSet;

                    /**
                     * requestId for executing the function
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * Time point when the function starts execution
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Function execution result. 0 indicates successful execution, 2 indicates the function is running, 3 indicates an execution interrupt, and other values indicate failure.
                     */
                    int64_t m_retCode;
                    bool m_retCodeHasBeenSet;

                    /**
                     * Whether the function call ends. If so, 1 means execution ended, and additional values indicate a call exception.
                     */
                    int64_t m_invokeFinished;
                    bool m_invokeFinishedHasBeenSet;

                    /**
                     * Function execution duration in milliseconds.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Billing duration of a function. It is rounded up to the nearest 100 ms based on the duration, in ms.
                     */
                    int64_t m_billDuration;
                    bool m_billDurationHasBeenSet;

                    /**
                     * Memory size actually consumed during function execution, in bytes.
                     */
                    int64_t m_memUsage;
                    bool m_memUsageHasBeenSet;

                    /**
                     * Log output during function execution
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                    /**
                     * Log level.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Log source
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Number of retries.
                     */
                    uint64_t m_retryNum;
                    bool m_retryNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_FUNCTIONLOG_H_
