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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdvancedFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeOriginGroup request structure.
                */
                class DescribeOriginGroupRequest : public AbstractModel
                {
                public:
                    DescribeOriginGroupRequest();
                    ~DescribeOriginGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID. This parameter is required.
                     * @return ZoneId Site ID. This parameter is required.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID. This parameter is required.
                     * @param _zoneId Site ID. This parameter is required.
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
                     * 获取Paginated query offset. Default value: 0.
                     * @return Offset Paginated query offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Paginated query offset. Default value: 0.
                     * @param _offset Paginated query offset. Default value: 0.
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
                     * 获取Paginated query limit. If not specified, the default value is 20. Value range: 1-1000.
                     * @return Limit Paginated query limit. If not specified, the default value is 20. Value range: 1-1000.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Paginated query limit. If not specified, the default value is 20. Value range: 1-1000.
                     * @param _limit Paginated query limit. If not specified, the default value is 20. Value range: 1-1000.
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
                     * 获取Filter criteria. The maximum value of Filters.Values is 20. The detailed filter criteria are as follows:
<li>origin-group-id: filter by origin group ID. Fuzzy queries are not supported. The origin group ID format is: origin-2ccgtb24-7dc5-46s2-9r3e-95825d53dwe3a;</li><li>origin-group-name: filter by origin group name. When fuzzy search is used, only one origin group name can be filled in.</li>
                     * @return Filters Filter criteria. The maximum value of Filters.Values is 20. The detailed filter criteria are as follows:
<li>origin-group-id: filter by origin group ID. Fuzzy queries are not supported. The origin group ID format is: origin-2ccgtb24-7dc5-46s2-9r3e-95825d53dwe3a;</li><li>origin-group-name: filter by origin group name. When fuzzy search is used, only one origin group name can be filled in.</li>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The maximum value of Filters.Values is 20. The detailed filter criteria are as follows:
<li>origin-group-id: filter by origin group ID. Fuzzy queries are not supported. The origin group ID format is: origin-2ccgtb24-7dc5-46s2-9r3e-95825d53dwe3a;</li><li>origin-group-name: filter by origin group name. When fuzzy search is used, only one origin group name can be filled in.</li>
                     * @param _filters Filter criteria. The maximum value of Filters.Values is 20. The detailed filter criteria are as follows:
<li>origin-group-id: filter by origin group ID. Fuzzy queries are not supported. The origin group ID format is: origin-2ccgtb24-7dc5-46s2-9r3e-95825d53dwe3a;</li><li>origin-group-name: filter by origin group name. When fuzzy search is used, only one origin group name can be filled in.</li>
                     * 
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Site ID. This parameter is required.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Paginated query offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Paginated query limit. If not specified, the default value is 20. Value range: 1-1000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria. The maximum value of Filters.Values is 20. The detailed filter criteria are as follows:
<li>origin-group-id: filter by origin group ID. Fuzzy queries are not supported. The origin group ID format is: origin-2ccgtb24-7dc5-46s2-9r3e-95825d53dwe3a;</li><li>origin-group-name: filter by origin group name. When fuzzy search is used, only one origin group name can be filled in.</li>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINGROUPREQUEST_H_
