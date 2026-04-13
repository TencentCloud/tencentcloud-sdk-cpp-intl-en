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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEPREFETCHORIGINLIMITREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEPREFETCHORIGINLIMITREQUEST_H_

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
                * DescribePrefetchOriginLimit request structure.
                */
                class DescribePrefetchOriginLimitRequest : public AbstractModel
                {
                public:
                    DescribePrefetchOriginLimitRequest();
                    ~DescribePrefetchOriginLimitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the site ID.
                     * @return ZoneId Specifies the site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Specifies the site ID.
                     * @param _zoneId Specifies the site ID.
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
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset of paginated query. Default value: 0.
                     * @param _offset Offset of paginated query. Default value: 0.
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
                     * 获取Specifies the paginated query limit. default value: 20. upper limit: 100.
                     * @return Limit Specifies the paginated query limit. default value: 20. upper limit: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Specifies the paginated query limit. default value: 20. upper limit: 100.
                     * @param _limit Specifies the paginated query limit. default value: 20. upper limit: 100.
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
                     * 获取Filter condition. specifies the maximum number of Filters.Values is 20. detailed filter criteria:.
<Li>Domain-Name: specifies domain filtering. the domain-name format is like www.qq.com. fuzzy queries are not supported.</li>.
<li>area: specifies the acceleration region to filter by limit. fuzzy queries are not supported. valid values:<br> Overseas: global availability zone (excludes chinese mainland);<br> MainlandChina: chinese mainland availability zone.</li>.
                     * @return Filters Filter condition. specifies the maximum number of Filters.Values is 20. detailed filter criteria:.
<Li>Domain-Name: specifies domain filtering. the domain-name format is like www.qq.com. fuzzy queries are not supported.</li>.
<li>area: specifies the acceleration region to filter by limit. fuzzy queries are not supported. valid values:<br> Overseas: global availability zone (excludes chinese mainland);<br> MainlandChina: chinese mainland availability zone.</li>.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter condition. specifies the maximum number of Filters.Values is 20. detailed filter criteria:.
<Li>Domain-Name: specifies domain filtering. the domain-name format is like www.qq.com. fuzzy queries are not supported.</li>.
<li>area: specifies the acceleration region to filter by limit. fuzzy queries are not supported. valid values:<br> Overseas: global availability zone (excludes chinese mainland);<br> MainlandChina: chinese mainland availability zone.</li>.
                     * @param _filters Filter condition. specifies the maximum number of Filters.Values is 20. detailed filter criteria:.
<Li>Domain-Name: specifies domain filtering. the domain-name format is like www.qq.com. fuzzy queries are not supported.</li>.
<li>area: specifies the acceleration region to filter by limit. fuzzy queries are not supported. valid values:<br> Overseas: global availability zone (excludes chinese mainland);<br> MainlandChina: chinese mainland availability zone.</li>.
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
                     * Specifies the site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Offset of paginated query. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Specifies the paginated query limit. default value: 20. upper limit: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter condition. specifies the maximum number of Filters.Values is 20. detailed filter criteria:.
<Li>Domain-Name: specifies domain filtering. the domain-name format is like www.qq.com. fuzzy queries are not supported.</li>.
<li>area: specifies the acceleration region to filter by limit. fuzzy queries are not supported. valid values:<br> Overseas: global availability zone (excludes chinese mainland);<br> MainlandChina: chinese mainland availability zone.</li>.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEPREFETCHORIGINLIMITREQUEST_H_
