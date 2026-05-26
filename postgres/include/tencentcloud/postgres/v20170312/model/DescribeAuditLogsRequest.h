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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEAUDITLOGSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEAUDITLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/AuditLogFilter.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAuditLogs request structure.
                */
                class DescribeAuditLogsRequest : public AbstractModel
                {
                public:
                    DescribeAuditLogsRequest();
                    ~DescribeAuditLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID</p>
                     * @return InstanceId <p>Instance ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID</p>
                     * @param _instanceId <p>Instance ID</p>
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
                     * 获取<p>Start time</p><p>Parameter format: 2026-03-25 00:00:00</p>
                     * @return StartTime <p>Start time</p><p>Parameter format: 2026-03-25 00:00:00</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time</p><p>Parameter format: 2026-03-25 00:00:00</p>
                     * @param _startTime <p>Start time</p><p>Parameter format: 2026-03-25 00:00:00</p>
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
                     * 获取<p>End time</p><p>Parameter format: 2026-03-25 01:00:00</p>
                     * @return EndTime <p>End time</p><p>Parameter format: 2026-03-25 01:00:00</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time</p><p>Parameter format: 2026-03-25 01:00:00</p>
                     * @param _endTime <p>End time</p><p>Parameter format: 2026-03-25 01:00:00</p>
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
                     * 获取<p>Query limit</p><p>Value range: [1, 100]</p>
                     * @return Limit <p>Query limit</p><p>Value range: [1, 100]</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Query limit</p><p>Value range: [1, 100]</p>
                     * @param _limit <p>Query limit</p><p>Value range: [1, 100]</p>
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
                     * 获取<p>Product name</p><p>Parameter format: postgres</p>
                     * @return Product <p>Product name</p><p>Parameter format: postgres</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>Product name</p><p>Parameter format: postgres</p>
                     * @param _product <p>Product name</p><p>Parameter format: postgres</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>Offset</p><p>Value range: [0, 10000]</p>
                     * @return Offset <p>Offset</p><p>Value range: [0, 10000]</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset</p><p>Value range: [0, 10000]</p>
                     * @param _offset <p>Offset</p><p>Value range: [0, 10000]</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Sorting method</p><p>Input parameter limitation: Timestamp,AffectRows,ExecTime</p>
                     * @return Order <p>Sorting method</p><p>Input parameter limitation: Timestamp,AffectRows,ExecTime</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sorting method</p><p>Input parameter limitation: Timestamp,AffectRows,ExecTime</p>
                     * @param _order <p>Sorting method</p><p>Input parameter limitation: Timestamp,AffectRows,ExecTime</p>
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
                     * 获取<p>Sorting field</p><p>Input limit: ASC, DESC</p>
                     * @return OrderBy <p>Sorting field</p><p>Input limit: ASC, DESC</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>Sorting field</p><p>Input limit: ASC, DESC</p>
                     * @param _orderBy <p>Sorting field</p><p>Input limit: ASC, DESC</p>
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
                     * 获取<p>Filter criteria</p>
                     * @return Filter <p>Filter criteria</p>
                     * 
                     */
                    AuditLogFilter GetFilter() const;

                    /**
                     * 设置<p>Filter criteria</p>
                     * @param _filter <p>Filter criteria</p>
                     * 
                     */
                    void SetFilter(const AuditLogFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Start time</p><p>Parameter format: 2026-03-25 00:00:00</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time</p><p>Parameter format: 2026-03-25 01:00:00</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Query limit</p><p>Value range: [1, 100]</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Product name</p><p>Parameter format: postgres</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>Offset</p><p>Value range: [0, 10000]</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Sorting method</p><p>Input parameter limitation: Timestamp,AffectRows,ExecTime</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Sorting field</p><p>Input limit: ASC, DESC</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>Filter criteria</p>
                     */
                    AuditLogFilter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEAUDITLOGSREQUEST_H_
