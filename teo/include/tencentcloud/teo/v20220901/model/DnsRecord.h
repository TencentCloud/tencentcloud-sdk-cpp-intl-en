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
                * DNS record.
                */
                class DnsRecord : public AbstractModel
                {
                public:
                    DnsRecord();
                    ~DnsRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Site ID.<br>Note: ZoneId is for output usage only. It cannot be used as an input parameter in ModifyDnsRecords. If this parameter is input, it will be ignored.
                     * @return ZoneId Site ID.<br>Note: ZoneId is for output usage only. It cannot be used as an input parameter in ModifyDnsRecords. If this parameter is input, it will be ignored.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID.<br>Note: ZoneId is for output usage only. It cannot be used as an input parameter in ModifyDnsRecords. If this parameter is input, it will be ignored.
                     * @param _zoneId Site ID.<br>Note: ZoneId is for output usage only. It cannot be used as an input parameter in ModifyDnsRecords. If this parameter is input, it will be ignored.
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
                     * 获取DNS record ID.
                     * @return RecordId DNS record ID.
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置DNS record ID.
                     * @param _recordId DNS record ID.
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取DNS record name.
                     * @return Name DNS record name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置DNS record name.
                     * @param _name DNS record name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取DNS record type. Valid values:
<li>A: Point the domain name to a public IPv4 address, for example 8.8.8.8;</li>
<li>AAAA: point the domain name to a public IPv6 address;</li>
<li>MX: for email servers. When multiple MX records exist, lower priority means higher preference;</li>
<li>CNAME: Point the domain to another domain, which then resolves the final IP;</li>
<li>TXT: Identifies and describes a domain name, commonly used for domain name verification and SPF records (anti-spam);</li>
<li>NS: If you need to delegate subdomain resolution to another DNS service provider, you need to add an NS record. NS records cannot be added for the root domain;</li>
<li>CAA: specify the CA that can issue certificates for this site;</li>
<li>SRV: identifies that a server used a service, commonly seen in directory management of Microsoft systems.</li>
                     * @return Type DNS record type. Valid values:
<li>A: Point the domain name to a public IPv4 address, for example 8.8.8.8;</li>
<li>AAAA: point the domain name to a public IPv6 address;</li>
<li>MX: for email servers. When multiple MX records exist, lower priority means higher preference;</li>
<li>CNAME: Point the domain to another domain, which then resolves the final IP;</li>
<li>TXT: Identifies and describes a domain name, commonly used for domain name verification and SPF records (anti-spam);</li>
<li>NS: If you need to delegate subdomain resolution to another DNS service provider, you need to add an NS record. NS records cannot be added for the root domain;</li>
<li>CAA: specify the CA that can issue certificates for this site;</li>
<li>SRV: identifies that a server used a service, commonly seen in directory management of Microsoft systems.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置DNS record type. Valid values:
<li>A: Point the domain name to a public IPv4 address, for example 8.8.8.8;</li>
<li>AAAA: point the domain name to a public IPv6 address;</li>
<li>MX: for email servers. When multiple MX records exist, lower priority means higher preference;</li>
<li>CNAME: Point the domain to another domain, which then resolves the final IP;</li>
<li>TXT: Identifies and describes a domain name, commonly used for domain name verification and SPF records (anti-spam);</li>
<li>NS: If you need to delegate subdomain resolution to another DNS service provider, you need to add an NS record. NS records cannot be added for the root domain;</li>
<li>CAA: specify the CA that can issue certificates for this site;</li>
<li>SRV: identifies that a server used a service, commonly seen in directory management of Microsoft systems.</li>
                     * @param _type DNS record type. Valid values:
<li>A: Point the domain name to a public IPv4 address, for example 8.8.8.8;</li>
<li>AAAA: point the domain name to a public IPv6 address;</li>
<li>MX: for email servers. When multiple MX records exist, lower priority means higher preference;</li>
<li>CNAME: Point the domain to another domain, which then resolves the final IP;</li>
<li>TXT: Identifies and describes a domain name, commonly used for domain name verification and SPF records (anti-spam);</li>
<li>NS: If you need to delegate subdomain resolution to another DNS service provider, you need to add an NS record. NS records cannot be added for the root domain;</li>
<li>CAA: specify the CA that can issue certificates for this site;</li>
<li>SRV: identifies that a server used a service, commonly seen in directory management of Microsoft systems.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取DNS record resolution route. If not specified, it defaults to Default, which means the default resolution route and represents that it takes effect in all regions.<br>Route configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.<br>For values, see [Resolution routes and corresponding code enumeration](https://www.tencentcloud.com/document/product/1552/112542?from_cn_redirect=1).
                     * @return Location DNS record resolution route. If not specified, it defaults to Default, which means the default resolution route and represents that it takes effect in all regions.<br>Route configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.<br>For values, see [Resolution routes and corresponding code enumeration](https://www.tencentcloud.com/document/product/1552/112542?from_cn_redirect=1).
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置DNS record resolution route. If not specified, it defaults to Default, which means the default resolution route and represents that it takes effect in all regions.<br>Route configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.<br>For values, see [Resolution routes and corresponding code enumeration](https://www.tencentcloud.com/document/product/1552/112542?from_cn_redirect=1).
                     * @param _location DNS record resolution route. If not specified, it defaults to Default, which means the default resolution route and represents that it takes effect in all regions.<br>Route configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.<br>For values, see [Resolution routes and corresponding code enumeration](https://www.tencentcloud.com/document/product/1552/112542?from_cn_redirect=1).
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取DNS record content. Fill in the corresponding content based on the Type value.
                     * @return Content DNS record content. Fill in the corresponding content based on the Type value.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置DNS record content. Fill in the corresponding content based on the Type value.
                     * @param _content DNS record content. Fill in the corresponding content based on the Type value.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Cache time. Value range: 60–86400. A smaller value means the modification record takes effect faster in each region. Unit: seconds.
                     * @return TTL Cache time. Value range: 60–86400. A smaller value means the modification record takes effect faster in each region. Unit: seconds.
                     * 
                     */
                    int64_t GetTTL() const;

                    /**
                     * 设置Cache time. Value range: 60–86400. A smaller value means the modification record takes effect faster in each region. Unit: seconds.
                     * @param _tTL Cache time. Value range: 60–86400. A smaller value means the modification record takes effect faster in each region. Unit: seconds.
                     * 
                     */
                    void SetTTL(const int64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取DNS record weight. Value range: -1 to 100. -1 means no weight is assigned, and 0 indicates no parsing. Weight configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.
                     * @return Weight DNS record weight. Value range: -1 to 100. -1 means no weight is assigned, and 0 indicates no parsing. Weight configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置DNS record weight. Value range: -1 to 100. -1 means no weight is assigned, and 0 indicates no parsing. Weight configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.
                     * @param _weight DNS record weight. Value range: -1 to 100. -1 means no weight is assigned, and 0 indicates no parsing. Weight configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取MX record priority. Value range: 0–50. A smaller value indicates a higher priority.
                     * @return Priority MX record priority. Value range: 0–50. A smaller value indicates a higher priority.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置MX record priority. Value range: 0–50. A smaller value indicates a higher priority.
                     * @param _priority MX record priority. Value range: 0–50. A smaller value indicates a higher priority.
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取DNS record resolution status. Valid values: <li>enable: effective;</li><li>disable: disabled.</li>Note: Status is for output only. It cannot be used as an input parameter in ModifyDnsRecords and will be ignored if provided.
                     * @return Status DNS record resolution status. Valid values: <li>enable: effective;</li><li>disable: disabled.</li>Note: Status is for output only. It cannot be used as an input parameter in ModifyDnsRecords and will be ignored if provided.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置DNS record resolution status. Valid values: <li>enable: effective;</li><li>disable: disabled.</li>Note: Status is for output only. It cannot be used as an input parameter in ModifyDnsRecords and will be ignored if provided.
                     * @param _status DNS record resolution status. Valid values: <li>enable: effective;</li><li>disable: disabled.</li>Note: Status is for output only. It cannot be used as an input parameter in ModifyDnsRecords and will be ignored if provided.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time.<br>Note: CreatedOn is for output only and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is input, it will be ignored.
                     * @return CreatedOn Creation time.<br>Note: CreatedOn is for output only and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is input, it will be ignored.
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Creation time.<br>Note: CreatedOn is for output only and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is input, it will be ignored.
                     * @param _createdOn Creation time.<br>Note: CreatedOn is for output only and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is input, it will be ignored.
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取Last modified.<br>Note: ModifiedOn is for output only and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is input, it will be ignored.
                     * @return ModifiedOn Last modified.<br>Note: ModifiedOn is for output only and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is input, it will be ignored.
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置Last modified.<br>Note: ModifiedOn is for output only and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is input, it will be ignored.
                     * @param _modifiedOn Last modified.<br>Note: ModifiedOn is for output only and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is input, it will be ignored.
                     * 
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                private:

                    /**
                     * Site ID.<br>Note: ZoneId is for output usage only. It cannot be used as an input parameter in ModifyDnsRecords. If this parameter is input, it will be ignored.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * DNS record ID.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * DNS record name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * DNS record type. Valid values:
<li>A: Point the domain name to a public IPv4 address, for example 8.8.8.8;</li>
<li>AAAA: point the domain name to a public IPv6 address;</li>
<li>MX: for email servers. When multiple MX records exist, lower priority means higher preference;</li>
<li>CNAME: Point the domain to another domain, which then resolves the final IP;</li>
<li>TXT: Identifies and describes a domain name, commonly used for domain name verification and SPF records (anti-spam);</li>
<li>NS: If you need to delegate subdomain resolution to another DNS service provider, you need to add an NS record. NS records cannot be added for the root domain;</li>
<li>CAA: specify the CA that can issue certificates for this site;</li>
<li>SRV: identifies that a server used a service, commonly seen in directory management of Microsoft systems.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * DNS record resolution route. If not specified, it defaults to Default, which means the default resolution route and represents that it takes effect in all regions.<br>Route configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.<br>For values, see [Resolution routes and corresponding code enumeration](https://www.tencentcloud.com/document/product/1552/112542?from_cn_redirect=1).
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * DNS record content. Fill in the corresponding content based on the Type value.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Cache time. Value range: 60–86400. A smaller value means the modification record takes effect faster in each region. Unit: seconds.
                     */
                    int64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * DNS record weight. Value range: -1 to 100. -1 means no weight is assigned, and 0 indicates no parsing. Weight configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * MX record priority. Value range: 0–50. A smaller value indicates a higher priority.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * DNS record resolution status. Valid values: <li>enable: effective;</li><li>disable: disabled.</li>Note: Status is for output only. It cannot be used as an input parameter in ModifyDnsRecords and will be ignored if provided.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time.<br>Note: CreatedOn is for output only and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is input, it will be ignored.
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Last modified.<br>Note: ModifiedOn is for output only and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is input, it will be ignored.
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DNSRECORD_H_
