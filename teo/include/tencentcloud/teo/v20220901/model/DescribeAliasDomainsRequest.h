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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEALIASDOMAINSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEALIASDOMAINSREQUEST_H_

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
                * DescribeAliasDomains request structure.
                */
                class DescribeAliasDomainsRequest : public AbstractModel
                {
                public:
                    DescribeAliasDomainsRequest();
                    ~DescribeAliasDomainsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param _zoneId The site ID.
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
                     * 获取The page offset. Default value: 0
                     * @return Offset The page offset. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The page offset. Default value: 0
                     * @param _offset The page offset. Default value: 0
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
                     * 获取The paginated query limit. Default value: 20. Maximum value: 1000.
                     * @return Limit The paginated query limit. Default value: 20. Maximum value: 1000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The paginated query limit. Default value: 20. Maximum value: 1000.
                     * @param _limit The paginated query limit. Default value: 20. Maximum value: 1000.
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
                     * 获取Filter conditions. The maximum value for Filters.Values is 20. The detailed conditions are as follows:
<li>target-name: Filter by the target domain name;</li>
<li>alias-name: Filter by the alias of the domain name.</li>Fuzzy queries are only supported for the field name alias-name.
                     * @return Filters Filter conditions. The maximum value for Filters.Values is 20. The detailed conditions are as follows:
<li>target-name: Filter by the target domain name;</li>
<li>alias-name: Filter by the alias of the domain name.</li>Fuzzy queries are only supported for the field name alias-name.
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filter conditions. The maximum value for Filters.Values is 20. The detailed conditions are as follows:
<li>target-name: Filter by the target domain name;</li>
<li>alias-name: Filter by the alias of the domain name.</li>Fuzzy queries are only supported for the field name alias-name.
                     * @param _filters Filter conditions. The maximum value for Filters.Values is 20. The detailed conditions are as follows:
<li>target-name: Filter by the target domain name;</li>
<li>alias-name: Filter by the alias of the domain name.</li>Fuzzy queries are only supported for the field name alias-name.
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
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The page offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The paginated query limit. Default value: 20. Maximum value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter conditions. The maximum value for Filters.Values is 20. The detailed conditions are as follows:
<li>target-name: Filter by the target domain name;</li>
<li>alias-name: Filter by the alias of the domain name.</li>Fuzzy queries are only supported for the field name alias-name.
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEALIASDOMAINSREQUEST_H_
