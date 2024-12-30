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
                     * 获取The site ID of the DNS record.
                     * @return ZoneId The site ID of the DNS record.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID of the DNS record.
                     * @param _zoneId The site ID of the DNS record.
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
                     * 获取The upper limit of Filters.Values is 20. The detailed filtering conditions are as follows: <li>id: Filter by DNS record ID, supports fuzzy query;</li><li>name: Filter by DNS record name, supports fuzzy query;</li><li>content: Filter by DNS record content, supports fuzzy query;</li><li>type: Filter by DNS record type, does not support fuzzy query. Options:<br> A: Point the domain name to an external IPv4 address, such as 8.8.8.8;<br> AAAA: Point the domain name to an external IPv6 address;<br> CNAME: Point the domain name to another domain name, which then resolves to the final IP address;<br> TXT: Identify and describe the domain name, often used for domain verification and SPF records (anti-spam);<br> NS: If you need to delegate subdomain resolution to another DNS service provider, you need to add an NS record. Root domains cannot add NS records;<br> CAA: Specify the CA that can issue certificates for this site;<br> SRV: Identify a server using a specific service, commonly used in Microsoft's directory management;<br> MX: Specify the recipient's mail server.</li><li>ttl: Filter by the time-to-live (TTL) of the record, does not support fuzzy query.</li>
                     * @return Filters The upper limit of Filters.Values is 20. The detailed filtering conditions are as follows: <li>id: Filter by DNS record ID, supports fuzzy query;</li><li>name: Filter by DNS record name, supports fuzzy query;</li><li>content: Filter by DNS record content, supports fuzzy query;</li><li>type: Filter by DNS record type, does not support fuzzy query. Options:<br> A: Point the domain name to an external IPv4 address, such as 8.8.8.8;<br> AAAA: Point the domain name to an external IPv6 address;<br> CNAME: Point the domain name to another domain name, which then resolves to the final IP address;<br> TXT: Identify and describe the domain name, often used for domain verification and SPF records (anti-spam);<br> NS: If you need to delegate subdomain resolution to another DNS service provider, you need to add an NS record. Root domains cannot add NS records;<br> CAA: Specify the CA that can issue certificates for this site;<br> SRV: Identify a server using a specific service, commonly used in Microsoft's directory management;<br> MX: Specify the recipient's mail server.</li><li>ttl: Filter by the time-to-live (TTL) of the record, does not support fuzzy query.</li>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置The upper limit of Filters.Values is 20. The detailed filtering conditions are as follows: <li>id: Filter by DNS record ID, supports fuzzy query;</li><li>name: Filter by DNS record name, supports fuzzy query;</li><li>content: Filter by DNS record content, supports fuzzy query;</li><li>type: Filter by DNS record type, does not support fuzzy query. Options:<br> A: Point the domain name to an external IPv4 address, such as 8.8.8.8;<br> AAAA: Point the domain name to an external IPv6 address;<br> CNAME: Point the domain name to another domain name, which then resolves to the final IP address;<br> TXT: Identify and describe the domain name, often used for domain verification and SPF records (anti-spam);<br> NS: If you need to delegate subdomain resolution to another DNS service provider, you need to add an NS record. Root domains cannot add NS records;<br> CAA: Specify the CA that can issue certificates for this site;<br> SRV: Identify a server using a specific service, commonly used in Microsoft's directory management;<br> MX: Specify the recipient's mail server.</li><li>ttl: Filter by the time-to-live (TTL) of the record, does not support fuzzy query.</li>
                     * @param _filters The upper limit of Filters.Values is 20. The detailed filtering conditions are as follows: <li>id: Filter by DNS record ID, supports fuzzy query;</li><li>name: Filter by DNS record name, supports fuzzy query;</li><li>content: Filter by DNS record content, supports fuzzy query;</li><li>type: Filter by DNS record type, does not support fuzzy query. Options:<br> A: Point the domain name to an external IPv4 address, such as 8.8.8.8;<br> AAAA: Point the domain name to an external IPv6 address;<br> CNAME: Point the domain name to another domain name, which then resolves to the final IP address;<br> TXT: Identify and describe the domain name, often used for domain verification and SPF records (anti-spam);<br> NS: If you need to delegate subdomain resolution to another DNS service provider, you need to add an NS record. Root domains cannot add NS records;<br> CAA: Specify the CA that can issue certificates for this site;<br> SRV: Identify a server using a specific service, commonly used in Microsoft's directory management;<br> MX: Specify the recipient's mail server.</li><li>ttl: Filter by the time-to-live (TTL) of the record, does not support fuzzy query.</li>
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
                     * 获取Sort criteria, with possible values:
<li>content: DNS record content;</li>
<li>created-on: DNS record creation time;</li>
<li>name: DNS record name;</li>
<li>ttl: Time-to-live (TTL);</li>
<li>type: DNS record type.</li>
The default sorting is based on a combination of type and name attributes.
                     * @return SortBy Sort criteria, with possible values:
<li>content: DNS record content;</li>
<li>created-on: DNS record creation time;</li>
<li>name: DNS record name;</li>
<li>ttl: Time-to-live (TTL);</li>
<li>type: DNS record type.</li>
The default sorting is based on a combination of type and name attributes.
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置Sort criteria, with possible values:
<li>content: DNS record content;</li>
<li>created-on: DNS record creation time;</li>
<li>name: DNS record name;</li>
<li>ttl: Time-to-live (TTL);</li>
<li>type: DNS record type.</li>
The default sorting is based on a combination of type and name attributes.
                     * @param _sortBy Sort criteria, with possible values:
<li>content: DNS record content;</li>
<li>created-on: DNS record creation time;</li>
<li>name: DNS record name;</li>
<li>ttl: Time-to-live (TTL);</li>
<li>type: DNS record type.</li>
The default sorting is based on a combination of type and name attributes.
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
                     * 获取List sorting order, with possible values:
<li>asc: Ascending order;</li>
<li>desc: Descending order.</li>
The default value is asc.
                     * @return SortOrder List sorting order, with possible values:
<li>asc: Ascending order;</li>
<li>desc: Descending order.</li>
The default value is asc.
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置List sorting order, with possible values:
<li>asc: Ascending order;</li>
<li>desc: Descending order.</li>
The default value is asc.
                     * @param _sortOrder List sorting order, with possible values:
<li>asc: Ascending order;</li>
<li>desc: Descending order.</li>
The default value is asc.
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
                     * 获取The match mode. Values:
<li>`all`: Return all records that match the specified filter.</li>
<li>`any`: Return any record that matches the specified filter.</li>Default value: all.
                     * @return Match The match mode. Values:
<li>`all`: Return all records that match the specified filter.</li>
<li>`any`: Return any record that matches the specified filter.</li>Default value: all.
                     * 
                     */
                    std::string GetMatch() const;

                    /**
                     * 设置The match mode. Values:
<li>`all`: Return all records that match the specified filter.</li>
<li>`any`: Return any record that matches the specified filter.</li>Default value: all.
                     * @param _match The match mode. Values:
<li>`all`: Return all records that match the specified filter.</li>
<li>`any`: Return any record that matches the specified filter.</li>Default value: all.
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
                     * The site ID of the DNS record.
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
                     * The upper limit of Filters.Values is 20. The detailed filtering conditions are as follows: <li>id: Filter by DNS record ID, supports fuzzy query;</li><li>name: Filter by DNS record name, supports fuzzy query;</li><li>content: Filter by DNS record content, supports fuzzy query;</li><li>type: Filter by DNS record type, does not support fuzzy query. Options:<br> A: Point the domain name to an external IPv4 address, such as 8.8.8.8;<br> AAAA: Point the domain name to an external IPv6 address;<br> CNAME: Point the domain name to another domain name, which then resolves to the final IP address;<br> TXT: Identify and describe the domain name, often used for domain verification and SPF records (anti-spam);<br> NS: If you need to delegate subdomain resolution to another DNS service provider, you need to add an NS record. Root domains cannot add NS records;<br> CAA: Specify the CA that can issue certificates for this site;<br> SRV: Identify a server using a specific service, commonly used in Microsoft's directory management;<br> MX: Specify the recipient's mail server.</li><li>ttl: Filter by the time-to-live (TTL) of the record, does not support fuzzy query.</li>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sort criteria, with possible values:
<li>content: DNS record content;</li>
<li>created-on: DNS record creation time;</li>
<li>name: DNS record name;</li>
<li>ttl: Time-to-live (TTL);</li>
<li>type: DNS record type.</li>
The default sorting is based on a combination of type and name attributes.
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * List sorting order, with possible values:
<li>asc: Ascending order;</li>
<li>desc: Descending order.</li>
The default value is asc.
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * The match mode. Values:
<li>`all`: Return all records that match the specified filter.</li>
<li>`any`: Return any record that matches the specified filter.</li>Default value: all.
                     */
                    std::string m_match;
                    bool m_matchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDNSRECORDSREQUEST_H_
