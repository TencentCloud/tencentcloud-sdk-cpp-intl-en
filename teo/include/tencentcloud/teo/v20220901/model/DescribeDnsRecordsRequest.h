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
                     * 获取Number limit of paginated query. Default value: 20. Maximum value: 1000.
                     * @return Limit Number limit of paginated query. Default value: 20. Maximum value: 1000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number limit of paginated query. Default value: 20. Maximum value: 1000.
                     * @param _limit Number limit of paginated query. Default value: 20. Maximum value: 1000.
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
                     * 获取Filter criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows: <li>id: Filter by DNS record ID. Fuzzy query is supported.</li><li>name: Filter by DNS record name. Fuzzy query is supported.</li><li>content: Filter by DNS record content. Fuzzy query is supported.</li><li>type: Filter by DNS record type. Fuzzy query is not supported. Options:<br>        A: Point the domain to an external IPv4 address, such as 8.8.8.8.<br>        AAAA: Point the domain to an external IPv6 address.<br>        CNAME: Point the domain to another domain, which then resolves to the final IP address.<br>        TXT: Identify and describe the domain. Commonly used for domain verification and SPF records (anti-spam).<br>        NS: If you need to delegate a subdomain to another DNS service provider for resolution, you need to add an NS record. NS records cannot be added for root domains.<br>        CAA: Specify the CA that can issue certificates for this site.<br>        SRV: Identify that a server uses a service. Commonly used for directory management in Microsoft systems.<br>        MX: Specify the recipient mail server.</li><li>ttl: Filter by resolution time. Fuzzy query is not supported.</li>
                     * @return Filters Filter criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows: <li>id: Filter by DNS record ID. Fuzzy query is supported.</li><li>name: Filter by DNS record name. Fuzzy query is supported.</li><li>content: Filter by DNS record content. Fuzzy query is supported.</li><li>type: Filter by DNS record type. Fuzzy query is not supported. Options:<br>        A: Point the domain to an external IPv4 address, such as 8.8.8.8.<br>        AAAA: Point the domain to an external IPv6 address.<br>        CNAME: Point the domain to another domain, which then resolves to the final IP address.<br>        TXT: Identify and describe the domain. Commonly used for domain verification and SPF records (anti-spam).<br>        NS: If you need to delegate a subdomain to another DNS service provider for resolution, you need to add an NS record. NS records cannot be added for root domains.<br>        CAA: Specify the CA that can issue certificates for this site.<br>        SRV: Identify that a server uses a service. Commonly used for directory management in Microsoft systems.<br>        MX: Specify the recipient mail server.</li><li>ttl: Filter by resolution time. Fuzzy query is not supported.</li>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows: <li>id: Filter by DNS record ID. Fuzzy query is supported.</li><li>name: Filter by DNS record name. Fuzzy query is supported.</li><li>content: Filter by DNS record content. Fuzzy query is supported.</li><li>type: Filter by DNS record type. Fuzzy query is not supported. Options:<br>        A: Point the domain to an external IPv4 address, such as 8.8.8.8.<br>        AAAA: Point the domain to an external IPv6 address.<br>        CNAME: Point the domain to another domain, which then resolves to the final IP address.<br>        TXT: Identify and describe the domain. Commonly used for domain verification and SPF records (anti-spam).<br>        NS: If you need to delegate a subdomain to another DNS service provider for resolution, you need to add an NS record. NS records cannot be added for root domains.<br>        CAA: Specify the CA that can issue certificates for this site.<br>        SRV: Identify that a server uses a service. Commonly used for directory management in Microsoft systems.<br>        MX: Specify the recipient mail server.</li><li>ttl: Filter by resolution time. Fuzzy query is not supported.</li>
                     * @param _filters Filter criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows: <li>id: Filter by DNS record ID. Fuzzy query is supported.</li><li>name: Filter by DNS record name. Fuzzy query is supported.</li><li>content: Filter by DNS record content. Fuzzy query is supported.</li><li>type: Filter by DNS record type. Fuzzy query is not supported. Options:<br>        A: Point the domain to an external IPv4 address, such as 8.8.8.8.<br>        AAAA: Point the domain to an external IPv6 address.<br>        CNAME: Point the domain to another domain, which then resolves to the final IP address.<br>        TXT: Identify and describe the domain. Commonly used for domain verification and SPF records (anti-spam).<br>        NS: If you need to delegate a subdomain to another DNS service provider for resolution, you need to add an NS record. NS records cannot be added for root domains.<br>        CAA: Specify the CA that can issue certificates for this site.<br>        SRV: Identify that a server uses a service. Commonly used for directory management in Microsoft systems.<br>        MX: Specify the recipient mail server.</li><li>ttl: Filter by resolution time. Fuzzy query is not supported.</li>
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
                     * 获取Sorting basis. Valid values: <li>content: DNS record content;</li><li>created-on: DNS record creation time;</li><li>name: DNS record name;</li><li>ttl: cache time;</li><li>type: DNS record type.</li>Default sorting order: by the combination of type and name attributes.
                     * @return SortBy Sorting basis. Valid values: <li>content: DNS record content;</li><li>created-on: DNS record creation time;</li><li>name: DNS record name;</li><li>ttl: cache time;</li><li>type: DNS record type.</li>Default sorting order: by the combination of type and name attributes.
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置Sorting basis. Valid values: <li>content: DNS record content;</li><li>created-on: DNS record creation time;</li><li>name: DNS record name;</li><li>ttl: cache time;</li><li>type: DNS record type.</li>Default sorting order: by the combination of type and name attributes.
                     * @param _sortBy Sorting basis. Valid values: <li>content: DNS record content;</li><li>created-on: DNS record creation time;</li><li>name: DNS record name;</li><li>ttl: cache time;</li><li>type: DNS record type.</li>Default sorting order: by the combination of type and name attributes.
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
                     * 获取List sort method. Valid values: <li>asc: ascending sort;</li><li>desc: descending sort.</li> Default value: asc.
                     * @return SortOrder List sort method. Valid values: <li>asc: ascending sort;</li><li>desc: descending sort.</li> Default value: asc.
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置List sort method. Valid values: <li>asc: ascending sort;</li><li>desc: descending sort.</li> Default value: asc.
                     * @param _sortOrder List sort method. Valid values: <li>asc: ascending sort;</li><li>desc: descending sort.</li> Default value: asc.
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
                     * 获取Match mode. Valid values: <li>all: return records that match all query conditions;</li><li>any: return records that match any query condition.</li> Default value: all.
                     * @return Match Match mode. Valid values: <li>all: return records that match all query conditions;</li><li>any: return records that match any query condition.</li> Default value: all.
                     * 
                     */
                    std::string GetMatch() const;

                    /**
                     * 设置Match mode. Valid values: <li>all: return records that match all query conditions;</li><li>any: return records that match any query condition.</li> Default value: all.
                     * @param _match Match mode. Valid values: <li>all: return records that match all query conditions;</li><li>any: return records that match any query condition.</li> Default value: all.
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
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Offset of paginated query. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number limit of paginated query. Default value: 20. Maximum value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows: <li>id: Filter by DNS record ID. Fuzzy query is supported.</li><li>name: Filter by DNS record name. Fuzzy query is supported.</li><li>content: Filter by DNS record content. Fuzzy query is supported.</li><li>type: Filter by DNS record type. Fuzzy query is not supported. Options:<br>        A: Point the domain to an external IPv4 address, such as 8.8.8.8.<br>        AAAA: Point the domain to an external IPv6 address.<br>        CNAME: Point the domain to another domain, which then resolves to the final IP address.<br>        TXT: Identify and describe the domain. Commonly used for domain verification and SPF records (anti-spam).<br>        NS: If you need to delegate a subdomain to another DNS service provider for resolution, you need to add an NS record. NS records cannot be added for root domains.<br>        CAA: Specify the CA that can issue certificates for this site.<br>        SRV: Identify that a server uses a service. Commonly used for directory management in Microsoft systems.<br>        MX: Specify the recipient mail server.</li><li>ttl: Filter by resolution time. Fuzzy query is not supported.</li>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting basis. Valid values: <li>content: DNS record content;</li><li>created-on: DNS record creation time;</li><li>name: DNS record name;</li><li>ttl: cache time;</li><li>type: DNS record type.</li>Default sorting order: by the combination of type and name attributes.
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * List sort method. Valid values: <li>asc: ascending sort;</li><li>desc: descending sort.</li> Default value: asc.
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * Match mode. Valid values: <li>all: return records that match all query conditions;</li><li>any: return records that match any query condition.</li> Default value: all.
                     */
                    std::string m_match;
                    bool m_matchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDNSRECORDSREQUEST_H_
