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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTEPOLICYENTRIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTEPOLICYENTRIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeRoutePolicyEntries request structure.
                */
                class DescribeRoutePolicyEntriesRequest : public AbstractModel
                {
                public:
                    DescribeRoutePolicyEntriesRequest();
                    ~DescribeRoutePolicyEntriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria. RoutePolicyEntryIds and Filters cannot be specified at the same time.
<li>route-policy-id - String - (filter condition) specifies the instance id of the route reception policy, such as rrp-f49l6u0z.</li>.
<li>cidr-block - String - (filter condition) cidr (subnet part before the mask), such as 10.0.0.0/8.</li>.
<li>priority - Integer - filter condition. specifies the priority, such as 20.</li>.
<li>gateway-type - String - (filter criteria) next hop type, such as CVM.</li>.
<li>GatewayId - String - specifies the unique id of the next hop instance, such as ccn-f49l6u0z.</li>.
<li>route-type - String - (filter condition) routing type. valid values: USER (USER route), NETD (route issued by network probe), CCN (CCN route).</li>.
<li>action - String - (filter condition) specifies the action. valid values: DROP (DROP), DISABLE (receive and DISABLE), ACCEPT (receive and enable).</li>.
<li>description - String - specifies the filter condition description, such as TEST.</li>.
<li>route-policy-item-id - String - (filter condition) specifies the entry unique id of the route reception policy, such as rrpi-dq782kw7.</li>.
                     * @return Filters Filter criteria. RoutePolicyEntryIds and Filters cannot be specified at the same time.
<li>route-policy-id - String - (filter condition) specifies the instance id of the route reception policy, such as rrp-f49l6u0z.</li>.
<li>cidr-block - String - (filter condition) cidr (subnet part before the mask), such as 10.0.0.0/8.</li>.
<li>priority - Integer - filter condition. specifies the priority, such as 20.</li>.
<li>gateway-type - String - (filter criteria) next hop type, such as CVM.</li>.
<li>GatewayId - String - specifies the unique id of the next hop instance, such as ccn-f49l6u0z.</li>.
<li>route-type - String - (filter condition) routing type. valid values: USER (USER route), NETD (route issued by network probe), CCN (CCN route).</li>.
<li>action - String - (filter condition) specifies the action. valid values: DROP (DROP), DISABLE (receive and DISABLE), ACCEPT (receive and enable).</li>.
<li>description - String - specifies the filter condition description, such as TEST.</li>.
<li>route-policy-item-id - String - (filter condition) specifies the entry unique id of the route reception policy, such as rrpi-dq782kw7.</li>.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria. RoutePolicyEntryIds and Filters cannot be specified at the same time.
<li>route-policy-id - String - (filter condition) specifies the instance id of the route reception policy, such as rrp-f49l6u0z.</li>.
<li>cidr-block - String - (filter condition) cidr (subnet part before the mask), such as 10.0.0.0/8.</li>.
<li>priority - Integer - filter condition. specifies the priority, such as 20.</li>.
<li>gateway-type - String - (filter criteria) next hop type, such as CVM.</li>.
<li>GatewayId - String - specifies the unique id of the next hop instance, such as ccn-f49l6u0z.</li>.
<li>route-type - String - (filter condition) routing type. valid values: USER (USER route), NETD (route issued by network probe), CCN (CCN route).</li>.
<li>action - String - (filter condition) specifies the action. valid values: DROP (DROP), DISABLE (receive and DISABLE), ACCEPT (receive and enable).</li>.
<li>description - String - specifies the filter condition description, such as TEST.</li>.
<li>route-policy-item-id - String - (filter condition) specifies the entry unique id of the route reception policy, such as rrpi-dq782kw7.</li>.
                     * @param _filters Filter criteria. RoutePolicyEntryIds and Filters cannot be specified at the same time.
<li>route-policy-id - String - (filter condition) specifies the instance id of the route reception policy, such as rrp-f49l6u0z.</li>.
<li>cidr-block - String - (filter condition) cidr (subnet part before the mask), such as 10.0.0.0/8.</li>.
<li>priority - Integer - filter condition. specifies the priority, such as 20.</li>.
<li>gateway-type - String - (filter criteria) next hop type, such as CVM.</li>.
<li>GatewayId - String - specifies the unique id of the next hop instance, such as ccn-f49l6u0z.</li>.
<li>route-type - String - (filter condition) routing type. valid values: USER (USER route), NETD (route issued by network probe), CCN (CCN route).</li>.
<li>action - String - (filter condition) specifies the action. valid values: DROP (DROP), DISABLE (receive and DISABLE), ACCEPT (receive and enable).</li>.
<li>description - String - specifies the filter condition description, such as TEST.</li>.
<li>route-policy-item-id - String - (filter condition) specifies the entry unique id of the route reception policy, such as rrpi-dq782kw7.</li>.
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
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
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
                     * 获取Number of request objects.
                     * @return Limit Number of request objects.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of request objects.
                     * @param _limit Number of request objects.
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
                     * 获取Sorting field. currently only supports the priority field.
                     * @return OrderField Sorting field. currently only supports the priority field.
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Sorting field. currently only supports the priority field.
                     * @param _orderField Sorting field. currently only supports the priority field.
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取Specifies the sorting order.
ASC: ascending order.
DESC: descending order.
                     * @return OrderDirection Specifies the sorting order.
ASC: ascending order.
DESC: descending order.
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置Specifies the sorting order.
ASC: ascending order.
DESC: descending order.
                     * @param _orderDirection Specifies the sorting order.
ASC: ascending order.
DESC: descending order.
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取Specifies the routing strategy entry ID.
                     * @return RoutePolicyEntryIds Specifies the routing strategy entry ID.
                     * 
                     */
                    std::vector<std::string> GetRoutePolicyEntryIds() const;

                    /**
                     * 设置Specifies the routing strategy entry ID.
                     * @param _routePolicyEntryIds Specifies the routing strategy entry ID.
                     * 
                     */
                    void SetRoutePolicyEntryIds(const std::vector<std::string>& _routePolicyEntryIds);

                    /**
                     * 判断参数 RoutePolicyEntryIds 是否已赋值
                     * @return RoutePolicyEntryIds 是否已赋值
                     * 
                     */
                    bool RoutePolicyEntryIdsHasBeenSet() const;

                private:

                    /**
                     * Filter criteria. RoutePolicyEntryIds and Filters cannot be specified at the same time.
<li>route-policy-id - String - (filter condition) specifies the instance id of the route reception policy, such as rrp-f49l6u0z.</li>.
<li>cidr-block - String - (filter condition) cidr (subnet part before the mask), such as 10.0.0.0/8.</li>.
<li>priority - Integer - filter condition. specifies the priority, such as 20.</li>.
<li>gateway-type - String - (filter criteria) next hop type, such as CVM.</li>.
<li>GatewayId - String - specifies the unique id of the next hop instance, such as ccn-f49l6u0z.</li>.
<li>route-type - String - (filter condition) routing type. valid values: USER (USER route), NETD (route issued by network probe), CCN (CCN route).</li>.
<li>action - String - (filter condition) specifies the action. valid values: DROP (DROP), DISABLE (receive and DISABLE), ACCEPT (receive and enable).</li>.
<li>description - String - specifies the filter condition description, such as TEST.</li>.
<li>route-policy-item-id - String - (filter condition) specifies the entry unique id of the route reception policy, such as rrpi-dq782kw7.</li>.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of request objects.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting field. currently only supports the priority field.
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * Specifies the sorting order.
ASC: ascending order.
DESC: descending order.
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * Specifies the routing strategy entry ID.
                     */
                    std::vector<std::string> m_routePolicyEntryIds;
                    bool m_routePolicyEntryIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTEPOLICYENTRIESREQUEST_H_
