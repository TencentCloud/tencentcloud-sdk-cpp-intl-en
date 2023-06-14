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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBELOGSEARCHREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBELOGSEARCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/Filter.h>
#include <tencentcloud/apigateway/v20180808/model/LogQuery.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeLogSearch request structure.
                */
                class DescribeLogSearchRequest : public AbstractModel
                {
                public:
                    DescribeLogSearchRequest();
                    ~DescribeLogSearchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log start time
                     * @return StartTime Log start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Log start time
                     * @param _startTime Log start time
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
                     * 获取Log end time
                     * @return EndTime Log end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Log end time
                     * @param _endTime Log end time
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
                     * 获取Service ID
                     * @return ServiceId Service ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Service ID
                     * @param _serviceId Service ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Reserved field
                     * @return Filters Reserved field
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Reserved field
                     * @param _filters Reserved field
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Number of logs to be returned at a time. Maximum value: 100
                     * @return Limit Number of logs to be returned at a time. Maximum value: 100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of logs to be returned at a time. Maximum value: 100
                     * @param _limit Number of logs to be returned at a time. Maximum value: 100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Subsequent content can be obtained based on the `ConText` returned last time. Up to 10,000 data entries can be obtained
                     * @return ConText Subsequent content can be obtained based on the `ConText` returned last time. Up to 10,000 data entries can be obtained
                     * 
                     */
                    std::string GetConText() const;

                    /**
                     * 设置Subsequent content can be obtained based on the `ConText` returned last time. Up to 10,000 data entries can be obtained
                     * @param _conText Subsequent content can be obtained based on the `ConText` returned last time. Up to 10,000 data entries can be obtained
                     * 
                     */
                    void SetConText(const std::string& _conText);

                    /**
                     * 判断参数 ConText 是否已赋值
                     * @return ConText 是否已赋值
                     * 
                     */
                    bool ConTextHasBeenSet() const;

                    /**
                     * 获取Sorting by time. Valid values: asc (ascending), desc (descending). Default value: desc
                     * @return Sort Sorting by time. Valid values: asc (ascending), desc (descending). Default value: desc
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sorting by time. Valid values: asc (ascending), desc (descending). Default value: desc
                     * @param _sort Sorting by time. Valid values: asc (ascending), desc (descending). Default value: desc
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取Reserved field
                     * @return Query Reserved field
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Reserved field
                     * @param _query Reserved field
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Search criterion. Valid values:
req_id: "="
api_id: "="
cip: "="
uip: ":"
err_msg: ":"
rsp_st: "=", "!=", ":", ">", "<"
req_t: ">=", "<="

Note:
":" indicates included, and "!=" indicates not equal to. For the meanings of fields, please see the `LogSet` description of the output parameter
                     * @return LogQuerys Search criterion. Valid values:
req_id: "="
api_id: "="
cip: "="
uip: ":"
err_msg: ":"
rsp_st: "=", "!=", ":", ">", "<"
req_t: ">=", "<="

Note:
":" indicates included, and "!=" indicates not equal to. For the meanings of fields, please see the `LogSet` description of the output parameter
                     * 
                     */
                    std::vector<LogQuery> GetLogQuerys() const;

                    /**
                     * 设置Search criterion. Valid values:
req_id: "="
api_id: "="
cip: "="
uip: ":"
err_msg: ":"
rsp_st: "=", "!=", ":", ">", "<"
req_t: ">=", "<="

Note:
":" indicates included, and "!=" indicates not equal to. For the meanings of fields, please see the `LogSet` description of the output parameter
                     * @param _logQuerys Search criterion. Valid values:
req_id: "="
api_id: "="
cip: "="
uip: ":"
err_msg: ":"
rsp_st: "=", "!=", ":", ">", "<"
req_t: ">=", "<="

Note:
":" indicates included, and "!=" indicates not equal to. For the meanings of fields, please see the `LogSet` description of the output parameter
                     * 
                     */
                    void SetLogQuerys(const std::vector<LogQuery>& _logQuerys);

                    /**
                     * 判断参数 LogQuerys 是否已赋值
                     * @return LogQuerys 是否已赋值
                     * 
                     */
                    bool LogQuerysHasBeenSet() const;

                private:

                    /**
                     * Log start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Log end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Service ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Reserved field
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of logs to be returned at a time. Maximum value: 100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Subsequent content can be obtained based on the `ConText` returned last time. Up to 10,000 data entries can be obtained
                     */
                    std::string m_conText;
                    bool m_conTextHasBeenSet;

                    /**
                     * Sorting by time. Valid values: asc (ascending), desc (descending). Default value: desc
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Reserved field
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Search criterion. Valid values:
req_id: "="
api_id: "="
cip: "="
uip: ":"
err_msg: ":"
rsp_st: "=", "!=", ":", ">", "<"
req_t: ">=", "<="

Note:
":" indicates included, and "!=" indicates not equal to. For the meanings of fields, please see the `LogSet` description of the output parameter
                     */
                    std::vector<LogQuery> m_logQuerys;
                    bool m_logQuerysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBELOGSEARCHREQUEST_H_
