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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTASYNCEVENTSREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTASYNCEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/TimeInterval.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ListAsyncEvents request structure.
                */
                class ListAsyncEventsRequest : public AbstractModel
                {
                public:
                    ListAsyncEventsRequest();
                    ~ListAsyncEventsRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Namespace
                     * @return Namespace Namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace
                     * @param _namespace Namespace
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Filter (function version)
                     * @return Qualifier Filter (function version)
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置Filter (function version)
                     * @param _qualifier Filter (function version)
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
                     * 获取Filter (invocation type list)
                     * @return InvokeType Filter (invocation type list)
                     * 
                     */
                    std::vector<std::string> GetInvokeType() const;

                    /**
                     * 设置Filter (invocation type list)
                     * @param _invokeType Filter (invocation type list)
                     * 
                     */
                    void SetInvokeType(const std::vector<std::string>& _invokeType);

                    /**
                     * 判断参数 InvokeType 是否已赋值
                     * @return InvokeType 是否已赋值
                     * 
                     */
                    bool InvokeTypeHasBeenSet() const;

                    /**
                     * 获取Filter (event status list)
                     * @return Status Filter (event status list)
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置Filter (event status list)
                     * @param _status Filter (event status list)
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Filter (left-closed-right-open range of execution start time)
                     * @return StartTimeInterval Filter (left-closed-right-open range of execution start time)
                     * 
                     */
                    TimeInterval GetStartTimeInterval() const;

                    /**
                     * 设置Filter (left-closed-right-open range of execution start time)
                     * @param _startTimeInterval Filter (left-closed-right-open range of execution start time)
                     * 
                     */
                    void SetStartTimeInterval(const TimeInterval& _startTimeInterval);

                    /**
                     * 判断参数 StartTimeInterval 是否已赋值
                     * @return StartTimeInterval 是否已赋值
                     * 
                     */
                    bool StartTimeIntervalHasBeenSet() const;

                    /**
                     * 获取Filter (left-closed-right-open range of execution end time)
                     * @return EndTimeInterval Filter (left-closed-right-open range of execution end time)
                     * 
                     */
                    TimeInterval GetEndTimeInterval() const;

                    /**
                     * 设置Filter (left-closed-right-open range of execution end time)
                     * @param _endTimeInterval Filter (left-closed-right-open range of execution end time)
                     * 
                     */
                    void SetEndTimeInterval(const TimeInterval& _endTimeInterval);

                    /**
                     * 判断参数 EndTimeInterval 是否已赋值
                     * @return EndTimeInterval 是否已赋值
                     * 
                     */
                    bool EndTimeIntervalHasBeenSet() const;

                    /**
                     * 获取Valid values: ASC, DESC. Default value: DESC
                     * @return Order Valid values: ASC, DESC. Default value: DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Valid values: ASC, DESC. Default value: DESC
                     * @param _order Valid values: ASC, DESC. Default value: DESC
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Valid values: StartTime, EndTime. Default value: StartTime
                     * @return Orderby Valid values: StartTime, EndTime. Default value: StartTime
                     * 
                     */
                    std::string GetOrderby() const;

                    /**
                     * 设置Valid values: StartTime, EndTime. Default value: StartTime
                     * @param _orderby Valid values: StartTime, EndTime. Default value: StartTime
                     * 
                     */
                    void SetOrderby(const std::string& _orderby);

                    /**
                     * 判断参数 Orderby 是否已赋值
                     * @return Orderby 是否已赋值
                     * 
                     */
                    bool OrderbyHasBeenSet() const;

                    /**
                     * 获取Data offset. Default value: 0
                     * @return Offset Data offset. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Data offset. Default value: 0
                     * @param _offset Data offset. Default value: 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned. Default value: 20. Maximum value: 100
                     * @return Limit Number of results to be returned. Default value: 20. Maximum value: 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: 20. Maximum value: 100
                     * @param _limit Number of results to be returned. Default value: 20. Maximum value: 100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter (event invocation request ID)
                     * @return InvokeRequestId Filter (event invocation request ID)
                     * 
                     */
                    std::string GetInvokeRequestId() const;

                    /**
                     * 设置Filter (event invocation request ID)
                     * @param _invokeRequestId Filter (event invocation request ID)
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
                     * Function name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Filter (function version)
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * Filter (invocation type list)
                     */
                    std::vector<std::string> m_invokeType;
                    bool m_invokeTypeHasBeenSet;

                    /**
                     * Filter (event status list)
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Filter (left-closed-right-open range of execution start time)
                     */
                    TimeInterval m_startTimeInterval;
                    bool m_startTimeIntervalHasBeenSet;

                    /**
                     * Filter (left-closed-right-open range of execution end time)
                     */
                    TimeInterval m_endTimeInterval;
                    bool m_endTimeIntervalHasBeenSet;

                    /**
                     * Valid values: ASC, DESC. Default value: DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Valid values: StartTime, EndTime. Default value: StartTime
                     */
                    std::string m_orderby;
                    bool m_orderbyHasBeenSet;

                    /**
                     * Data offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: 20. Maximum value: 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter (event invocation request ID)
                     */
                    std::string m_invokeRequestId;
                    bool m_invokeRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTASYNCEVENTSREQUEST_H_
