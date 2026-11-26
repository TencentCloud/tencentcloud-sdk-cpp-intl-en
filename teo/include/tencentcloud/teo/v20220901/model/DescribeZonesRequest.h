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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONESREQUEST_H_

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
                * DescribeZones request structure.
                */
                class DescribeZonesRequest : public AbstractModel
                {
                public:
                    DescribeZonesRequest();
                    ~DescribeZonesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The offset of paginated query. Default value: 0.
                     * @return Offset The offset of paginated query. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The offset of paginated query. Default value: 0.
                     * @param _offset The offset of paginated query. Default value: 0.
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
                     * 获取Paginated query limit. Default value: 20, maximum value: 100.
                     * @return Limit Paginated query limit. Default value: 20, maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Paginated query limit. Default value: 20, maximum value: 100.
                     * @param _limit Paginated query limit. Default value: 20, maximum value: 100.
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
                     * 获取Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, all site information authorized under the current appid will be returned. The detailed filter criteria are as follows: <li>zone-name: Filter by site name.</li><li>zone-type: Filter by site type. Options:<br>        full: NS access type<br>        partial: CNAME access type<br>        partialComposite: domainless access<br>        dnsPodAccess: DNSPod managed access<br>        pages: Pages access type<br>        ai: edge reasoning access type.</li><li>zone-id: Filter by site ID in the format like zone-2noz78a8ev6k.</li><li>status: Filter by site status. Options:<br>        active: NS switched<br>        pending: NS to be switched<br>        deleted: deleted.</li><li>tag-key: Filter by tag key.</li><li>tag-value: Filter by tag value.</li><li>alias-zone-name: Filter by identical site identifier.</li>Fuzzy query supports filtering fields named zone-name or alias-zone-name.
                     * @return Filters Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, all site information authorized under the current appid will be returned. The detailed filter criteria are as follows: <li>zone-name: Filter by site name.</li><li>zone-type: Filter by site type. Options:<br>        full: NS access type<br>        partial: CNAME access type<br>        partialComposite: domainless access<br>        dnsPodAccess: DNSPod managed access<br>        pages: Pages access type<br>        ai: edge reasoning access type.</li><li>zone-id: Filter by site ID in the format like zone-2noz78a8ev6k.</li><li>status: Filter by site status. Options:<br>        active: NS switched<br>        pending: NS to be switched<br>        deleted: deleted.</li><li>tag-key: Filter by tag key.</li><li>tag-value: Filter by tag value.</li><li>alias-zone-name: Filter by identical site identifier.</li>Fuzzy query supports filtering fields named zone-name or alias-zone-name.
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, all site information authorized under the current appid will be returned. The detailed filter criteria are as follows: <li>zone-name: Filter by site name.</li><li>zone-type: Filter by site type. Options:<br>        full: NS access type<br>        partial: CNAME access type<br>        partialComposite: domainless access<br>        dnsPodAccess: DNSPod managed access<br>        pages: Pages access type<br>        ai: edge reasoning access type.</li><li>zone-id: Filter by site ID in the format like zone-2noz78a8ev6k.</li><li>status: Filter by site status. Options:<br>        active: NS switched<br>        pending: NS to be switched<br>        deleted: deleted.</li><li>tag-key: Filter by tag key.</li><li>tag-value: Filter by tag value.</li><li>alias-zone-name: Filter by identical site identifier.</li>Fuzzy query supports filtering fields named zone-name or alias-zone-name.
                     * @param _filters Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, all site information authorized under the current appid will be returned. The detailed filter criteria are as follows: <li>zone-name: Filter by site name.</li><li>zone-type: Filter by site type. Options:<br>        full: NS access type<br>        partial: CNAME access type<br>        partialComposite: domainless access<br>        dnsPodAccess: DNSPod managed access<br>        pages: Pages access type<br>        ai: edge reasoning access type.</li><li>zone-id: Filter by site ID in the format like zone-2noz78a8ev6k.</li><li>status: Filter by site status. Options:<br>        active: NS switched<br>        pending: NS to be switched<br>        deleted: deleted.</li><li>tag-key: Filter by tag key.</li><li>tag-value: Filter by tag value.</li><li>alias-zone-name: Filter by identical site identifier.</li>Fuzzy query supports filtering fields named zone-name or alias-zone-name.
                     * 
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sort returned results based on this field. Valid values:
<li> type: access type;</li>
<li> area: acceleration region;</li>
<li> create-time: creation time;</li>
<li> zone-name: site name;</li>
<li> use-time: last used time;</li>
<li> active-status: effective status.</li>If left empty, the returned results are sorted by create-time by default.
                     * @return Order Sort returned results based on this field. Valid values:
<li> type: access type;</li>
<li> area: acceleration region;</li>
<li> create-time: creation time;</li>
<li> zone-name: site name;</li>
<li> use-time: last used time;</li>
<li> active-status: effective status.</li>If left empty, the returned results are sorted by create-time by default.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort returned results based on this field. Valid values:
<li> type: access type;</li>
<li> area: acceleration region;</li>
<li> create-time: creation time;</li>
<li> zone-name: site name;</li>
<li> use-time: last used time;</li>
<li> active-status: effective status.</li>If left empty, the returned results are sorted by create-time by default.
                     * @param _order Sort returned results based on this field. Valid values:
<li> type: access type;</li>
<li> area: acceleration region;</li>
<li> create-time: creation time;</li>
<li> zone-name: site name;</li>
<li> use-time: last used time;</li>
<li> active-status: effective status.</li>If left empty, the returned results are sorted by create-time by default.
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
                     * 获取Sorting order. If the field value is a number, sort by number size. If the field value is text, sort by ASCII code size. Valid values:
<li> asc: sort in ascending order;</li>
<li> desc: in descending order.</li>Use default value desc if not specified.
                     * @return Direction Sorting order. If the field value is a number, sort by number size. If the field value is text, sort by ASCII code size. Valid values:
<li> asc: sort in ascending order;</li>
<li> desc: in descending order.</li>Use default value desc if not specified.
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置Sorting order. If the field value is a number, sort by number size. If the field value is text, sort by ASCII code size. Valid values:
<li> asc: sort in ascending order;</li>
<li> desc: in descending order.</li>Use default value desc if not specified.
                     * @param _direction Sorting order. If the field value is a number, sort by number size. If the field value is text, sort by ASCII code size. Valid values:
<li> asc: sort in ascending order;</li>
<li> desc: in descending order.</li>Use default value desc if not specified.
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * The offset of paginated query. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Paginated query limit. Default value: 20, maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, all site information authorized under the current appid will be returned. The detailed filter criteria are as follows: <li>zone-name: Filter by site name.</li><li>zone-type: Filter by site type. Options:<br>        full: NS access type<br>        partial: CNAME access type<br>        partialComposite: domainless access<br>        dnsPodAccess: DNSPod managed access<br>        pages: Pages access type<br>        ai: edge reasoning access type.</li><li>zone-id: Filter by site ID in the format like zone-2noz78a8ev6k.</li><li>status: Filter by site status. Options:<br>        active: NS switched<br>        pending: NS to be switched<br>        deleted: deleted.</li><li>tag-key: Filter by tag key.</li><li>tag-value: Filter by tag value.</li><li>alias-zone-name: Filter by identical site identifier.</li>Fuzzy query supports filtering fields named zone-name or alias-zone-name.
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sort returned results based on this field. Valid values:
<li> type: access type;</li>
<li> area: acceleration region;</li>
<li> create-time: creation time;</li>
<li> zone-name: site name;</li>
<li> use-time: last used time;</li>
<li> active-status: effective status.</li>If left empty, the returned results are sorted by create-time by default.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting order. If the field value is a number, sort by number size. If the field value is text, sort by ASCII code size. Valid values:
<li> asc: sort in ascending order;</li>
<li> desc: in descending order.</li>Use default value desc if not specified.
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONESREQUEST_H_
