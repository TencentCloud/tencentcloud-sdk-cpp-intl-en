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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALOTSPANLISTREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALOTSPANLISTREQUEST_H_

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
                * DescribeGeneralOTSpanList request structure.
                */
                class DescribeGeneralOTSpanListRequest : public AbstractModel
                {
                public:
                    DescribeGeneralOTSpanListRequest();
                    ~DescribeGeneralOTSpanListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Business system ID</p>
                     * @return InstanceId <p>Business system ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Business system ID</p>
                     * @param _instanceId <p>Business system ID</p>
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
                     * 获取<p>Span query start timestamp (unit: seconds)</p>
                     * @return StartTime <p>Span query start timestamp (unit: seconds)</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>Span query start timestamp (unit: seconds)</p>
                     * @param _startTime <p>Span query start timestamp (unit: seconds)</p>
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
                     * 获取<p>Span query end timestamp (unit: s)</p>
                     * @return EndTime <p>Span query end timestamp (unit: s)</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>Span query end timestamp (unit: s)</p>
                     * @param _endTime <p>Span query end timestamp (unit: s)</p>
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
                     * 获取<p>Universal filter parameters supported filter key such as service.name</p>
                     * @return Filters <p>Universal filter parameters supported filter key such as service.name</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>Universal filter parameters supported filter key such as service.name</p>
                     * @param _filters <p>Universal filter parameters supported filter key such as service.name</p>
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
                     * 获取<p>Sort<br>Keys now supported:</p><ul><li>startTime</li><li>endTime</li><li>duration</li></ul><p>Values now supported:</p><ul><li>desc (sort in descending order)</li><li>asc (ascending order)</li></ul>
                     * @return OrderBy <p>Sort<br>Keys now supported:</p><ul><li>startTime</li><li>endTime</li><li>duration</li></ul><p>Values now supported:</p><ul><li>desc (sort in descending order)</li><li>asc (ascending order)</li></ul>
                     * 
                     */
                    OrderBy GetOrderBy() const;

                    /**
                     * 设置<p>Sort<br>Keys now supported:</p><ul><li>startTime</li><li>endTime</li><li>duration</li></ul><p>Values now supported:</p><ul><li>desc (sort in descending order)</li><li>asc (ascending order)</li></ul>
                     * @param _orderBy <p>Sort<br>Keys now supported:</p><ul><li>startTime</li><li>endTime</li><li>duration</li></ul><p>Values now supported:</p><ul><li>desc (sort in descending order)</li><li>asc (ascending order)</li></ul>
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
                     * 获取<p>Business service name. Console users please enter taw</p>
                     * @return BusinessName <p>Business service name. Console users please enter taw</p>
                     * 
                     */
                    std::string GetBusinessName() const;

                    /**
                     * 设置<p>Business service name. Console users please enter taw</p>
                     * @param _businessName <p>Business service name. Console users please enter taw</p>
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
                     * 获取<p>Count of single-page projects. Defaults to 10000. Valid value range is 0–10000.</p>
                     * @return Limit <p>Count of single-page projects. Defaults to 10000. Valid value range is 0–10000.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Count of single-page projects. Defaults to 10000. Valid value range is 0–10000.</p>
                     * @param _limit <p>Count of single-page projects. Defaults to 10000. Valid value range is 0–10000.</p>
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
                     * 获取<p>Page</p>
                     * @return Offset <p>Page</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Page</p>
                     * @param _offset <p>Page</p>
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
                     * <p>Business system ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Span query start timestamp (unit: seconds)</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Span query end timestamp (unit: s)</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Universal filter parameters supported filter key such as service.name</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Sort<br>Keys now supported:</p><ul><li>startTime</li><li>endTime</li><li>duration</li></ul><p>Values now supported:</p><ul><li>desc (sort in descending order)</li><li>asc (ascending order)</li></ul>
                     */
                    OrderBy m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>Business service name. Console users please enter taw</p>
                     */
                    std::string m_businessName;
                    bool m_businessNameHasBeenSet;

                    /**
                     * <p>Count of single-page projects. Defaults to 10000. Valid value range is 0–10000.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Page</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALOTSPANLISTREQUEST_H_
