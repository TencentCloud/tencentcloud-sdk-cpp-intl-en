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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DNSRECORD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DNSRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * DNS record
                */
                class DnsRecord : public AbstractModel
                {
                public:
                    DnsRecord();
                    ~DnsRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取The record name.
                     * @return DnsRecordName The record name.
                     */
                    std::string GetDnsRecordName() const;

                    /**
                     * 设置The record name.
                     * @param DnsRecordName The record name.
                     */
                    void SetDnsRecordName(const std::string& _dnsRecordName);

                    /**
                     * 判断参数 DnsRecordName 是否已赋值
                     * @return DnsRecordName 是否已赋值
                     */
                    bool DnsRecordNameHasBeenSet() const;

                    /**
                     * 获取The record value.
                     * @return Content The record value.
                     */
                    std::string GetContent() const;

                    /**
                     * 设置The record value.
                     * @param Content The record value.
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取The proxy mode. Values:
<li>`dns_only`: Only DNS</li>
<li>`proxied`: Proxied</li>
                     * @return Mode The proxy mode. Values:
<li>`dns_only`: Only DNS</li>
<li>`proxied`: Proxied</li>
                     */
                    std::string GetMode() const;

                    /**
                     * 设置The proxy mode. Values:
<li>`dns_only`: Only DNS</li>
<li>`proxied`: Proxied</li>
                     * @param Mode The proxy mode. Values:
<li>`dns_only`: Only DNS</li>
<li>`proxied`: Proxied</li>
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取TTL (in seconds). The smaller the value, the faster the record changes take effect.
                     * @return TTL TTL (in seconds). The smaller the value, the faster the record changes take effect.
                     */
                    int64_t GetTTL() const;

                    /**
                     * 设置TTL (in seconds). The smaller the value, the faster the record changes take effect.
                     * @param TTL TTL (in seconds). The smaller the value, the faster the record changes take effect.
                     */
                    void SetTTL(const int64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取The MX record priority. The smaller the value, the higher the priority.
                     * @return Priority The MX record priority. The smaller the value, the higher the priority.
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置The MX record priority. The smaller the value, the higher the priority.
                     * @param Priority The MX record priority. The smaller the value, the higher the priority.
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取The creation time.
                     * @return CreatedOn The creation time.
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置The creation time.
                     * @param CreatedOn The creation time.
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取The modification time.
                     * @return ModifiedOn The modification time.
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置The modification time.
                     * @param ModifiedOn The modification time.
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取The lock status of the domain name.
                     * @return Locked The lock status of the domain name.
                     */
                    bool GetLocked() const;

                    /**
                     * 设置The lock status of the domain name.
                     * @param Locked The lock status of the domain name.
                     */
                    void SetLocked(const bool& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     */
                    bool LockedHasBeenSet() const;

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
                     * 获取The site name.
                     * @return ZoneName The site name.
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置The site name.
                     * @param ZoneName The site name.
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取The DNS record status. Values:
<li>`active`: Activated</li>
<li>`pending`: Deactivated</li>
                     * @return Status The DNS record status. Values:
<li>`active`: Activated</li>
<li>`pending`: Deactivated</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The DNS record status. Values:
<li>`active`: Activated</li>
<li>`pending`: Deactivated</li>
                     * @param Status The DNS record status. Values:
<li>`active`: Activated</li>
<li>`pending`: Deactivated</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The CNAME address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Cname The CNAME address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCname() const;

                    /**
                     * 设置The CNAME address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Cname The CNAME address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取The service used by the domain name. Values:
<li>`lb`: Load balancing</li>
<li>`security`: Security protection</li>
<li>`l4`: L4 proxy</li>
                     * @return DomainStatus The service used by the domain name. Values:
<li>`lb`: Load balancing</li>
<li>`security`: Security protection</li>
<li>`l4`: L4 proxy</li>
                     */
                    std::vector<std::string> GetDomainStatus() const;

                    /**
                     * 设置The service used by the domain name. Values:
<li>`lb`: Load balancing</li>
<li>`security`: Security protection</li>
<li>`l4`: L4 proxy</li>
                     * @param DomainStatus The service used by the domain name. Values:
<li>`lb`: Load balancing</li>
<li>`security`: Security protection</li>
<li>`l4`: L4 proxy</li>
                     */
                    void SetDomainStatus(const std::vector<std::string>& _domainStatus);

                    /**
                     * 判断参数 DomainStatus 是否已赋值
                     * @return DomainStatus 是否已赋值
                     */
                    bool DomainStatusHasBeenSet() const;

                private:

                    /**
                     * The record ID.
                     */
                    std::string m_dnsRecordId;
                    bool m_dnsRecordIdHasBeenSet;

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
                     * The record name.
                     */
                    std::string m_dnsRecordName;
                    bool m_dnsRecordNameHasBeenSet;

                    /**
                     * The record value.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * The proxy mode. Values:
<li>`dns_only`: Only DNS</li>
<li>`proxied`: Proxied</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * TTL (in seconds). The smaller the value, the faster the record changes take effect.
                     */
                    int64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * The MX record priority. The smaller the value, the higher the priority.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * The creation time.
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * The modification time.
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * The lock status of the domain name.
                     */
                    bool m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * The DNS record status. Values:
<li>`active`: Activated</li>
<li>`pending`: Deactivated</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The CNAME address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * The service used by the domain name. Values:
<li>`lb`: Load balancing</li>
<li>`security`: Security protection</li>
<li>`l4`: L4 proxy</li>
                     */
                    std::vector<std::string> m_domainStatus;
                    bool m_domainStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DNSRECORD_H_
