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
                     * 获取The site ID of the DNS record. All sites’ DNS records will be returned if this field is not specified.
                     * @return ZoneId The site ID of the DNS record. All sites’ DNS records will be returned if this field is not specified.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID of the DNS record. All sites’ DNS records will be returned if this field is not specified.
                     * @param ZoneId The site ID of the DNS record. All sites’ DNS records will be returned if this field is not specified.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Filter criteria. Each filter criteria can have up to 20 entries.
<li>`record-id`:<br>   Filter by <strong>DNS record ID</strong>, such as record-1a8df68z<br>   Type: String<br>Required: No
<li>`record-name`:<br>   Filter by <strong>DNS record name</strong><br>   Type: String<br>Required: No
<li>`record-type`:<br>   Filter by <strong>DNS record type</strong><br>   Type: String<br>Required: No<br>   Values:<br>   `A`: Point a domain name to an IPv4 address, such as 8.8.8.8.<br>   `AAAA`: Point a domain name to an IPv6 address.<br>   `CNAME`: Point a domain name to another domain name that can be resolved to an IP address.<br>   `TXT`: Identify and describe a domain name. It is usually used for domain verification and as SPF records (for anti-spam).<br>   `NS`: If you need to authorize a subdomain name to another DNS service provider for DNS resolution, you need to add an NS record. You cannot add an NS record for a root domain name.<br>   `CAA`: Specify CAs to issue certificates for sites.<br>   `SRV`: Identify a service used by a server. It is commonly used in Microsoft directory management.<br>  `MX`: Specify the mail server for receiving emails.
<li>`mode`:<br>   Filter by <strong>proxy mode</strong><br>   Type: String<br>Required: No<br>   Values:<br>   `dns_only`: Only DNS<br>   `proxied`: Proxied
<li>`ttl`:<br>   Filter by <strong>TTL</strong><br>   Type: String<br>Required: No
                     * @return Filters Filter criteria. Each filter criteria can have up to 20 entries.
<li>`record-id`:<br>   Filter by <strong>DNS record ID</strong>, such as record-1a8df68z<br>   Type: String<br>Required: No
<li>`record-name`:<br>   Filter by <strong>DNS record name</strong><br>   Type: String<br>Required: No
<li>`record-type`:<br>   Filter by <strong>DNS record type</strong><br>   Type: String<br>Required: No<br>   Values:<br>   `A`: Point a domain name to an IPv4 address, such as 8.8.8.8.<br>   `AAAA`: Point a domain name to an IPv6 address.<br>   `CNAME`: Point a domain name to another domain name that can be resolved to an IP address.<br>   `TXT`: Identify and describe a domain name. It is usually used for domain verification and as SPF records (for anti-spam).<br>   `NS`: If you need to authorize a subdomain name to another DNS service provider for DNS resolution, you need to add an NS record. You cannot add an NS record for a root domain name.<br>   `CAA`: Specify CAs to issue certificates for sites.<br>   `SRV`: Identify a service used by a server. It is commonly used in Microsoft directory management.<br>  `MX`: Specify the mail server for receiving emails.
<li>`mode`:<br>   Filter by <strong>proxy mode</strong><br>   Type: String<br>Required: No<br>   Values:<br>   `dns_only`: Only DNS<br>   `proxied`: Proxied
<li>`ttl`:<br>   Filter by <strong>TTL</strong><br>   Type: String<br>Required: No
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. Each filter criteria can have up to 20 entries.
<li>`record-id`:<br>   Filter by <strong>DNS record ID</strong>, such as record-1a8df68z<br>   Type: String<br>Required: No
<li>`record-name`:<br>   Filter by <strong>DNS record name</strong><br>   Type: String<br>Required: No
<li>`record-type`:<br>   Filter by <strong>DNS record type</strong><br>   Type: String<br>Required: No<br>   Values:<br>   `A`: Point a domain name to an IPv4 address, such as 8.8.8.8.<br>   `AAAA`: Point a domain name to an IPv6 address.<br>   `CNAME`: Point a domain name to another domain name that can be resolved to an IP address.<br>   `TXT`: Identify and describe a domain name. It is usually used for domain verification and as SPF records (for anti-spam).<br>   `NS`: If you need to authorize a subdomain name to another DNS service provider for DNS resolution, you need to add an NS record. You cannot add an NS record for a root domain name.<br>   `CAA`: Specify CAs to issue certificates for sites.<br>   `SRV`: Identify a service used by a server. It is commonly used in Microsoft directory management.<br>  `MX`: Specify the mail server for receiving emails.
<li>`mode`:<br>   Filter by <strong>proxy mode</strong><br>   Type: String<br>Required: No<br>   Values:<br>   `dns_only`: Only DNS<br>   `proxied`: Proxied
<li>`ttl`:<br>   Filter by <strong>TTL</strong><br>   Type: String<br>Required: No
                     * @param Filters Filter criteria. Each filter criteria can have up to 20 entries.
<li>`record-id`:<br>   Filter by <strong>DNS record ID</strong>, such as record-1a8df68z<br>   Type: String<br>Required: No
<li>`record-name`:<br>   Filter by <strong>DNS record name</strong><br>   Type: String<br>Required: No
<li>`record-type`:<br>   Filter by <strong>DNS record type</strong><br>   Type: String<br>Required: No<br>   Values:<br>   `A`: Point a domain name to an IPv4 address, such as 8.8.8.8.<br>   `AAAA`: Point a domain name to an IPv6 address.<br>   `CNAME`: Point a domain name to another domain name that can be resolved to an IP address.<br>   `TXT`: Identify and describe a domain name. It is usually used for domain verification and as SPF records (for anti-spam).<br>   `NS`: If you need to authorize a subdomain name to another DNS service provider for DNS resolution, you need to add an NS record. You cannot add an NS record for a root domain name.<br>   `CAA`: Specify CAs to issue certificates for sites.<br>   `SRV`: Identify a service used by a server. It is commonly used in Microsoft directory management.<br>  `MX`: Specify the mail server for receiving emails.
<li>`mode`:<br>   Filter by <strong>proxy mode</strong><br>   Type: String<br>Required: No<br>   Values:<br>   `dns_only`: Only DNS<br>   `proxied`: Proxied
<li>`ttl`:<br>   Filter by <strong>TTL</strong><br>   Type: String<br>Required: No
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The sorting order. Values:
<li>`ASC`: Ascending order</li>
<li>`desc`: Descending order</li> Default value: asc
                     * @return Direction The sorting order. Values:
<li>`ASC`: Ascending order</li>
<li>`desc`: Descending order</li> Default value: asc
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置The sorting order. Values:
<li>`ASC`: Ascending order</li>
<li>`desc`: Descending order</li> Default value: asc
                     * @param Direction The sorting order. Values:
<li>`ASC`: Ascending order</li>
<li>`desc`: Descending order</li> Default value: asc
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取The match mode. Values:
<li>`all`: Return all records that match the specified filter.</li>
<li>`any`: Return any record that matches the specified filter.</li>Default value: all.
                     * @return Match The match mode. Values:
