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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCEVENT_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCEVENT_H_

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
                * Async event
                */
                class AsyncEvent : public AbstractModel
                {
                public:
                    AsyncEvent();
                    ~AsyncEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Invocation request ID
                     * @return InvokeRequestId Invocation request ID
                     * 
                     */
                    std::string GetInvokeRequestId() const;

                    /**
                     * 设置Invocation request ID
                     * @param _invokeRequestId Invocation request ID
                     * 
                     */
                    void SetInvokeRequestId(const std::string& _invokeRequestId);

                    /**
                     * 判断参数 InvokeRequestId 是否已赋值
                     * @return InvokeRequestId 是否已赋值
                     * 
                     */
                    bool InvokeRequestIdHasBeenSet() const;

                    /**
                     * 获取Invocation type
                     * @return InvokeType Invocation type
                     * 
                     */
                    std::string GetInvokeType() const;

                    /**
                     * 设置Invocation type
                     * @param _invokeType Invocation type
                     * 
                     */
                    void SetInvokeType(const std::string& _invokeType);

                    /**
                     * 判断参数 InvokeType 是否已赋值
                     * @return InvokeType 是否已赋值
                     * 
                     */
                    bool InvokeTypeHasBeenSet() const;

                    /**
                     * 获取Function version
                     * @return Qualifier Function version
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置Function version
                     * @param _qualifier Function version
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取Event status. Values: `RUNNING`; `FINISHED` (invoked successfully); `ABORTED` (invocation ended); `FAILED` (invocation failed)
                     * @return Status Event status. Values: `RUNNING`; `FINISHED` (invoked successfully); `ABORTED` (invocation ended); `FAILED` (invocation failed)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Event status. Values: `RUNNING`; `FINISHED` (invoked successfully); `ABORTED` (invocation ended); `FAILED` (invocation failed)
                     * @param _status Event status. Values: `RUNNING`; `FINISHED` (invoked successfully); `ABORTED` (invocation ended); `FAILED` (invocation failed)
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
                     * 获取Invocation start time in the format of "%Y-%m-%d %H:%M:%S.%f"
                     * @return StartTime Invocation start time in the format of "%Y-%m-%d %H:%M:%S.%f"
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Invocation start time in the format of "%Y-%m-%d %H:%M:%S.%f"
                     * @param _startTime Invocation start time in the format of "%Y-%m-%d %H:%M:%S.%f"
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
                     * 获取Invocation end time in the format of "%Y-%m-%d %H:%M:%S.%f"
                     * @return EndTime Invocation end time in the format of "%Y-%m-%d %H:%M:%S.%f"
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Invocation end time in the format of "%Y-%m-%d %H:%M:%S.%f"
                     * @param _endTime Invocation end time in the format of "%Y-%m-%d %H:%M:%S.%f"
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Invocation request ID
                     */
                    std::string m_invokeRequestId;
                    bool m_invokeRequestIdHasBeenSet;

                    /**
                     * Invocation type
                     */
                    std::string m_invokeType;
                    bool m_invokeTypeHasBeenSet;

                    /**
                     * Function version
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * Event status. Values: `RUNNING`; `FINISHED` (invoked successfully); `ABORTED` (invocation ended); `FAILED` (invocation failed)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Invocation start time in the format of "%Y-%m-%d %H:%M:%S.%f"
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Invocation end time in the format of "%Y-%m-%d %H:%M:%S.%f"
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCEVENT_H_
