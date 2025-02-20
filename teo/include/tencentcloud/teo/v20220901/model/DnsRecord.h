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
                     * 获取Zone id.<br>note: zoneid is for output parameter use only and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
                     * @return ZoneId Zone id.<br>note: zoneid is for output parameter use only and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone id.<br>note: zoneid is for output parameter use only and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
                     * @param _zoneId Zone id.<br>note: zoneid is for output parameter use only and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
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
                     * 获取DNS record id.
                     * @return RecordId DNS record id.
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置DNS record id.
                     * @param _recordId DNS record id.
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
                     * 获取DNS record type. valid values are:.
<Li>A: point the domain to a public network ipv4 address, such as 8.8.8.8;</li>.
<Li>AAAA: point the domain to a public network ipv6 address;</li>.
<Li>MX: used for email servers. when there are multiple mx records, the lower the priority, the higher the precedence;</li>.
<Li>CNAME: point the domain to another domain name, which will resolve to the final ip address;</li>.
<Li>TXT: identify and describe the domain, commonly used for domain verification and spf records (anti-spam);</li>.
<Li>NS: if you need to delegate the resolution of a subdomain to another dns service provider, you need to add an ns record. ns records cannot be added to the root domain name;</li>.
<Li>CAA: specifies the ca that can issue certificates for this site;</li>.
<Li>SRV: indicates that a server is using a service, commonly seen in microsoft system directory management.</li>.
                     * @return Type DNS record type. valid values are:.
<Li>A: point the domain to a public network ipv4 address, such as 8.8.8.8;</li>.
<Li>AAAA: point the domain to a public network ipv6 address;</li>.
<Li>MX: used for email servers. when there are multiple mx records, the lower the priority, the higher the precedence;</li>.
<Li>CNAME: point the domain to another domain name, which will resolve to the final ip address;</li>.
<Li>TXT: identify and describe the domain, commonly used for domain verification and spf records (anti-spam);</li>.
<Li>NS: if you need to delegate the resolution of a subdomain to another dns service provider, you need to add an ns record. ns records cannot be added to the root domain name;</li>.
<Li>CAA: specifies the ca that can issue certificates for this site;</li>.
<Li>SRV: indicates that a server is using a service, commonly seen in microsoft system directory management.</li>.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置DNS record type. valid values are:.
<Li>A: point the domain to a public network ipv4 address, such as 8.8.8.8;</li>.
<Li>AAAA: point the domain to a public network ipv6 address;</li>.
<Li>MX: used for email servers. when there are multiple mx records, the lower the priority, the higher the precedence;</li>.
<Li>CNAME: point the domain to another domain name, which will resolve to the final ip address;</li>.
<Li>TXT: identify and describe the domain, commonly used for domain verification and spf records (anti-spam);</li>.
<Li>NS: if you need to delegate the resolution of a subdomain to another dns service provider, you need to add an ns record. ns records cannot be added to the root domain name;</li>.
<Li>CAA: specifies the ca that can issue certificates for this site;</li>.
<Li>SRV: indicates that a server is using a service, commonly seen in microsoft system directory management.</li>.
                     * @param _type DNS record type. valid values are:.
