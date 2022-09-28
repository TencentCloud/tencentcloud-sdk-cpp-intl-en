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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDNSRECORDREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDNSRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyDnsRecord request structure.
                */
                class ModifyDnsRecordRequest : public AbstractModel
                {
                public:
                    ModifyDnsRecordRequest();
                    ~ModifyDnsRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The record ID.
                     * @return DnsRecordId The record ID.
                     */
                    std::string GetDnsRecordId() const;

                    /**
                     * 设置The record ID.
                     * @param DnsRecordId The record ID.
                     */
                    void SetDnsRecordId(const std::string& _dnsRecordId);

                    /**
                     * 判断参数 DnsRecordId 是否已赋值
                     * @return DnsRecordId 是否已赋值
                     */
                    bool DnsRecordIdHasBeenSet() const;

                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param ZoneId The site ID.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The DNS record type. Values:
<li>`A`: Point a domain name to an IPv4 address, such as 8.8.8.8.</li>
<li>`AAAA`: Point a domain name to an IPv6 address.</li>
<li>`MX`: It is used for email servers. The record value and priority parameters are provided by email service providers. If there are multiple MX records, the lower the priority value, the higher the priority.</li>
<li>`CNAME`: Point a domain name to another domain name that can be resolved to an IP address.</li>
<li>`TXT`: Identify and describe a domain name. It is usually used for domain verification and as SPF records (for anti-spam).</li>
<li>`NS`: If you need to authorize a subdomain name to another DNS service provider for DNS resolution, you need to add an NS record. You cannot add an NS record for a root domain name.</li>
<li>`CAA`: Specify CAs to issue certificates for sites.</li>
<li>`SRV`: Identify a service used by a server. It is commonly used in Microsoft directory management.</li>
                     * @return DnsRecordType The DNS record type. Values:
<li>`A`: Point a domain name to an IPv4 address, such as 8.8.8.8.</li>
<li>`AAAA`: Point a domain name to an IPv6 address.</li>
<li>`MX`: It is used for email servers. The record value and priority parameters are provided by email service providers. If there are multiple MX records, the lower the priority value, the higher the priority.</li>
<li>`CNAME`: Point a domain name to another domain name that can be resolved to an IP address.</li>
<li>`TXT`: Identify and describe a domain name. It is usually used for domain verification and as SPF records (for anti-spam).</li>
<li>`NS`: If you need to authorize a subdomain name to another DNS service provider for DNS resolution, you need to add an NS record. You cannot add an NS record for a root domain name.</li>
<li>`CAA`: Specify CAs to issue certificates for sites.</li>
<li>`SRV`: Identify a service used by a server. It is commonly used in Microsoft directory management.</li>
                     */
                    std::string GetDnsRecordType() const;

                    /**
                     * 设置The DNS record type. Values:
<li>`A`: Point a domain name to an IPv4 address, such as 8.8.8.8.</li>
<li>`AAAA`: Point a domain name to an IPv6 address.</li>
<li>`MX`: It is used for email servers. The record value and priority parameters are provided by email service providers. If there are multiple MX records, the lower the priority value, the higher the priority.</li>
<li>`CNAME`: Point a domain name to another domain name that can be resolved to an IP address.</li>
<li>`TXT`: Identify and describe a domain name. It is usually used for domain verification and as SPF records (for anti-spam).</li>
<li>`NS`: If you need to authorize a subdomain name to another DNS service provider for DNS resolution, you need to add an NS record. You cannot add an NS record for a root domain name.</li>
<li>`CAA`: Specify CAs to issue certificates for sites.</li>
<li>`SRV`: Identify a service used by a server. It is commonly used in Microsoft directory management.</li>
                     * @param DnsRecordType The DNS record type. Values:
<li>`A`: Point a domain name to an IPv4 address, such as 8.8.8.8.</li>
<li>`AAAA`: Point a domain name to an IPv6 address.</li>
<li>`MX`: It is used for email servers. The record value and priority parameters are provided by email service providers. If there are multiple MX records, the lower the priority value, the higher the priority.</li>
<li>`CNAME`: Point a domain name to another domain name that can be resolved to an IP address.</li>
<li>`TXT`: Identify and describe a domain name. It is usually used for domain verification and as SPF records (for anti-spam).</li>
<li>`NS`: If you need to authorize a subdomain name to another DNS service provider for DNS resolution, you need to add an NS record. You cannot add an NS record for a root domain name.</li>
<li>`CAA`: Specify CAs to issue certificates for sites.</li>
<li>`SRV`: Identify a service used by a server. It is commonly used in Microsoft directory management.</li>
                     */
                    void SetDnsRecordType(const std::string& _dnsRecordType);

                    /**
                     * 判断参数 DnsRecordType 是否已赋值
                     * @return DnsRecordType 是否已赋值
                     */
                    bool DnsRecordTypeHasBeenSet() const;

                    /**
                     * 获取The record name, which consists of the host record and site name. Note that the original configuration will be used if this field is not specified.
                     * @return DnsRecordName The record name, which consists of the host record and site name. Note that the original configuration will be used if this field is not specified.
                     */
                    std::string GetDnsRecordName() const;

                    /**
                     * 设置The record name, which consists of the host record and site name. Note that the original configuration will be used if this field is not specified.
                     * @param DnsRecordName The record name, which consists of the host record and site name. Note that the original configuration will be used if this field is not specified.
                     */
                    void SetDnsRecordName(const std::string& _dnsRecordName);

                    /**
                     * 判断参数 DnsRecordName 是否已赋值
                     * @return DnsRecordName 是否已赋值
                     */
                    bool DnsRecordNameHasBeenSet() const;

                    /**
                     * 获取The record content. Note that the original configuration will be used if this field is not specified.
                     * @return Content The record content. Note that the original configuration will be used if this field is not specified.
                     */
                    std::string GetContent() const;

                    /**
                     * 设置The record content. Note that the original configuration will be used if this field is not specified.
                     * @param Content The record content. Note that the original configuration will be used if this field is not specified.
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取TTL (in seconds). The smaller the value, the faster the record changes take effect. Default value: 300. Note that the original configuration will be used if this field is not specified.
                     * @return TTL TTL (in seconds). The smaller the value, the faster the record changes take effect. Default value: 300. Note that the original configuration will be used if this field is not specified.
                     */
                    int64_t GetTTL() const;

                    /**
                     * 设置TTL (in seconds). The smaller the value, the faster the record changes take effect. Default value: 300. Note that the original configuration will be used if this field is not specified.
                     * @param TTL TTL (in seconds). The smaller the value, the faster the record changes take effect. Default value: 300. Note that the original configuration will be used if this field is not specified.
                     */
                    void SetTTL(const int64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取Specifies a value in the range 1–50 when you make changes to the MX records. A smaller value indicates higher priority. Note that the default value 0 will be used if this field is not specified.
                     * @return Priority Specifies a value in the range 1–50 when you make changes to the MX records. A smaller value indicates higher priority. Note that the default value 0 will be used if this field is not specified.
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Specifies a value in the range 1–50 when you make changes to the MX records. A smaller value indicates higher priority. Note that the default value 0 will be used if this field is not specified.
                     * @param Priority Specifies a value in the range 1–50 when you make changes to the MX records. A smaller value indicates higher priority. Note that the default value 0 will be used if this field is not specified.
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取The proxy mode. Values:
<li>`dns_only`: Only DNS</li>
<li>`proxied`: Proxied</li></li>The original configuration will apply if this field is not specified.
                     * @return Mode The proxy mode. Values:
<li>`dns_only`: Only DNS</li>
<li>`proxied`: Proxied</li></li>The original configuration will apply if this field is not specified.
                     */
                    std::string GetMode() const;

                    /**
                     * 设置The proxy mode. Values:
<li>`dns_only`: Only DNS</li>
<li>`proxied`: Proxied</li></li>The original configuration will apply if this field is not specified.
                     * @param Mode The proxy mode. Values:
<li>`dns_only`: Only DNS</li>
<li>`proxied`: Proxied</li></li>The original configuration will apply if this field is not specified.
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * The record ID.
                     */
                    std::string m_dnsRecordId;
                    bool m_dnsRecordIdHasBeenSet;

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The DNS record type. Values:
<li>`A`: Point a domain name to an IPv4 address, such as 8.8.8.8.</li>
<li>`AAAA`: Point a domain name to an IPv6 address.</li>
<li>`MX`: It is used for email servers. The record value and priority parameters are provided by email service providers. If there are multiple MX records, the lower the priority value, the higher the priority.</li>
<li>`CNAME`: Point a domain name to another domain name that can be resolved to an IP address.</li>
<li>`TXT`: Identify and describe a domain name. It is usually used for domain verification and as SPF records (for anti-spam).</li>
<li>`NS`: If you need to authorize a subdomain name to another DNS service provider for DNS resolution, you need to add an NS record. You cannot add an NS record for a root domain name.</li>
<li>`CAA`: Specify CAs to issue certificates for sites.</li>
<li>`SRV`: Identify a service used by a server. It is commonly used in Microsoft directory management.</li>
                     */
                    std::string m_dnsRecordType;
                    bool m_dnsRecordTypeHasBeenSet;

                    /**
                     * The record name, which consists of the host record and site name. Note that the original configuration will be used if this field is not specified.
                     */
                    std::string m_dnsRecordName;
                    bool m_dnsRecordNameHasBeenSet;

                    /**
                     * The record content. Note that the original configuration will be used if this field is not specified.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * TTL (in seconds). The smaller the value, the faster the record changes take effect. Default value: 300. Note that the original configuration will be used if this field is not specified.
                     */
                    int64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * Specifies a value in the range 1–50 when you make changes to the MX records. A smaller value indicates higher priority. Note that the default value 0 will be used if this field is not specified.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * The proxy mode. Values:
<li>`dns_only`: Only DNS</li>
<li>`proxied`: Proxied</li></li>The original configuration will apply if this field is not specified.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDNSRECORDREQUEST_H_
