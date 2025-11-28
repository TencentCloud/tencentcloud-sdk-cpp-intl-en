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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIRTUALHOSTREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIRTUALHOSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Filter.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQVirtualHost request structure.
                */
                class DescribeRabbitMQVirtualHostRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQVirtualHostRequest();
                    ~DescribeRabbitMQVirtualHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster instance ID
                     * @return InstanceId Cluster instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster instance ID
                     * @param _instanceId Cluster instance ID
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
                     * 获取Vhost name. If this parameter is not specified, all will be queried by default.
                     * @return VirtualHost Vhost name. If this parameter is not specified, all will be queried by default.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置Vhost name. If this parameter is not specified, all will be queried by default.
                     * @param _virtualHost Vhost name. If this parameter is not specified, all will be queried by default.
                     * 
                     */
                    void SetVirtualHost(const std::string& _virtualHost);

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param _offset Pagination offset
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
                     * 获取Pagination limit
                     * @return Limit Pagination limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination limit
                     * @param _limit Pagination limit
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
                     * 获取Fuzzy query by vhost name
                     * @return Filters Fuzzy query by vhost name
                     * 
                     */
                    Filter GetFilters() const;

                    /**
                     * 设置Fuzzy query by vhost name
                     * @param _filters Fuzzy query by vhost name
                     * 
                     */
                    void SetFilters(const Filter& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Specifies the sorting field.
MessageHeapCount - specifies the message backlog count.
MessageRateInOut - total production and consumption rate.
MessageRateIn - production rate.
MessageRateOut - consumption rate.
                     * @return SortElement Specifies the sorting field.
MessageHeapCount - specifies the message backlog count.
MessageRateInOut - total production and consumption rate.
MessageRateIn - production rate.
MessageRateOut - consumption rate.
                     * 
                     */
                    std::string GetSortElement() const;

                    /**
                     * 设置Specifies the sorting field.
MessageHeapCount - specifies the message backlog count.
MessageRateInOut - total production and consumption rate.
MessageRateIn - production rate.
MessageRateOut - consumption rate.
                     * @param _sortElement Specifies the sorting field.
MessageHeapCount - specifies the message backlog count.
MessageRateInOut - total production and consumption rate.
MessageRateIn - production rate.
MessageRateOut - consumption rate.
                     * 
                     */
                    void SetSortElement(const std::string& _sortElement);

                    /**
                     * 判断参数 SortElement 是否已赋值
                     * @return SortElement 是否已赋值
                     * 
                     */
                    bool SortElementHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: ascend and descend.
                     * @return SortOrder Sorting order. Valid values: ascend and descend.
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置Sorting order. Valid values: ascend and descend.
                     * @param _sortOrder Sorting order. Valid values: ascend and descend.
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * Cluster instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Vhost name. If this parameter is not specified, all will be queried by default.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Pagination offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Fuzzy query by vhost name
                     */
                    Filter m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Specifies the sorting field.
MessageHeapCount - specifies the message backlog count.
MessageRateInOut - total production and consumption rate.
MessageRateIn - production rate.
MessageRateOut - consumption rate.
                     */
                    std::string m_sortElement;
                    bool m_sortElementHasBeenSet;

                    /**
                     * Sorting order. Valid values: ascend and descend.
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIRTUALHOSTREQUEST_H_
