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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL4PROXYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL4PROXYREQUEST_H_

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
                * DescribeL4Proxy request structure.
                */
                class DescribeL4ProxyRequest : public AbstractModel
                {
                public:
                    DescribeL4ProxyRequest();
                    ~DescribeL4ProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the zone where the Layer 4 proxy instance belongs.
                     * @return ZoneId ID of the zone where the Layer 4 proxy instance belongs.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the zone where the Layer 4 proxy instance belongs.
                     * @param _zoneId ID of the zone where the Layer 4 proxy instance belongs.
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
                     * 获取Paginated query offset. Defaults to 0 when not specified.
                     * @return Offset Paginated query offset. Defaults to 0 when not specified.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Paginated query offset. Defaults to 0 when not specified.
                     * @param _offset Paginated query offset. Defaults to 0 when not specified.
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
                     * 获取Paginated query limit. Default value: 20. Maximum value: 1000.
                     * @return Limit Paginated query limit. Default value: 20. Maximum value: 1000.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Paginated query limit. Default value: 20. Maximum value: 1000.
                     * @param _limit Paginated query limit. Default value: 20. Maximum value: 1000.
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
                     * 获取Filter criteria. The upper limit for Filters.Values is 20. If left empty, all Layer 4 proxy instance information under the current zone ID is returned. The detailed filter criteria are as follows: <li>proxy-id: Filters by Layer 4 proxy instance ID;</li>
<li>ddos-protection-type: Filters by security protection type;</li>

                     * @return Filters Filter criteria. The upper limit for Filters.Values is 20. If left empty, all Layer 4 proxy instance information under the current zone ID is returned. The detailed filter criteria are as follows: <li>proxy-id: Filters by Layer 4 proxy instance ID;</li>
<li>ddos-protection-type: Filters by security protection type;</li>

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The upper limit for Filters.Values is 20. If left empty, all Layer 4 proxy instance information under the current zone ID is returned. The detailed filter criteria are as follows: <li>proxy-id: Filters by Layer 4 proxy instance ID;</li>
<li>ddos-protection-type: Filters by security protection type;</li>

                     * @param _filters Filter criteria. The upper limit for Filters.Values is 20. If left empty, all Layer 4 proxy instance information under the current zone ID is returned. The detailed filter criteria are as follows: <li>proxy-id: Filters by Layer 4 proxy instance ID;</li>
<li>ddos-protection-type: Filters by security protection type;</li>

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
                     * ID of the zone where the Layer 4 proxy instance belongs.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Paginated query offset. Defaults to 0 when not specified.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Paginated query limit. Default value: 20. Maximum value: 1000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria. The upper limit for Filters.Values is 20. If left empty, all Layer 4 proxy instance information under the current zone ID is returned. The detailed filter criteria are as follows: <li>proxy-id: Filters by Layer 4 proxy instance ID;</li>
<li>ddos-protection-type: Filters by security protection type;</li>

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL4PROXYREQUEST_H_
