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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCEVENTSTATUS_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCEVENTSTATUS_H_

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
                * Async event status
                */
                class AsyncEventStatus : public AbstractModel
                {
                public:
                    AsyncEventStatus();
                    ~AsyncEventStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Async event status. Values: `RUNNING` (running); `FINISHED` (invoked successfully); `ABORTED` (invocation ended); `FAILED` (invocation failed).
                     * @return Status Async event status. Values: `RUNNING` (running); `FINISHED` (invoked successfully); `ABORTED` (invocation ended); `FAILED` (invocation failed).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Async event status. Values: `RUNNING` (running); `FINISHED` (invoked successfully); `ABORTED` (invocation ended); `FAILED` (invocation failed).
                     * @param _status Async event status. Values: `RUNNING` (running); `FINISHED` (invoked successfully); `ABORTED` (invocation ended); `FAILED` (invocation failed).
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
                     * 获取Request status code
                     * @return StatusCode Request status code
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置Request status code
                     * @param _statusCode Request status code
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取Async execution request ID
                     * @return InvokeRequestId Async execution request ID
                     * 
                     */
                    std::string GetInvokeRequestId() const;

                    /**
                     * 设置Async execution request ID
                     * @param _invokeRequestId Async execution request ID
                     * 
                     */
                    void SetInvokeRequestId(const std::string& _invokeRequestId);

                    /**
                     * 判断参数 InvokeRequestId 是否已赋值
                     * @return InvokeRequestId 是否已赋值
                     * 
                     */
                    bool InvokeRequestIdHasBeenSet() const;

                private:

                    /**
                     * Async event status. Values: `RUNNING` (running); `FINISHED` (invoked successfully); `ABORTED` (invocation ended); `FAILED` (invocation failed).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Request status code
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * Async execution request ID
                     */
                    std::string m_invokeRequestId;
                    bool m_invokeRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCEVENTSTATUS_H_
