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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEDNSRECORDREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEDNSRECORDREQUEST_H_

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
                * CreateDnsRecord request structure.
                */
                class CreateDnsRecordRequest : public AbstractModel
                {
                public:
                    CreateDnsRecordRequest();
                    ~CreateDnsRecordRequest() = default;
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
                     * 获取The DNS record name.If the domain name is in Chinese, Korean, or Japanese, it needs to be converted to Punycode before being entered.
                     * @return Name The DNS record name.If the domain name is in Chinese, Korean, or Japanese, it needs to be converted to Punycode before being entered.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The DNS record name.If the domain name is in Chinese, Korean, or Japanese, it needs to be converted to Punycode before being entered.
                     * @param _name The DNS record name.If the domain name is in Chinese, Korean, or Japanese, it needs to be converted to Punycode before being entered.
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
                     * 获取DNS record types include:

- A:Points the domain to an external IPv4 address, such as 8.8.8.8.
- AAAA: Points the domain to an external IPv6 address.
- MX: Used for mail servers. When multiple MX records exist, the one with the lowest priority value is preferred.
- CNAME: Points the domain to another domain, which then resolves to the final IP address.
- TXT: Provides identification and description for the domain, commonly used for domain verification and SPF records (anti-spam).
- NS: If you need to delegate a subdomain to another DNS service provider, you need to add an NS record. NS records cannot be added to the root domain.
- CAA: Specifies which Certificate Authorities (CAs) are allowed to issue certificates for the site.
- SRV: Indicates that a specific server is using a particular service, commonly used in Microsoft's directory management systems.

Different record types, such as SRV and CAA, have specific requirements for the host record name and record value format. For detailed descriptions and format examples of each record type, please refer to: [Introduction to DNS Record Types](https://www.tencentcloud.com/zh/document/product/1145/54764#2f681022-91ab-4a9e-ac3d-0a6c454d954e).
                     * @return Type DNS record types include:

- A:Points the domain to an external IPv4 address, such as 8.8.8.8.
- AAAA: Points the domain to an external IPv6 address.
- MX: Used for mail servers. When multiple MX records exist, the one with the lowest priority value is preferred.
- CNAME: Points the domain to another domain, which then resolves to the final IP address.
- TXT: Provides identification and description for the domain, commonly used for domain verification and SPF records (anti-spam).
- NS: If you need to delegate a subdomain to another DNS service provider, you need to add an NS record. NS records cannot be added to the root domain.
- CAA: Specifies which Certificate Authorities (CAs) are allowed to issue certificates for the site.
- SRV: Indicates that a specific server is using a particular service, commonly used in Microsoft's directory management systems.

Different record types, such as SRV and CAA, have specific requirements for the host record name and record value format. For detailed descriptions and format examples of each record type, please refer to: [Introduction to DNS Record Types](https://www.tencentcloud.com/zh/document/product/1145/54764#2f681022-91ab-4a9e-ac3d-0a6c454d954e).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置DNS record types include:

- A:Points the domain to an external IPv4 address, such as 8.8.8.8.
- AAAA: Points the domain to an external IPv6 address.
- MX: Used for mail servers. When multiple MX records exist, the one with the lowest priority value is preferred.
- CNAME: Points the domain to another domain, which then resolves to the final IP address.
- TXT: Provides identification and description for the domain, commonly used for domain verification and SPF records (anti-spam).
- NS: If you need to delegate a subdomain to another DNS service provider, you need to add an NS record. NS records cannot be added to the root domain.
- CAA: Specifies which Certificate Authorities (CAs) are allowed to issue certificates for the site.
- SRV: Indicates that a specific server is using a particular service, commonly used in Microsoft's directory management systems.

Different record types, such as SRV and CAA, have specific requirements for the host record name and record value format. For detailed descriptions and format examples of each record type, please refer to: [Introduction to DNS Record Types](https://www.tencentcloud.com/zh/document/product/1145/54764#2f681022-91ab-4a9e-ac3d-0a6c454d954e).
                     * @param _type DNS record types include:

- A:Points the domain to an external IPv4 address, such as 8.8.8.8.
- AAAA: Points the domain to an external IPv6 address.
- MX: Used for mail servers. When multiple MX records exist, the one with the lowest priority value is preferred.
- CNAME: Points the domain to another domain, which then resolves to the final IP address.
- TXT: Provides identification and description for the domain, commonly used for domain verification and SPF records (anti-spam).
- NS: If you need to delegate a subdomain to another DNS service provider, you need to add an NS record. NS records cannot be added to the root domain.
- CAA: Specifies which Certificate Authorities (CAs) are allowed to issue certificates for the site.
- SRV: Indicates that a specific server is using a particular service, commonly used in Microsoft's directory management systems.

Different record types, such as SRV and CAA, have specific requirements for the host record name and record value format. For detailed descriptions and format examples of each record type, please refer to: [Introduction to DNS Record Types](https://www.tencentcloud.com/zh/document/product/1145/54764#2f681022-91ab-4a9e-ac3d-0a6c454d954e).
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
                     * 获取DNS record content should be filled in according to the corresponding Type value. If the domain name is in Chinese, Korean, or Japanese, it needs to be converted to Punycode before being entered.
                     * @return Content DNS record content should be filled in according to the corresponding Type value. If the domain name is in Chinese, Korean, or Japanese, it needs to be converted to Punycode before being entered.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置DNS record content should be filled in according to the corresponding Type value. If the domain name is in Chinese, Korean, or Japanese, it needs to be converted to Punycode before being entered.
                     * @param _content DNS record content should be filled in according to the corresponding Type value. If the domain name is in Chinese, Korean, or Japanese, it needs to be converted to Punycode before being entered.
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
                     * 获取DNS record resolution location, if not specified, default to "Default," which means the default resolution location and is effective for all regions.
- Resolution location configuration is only applicable when the Type (DNS record type) is A, AAAA, or CNAME.
- Resolution location configuration is only available for Standard and Enterprise packages.

For the values, please refer to: [Resolution Lines and Corresponding Codes Enumeration](https://www.tencentcloud.com/zh/document/product/1145/67229).
                     * @return Location DNS record resolution location, if not specified, default to "Default," which means the default resolution location and is effective for all regions.
- Resolution location configuration is only applicable when the Type (DNS record type) is A, AAAA, or CNAME.
- Resolution location configuration is only available for Standard and Enterprise packages.

For the values, please refer to: [Resolution Lines and Corresponding Codes Enumeration](https://www.tencentcloud.com/zh/document/product/1145/67229).
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置DNS record resolution location, if not specified, default to "Default," which means the default resolution location and is effective for all regions.
- Resolution location configuration is only applicable when the Type (DNS record type) is A, AAAA, or CNAME.
- Resolution location configuration is only available for Standard and Enterprise packages.

For the values, please refer to: [Resolution Lines and Corresponding Codes Enumeration](https://www.tencentcloud.com/zh/document/product/1145/67229).
                     * @param _location DNS record resolution location, if not specified, default to "Default," which means the default resolution location and is effective for all regions.
- Resolution location configuration is only applicable when the Type (DNS record type) is A, AAAA, or CNAME.
- Resolution location configuration is only available for Standard and Enterprise packages.

For the values, please refer to: [Resolution Lines and Corresponding Codes Enumeration](https://www.tencentcloud.com/zh/document/product/1145/67229).
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
                     * 获取TTL (in seconds). The smaller the value, the faster the record changes take effect. Default value: 300
                     * @return TTL TTL (in seconds). The smaller the value, the faster the record changes take effect. Default value: 300
                     * 
                     */
                    int64_t GetTTL() const;

                    /**
                     * 设置TTL (in seconds). The smaller the value, the faster the record changes take effect. Default value: 300
                     * @param _tTL TTL (in seconds). The smaller the value, the faster the record changes take effect. Default value: 300
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
                     * 获取DNS record weight can be specified within the range of -1 to 100. Setting the weight to 0 means the record will not be resolved. If not specified, the default value is -1, indicating that no weight is set.

Weight configuration is only applicable when the Type (DNS record type) is A, AAAA, or CNAME.

Note: For the same subdomain, different DNS records on the same resolution line should either all have weights set or none should have weights set.
                     * @return Weight DNS record weight can be specified within the range of -1 to 100. Setting the weight to 0 means the record will not be resolved. If not specified, the default value is -1, indicating that no weight is set.

Weight configuration is only applicable when the Type (DNS record type) is A, AAAA, or CNAME.

Note: For the same subdomain, different DNS records on the same resolution line should either all have weights set or none should have weights set.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置DNS record weight can be specified within the range of -1 to 100. Setting the weight to 0 means the record will not be resolved. If not specified, the default value is -1, indicating that no weight is set.

Weight configuration is only applicable when the Type (DNS record type) is A, AAAA, or CNAME.

Note: For the same subdomain, different DNS records on the same resolution line should either all have weights set or none should have weights set.
                     * @param _weight DNS record weight can be specified within the range of -1 to 100. Setting the weight to 0 means the record will not be resolved. If not specified, the default value is -1, indicating that no weight is set.

Weight configuration is only applicable when the Type (DNS record type) is A, AAAA, or CNAME.

Note: For the same subdomain, different DNS records on the same resolution line should either all have weights set or none should have weights set.
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
                     * 获取The MX record priority parameter is only effective when the Type (DNS record type) is MX. The smaller the value, the higher the priority. Users can specify a value in the range of 0 to 50. If not specified, the default value is 0.
                     * @return Priority The MX record priority parameter is only effective when the Type (DNS record type) is MX. The smaller the value, the higher the priority. Users can specify a value in the range of 0 to 50. If not specified, the default value is 0.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置The MX record priority parameter is only effective when the Type (DNS record type) is MX. The smaller the value, the higher the priority. Users can specify a value in the range of 0 to 50. If not specified, the default value is 0.
                     * @param _priority The MX record priority parameter is only effective when the Type (DNS record type) is MX. The smaller the value, the higher the priority. Users can specify a value in the range of 0 to 50. If not specified, the default value is 0.
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * The site ID of the DNS record.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The DNS record name.If the domain name is in Chinese, Korean, or Japanese, it needs to be converted to Punycode before being entered.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * DNS record types include:

- A:Points the domain to an external IPv4 address, such as 8.8.8.8.
- AAAA: Points the domain to an external IPv6 address.
- MX: Used for mail servers. When multiple MX records exist, the one with the lowest priority value is preferred.
- CNAME: Points the domain to another domain, which then resolves to the final IP address.
- TXT: Provides identification and description for the domain, commonly used for domain verification and SPF records (anti-spam).
- NS: If you need to delegate a subdomain to another DNS service provider, you need to add an NS record. NS records cannot be added to the root domain.
- CAA: Specifies which Certificate Authorities (CAs) are allowed to issue certificates for the site.
- SRV: Indicates that a specific server is using a particular service, commonly used in Microsoft's directory management systems.

Different record types, such as SRV and CAA, have specific requirements for the host record name and record value format. For detailed descriptions and format examples of each record type, please refer to: [Introduction to DNS Record Types](https://www.tencentcloud.com/zh/document/product/1145/54764#2f681022-91ab-4a9e-ac3d-0a6c454d954e).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * DNS record content should be filled in according to the corresponding Type value. If the domain name is in Chinese, Korean, or Japanese, it needs to be converted to Punycode before being entered.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * DNS record resolution location, if not specified, default to "Default," which means the default resolution location and is effective for all regions.
- Resolution location configuration is only applicable when the Type (DNS record type) is A, AAAA, or CNAME.
- Resolution location configuration is only available for Standard and Enterprise packages.

For the values, please refer to: [Resolution Lines and Corresponding Codes Enumeration](https://www.tencentcloud.com/zh/document/product/1145/67229).
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * TTL (in seconds). The smaller the value, the faster the record changes take effect. Default value: 300
                     */
                    int64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * DNS record weight can be specified within the range of -1 to 100. Setting the weight to 0 means the record will not be resolved. If not specified, the default value is -1, indicating that no weight is set.

Weight configuration is only applicable when the Type (DNS record type) is A, AAAA, or CNAME.

Note: For the same subdomain, different DNS records on the same resolution line should either all have weights set or none should have weights set.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * The MX record priority parameter is only effective when the Type (DNS record type) is MX. The smaller the value, the higher the priority. Users can specify a value in the range of 0 to 50. If not specified, the default value is 0.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEDNSRECORDREQUEST_H_
