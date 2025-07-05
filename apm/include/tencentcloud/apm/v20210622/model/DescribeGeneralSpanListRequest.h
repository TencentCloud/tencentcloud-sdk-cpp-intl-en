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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALSPANLISTREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALSPANLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Filter.h>
#include <tencentcloud/apm/v20210622/model/OrderBy.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeGeneralSpanList request structure.
                */
                class DescribeGeneralSpanListRequest : public AbstractModel
                {
                public:
                    DescribeGeneralSpanListRequest();
                    ~DescribeGeneralSpanListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Business system id.
                     * @return InstanceId Business system id.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Business system id.
                     * @param _instanceId Business system id.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Span query start timestamp (unit: seconds).
                     * @return StartTime Span query start timestamp (unit: seconds).
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Span query start timestamp (unit: seconds).
                     * @param _startTime Span query start timestamp (unit: seconds).
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Span query end timestamp (unit: seconds).
                     * @return EndTime Span query end timestamp (unit: seconds).
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置Span query end timestamp (unit: seconds).
                     * @param _endTime Span query end timestamp (unit: seconds).
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Universal filter parameters.
                     * @return Filters Universal filter parameters.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Universal filter parameters.
                     * @param _filters Universal filter parameters.
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
                     * 获取Sort
.
The currently supported keys are:.

-StartTime (start time).
-EndTime (end time).
-Duration (response time).

The currently supported values are:.

- desc: sort in descending order.
-Asc - ascending order.
                     * @return OrderBy Sort
.
The currently supported keys are:.

-StartTime (start time).
-EndTime (end time).
-Duration (response time).

The currently supported values are:.

- desc: sort in descending order.
-Asc - ascending order.
                     * 
                     */
                    OrderBy GetOrderBy() const;

                    /**
                     * 设置Sort
.
The currently supported keys are:.

-StartTime (start time).
-EndTime (end time).
-Duration (response time).

The currently supported values are:.

- desc: sort in descending order.
-Asc - ascending order.
                     * @param _orderBy Sort
.
The currently supported keys are:.

-StartTime (start time).
-EndTime (end time).
-Duration (response time).

The currently supported values are:.

- desc: sort in descending order.
-Asc - ascending order.
                     * 
                     */
                    void SetOrderBy(const OrderBy& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取The service name of the business itself. console users should fill in taw.
                     * @return BusinessName The service name of the business itself. console users should fill in taw.
                     * 
                     */
                    std::string GetBusinessName() const;

                    /**
                     * 设置The service name of the business itself. console users should fill in taw.
                     * @param _businessName The service name of the business itself. console users should fill in taw.
                     * 
                     */
                    void SetBusinessName(const std::string& _businessName);

                    /**
                     * 判断参数 BusinessName 是否已赋值
                     * @return BusinessName 是否已赋值
                     * 
                     */
                    bool BusinessNameHasBeenSet() const;

                    /**
                     * 获取Number of items per page, defaults to 10,000, valid values are 0 to 10,000.
                     * @return Limit Number of items per page, defaults to 10,000, valid values are 0 to 10,000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items per page, defaults to 10,000, valid values are 0 to 10,000.
                     * @param _limit Number of items per page, defaults to 10,000, valid values are 0 to 10,000.
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
                     * 获取Pagination.
                     * @return Offset Pagination.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination.
                     * @param _offset Pagination.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Business system id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Span query start timestamp (unit: seconds).
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Span query end timestamp (unit: seconds).
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Universal filter parameters.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sort
.
The currently supported keys are:.

-StartTime (start time).
-EndTime (end time).
-Duration (response time).

The currently supported values are:.

- desc: sort in descending order.
-Asc - ascending order.
                     */
                    OrderBy m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * The service name of the business itself. console users should fill in taw.
                     */
                    std::string m_businessName;
                    bool m_businessNameHasBeenSet;

                    /**
                     * Number of items per page, defaults to 10,000, valid values are 0 to 10,000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALSPANLISTREQUEST_H_
