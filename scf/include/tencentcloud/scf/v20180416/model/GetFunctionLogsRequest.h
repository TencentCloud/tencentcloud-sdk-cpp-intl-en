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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONLOGSREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/LogFilter.h>
#include <tencentcloud/scf/v20180416/model/LogSearchContext.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetFunctionLogs request structure.
                */
                class GetFunctionLogsRequest : public AbstractModel
                {
                public:
                    GetFunctionLogsRequest();
                    ~GetFunctionLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Function name.
-To ensure compatibility of the [retrieve function execution log](https://www.tencentcloud.com/document/product/583/18583?from_cn_redirect=1) API `GetFunctionLogs`, the input parameter `FunctionName` remains an optional field, but it is recommended to fill in this parameter. Otherwise, log acquisition failure may occur.
- After associating a function with CLS, it is recommended to use the relevant CLS APIs (https://www.tencentcloud.com/document/product/614/16875?from_cn_redirect=1) to get the best log retrieval experience.
                     * @return FunctionName Function name.
-To ensure compatibility of the [retrieve function execution log](https://www.tencentcloud.com/document/product/583/18583?from_cn_redirect=1) API `GetFunctionLogs`, the input parameter `FunctionName` remains an optional field, but it is recommended to fill in this parameter. Otherwise, log acquisition failure may occur.
- After associating a function with CLS, it is recommended to use the relevant CLS APIs (https://www.tencentcloud.com/document/product/614/16875?from_cn_redirect=1) to get the best log retrieval experience.
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function name.
-To ensure compatibility of the [retrieve function execution log](https://www.tencentcloud.com/document/product/583/18583?from_cn_redirect=1) API `GetFunctionLogs`, the input parameter `FunctionName` remains an optional field, but it is recommended to fill in this parameter. Otherwise, log acquisition failure may occur.
- After associating a function with CLS, it is recommended to use the relevant CLS APIs (https://www.tencentcloud.com/document/product/614/16875?from_cn_redirect=1) to get the best log retrieval experience.
                     * @param _functionName Function name.
-To ensure compatibility of the [retrieve function execution log](https://www.tencentcloud.com/document/product/583/18583?from_cn_redirect=1) API `GetFunctionLogs`, the input parameter `FunctionName` remains an optional field, but it is recommended to fill in this parameter. Otherwise, log acquisition failure may occur.
- After associating a function with CLS, it is recommended to use the relevant CLS APIs (https://www.tencentcloud.com/document/product/614/16875?from_cn_redirect=1) to get the best log retrieval experience.
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
                     * 获取Offset of the data. Offset + Limit cannot be greater than 10000.
                     * @return Offset Offset of the data. Offset + Limit cannot be greater than 10000.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset of the data. Offset + Limit cannot be greater than 10000.
                     * @param _offset Offset of the data. Offset + Limit cannot be greater than 10000.
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
                     * 获取Length of the returned data. Offset + Limit cannot be greater than 10000.
                     * @return Limit Length of the returned data. Offset + Limit cannot be greater than 10000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Length of the returned data. Offset + Limit cannot be greater than 10000.
                     * @param _limit Length of the returned data. Offset + Limit cannot be greater than 10000.
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
                     * 获取Whether to sort logs in descending or ascending order. Available values: `desc` and `asc`.
                     * @return Order Whether to sort logs in descending or ascending order. Available values: `desc` and `asc`.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Whether to sort logs in descending or ascending order. Available values: `desc` and `asc`.
                     * @param _order Whether to sort logs in descending or ascending order. Available values: `desc` and `asc`.
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
                     * 获取Sort logs by a certain field. The following fields are supported: function_name, duration, mem_usage, start_time
                     * @return OrderBy Sort logs by a certain field. The following fields are supported: function_name, duration, mem_usage, start_time
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sort logs by a certain field. The following fields are supported: function_name, duration, mem_usage, start_time
                     * @param _orderBy Sort logs by a certain field. The following fields are supported: function_name, duration, mem_usage, start_time
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Log filter criteria. It can be used to distinguish correct and error logs. filter.RetCode=not0 means only return error logs, filter.RetCode=is0 means only return correct logs. If not passed, all logs are returned.
                     * @return Filter Log filter criteria. It can be used to distinguish correct and error logs. filter.RetCode=not0 means only return error logs, filter.RetCode=is0 means only return correct logs. If not passed, all logs are returned.
                     * 
                     */
                    LogFilter GetFilter() const;

                    /**
                     * 设置Log filter criteria. It can be used to distinguish correct and error logs. filter.RetCode=not0 means only return error logs, filter.RetCode=is0 means only return correct logs. If not passed, all logs are returned.
                     * @param _filter Log filter criteria. It can be used to distinguish correct and error logs. filter.RetCode=not0 means only return error logs, filter.RetCode=is0 means only return correct logs. If not passed, all logs are returned.
                     * 
                     */
                    void SetFilter(const LogFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取Namespace of the function
                     * @return Namespace Namespace of the function
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace of the function
                     * @param _namespace Namespace of the function
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
                     * 获取Request ID for executing the function
                     * @return FunctionRequestId Request ID for executing the function
                     * 
                     */
                    std::string GetFunctionRequestId() const;

                    /**
                     * 设置Request ID for executing the function
                     * @param _functionRequestId Request ID for executing the function
                     * 
                     */
                    void SetFunctionRequestId(const std::string& _functionRequestId);

                    /**
                     * 判断参数 FunctionRequestId 是否已赋值
                     * @return FunctionRequestId 是否已赋值
                     * 
                     */
                    bool FunctionRequestIdHasBeenSet() const;

                    /**
                     * 获取Specific date of the query, for example: 2017-05-16 20:00:00. It must differ from endtime by no more than one day.
                     * @return StartTime Specific date of the query, for example: 2017-05-16 20:00:00. It must differ from endtime by no more than one day.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Specific date of the query, for example: 2017-05-16 20:00:00. It must differ from endtime by no more than one day.
                     * @param _startTime Specific date of the query, for example: 2017-05-16 20:00:00. It must differ from endtime by no more than one day.
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
                     * 获取Specific date of the query, for example: 2017-05-16 20:59:59. It must differ from startTime by no more than one day.
                     * @return EndTime Specific date of the query, for example: 2017-05-16 20:59:59. It must differ from startTime by no more than one day.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Specific date of the query, for example: 2017-05-16 20:59:59. It must differ from startTime by no more than one day.
                     * @param _endTime Specific date of the query, for example: 2017-05-16 20:59:59. It must differ from startTime by no more than one day.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取This field is offline.
                     * @return SearchContext This field is offline.
                     * 
                     */
                    LogSearchContext GetSearchContext() const;

                    /**
                     * 设置This field is offline.
                     * @param _searchContext This field is offline.
                     * 
                     */
                    void SetSearchContext(const LogSearchContext& _searchContext);

                    /**
                     * 判断参数 SearchContext 是否已赋值
                     * @return SearchContext 是否已赋值
                     * 
                     */
                    bool SearchContextHasBeenSet() const;

                private:

                    /**
                     * Function name.
-To ensure compatibility of the [retrieve function execution log](https://www.tencentcloud.com/document/product/583/18583?from_cn_redirect=1) API `GetFunctionLogs`, the input parameter `FunctionName` remains an optional field, but it is recommended to fill in this parameter. Otherwise, log acquisition failure may occur.
- After associating a function with CLS, it is recommended to use the relevant CLS APIs (https://www.tencentcloud.com/document/product/614/16875?from_cn_redirect=1) to get the best log retrieval experience.
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Offset of the data. Offset + Limit cannot be greater than 10000.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Length of the returned data. Offset + Limit cannot be greater than 10000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Whether to sort logs in descending or ascending order. Available values: `desc` and `asc`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sort logs by a certain field. The following fields are supported: function_name, duration, mem_usage, start_time
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Log filter criteria. It can be used to distinguish correct and error logs. filter.RetCode=not0 means only return error logs, filter.RetCode=is0 means only return correct logs. If not passed, all logs are returned.
                     */
                    LogFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * Namespace of the function
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Function version
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * Request ID for executing the function
                     */
                    std::string m_functionRequestId;
                    bool m_functionRequestIdHasBeenSet;

                    /**
                     * Specific date of the query, for example: 2017-05-16 20:00:00. It must differ from endtime by no more than one day.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Specific date of the query, for example: 2017-05-16 20:59:59. It must differ from startTime by no more than one day.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * This field is offline.
                     */
                    LogSearchContext m_searchContext;
                    bool m_searchContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONLOGSREQUEST_H_