<Li>A: point the domain to a public network ipv4 address, such as 8.8.8.8;</li>.
<Li>AAAA: point the domain to a public network ipv6 address;</li>.
<Li>MX: used for email servers. when there are multiple mx records, the lower the priority, the higher the precedence;</li>.
<Li>CNAME: point the domain to another domain name, which will resolve to the final ip address;</li>.
<Li>TXT: identify and describe the domain, commonly used for domain verification and spf records (anti-spam);</li>.
<Li>NS: if you need to delegate the resolution of a subdomain to another dns service provider, you need to add an ns record. ns records cannot be added to the root domain name;</li>.
<Li>CAA: specifies the ca that can issue certificates for this site;</li>.
<Li>SRV: indicates that a server is using a service, commonly seen in microsoft system directory management.</li>.
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
                     * 获取DNS record resolution route, if not specified, defaults to default, indicating the default resolution route, effective in all regions.<br>resolution route configuration only applies when type (dns record type) is a, aaaa, or cname.<br>for valid values, refer to: [resolution routes and corresponding code enumeration](https://intl.cloud.tencent.com/document/product/1552/112542?from_cn_redirect=1).
                     * @return Location DNS record resolution route, if not specified, defaults to default, indicating the default resolution route, effective in all regions.<br>resolution route configuration only applies when type (dns record type) is a, aaaa, or cname.<br>for valid values, refer to: [resolution routes and corresponding code enumeration](https://intl.cloud.tencent.com/document/product/1552/112542?from_cn_redirect=1).
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置DNS record resolution route, if not specified, defaults to default, indicating the default resolution route, effective in all regions.<br>resolution route configuration only applies when type (dns record type) is a, aaaa, or cname.<br>for valid values, refer to: [resolution routes and corresponding code enumeration](https://intl.cloud.tencent.com/document/product/1552/112542?from_cn_redirect=1).
                     * @param _location DNS record resolution route, if not specified, defaults to default, indicating the default resolution route, effective in all regions.<br>resolution route configuration only applies when type (dns record type) is a, aaaa, or cname.<br>for valid values, refer to: [resolution routes and corresponding code enumeration](https://intl.cloud.tencent.com/document/product/1552/112542?from_cn_redirect=1).
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
                     * 获取DNS record content. fill in the corresponding content based on the type value.
                     * @return Content DNS record content. fill in the corresponding content based on the type value.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置DNS record content. fill in the corresponding content based on the type value.
                     * @param _content DNS record content. fill in the corresponding content based on the type value.
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
                     * 获取Cache time. value range: 60–86400. the smaller the value, the faster the record modification will take effect globally. unit: seconds.
                     * @return TTL Cache time. value range: 60–86400. the smaller the value, the faster the record modification will take effect globally. unit: seconds.
                     * 
                     */
                    int64_t GetTTL() const;

                    /**
                     * 设置Cache time. value range: 60–86400. the smaller the value, the faster the record modification will take effect globally. unit: seconds.
                     * @param _tTL Cache time. value range: 60–86400. the smaller the value, the faster the record modification will take effect globally. unit: seconds.
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
                     * 获取DNS record weight. value range: -1–100. a value of -1 means no weight is assigned, and 0 means no parsing. weight configuration is only applicable when type (dns record type) is a, aaaa, or cname.
                     * @return Weight DNS record weight. value range: -1–100. a value of -1 means no weight is assigned, and 0 means no parsing. weight configuration is only applicable when type (dns record type) is a, aaaa, or cname.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置DNS record weight. value range: -1–100. a value of -1 means no weight is assigned, and 0 means no parsing. weight configuration is only applicable when type (dns record type) is a, aaaa, or cname.
                     * @param _weight DNS record weight. value range: -1–100. a value of -1 means no weight is assigned, and 0 means no parsing. weight configuration is only applicable when type (dns record type) is a, aaaa, or cname.
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
                     * 获取MX record priority. value range: 0–50. the smaller the value, the higher the priority.
                     * @return Priority MX record priority. value range: 0–50. the smaller the value, the higher the priority.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置MX record priority. value range: 0–50. the smaller the value, the higher the priority.
                     * @param _priority MX record priority. value range: 0–50. the smaller the value, the higher the priority.
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
                     * 获取DNS record parsing status. valid values are: <li>enable: takes effect;</li><li>disable: disabled.</li> note: status is only used as an output parameter and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
                     * @return Status DNS record parsing status. valid values are: <li>enable: takes effect;</li><li>disable: disabled.</li> note: status is only used as an output parameter and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置DNS record parsing status. valid values are: <li>enable: takes effect;</li><li>disable: disabled.</li> note: status is only used as an output parameter and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
                     * @param _status DNS record parsing status. valid values are: <li>enable: takes effect;</li><li>disable: disabled.</li> note: status is only used as an output parameter and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
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
                     * 获取Creation time.<br>note: createdon is only used as an output parameter and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
                     * @return CreatedOn Creation time.<br>note: createdon is only used as an output parameter and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Creation time.<br>note: createdon is only used as an output parameter and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
                     * @param _createdOn Creation time.<br>note: createdon is only used as an output parameter and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
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
                     * 获取Modification time.<br>note: modifiedon is for output parameter only and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
                     * @return ModifiedOn Modification time.<br>note: modifiedon is for output parameter only and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置Modification time.<br>note: modifiedon is for output parameter only and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
                     * @param _modifiedOn Modification time.<br>note: modifiedon is for output parameter only and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
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
                     * Zone id.<br>note: zoneid is for output parameter use only and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * DNS record id.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * DNS record name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * DNS record type. valid values are:.
<Li>A: point the domain to a public network ipv4 address, such as 8.8.8.8;</li>.
<Li>AAAA: point the domain to a public network ipv6 address;</li>.
<Li>MX: used for email servers. when there are multiple mx records, the lower the priority, the higher the precedence;</li>.
<Li>CNAME: point the domain to another domain name, which will resolve to the final ip address;</li>.
<Li>TXT: identify and describe the domain, commonly used for domain verification and spf records (anti-spam);</li>.
<Li>NS: if you need to delegate the resolution of a subdomain to another dns service provider, you need to add an ns record. ns records cannot be added to the root domain name;</li>.
<Li>CAA: specifies the ca that can issue certificates for this site;</li>.
<Li>SRV: indicates that a server is using a service, commonly seen in microsoft system directory management.</li>.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * DNS record resolution route, if not specified, defaults to default, indicating the default resolution route, effective in all regions.<br>resolution route configuration only applies when type (dns record type) is a, aaaa, or cname.<br>for valid values, refer to: [resolution routes and corresponding code enumeration](https://intl.cloud.tencent.com/document/product/1552/112542?from_cn_redirect=1).
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * DNS record content. fill in the corresponding content based on the type value.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Cache time. value range: 60–86400. the smaller the value, the faster the record modification will take effect globally. unit: seconds.
                     */
                    int64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * DNS record weight. value range: -1–100. a value of -1 means no weight is assigned, and 0 means no parsing. weight configuration is only applicable when type (dns record type) is a, aaaa, or cname.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * MX record priority. value range: 0–50. the smaller the value, the higher the priority.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * DNS record parsing status. valid values are: <li>enable: takes effect;</li><li>disable: disabled.</li> note: status is only used as an output parameter and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time.<br>note: createdon is only used as an output parameter and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Modification time.<br>note: modifiedon is for output parameter only and cannot be used as an input parameter in modifydnsrecords. if this parameter is passed, it will be ignored.
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DNSRECORD_H_
