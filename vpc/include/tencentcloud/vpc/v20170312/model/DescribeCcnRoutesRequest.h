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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNROUTESREQUEST_H_

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
                * DescribeCcnRoutes request structure.
                */
                class DescribeCcnRoutesRequest : public AbstractModel
                {
                public:
                    DescribeCcnRoutesRequest();
                    ~DescribeCcnRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The CCN instance ID, such as `ccn-gree226l`.
                     * @return CcnId The CCN instance ID, such as `ccn-gree226l`.
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置The CCN instance ID, such as `ccn-gree226l`.
                     * @param _ccnId The CCN instance ID, such as `ccn-gree226l`.
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取The unique ID of the CCN routing policy, such as `ccnr-f49l6u0z`.
                     * @return RouteIds The unique ID of the CCN routing policy, such as `ccnr-f49l6u0z`.
                     * 
                     */
                    std::vector<std::string> GetRouteIds() const;

                    /**
                     * 设置The unique ID of the CCN routing policy, such as `ccnr-f49l6u0z`.
                     * @param _routeIds The unique ID of the CCN routing policy, such as `ccnr-f49l6u0z`.
                     * 
                     */
                    void SetRouteIds(const std::vector<std::string>& _routeIds);

                    /**
                     * 判断参数 RouteIds 是否已赋值
                     * @return RouteIds 是否已赋值
                     * 
                     */
                    bool RouteIdsHasBeenSet() const;

                    /**
                     * 获取Filter condition. `RouteIds` and `Filters` cannot be specified at the same time.
<li>route-id - String - (Filter condition) Routing policy ID.</li>
<li>cidr-block - String - (Filter condition) Destination.</li>
<li>instance-type - String - (Filter condition) The next hop type.</li>
<li>instance-region - String - (Filter condition) The next hop region.</li>
<li>instance-id - String - (Filter condition) The instance ID of the next hop.</li>
<li>route-table-id - String - (Filter condition) The list of route table IDs in the format of `ccntr-1234edfr`. Filters by the route table ID.</li>
                     * @return Filters Filter condition. `RouteIds` and `Filters` cannot be specified at the same time.
<li>route-id - String - (Filter condition) Routing policy ID.</li>
<li>cidr-block - String - (Filter condition) Destination.</li>
<li>instance-type - String - (Filter condition) The next hop type.</li>
<li>instance-region - String - (Filter condition) The next hop region.</li>
<li>instance-id - String - (Filter condition) The instance ID of the next hop.</li>
<li>route-table-id - String - (Filter condition) The list of route table IDs in the format of `ccntr-1234edfr`. Filters by the route table ID.</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter condition. `RouteIds` and `Filters` cannot be specified at the same time.
<li>route-id - String - (Filter condition) Routing policy ID.</li>
<li>cidr-block - String - (Filter condition) Destination.</li>
<li>instance-type - String - (Filter condition) The next hop type.</li>
<li>instance-region - String - (Filter condition) The next hop region.</li>
<li>instance-id - String - (Filter condition) The instance ID of the next hop.</li>
<li>route-table-id - String - (Filter condition) The list of route table IDs in the format of `ccntr-1234edfr`. Filters by the route table ID.</li>
                     * @param _filters Filter condition. `RouteIds` and `Filters` cannot be specified at the same time.
<li>route-id - String - (Filter condition) Routing policy ID.</li>
<li>cidr-block - String - (Filter condition) Destination.</li>
<li>instance-type - String - (Filter condition) The next hop type.</li>
<li>instance-region - String - (Filter condition) The next hop region.</li>
<li>instance-id - String - (Filter condition) The instance ID of the next hop.</li>
<li>route-table-id - String - (Filter condition) The list of route table IDs in the format of `ccntr-1234edfr`. Filters by the route table ID.</li>
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
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
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
                     * 获取The returned quantity
                     * @return Limit The returned quantity
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The returned quantity
                     * @param _limit The returned quantity
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The CCN instance ID, such as `ccn-gree226l`.
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * The unique ID of the CCN routing policy, such as `ccnr-f49l6u0z`.
                     */
                    std::vector<std::string> m_routeIds;
                    bool m_routeIdsHasBeenSet;

                    /**
                     * Filter condition. `RouteIds` and `Filters` cannot be specified at the same time.
<li>route-id - String - (Filter condition) Routing policy ID.</li>
<li>cidr-block - String - (Filter condition) Destination.</li>
<li>instance-type - String - (Filter condition) The next hop type.</li>
<li>instance-region - String - (Filter condition) The next hop region.</li>
<li>instance-id - String - (Filter condition) The instance ID of the next hop.</li>
<li>route-table-id - String - (Filter condition) The list of route table IDs in the format of `ccntr-1234edfr`. Filters by the route table ID.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The returned quantity
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNROUTESREQUEST_H_
