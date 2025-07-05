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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDNSRECORDSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDNSRECORDSREQUEST_H_

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
                * DescribeDnsRecords request structure.
                */
                class DescribeDnsRecordsRequest : public AbstractModel
                {
                public:
                    DescribeDnsRecordsRequest();
                    ~DescribeDnsRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone id.
                     * @return ZoneId Zone id.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone id.
                     * @param _zoneId Zone id.
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
                     * 获取Offset of paginated query. default value: 0.
                     * @return Offset Offset of paginated query. default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset of paginated query. default value: 0.
                     * @param _offset Offset of paginated query. default value: 0.
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
                     * 获取Number limit of paginated query. default value: 20. maximum value: 1000.
                     * @return Limit Number limit of paginated query. default value: 20. maximum value: 1000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number limit of paginated query. default value: 20. maximum value: 1000.
                     * @param _limit Number limit of paginated query. default value: 20. maximum value: 1000.
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
                     * 获取Filter conditions. up to 20 values for each filter. detailed filter conditions are as follows: <li>id: filter by dns record id, supports fuzzy search;</li><li>name: filter by dns record name, supports fuzzy search;</li><li>content: filter by dns record content, supports fuzzy search;</li><li>type: filter by dns record type, does not support fuzzy search. valid values:<br>   a: points the domain name to an external ipv4 address, such as 8.8.8.8;<br>   aaaa: points the domain name to an external ipv6 address;<br>   cname: points the domain name to another domain name, which then resolves to the final ip address;<br>   txt: identifies and describes the domain name, commonly used for domain verification and spf records (anti-spam);<br>   ns: if you need to delegate the subdomain to another dns service provider, you need to add an ns record. root domain cannot add ns records;<br>   caa: specifies the ca that can issue certificates for this site;<br>   srv: identifies a server using a specific service, commonly used in microsoft's directory management;<br>   mx: specifies the recipient's mail server.</li><li>ttl: filter by resolution effective time, does not support fuzzy search.</li>.
                     * @return Filters Filter conditions. up to 20 values for each filter. detailed filter conditions are as follows: <li>id: filter by dns record id, supports fuzzy search;</li><li>name: filter by dns record name, supports fuzzy search;</li><li>content: filter by dns record content, supports fuzzy search;</li><li>type: filter by dns record type, does not support fuzzy search. valid values:<br>   a: points the domain name to an external ipv4 address, such as 8.8.8.8;<br>   aaaa: points the domain name to an external ipv6 address;<br>   cname: points the domain name to another domain name, which then resolves to the final ip address;<br>   txt: identifies and describes the domain name, commonly used for domain verification and spf records (anti-spam);<br>   ns: if you need to delegate the subdomain to another dns service provider, you need to add an ns record. root domain cannot add ns records;<br>   caa: specifies the ca that can issue certificates for this site;<br>   srv: identifies a server using a specific service, commonly used in microsoft's directory management;<br>   mx: specifies the recipient's mail server.</li><li>ttl: filter by resolution effective time, does not support fuzzy search.</li>.
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filter conditions. up to 20 values for each filter. detailed filter conditions are as follows: <li>id: filter by dns record id, supports fuzzy search;</li><li>name: filter by dns record name, supports fuzzy search;</li><li>content: filter by dns record content, supports fuzzy search;</li><li>type: filter by dns record type, does not support fuzzy search. valid values:<br>   a: points the domain name to an external ipv4 address, such as 8.8.8.8;<br>   aaaa: points the domain name to an external ipv6 address;<br>   cname: points the domain name to another domain name, which then resolves to the final ip address;<br>   txt: identifies and describes the domain name, commonly used for domain verification and spf records (anti-spam);<br>   ns: if you need to delegate the subdomain to another dns service provider, you need to add an ns record. root domain cannot add ns records;<br>   caa: specifies the ca that can issue certificates for this site;<br>   srv: identifies a server using a specific service, commonly used in microsoft's directory management;<br>   mx: specifies the recipient's mail server.</li><li>ttl: filter by resolution effective time, does not support fuzzy search.</li>.
                     * @param _filters Filter conditions. up to 20 values for each filter. detailed filter conditions are as follows: <li>id: filter by dns record id, supports fuzzy search;</li><li>name: filter by dns record name, supports fuzzy search;</li><li>content: filter by dns record content, supports fuzzy search;</li><li>type: filter by dns record type, does not support fuzzy search. valid values:<br>   a: points the domain name to an external ipv4 address, such as 8.8.8.8;<br>   aaaa: points the domain name to an external ipv6 address;<br>   cname: points the domain name to another domain name, which then resolves to the final ip address;<br>   txt: identifies and describes the domain name, commonly used for domain verification and spf records (anti-spam);<br>   ns: if you need to delegate the subdomain to another dns service provider, you need to add an ns record. root domain cannot add ns records;<br>   caa: specifies the ca that can issue certificates for this site;<br>   srv: identifies a server using a specific service, commonly used in microsoft's directory management;<br>   mx: specifies the recipient's mail server.</li><li>ttl: filter by resolution effective time, does not support fuzzy search.</li>.
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
                     * 获取Sorting basis. values include: <li>`content`: dns record content</li><li>`created-on`: dns record creation time</li><li>`name`: dns record name</li><li>`ttl`: cache time</li><li>`type`: dns record type</li> default sorting is by the combination of `type`, `name`.
                     * @return SortBy Sorting basis. values include: <li>`content`: dns record content</li><li>`created-on`: dns record creation time</li><li>`name`: dns record name</li><li>`ttl`: cache time</li><li>`type`: dns record type</li> default sorting is by the combination of `type`, `name`.
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置Sorting basis. values include: <li>`content`: dns record content</li><li>`created-on`: dns record creation time</li><li>`name`: dns record name</li><li>`ttl`: cache time</li><li>`type`: dns record type</li> default sorting is by the combination of `type`, `name`.
                     * @param _sortBy Sorting basis. values include: <li>`content`: dns record content</li><li>`created-on`: dns record creation time</li><li>`name`: dns record name</li><li>`ttl`: cache time</li><li>`type`: dns record type</li> default sorting is by the combination of `type`, `name`.
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取List sort method. values: <li>`asc`: ascending order</li><li>`desc`: sort in descending order</li> default value: `asc`.
                     * @return SortOrder List sort method. values: <li>`asc`: ascending order</li><li>`desc`: sort in descending order</li> default value: `asc`.
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置List sort method. values: <li>`asc`: ascending order</li><li>`desc`: sort in descending order</li> default value: `asc`.
                     * @param _sortOrder List sort method. values: <li>`asc`: ascending order</li><li>`desc`: sort in descending order</li> default value: `asc`.
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取Match method. values: <li>`all`: return records that match all query conditions</li><li>`any`: return records that match any query condition</li> default value: `all`.
                     * @return Match Match method. values: <li>`all`: return records that match all query conditions</li><li>`any`: return records that match any query condition</li> default value: `all`.
                     * 
                     */
                    std::string GetMatch() const;

                    /**
                     * 设置Match method. values: <li>`all`: return records that match all query conditions</li><li>`any`: return records that match any query condition</li> default value: `all`.
                     * @param _match Match method. values: <li>`all`: return records that match all query conditions</li><li>`any`: return records that match any query condition</li> default value: `all`.
                     * 
                     */
                    void SetMatch(const std::string& _match);

                    /**
                     * 判断参数 Match 是否已赋值
                     * @return Match 是否已赋值
                     * 
                     */
                    bool MatchHasBeenSet() const;

                private:

                    /**
                     * Zone id.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Offset of paginated query. default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number limit of paginated query. default value: 20. maximum value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter conditions. up to 20 values for each filter. detailed filter conditions are as follows: <li>id: filter by dns record id, supports fuzzy search;</li><li>name: filter by dns record name, supports fuzzy search;</li><li>content: filter by dns record content, supports fuzzy search;</li><li>type: filter by dns record type, does not support fuzzy search. valid values:<br>   a: points the domain name to an external ipv4 address, such as 8.8.8.8;<br>   aaaa: points the domain name to an external ipv6 address;<br>   cname: points the domain name to another domain name, which then resolves to the final ip address;<br>   txt: identifies and describes the domain name, commonly used for domain verification and spf records (anti-spam);<br>   ns: if you need to delegate the subdomain to another dns service provider, you need to add an ns record. root domain cannot add ns records;<br>   caa: specifies the ca that can issue certificates for this site;<br>   srv: identifies a server using a specific service, commonly used in microsoft's directory management;<br>   mx: specifies the recipient's mail server.</li><li>ttl: filter by resolution effective time, does not support fuzzy search.</li>.
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting basis. values include: <li>`content`: dns record content</li><li>`created-on`: dns record creation time</li><li>`name`: dns record name</li><li>`ttl`: cache time</li><li>`type`: dns record type</li> default sorting is by the combination of `type`, `name`.
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * List sort method. values: <li>`asc`: ascending order</li><li>`desc`: sort in descending order</li> default value: `asc`.
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * Match method. values: <li>`all`: return records that match all query conditions</li><li>`any`: return records that match any query condition</li> default value: `all`.
                     */
                    std::string m_match;
                    bool m_matchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDNSRECORDSREQUEST_H_
