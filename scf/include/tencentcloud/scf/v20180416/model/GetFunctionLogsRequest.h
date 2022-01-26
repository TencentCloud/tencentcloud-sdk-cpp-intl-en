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
- To ensure the compatibility of the [`GetFunctionLogs`](https://intl.cloud.tencent.com/document/product/583/18583?from_cn_redirect=1) API, the input parameter `FunctionName` is optional, but we recommend you enter it; otherwise, log acquisition may fail.
- After the function is connected to CLS, we recommend you use the [related CLS API](https://intl.cloud.tencent.com/document/product/614/16875?from_cn_redirect=1) to get the best log retrieval experience.
                     * @return FunctionName Function name.
- To ensure the compatibility of the [`GetFunctionLogs`](https://intl.cloud.tencent.com/document/product/583/18583?from_cn_redirect=1) API, the input parameter `FunctionName` is optional, but we recommend you enter it; otherwise, log acquisition may fail.
- After the function is connected to CLS, we recommend you use the [related CLS API](https://intl.cloud.tencent.com/document/product/614/16875?from_cn_redirect=1) to get the best log retrieval experience.
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function name.
- To ensure the compatibility of the [`GetFunctionLogs`](https://intl.cloud.tencent.com/document/product/583/18583?from_cn_redirect=1) API, the input parameter `FunctionName` is optional, but we recommend you enter it; otherwise, log acquisition may fail.
- After the function is connected to CLS, we recommend you use the [related CLS API](https://intl.cloud.tencent.com/document/product/614/16875?from_cn_redirect=1) to get the best log retrieval experience.
                     * @param FunctionName Function name.
- To ensure the compatibility of the [`GetFunctionLogs`](https://intl.cloud.tencent.com/document/product/583/18583?from_cn_redirect=1) API, the input parameter `FunctionName` is optional, but we recommend you enter it; otherwise, log acquisition may fail.
- After the function is connected to CLS, we recommend you use the [related CLS API](https://intl.cloud.tencent.com/document/product/614/16875?from_cn_redirect=1) to get the best log retrieval experience.
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Data offset. The addition of `Offset` and `Limit` cannot exceed 10,000.
                     * @return Offset Data offset. The addition of `Offset` and `Limit` cannot exceed 10,000.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Data offset. The addition of `Offset` and `Limit` cannot exceed 10,000.
                     * @param Offset Data offset. The addition of `Offset` and `Limit` cannot exceed 10,000.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Length of the return data. The addition of `Offset` and `Limit` cannot exceed 10,000.
                     * @return Limit Length of the return data. The addition of `Offset` and `Limit` cannot exceed 10,000.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Length of the return data. The addition of `Offset` and `Limit` cannot exceed 10,000.
                     * @param Limit Length of the return data. The addition of `Offset` and `Limit` cannot exceed 10,000.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取It specifies whether to sort the logs in an ascending or descending order. The value is `desc` or `asc`.
                     * @return Order It specifies whether to sort the logs in an ascending or descending order. The value is `desc` or `asc`.
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置It specifies whether to sort the logs in an ascending or descending order. The value is `desc` or `asc`.
                     * @param Order It specifies whether to sort the logs in an ascending or descending order. The value is `desc` or `asc`.
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取It specifies the sorting order of the logs based on a specified field, such as `function_name`, `duration`, `mem_usage`, and `start_time`.
                     * @return OrderBy It specifies the sorting order of the logs based on a specified field, such as `function_name`, `duration`, `mem_usage`, and `start_time`.
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置It specifies the sorting order of the logs based on a specified field, such as `function_name`, `duration`, `mem_usage`, and `start_time`.
                     * @param OrderBy It specifies the sorting order of the logs based on a specified field, such as `function_name`, `duration`, `mem_usage`, and `start_time`.
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Log filter used to identify whether to return logs of successful or failed requests. `filter.RetCode=not0` indicates that only the logs of failed requests will be returned. `filter.RetCode=is0` indicates that only the logs of successful requests will be returned. If this parameter is left blank, all logs will be returned. 
                     * @return Filter Log filter used to identify whether to return logs of successful or failed requests. `filter.RetCode=not0` indicates that only the logs of failed requests will be returned. `filter.RetCode=is0` indicates that only the logs of successful requests will be returned. If this parameter is left blank, all logs will be returned. 
                     */
                    LogFilter GetFilter() const;

                    /**
                     * 设置Log filter used to identify whether to return logs of successful or failed requests. `filter.RetCode=not0` indicates that only the logs of failed requests will be returned. `filter.RetCode=is0` indicates that only the logs of successful requests will be returned. If this parameter is left blank, all logs will be returned. 
                     * @param Filter Log filter used to identify whether to return logs of successful or failed requests. `filter.RetCode=not0` indicates that only the logs of failed requests will be returned. `filter.RetCode=is0` indicates that only the logs of successful requests will be returned. If this parameter is left blank, all logs will be returned. 
                     */
                    void SetFilter(const LogFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取Function namespace
                     * @return Namespace Function namespace
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Function namespace
                     * @param Namespace Function namespace
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Function version
                     * @return Qualifier Function version
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置Function version
                     * @param Qualifier Function version
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取RequestId corresponding to the executed function
                     * @return FunctionRequestId RequestId corresponding to the executed function
                     */
                    std::string GetFunctionRequestId() const;

                    /**
                     * 设置RequestId corresponding to the executed function
                     * @param FunctionRequestId RequestId corresponding to the executed function
                     */
                    void SetFunctionRequestId(const std::string& _functionRequestId);

                    /**
                     * 判断参数 FunctionRequestId 是否已赋值
                     * @return FunctionRequestId 是否已赋值
                     */
                    bool FunctionRequestIdHasBeenSet() const;

                    /**
                     * 获取Query date, for example, 2017-05-16 20:00:00. The date must be within one day of the end time.
                     * @return StartTime Query date, for example, 2017-05-16 20:00:00. The date must be within one day of the end time.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query date, for example, 2017-05-16 20:00:00. The date must be within one day of the end time.
                     * @param StartTime Query date, for example, 2017-05-16 20:00:00. The date must be within one day of the end time.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query date, for example, 2017-05-16 20:59:59. The date must be within one day of the start time.
                     * @return EndTime Query date, for example, 2017-05-16 20:59:59. The date must be within one day of the start time.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query date, for example, 2017-05-16 20:59:59. The date must be within one day of the start time.
                     * @param EndTime Query date, for example, 2017-05-16 20:59:59. The date must be within one day of the start time.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取This field is disused.
                     * @return SearchContext This field is disused.
                     */
                    LogSearchContext GetSearchContext() const;

                    /**
                     * 设置This field is disused.
                     * @param SearchContext This field is disused.
                     */
                    void SetSearchContext(const LogSearchContext& _searchContext);

                    /**
                     * 判断参数 SearchContext 是否已赋值
                     * @return SearchContext 是否已赋值
                     */
                    bool SearchContextHasBeenSet() const;

                private:

                    /**
                     * Function name.
- To ensure the compatibility of the [`GetFunctionLogs`](https://intl.cloud.tencent.com/document/product/583/18583?from_cn_redirect=1) API, the input parameter `FunctionName` is optional, but we recommend you enter it; otherwise, log acquisition may fail.
- After the function is connected to CLS, we recommend you use the [related CLS API](https://intl.cloud.tencent.com/document/product/614/16875?from_cn_redirect=1) to get the best log retrieval experience.
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Data offset. The addition of `Offset` and `Limit` cannot exceed 10,000.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Length of the return data. The addition of `Offset` and `Limit` cannot exceed 10,000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * It specifies whether to sort the logs in an ascending or descending order. The value is `desc` or `asc`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * It specifies the sorting order of the logs based on a specified field, such as `function_name`, `duration`, `mem_usage`, and `start_time`.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Log filter used to identify whether to return logs of successful or failed requests. `filter.RetCode=not0` indicates that only the logs of failed requests will be returned. `filter.RetCode=is0` indicates that only the logs of successful requests will be returned. If this parameter is left blank, all logs will be returned. 
                     */
                    LogFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * Function namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Function version
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * RequestId corresponding to the executed function
                     */
                    std::string m_functionRequestId;
                    bool m_functionRequestIdHasBeenSet;

                    /**
                     * Query date, for example, 2017-05-16 20:00:00. The date must be within one day of the end time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query date, for example, 2017-05-16 20:59:59. The date must be within one day of the start time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * This field is disused.
                     */
                    LogSearchContext m_searchContext;
                    bool m_searchContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONLOGSREQUEST_H_
