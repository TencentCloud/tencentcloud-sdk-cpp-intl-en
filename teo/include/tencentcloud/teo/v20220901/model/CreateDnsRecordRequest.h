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
                     * 获取DNS record name. If it is a Chinese, Korean, or Japanese domain name, it needs to be converted to punycode before input.
                     * @return Name DNS record name. If it is a Chinese, Korean, or Japanese domain name, it needs to be converted to punycode before input.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置DNS record name. If it is a Chinese, Korean, or Japanese domain name, it needs to be converted to punycode before input.
                     * @param _name DNS record name. If it is a Chinese, Korean, or Japanese domain name, it needs to be converted to punycode before input.
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
                     * 获取DNS record type. Valid values: <li>A: point the domain to an external IPv4 address, for example 8.8.8.8;</li><li>AAAA: point the domain to an external IPv6 address;</li><li>MX: for email servers. If multiple MX records exist, a lower priority value indicates a higher priority;</li><li>CNAME: point the domain to another domain, which is then resolved to the final IP address;</li><li>TXT: identify and describe the domain, commonly used for domain verification and SPF records (anti-spam);</li><li>NS: if you need to use another DNS service provider to resolve a subdomain, an NS record needs to be added. An NS record cannot be added for the root domain;</li><li>CAA: specify the CA that can issue certificates for this site;</li><li>SRV: identify that a server uses a service, commonly used for directory management in Microsoft systems.</li>
Different record types, such as SRV and CAA records, have different requirements for the host record name and record value format. For detailed descriptions and format examples of each record type, see [DNS Record Type Introduction](https://www.tencentcloud.com/document/product/1552/90453?from_cn_redirect=1#2f681022-91ab-4a9e-ac3d-0a6c454d954e).
                     * @return Type DNS record type. Valid values: <li>A: point the domain to an external IPv4 address, for example 8.8.8.8;</li><li>AAAA: point the domain to an external IPv6 address;</li><li>MX: for email servers. If multiple MX records exist, a lower priority value indicates a higher priority;</li><li>CNAME: point the domain to another domain, which is then resolved to the final IP address;</li><li>TXT: identify and describe the domain, commonly used for domain verification and SPF records (anti-spam);</li><li>NS: if you need to use another DNS service provider to resolve a subdomain, an NS record needs to be added. An NS record cannot be added for the root domain;</li><li>CAA: specify the CA that can issue certificates for this site;</li><li>SRV: identify that a server uses a service, commonly used for directory management in Microsoft systems.</li>
Different record types, such as SRV and CAA records, have different requirements for the host record name and record value format. For detailed descriptions and format examples of each record type, see [DNS Record Type Introduction](https://www.tencentcloud.com/document/product/1552/90453?from_cn_redirect=1#2f681022-91ab-4a9e-ac3d-0a6c454d954e).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置DNS record type. Valid values: <li>A: point the domain to an external IPv4 address, for example 8.8.8.8;</li><li>AAAA: point the domain to an external IPv6 address;</li><li>MX: for email servers. If multiple MX records exist, a lower priority value indicates a higher priority;</li><li>CNAME: point the domain to another domain, which is then resolved to the final IP address;</li><li>TXT: identify and describe the domain, commonly used for domain verification and SPF records (anti-spam);</li><li>NS: if you need to use another DNS service provider to resolve a subdomain, an NS record needs to be added. An NS record cannot be added for the root domain;</li><li>CAA: specify the CA that can issue certificates for this site;</li><li>SRV: identify that a server uses a service, commonly used for directory management in Microsoft systems.</li>
Different record types, such as SRV and CAA records, have different requirements for the host record name and record value format. For detailed descriptions and format examples of each record type, see [DNS Record Type Introduction](https://www.tencentcloud.com/document/product/1552/90453?from_cn_redirect=1#2f681022-91ab-4a9e-ac3d-0a6c454d954e).
                     * @param _type DNS record type. Valid values: <li>A: point the domain to an external IPv4 address, for example 8.8.8.8;</li><li>AAAA: point the domain to an external IPv6 address;</li><li>MX: for email servers. If multiple MX records exist, a lower priority value indicates a higher priority;</li><li>CNAME: point the domain to another domain, which is then resolved to the final IP address;</li><li>TXT: identify and describe the domain, commonly used for domain verification and SPF records (anti-spam);</li><li>NS: if you need to use another DNS service provider to resolve a subdomain, an NS record needs to be added. An NS record cannot be added for the root domain;</li><li>CAA: specify the CA that can issue certificates for this site;</li><li>SRV: identify that a server uses a service, commonly used for directory management in Microsoft systems.</li>
Different record types, such as SRV and CAA records, have different requirements for the host record name and record value format. For detailed descriptions and format examples of each record type, see [DNS Record Type Introduction](https://www.tencentcloud.com/document/product/1552/90453?from_cn_redirect=1#2f681022-91ab-4a9e-ac3d-0a6c454d954e).
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
                     * 获取DNS record content. Fill in the corresponding content based on the Type value. If it is a Chinese, Korean, or Japanese domain name, convert it to punycode before input.
                     * @return Content DNS record content. Fill in the corresponding content based on the Type value. If it is a Chinese, Korean, or Japanese domain name, convert it to punycode before input.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置DNS record content. Fill in the corresponding content based on the Type value. If it is a Chinese, Korean, or Japanese domain name, convert it to punycode before input.
                     * @param _content DNS record content. Fill in the corresponding content based on the Type value. If it is a Chinese, Korean, or Japanese domain name, convert it to punycode before input.
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
                     * 获取DNS record resolution route. If not specified, it defaults to Default, which means the default parsing route and takes effect in all regions.

-Resolution line configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.
- Route parsing line configuration is applicable only to the standard and enterprise plans. For values, see [Resolution Routes and Corresponding Code Enumeration](https://www.tencentcloud.com/document/product/1552/112542?from_cn_redirect=1).
                     * @return Location DNS record resolution route. If not specified, it defaults to Default, which means the default parsing route and takes effect in all regions.

-Resolution line configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.
- Route parsing line configuration is applicable only to the standard and enterprise plans. For values, see [Resolution Routes and Corresponding Code Enumeration](https://www.tencentcloud.com/document/product/1552/112542?from_cn_redirect=1).
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置DNS record resolution route. If not specified, it defaults to Default, which means the default parsing route and takes effect in all regions.

-Resolution line configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.
- Route parsing line configuration is applicable only to the standard and enterprise plans. For values, see [Resolution Routes and Corresponding Code Enumeration](https://www.tencentcloud.com/document/product/1552/112542?from_cn_redirect=1).
                     * @param _location DNS record resolution route. If not specified, it defaults to Default, which means the default parsing route and takes effect in all regions.

-Resolution line configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.
- Route parsing line configuration is applicable only to the standard and enterprise plans. For values, see [Resolution Routes and Corresponding Code Enumeration](https://www.tencentcloud.com/document/product/1552/112542?from_cn_redirect=1).
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
                     * 获取Cache time. You can specify a range of 60–86400. A smaller value means modification records take effect faster in each region. Default value: 300. Unit: seconds.
                     * @return TTL Cache time. You can specify a range of 60–86400. A smaller value means modification records take effect faster in each region. Default value: 300. Unit: seconds.
                     * 
                     */
                    int64_t GetTTL() const;

                    /**
                     * 设置Cache time. You can specify a range of 60–86400. A smaller value means modification records take effect faster in each region. Default value: 300. Unit: seconds.
                     * @param _tTL Cache time. You can specify a range of 60–86400. A smaller value means modification records take effect faster in each region. Default value: 300. Unit: seconds.
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
                     * 获取DNS record weight. Users can specify a value range of -1 to 100. When set to 0, it means no parsing. If not specified, it defaults to -1, indicating no weight is set. Weight configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.<br>Note: For different DNS records under the same subdomain and resolution route, set weight for all of them simultaneously or leave all of them unset.
                     * @return Weight DNS record weight. Users can specify a value range of -1 to 100. When set to 0, it means no parsing. If not specified, it defaults to -1, indicating no weight is set. Weight configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.<br>Note: For different DNS records under the same subdomain and resolution route, set weight for all of them simultaneously or leave all of them unset.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置DNS record weight. Users can specify a value range of -1 to 100. When set to 0, it means no parsing. If not specified, it defaults to -1, indicating no weight is set. Weight configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.<br>Note: For different DNS records under the same subdomain and resolution route, set weight for all of them simultaneously or leave all of them unset.
                     * @param _weight DNS record weight. Users can specify a value range of -1 to 100. When set to 0, it means no parsing. If not specified, it defaults to -1, indicating no weight is set. Weight configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.<br>Note: For different DNS records under the same subdomain and resolution route, set weight for all of them simultaneously or leave all of them unset.
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
                     * 获取MX record priority. This parameter is valid only when Type (DNS record type) is MX. A smaller value indicates higher priority. You can specify a value from 0 to 50. If not specified, the default is 0.
                     * @return Priority MX record priority. This parameter is valid only when Type (DNS record type) is MX. A smaller value indicates higher priority. You can specify a value from 0 to 50. If not specified, the default is 0.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置MX record priority. This parameter is valid only when Type (DNS record type) is MX. A smaller value indicates higher priority. You can specify a value from 0 to 50. If not specified, the default is 0.
                     * @param _priority MX record priority. This parameter is valid only when Type (DNS record type) is MX. A smaller value indicates higher priority. You can specify a value from 0 to 50. If not specified, the default is 0.
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
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * DNS record name. If it is a Chinese, Korean, or Japanese domain name, it needs to be converted to punycode before input.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * DNS record type. Valid values: <li>A: point the domain to an external IPv4 address, for example 8.8.8.8;</li><li>AAAA: point the domain to an external IPv6 address;</li><li>MX: for email servers. If multiple MX records exist, a lower priority value indicates a higher priority;</li><li>CNAME: point the domain to another domain, which is then resolved to the final IP address;</li><li>TXT: identify and describe the domain, commonly used for domain verification and SPF records (anti-spam);</li><li>NS: if you need to use another DNS service provider to resolve a subdomain, an NS record needs to be added. An NS record cannot be added for the root domain;</li><li>CAA: specify the CA that can issue certificates for this site;</li><li>SRV: identify that a server uses a service, commonly used for directory management in Microsoft systems.</li>
Different record types, such as SRV and CAA records, have different requirements for the host record name and record value format. For detailed descriptions and format examples of each record type, see [DNS Record Type Introduction](https://www.tencentcloud.com/document/product/1552/90453?from_cn_redirect=1#2f681022-91ab-4a9e-ac3d-0a6c454d954e).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * DNS record content. Fill in the corresponding content based on the Type value. If it is a Chinese, Korean, or Japanese domain name, convert it to punycode before input.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * DNS record resolution route. If not specified, it defaults to Default, which means the default parsing route and takes effect in all regions.

-Resolution line configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.
- Route parsing line configuration is applicable only to the standard and enterprise plans. For values, see [Resolution Routes and Corresponding Code Enumeration](https://www.tencentcloud.com/document/product/1552/112542?from_cn_redirect=1).
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Cache time. You can specify a range of 60–86400. A smaller value means modification records take effect faster in each region. Default value: 300. Unit: seconds.
                     */
                    int64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * DNS record weight. Users can specify a value range of -1 to 100. When set to 0, it means no parsing. If not specified, it defaults to -1, indicating no weight is set. Weight configuration is applicable only when Type (DNS record type) is A, AAAA, or CNAME.<br>Note: For different DNS records under the same subdomain and resolution route, set weight for all of them simultaneously or leave all of them unset.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * MX record priority. This parameter is valid only when Type (DNS record type) is MX. A smaller value indicates higher priority. You can specify a value from 0 to 50. If not specified, the default is 0.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEDNSRECORDREQUEST_H_
