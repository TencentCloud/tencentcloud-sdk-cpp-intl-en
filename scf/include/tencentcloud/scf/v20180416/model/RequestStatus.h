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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_REQUESTSTATUS_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_REQUESTSTATUS_H_

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
                * Running status of the function
                */
                class RequestStatus : public AbstractModel
                {
                public:
                    RequestStatus();
                    ~RequestStatus() = default;
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
                     * 获取Request ID
                     * @return RequestId Request ID
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置Request ID
                     * @param _requestId Request ID
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
                     * 获取Request start time
                     * @return StartTime Request start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Request start time
                     * @param _startTime Request start time
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
                     * 获取Result of the request. `0`: succeeded, `1`: running, `-1`: exception
                     * @return RetCode Result of the request. `0`: succeeded, `1`: running, `-1`: exception
                     * 
                     */
                    int64_t GetRetCode() const;

                    /**
                     * 设置Result of the request. `0`: succeeded, `1`: running, `-1`: exception
                     * @param _retCode Result of the request. `0`: succeeded, `1`: running, `-1`: exception
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
                     * 获取Time consumed for the request in ms
                     * @return Duration Time consumed for the request in ms
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Time consumed for the request in ms
                     * @param _duration Time consumed for the request in ms
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
                     * 获取Time consumed by the request in MB
                     * @return MemUsage Time consumed by the request in MB
                     * 
                     */
                    double GetMemUsage() const;

                    /**
                     * 设置Time consumed by the request in MB
                     * @param _memUsage Time consumed by the request in MB
                     * 
                     */
                    void SetMemUsage(const double& _memUsage);

                    /**
                     * 判断参数 MemUsage 是否已赋值
                     * @return MemUsage 是否已赋值
                     * 
                     */
                    bool MemUsageHasBeenSet() const;

                    /**
                     * 获取Retry Attempts
                     * @return RetryNum Retry Attempts
                     * 
                     */
                    int64_t GetRetryNum() const;

                    /**
                     * 设置Retry Attempts
                     * @param _retryNum Retry Attempts
                     * 
                     */
                    void SetRetryNum(const int64_t& _retryNum);

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
                     * Request ID
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * Request start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Result of the request. `0`: succeeded, `1`: running, `-1`: exception
                     */
                    int64_t m_retCode;
                    bool m_retCodeHasBeenSet;

                    /**
                     * Time consumed for the request in ms
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Time consumed by the request in MB
                     */
                    double m_memUsage;
                    bool m_memUsageHasBeenSet;

                    /**
                     * Retry Attempts
                     */
                    int64_t m_retryNum;
                    bool m_retryNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_REQUESTSTATUS_H_