<li>`all`: Return all records that match the specified filter.</li>
<li>`any`: Return any record that matches the specified filter.</li>Default value: all.
                     */
                    std::string GetMatch() const;

                    /**
                     * 设置The match mode. Values:
<li>`all`: Return all records that match the specified filter.</li>
<li>`any`: Return any record that matches the specified filter.</li>Default value: all.
                     * @param Match The match mode. Values:
<li>`all`: Return all records that match the specified filter.</li>
<li>`any`: Return any record that matches the specified filter.</li>Default value: all.
                     */
                    void SetMatch(const std::string& _match);

                    /**
                     * 判断参数 Match 是否已赋值
                     * @return Match 是否已赋值
                     */
                    bool MatchHasBeenSet() const;

                    /**
                     * 获取The paginated query limit. Default value: 20. Maximum value: 1000.
                     * @return Limit The paginated query limit. Default value: 20. Maximum value: 1000.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The paginated query limit. Default value: 20. Maximum value: 1000.
                     * @param Limit The paginated query limit. Default value: 20. Maximum value: 1000.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The page offset. Default value: 0
                     * @return Offset The page offset. Default value: 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The page offset. Default value: 0
                     * @param Offset The page offset. Default value: 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The sorting criteria. Values:
<li>`content`: DNS record content.</li>
<li>`created_on`: Creation time of the DNS record.</li>
<li>`mode`: Proxy mode.</li>
<li>`record-name`: DNS record name.</li>
<li>`ttl`: DNS TTL.</li>
<li>`record-type`: DNS record type.</li>If this field is not specified, the DNS records are sorted based on `record-type` and `recrod-name`.
                     * @return Order The sorting criteria. Values:
<li>`content`: DNS record content.</li>
<li>`created_on`: Creation time of the DNS record.</li>
<li>`mode`: Proxy mode.</li>
<li>`record-name`: DNS record name.</li>
<li>`ttl`: DNS TTL.</li>
<li>`record-type`: DNS record type.</li>If this field is not specified, the DNS records are sorted based on `record-type` and `recrod-name`.
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置The sorting criteria. Values:
<li>`content`: DNS record content.</li>
<li>`created_on`: Creation time of the DNS record.</li>
<li>`mode`: Proxy mode.</li>
<li>`record-name`: DNS record name.</li>
<li>`ttl`: DNS TTL.</li>
<li>`record-type`: DNS record type.</li>If this field is not specified, the DNS records are sorted based on `record-type` and `recrod-name`.
                     * @param Order The sorting criteria. Values:
<li>`content`: DNS record content.</li>
<li>`created_on`: Creation time of the DNS record.</li>
<li>`mode`: Proxy mode.</li>
<li>`record-name`: DNS record name.</li>
<li>`ttl`: DNS TTL.</li>
<li>`record-type`: DNS record type.</li>If this field is not specified, the DNS records are sorted based on `record-type` and `recrod-name`.
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * The site ID of the DNS record. All sites’ DNS records will be returned if this field is not specified.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Filter criteria. Each filter criteria can have up to 20 entries.
<li>`record-id`:<br>   Filter by <strong>DNS record ID</strong>, such as record-1a8df68z<br>   Type: String<br>Required: No
<li>`record-name`:<br>   Filter by <strong>DNS record name</strong><br>   Type: String<br>Required: No
<li>`record-type`:<br>   Filter by <strong>DNS record type</strong><br>   Type: String<br>Required: No<br>   Values:<br>   `A`: Point a domain name to an IPv4 address, such as 8.8.8.8.<br>   `AAAA`: Point a domain name to an IPv6 address.<br>   `CNAME`: Point a domain name to another domain name that can be resolved to an IP address.<br>   `TXT`: Identify and describe a domain name. It is usually used for domain verification and as SPF records (for anti-spam).<br>   `NS`: If you need to authorize a subdomain name to another DNS service provider for DNS resolution, you need to add an NS record. You cannot add an NS record for a root domain name.<br>   `CAA`: Specify CAs to issue certificates for sites.<br>   `SRV`: Identify a service used by a server. It is commonly used in Microsoft directory management.<br>  `MX`: Specify the mail server for receiving emails.
<li>`mode`:<br>   Filter by <strong>proxy mode</strong><br>   Type: String<br>Required: No<br>   Values:<br>   `dns_only`: Only DNS<br>   `proxied`: Proxied
<li>`ttl`:<br>   Filter by <strong>TTL</strong><br>   Type: String<br>Required: No
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The sorting order. Values:
<li>`ASC`: Ascending order</li>
<li>`desc`: Descending order</li> Default value: asc
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * The match mode. Values:
<li>`all`: Return all records that match the specified filter.</li>
<li>`any`: Return any record that matches the specified filter.</li>Default value: all.
                     */
                    std::string m_match;
                    bool m_matchHasBeenSet;

                    /**
                     * The paginated query limit. Default value: 20. Maximum value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The page offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The sorting criteria. Values:
<li>`content`: DNS record content.</li>
<li>`created_on`: Creation time of the DNS record.</li>
<li>`mode`: Proxy mode.</li>
<li>`record-name`: DNS record name.</li>
<li>`ttl`: DNS TTL.</li>
<li>`record-type`: DNS record type.</li>If this field is not specified, the DNS records are sorted based on `record-type` and `recrod-name`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDNSRECORDSREQUEST_H_
