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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOADBALANCERLISTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOADBALANCERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Filter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeLoadBalancerList request structure.
                */
                class DescribeLoadBalancerListRequest : public AbstractModel
                {
                public:
                    DescribeLoadBalancerListRequest();
                    ~DescribeLoadBalancerListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Offset of paginated query. Default value: 0.		
                     * @return Offset Offset of paginated query. Default value: 0.		
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset of paginated query. Default value: 0.		
                     * @param _offset Offset of paginated query. Default value: 0.		
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
                     * 获取Paginated query limit. Default value: 20, maximum value: 100.	
                     * @return Limit Paginated query limit. Default value: 20, maximum value: 100.	
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Paginated query limit. Default value: 20, maximum value: 100.	
                     * @param _limit Paginated query limit. Default value: 20, maximum value: 100.	
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
                     * 获取Filter criteria. The maximum value of Filters.Values is 20. If this parameter is left empty, all LoadBalancer information under the current zone ID will be returned. The detailed filter criteria are as follows:
<li>InstanceName: Filter by LoadBalancer name.</li>
<li>InstanceId: Filter by LoadBalancer ID.</li>

                     * @return Filters Filter criteria. The maximum value of Filters.Values is 20. If this parameter is left empty, all LoadBalancer information under the current zone ID will be returned. The detailed filter criteria are as follows:
<li>InstanceName: Filter by LoadBalancer name.</li>
<li>InstanceId: Filter by LoadBalancer ID.</li>

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The maximum value of Filters.Values is 20. If this parameter is left empty, all LoadBalancer information under the current zone ID will be returned. The detailed filter criteria are as follows:
<li>InstanceName: Filter by LoadBalancer name.</li>
<li>InstanceId: Filter by LoadBalancer ID.</li>

                     * @param _filters Filter criteria. The maximum value of Filters.Values is 20. If this parameter is left empty, all LoadBalancer information under the current zone ID will be returned. The detailed filter criteria are as follows:
<li>InstanceName: Filter by LoadBalancer name.</li>
<li>InstanceId: Filter by LoadBalancer ID.</li>

                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Offset of paginated query. Default value: 0.		
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Paginated query limit. Default value: 20, maximum value: 100.	
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria. The maximum value of Filters.Values is 20. If this parameter is left empty, all LoadBalancer information under the current zone ID will be returned. The detailed filter criteria are as follows:
<li>InstanceName: Filter by LoadBalancer name.</li>
<li>InstanceId: Filter by LoadBalancer ID.</li>

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOADBALANCERLISTREQUEST_H_
