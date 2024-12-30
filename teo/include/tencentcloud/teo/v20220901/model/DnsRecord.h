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
                     * 获取Site ID. 
Note: ZoneId is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
                     * @return ZoneId Site ID. 
Note: ZoneId is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID. 
Note: ZoneId is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
                     * @param _zoneId Site ID. 
Note: ZoneId is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
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
                     * 获取DNS record type, with possible values: <li>A: Points the domain name to an external IPv4 address, such as 8.8.8.8;</li> <li>AAAA: Points the domain name to an external IPv6 address;</li> <li>MX: Used for mail servers. When there are multiple MX records, the lower the priority value, the higher the priority;</li> <li>CNAME: Points the domain name to another domain name, which then resolves to the final IP address;</li> <li>TXT: Identifies and describes the domain name, commonly used for domain verification and SPF records (anti-spam);</li> <li>NS: If you need to delegate the subdomain to another DNS service provider for resolution, you need to add an NS record. NS records cannot be added to the root domain;</li> <li>CAA: Specifies the CA that can issue certificates for this site;</li> <li>SRV: Identifies a server that uses a specific service, commonly used in Microsoft's directory management.</li>
                     * @return Type DNS record type, with possible values: <li>A: Points the domain name to an external IPv4 address, such as 8.8.8.8;</li> <li>AAAA: Points the domain name to an external IPv6 address;</li> <li>MX: Used for mail servers. When there are multiple MX records, the lower the priority value, the higher the priority;</li> <li>CNAME: Points the domain name to another domain name, which then resolves to the final IP address;</li> <li>TXT: Identifies and describes the domain name, commonly used for domain verification and SPF records (anti-spam);</li> <li>NS: If you need to delegate the subdomain to another DNS service provider for resolution, you need to add an NS record. NS records cannot be added to the root domain;</li> <li>CAA: Specifies the CA that can issue certificates for this site;</li> <li>SRV: Identifies a server that uses a specific service, commonly used in Microsoft's directory management.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置DNS record type, with possible values: <li>A: Points the domain name to an external IPv4 address, such as 8.8.8.8;</li> <li>AAAA: Points the domain name to an external IPv6 address;</li> <li>MX: Used for mail servers. When there are multiple MX records, the lower the priority value, the higher the priority;</li> <li>CNAME: Points the domain name to another domain name, which then resolves to the final IP address;</li> <li>TXT: Identifies and describes the domain name, commonly used for domain verification and SPF records (anti-spam);</li> <li>NS: If you need to delegate the subdomain to another DNS service provider for resolution, you need to add an NS record. NS records cannot be added to the root domain;</li> <li>CAA: Specifies the CA that can issue certificates for this site;</li> <li>SRV: Identifies a server that uses a specific service, commonly used in Microsoft's directory management.</li>
                     * @param _type DNS record type, with possible values: <li>A: Points the domain name to an external IPv4 address, such as 8.8.8.8;</li> <li>AAAA: Points the domain name to an external IPv6 address;</li> <li>MX: Used for mail servers. When there are multiple MX records, the lower the priority value, the higher the priority;</li> <li>CNAME: Points the domain name to another domain name, which then resolves to the final IP address;</li> <li>TXT: Identifies and describes the domain name, commonly used for domain verification and SPF records (anti-spam);</li> <li>NS: If you need to delegate the subdomain to another DNS service provider for resolution, you need to add an NS record. NS records cannot be added to the root domain;</li> <li>CAA: Specifies the CA that can issue certificates for this site;</li> <li>SRV: Identifies a server that uses a specific service, commonly used in Microsoft's directory management.</li>
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
                     * 获取DNS record resolution line. If not specified, the default is Default, which means the default resolution line and is effective for all regions. The resolution line configuration is only applicable when Type (DNS record type) is A, AAAA, or CNAME. For values, please refer to: [Resolution Line and Corresponding Code Enumeration](https://www.tencentcloud.com/zh/document/product/1145/67229).
                     * @return Location DNS record resolution line. If not specified, the default is Default, which means the default resolution line and is effective for all regions. The resolution line configuration is only applicable when Type (DNS record type) is A, AAAA, or CNAME. For values, please refer to: [Resolution Line and Corresponding Code Enumeration](https://www.tencentcloud.com/zh/document/product/1145/67229).
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置DNS record resolution line. If not specified, the default is Default, which means the default resolution line and is effective for all regions. The resolution line configuration is only applicable when Type (DNS record type) is A, AAAA, or CNAME. For values, please refer to: [Resolution Line and Corresponding Code Enumeration](https://www.tencentcloud.com/zh/document/product/1145/67229).
                     * @param _location DNS record resolution line. If not specified, the default is Default, which means the default resolution line and is effective for all regions. The resolution line configuration is only applicable when Type (DNS record type) is A, AAAA, or CNAME. For values, please refer to: [Resolution Line and Corresponding Code Enumeration](https://www.tencentcloud.com/zh/document/product/1145/67229).
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
                     * 获取DNS record content. Fill in the corresponding content according to the Type value.
                     * @return Content DNS record content. Fill in the corresponding content according to the Type value.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置DNS record content. Fill in the corresponding content according to the Type value.
                     * @param _content DNS record content. Fill in the corresponding content according to the Type value.
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
                     * 获取Cache time, with a range of 60~86400. The smaller the value, the faster the record modification takes effect in various regions. Unit: seconds.
                     * @return TTL Cache time, with a range of 60~86400. The smaller the value, the faster the record modification takes effect in various regions. Unit: seconds.
                     * 
                     */
                    int64_t GetTTL() const;

                    /**
                     * 设置Cache time, with a range of 60~86400. The smaller the value, the faster the record modification takes effect in various regions. Unit: seconds.
                     * @param _tTL Cache time, with a range of 60~86400. The smaller the value, the faster the record modification takes effect in various regions. Unit: seconds.
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
                     * 获取DNS record weight, with a range of -1~100. A value of -1 means no weight is assigned, and a value of 0 means no resolution. Weight configuration is only applicable when Type (DNS record type) is A, AAAA, or CNAME.
                     * @return Weight DNS record weight, with a range of -1~100. A value of -1 means no weight is assigned, and a value of 0 means no resolution. Weight configuration is only applicable when Type (DNS record type) is A, AAAA, or CNAME.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置DNS record weight, with a range of -1~100. A value of -1 means no weight is assigned, and a value of 0 means no resolution. Weight configuration is only applicable when Type (DNS record type) is A, AAAA, or CNAME.
                     * @param _weight DNS record weight, with a range of -1~100. A value of -1 means no weight is assigned, and a value of 0 means no resolution. Weight configuration is only applicable when Type (DNS record type) is A, AAAA, or CNAME.
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
                     * 获取MX record priority, with a range of 0~50. The smaller the value, the higher the priority.
                     * @return Priority MX record priority, with a range of 0~50. The smaller the value, the higher the priority.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置MX record priority, with a range of 0~50. The smaller the value, the higher the priority.
                     * @param _priority MX record priority, with a range of 0~50. The smaller the value, the higher the priority.
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
                     * 获取DNS record resolution status, with possible values: <li>enable: Effective;</li> <li>disable: Disabled.</li> Note: Status is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
                     * @return Status DNS record resolution status, with possible values: <li>enable: Effective;</li> <li>disable: Disabled.</li> Note: Status is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置DNS record resolution status, with possible values: <li>enable: Effective;</li> <li>disable: Disabled.</li> Note: Status is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
                     * @param _status DNS record resolution status, with possible values: <li>enable: Effective;</li> <li>disable: Disabled.</li> Note: Status is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
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
                     * 获取The creation time.
Note: CreatedOn is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
                     * @return CreatedOn The creation time.
Note: CreatedOn is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置The creation time.
Note: CreatedOn is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
                     * @param _createdOn The creation time.
Note: CreatedOn is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
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
                     * 获取The modification time.
Note: ModifiedOn is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
                     * @return ModifiedOn The modification time.
Note: ModifiedOn is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置The modification time.
Note: ModifiedOn is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
                     * @param _modifiedOn The modification time.
Note: ModifiedOn is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
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
                     * Site ID. 
Note: ZoneId is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
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
                     * DNS record type, with possible values: <li>A: Points the domain name to an external IPv4 address, such as 8.8.8.8;</li> <li>AAAA: Points the domain name to an external IPv6 address;</li> <li>MX: Used for mail servers. When there are multiple MX records, the lower the priority value, the higher the priority;</li> <li>CNAME: Points the domain name to another domain name, which then resolves to the final IP address;</li> <li>TXT: Identifies and describes the domain name, commonly used for domain verification and SPF records (anti-spam);</li> <li>NS: If you need to delegate the subdomain to another DNS service provider for resolution, you need to add an NS record. NS records cannot be added to the root domain;</li> <li>CAA: Specifies the CA that can issue certificates for this site;</li> <li>SRV: Identifies a server that uses a specific service, commonly used in Microsoft's directory management.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * DNS record resolution line. If not specified, the default is Default, which means the default resolution line and is effective for all regions. The resolution line configuration is only applicable when Type (DNS record type) is A, AAAA, or CNAME. For values, please refer to: [Resolution Line and Corresponding Code Enumeration](https://www.tencentcloud.com/zh/document/product/1145/67229).
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * DNS record content. Fill in the corresponding content according to the Type value.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Cache time, with a range of 60~86400. The smaller the value, the faster the record modification takes effect in various regions. Unit: seconds.
                     */
                    int64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * DNS record weight, with a range of -1~100. A value of -1 means no weight is assigned, and a value of 0 means no resolution. Weight configuration is only applicable when Type (DNS record type) is A, AAAA, or CNAME.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * MX record priority, with a range of 0~50. The smaller the value, the higher the priority.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * DNS record resolution status, with possible values: <li>enable: Effective;</li> <li>disable: Disabled.</li> Note: Status is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The creation time.
Note: CreatedOn is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * The modification time.
Note: ModifiedOn is only used as an output parameter and cannot be used as an input parameter in ModifyDnsRecords. If this parameter is passed, it will be ignored.
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DNSRECORD_H_
