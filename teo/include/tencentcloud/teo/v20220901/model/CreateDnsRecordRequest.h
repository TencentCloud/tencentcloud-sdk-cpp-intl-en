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
                     * 获取Zone id.
                     * @return ZoneId Zone id.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone id.
                     * @param _zoneId Zone id.
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
                     * 获取DNS record name. if the domain name is in chinese, korean, or japanese, it needs to be converted to punycode before input.
                     * @return Name DNS record name. if the domain name is in chinese, korean, or japanese, it needs to be converted to punycode before input.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置DNS record name. if the domain name is in chinese, korean, or japanese, it needs to be converted to punycode before input.
                     * @param _name DNS record name. if the domain name is in chinese, korean, or japanese, it needs to be converted to punycode before input.
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
                     * 获取DNS record type. valid values are: <li>a: points the domain name to an external ipv4 address, such as 8.8.8.8;</li><li>aaaa: points the domain name to an external ipv6 address;</li><li>mx: used for email servers. when there are multiple mx records, the lower the priority value, the higher the priority;</li><li>cname: points the domain name to another domain name, which then resolves to the final ip address;</li><li>txt: identifies and describes the domain name, commonly used for domain verification and spf records (anti-spam);</li><li>ns: if you need to delegate the subdomain to another dns service provider for resolution, you need to add an ns record. the root domain cannot add ns records;</li><li>caa: specifies the ca that can issue certificates for this site;</li><li>srv: identifies a server using a service, commonly used in microsoft's directory management.</li>.
Different record types, such as srv and caa records, have different requirements for host record names and record value formats. for detailed descriptions and format examples of each record type, please refer to: [introduction to dns record types](https://intl.cloud.tencent.com/document/product/1552/90453?from_cn_redirect=1#2f681022-91ab-4a9e-ac3d-0a6c454d954e).
                     * @return Type DNS record type. valid values are: <li>a: points the domain name to an external ipv4 address, such as 8.8.8.8;</li><li>aaaa: points the domain name to an external ipv6 address;</li><li>mx: used for email servers. when there are multiple mx records, the lower the priority value, the higher the priority;</li><li>cname: points the domain name to another domain name, which then resolves to the final ip address;</li><li>txt: identifies and describes the domain name, commonly used for domain verification and spf records (anti-spam);</li><li>ns: if you need to delegate the subdomain to another dns service provider for resolution, you need to add an ns record. the root domain cannot add ns records;</li><li>caa: specifies the ca that can issue certificates for this site;</li><li>srv: identifies a server using a service, commonly used in microsoft's directory management.</li>.
Different record types, such as srv and caa records, have different requirements for host record names and record value formats. for detailed descriptions and format examples of each record type, please refer to: [introduction to dns record types](https://intl.cloud.tencent.com/document/product/1552/90453?from_cn_redirect=1#2f681022-91ab-4a9e-ac3d-0a6c454d954e).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置DNS record type. valid values are: <li>a: points the domain name to an external ipv4 address, such as 8.8.8.8;</li><li>aaaa: points the domain name to an external ipv6 address;</li><li>mx: used for email servers. when there are multiple mx records, the lower the priority value, the higher the priority;</li><li>cname: points the domain name to another domain name, which then resolves to the final ip address;</li><li>txt: identifies and describes the domain name, commonly used for domain verification and spf records (anti-spam);</li><li>ns: if you need to delegate the subdomain to another dns service provider for resolution, you need to add an ns record. the root domain cannot add ns records;</li><li>caa: specifies the ca that can issue certificates for this site;</li><li>srv: identifies a server using a service, commonly used in microsoft's directory management.</li>.
Different record types, such as srv and caa records, have different requirements for host record names and record value formats. for detailed descriptions and format examples of each record type, please refer to: [introduction to dns record types](https://intl.cloud.tencent.com/document/product/1552/90453?from_cn_redirect=1#2f681022-91ab-4a9e-ac3d-0a6c454d954e).
                     * @param _type DNS record type. valid values are: <li>a: points the domain name to an external ipv4 address, such as 8.8.8.8;</li><li>aaaa: points the domain name to an external ipv6 address;</li><li>mx: used for email servers. when there are multiple mx records, the lower the priority value, the higher the priority;</li><li>cname: points the domain name to another domain name, which then resolves to the final ip address;</li><li>txt: identifies and describes the domain name, commonly used for domain verification and spf records (anti-spam);</li><li>ns: if you need to delegate the subdomain to another dns service provider for resolution, you need to add an ns record. the root domain cannot add ns records;</li><li>caa: specifies the ca that can issue certificates for this site;</li><li>srv: identifies a server using a service, commonly used in microsoft's directory management.</li>.
Different record types, such as srv and caa records, have different requirements for host record names and record value formats. for detailed descriptions and format examples of each record type, please refer to: [introduction to dns record types](https://intl.cloud.tencent.com/document/product/1552/90453?from_cn_redirect=1#2f681022-91ab-4a9e-ac3d-0a6c454d954e).
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
                     * 获取DNS record content. fill in the corresponding content according to the type value. if the domain name is in chinese, korean, or japanese, it needs to be converted to punycode before input.
                     * @return Content DNS record content. fill in the corresponding content according to the type value. if the domain name is in chinese, korean, or japanese, it needs to be converted to punycode before input.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置DNS record content. fill in the corresponding content according to the type value. if the domain name is in chinese, korean, or japanese, it needs to be converted to punycode before input.
                     * @param _content DNS record content. fill in the corresponding content according to the type value. if the domain name is in chinese, korean, or japanese, it needs to be converted to punycode before input.
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
                     * 获取DNS record resolution route. if not specified, the default is default, which means the default resolution route and is effective in all regions.

- resolution route configuration is only applicable when type (dns record type) is a, aaaa, or cname.
- resolution route configuration is only applicable to standard version and enterprise edition packages. for valid values, please refer to: [resolution routes and corresponding code enumeration](https://intl.cloud.tencent.com/document/product/1552/112542?from_cn_redirect=1).
                     * @return Location DNS record resolution route. if not specified, the default is default, which means the default resolution route and is effective in all regions.

- resolution route configuration is only applicable when type (dns record type) is a, aaaa, or cname.
- resolution route configuration is only applicable to standard version and enterprise edition packages. for valid values, please refer to: [resolution routes and corresponding code enumeration](https://intl.cloud.tencent.com/document/product/1552/112542?from_cn_redirect=1).
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置DNS record resolution route. if not specified, the default is default, which means the default resolution route and is effective in all regions.

- resolution route configuration is only applicable when type (dns record type) is a, aaaa, or cname.
- resolution route configuration is only applicable to standard version and enterprise edition packages. for valid values, please refer to: [resolution routes and corresponding code enumeration](https://intl.cloud.tencent.com/document/product/1552/112542?from_cn_redirect=1).
                     * @param _location DNS record resolution route. if not specified, the default is default, which means the default resolution route and is effective in all regions.

- resolution route configuration is only applicable when type (dns record type) is a, aaaa, or cname.
- resolution route configuration is only applicable to standard version and enterprise edition packages. for valid values, please refer to: [resolution routes and corresponding code enumeration](https://intl.cloud.tencent.com/document/product/1552/112542?from_cn_redirect=1).
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
                     * 获取Cache time. users can specify a value range of 60-86400. the smaller the value, the faster the modification records will take effect in all regions. default value: 300. unit: seconds.
                     * @return TTL Cache time. users can specify a value range of 60-86400. the smaller the value, the faster the modification records will take effect in all regions. default value: 300. unit: seconds.
                     * 
                     */
                    int64_t GetTTL() const;

                    /**
                     * 设置Cache time. users can specify a value range of 60-86400. the smaller the value, the faster the modification records will take effect in all regions. default value: 300. unit: seconds.
                     * @param _tTL Cache time. users can specify a value range of 60-86400. the smaller the value, the faster the modification records will take effect in all regions. default value: 300. unit: seconds.
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
                     * 获取DNS record weight. users can specify a value range of -1 to 100. a value of 0 means no resolution. if not specified, the default is -1, which means no weight is set. weight configuration is only applicable when type (dns record type) is a, aaaa, or cname.<br>note: for the same subdomain, different dns records with the same resolution route should either all have weights set or none have weights set.
                     * @return Weight DNS record weight. users can specify a value range of -1 to 100. a value of 0 means no resolution. if not specified, the default is -1, which means no weight is set. weight configuration is only applicable when type (dns record type) is a, aaaa, or cname.<br>note: for the same subdomain, different dns records with the same resolution route should either all have weights set or none have weights set.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置DNS record weight. users can specify a value range of -1 to 100. a value of 0 means no resolution. if not specified, the default is -1, which means no weight is set. weight configuration is only applicable when type (dns record type) is a, aaaa, or cname.<br>note: for the same subdomain, different dns records with the same resolution route should either all have weights set or none have weights set.
                     * @param _weight DNS record weight. users can specify a value range of -1 to 100. a value of 0 means no resolution. if not specified, the default is -1, which means no weight is set. weight configuration is only applicable when type (dns record type) is a, aaaa, or cname.<br>note: for the same subdomain, different dns records with the same resolution route should either all have weights set or none have weights set.
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
                     * 获取MX record priority, which takes effect only when type (dns record type) is mx. the smaller the value, the higher the priority. users can specify a value range of 0–50. the default value is 0 if not specified.
                     * @return Priority MX record priority, which takes effect only when type (dns record type) is mx. the smaller the value, the higher the priority. users can specify a value range of 0–50. the default value is 0 if not specified.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置MX record priority, which takes effect only when type (dns record type) is mx. the smaller the value, the higher the priority. users can specify a value range of 0–50. the default value is 0 if not specified.
                     * @param _priority MX record priority, which takes effect only when type (dns record type) is mx. the smaller the value, the higher the priority. users can specify a value range of 0–50. the default value is 0 if not specified.
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
                     * Zone id.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * DNS record name. if the domain name is in chinese, korean, or japanese, it needs to be converted to punycode before input.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * DNS record type. valid values are: <li>a: points the domain name to an external ipv4 address, such as 8.8.8.8;</li><li>aaaa: points the domain name to an external ipv6 address;</li><li>mx: used for email servers. when there are multiple mx records, the lower the priority value, the higher the priority;</li><li>cname: points the domain name to another domain name, which then resolves to the final ip address;</li><li>txt: identifies and describes the domain name, commonly used for domain verification and spf records (anti-spam);</li><li>ns: if you need to delegate the subdomain to another dns service provider for resolution, you need to add an ns record. the root domain cannot add ns records;</li><li>caa: specifies the ca that can issue certificates for this site;</li><li>srv: identifies a server using a service, commonly used in microsoft's directory management.</li>.
Different record types, such as srv and caa records, have different requirements for host record names and record value formats. for detailed descriptions and format examples of each record type, please refer to: [introduction to dns record types](https://intl.cloud.tencent.com/document/product/1552/90453?from_cn_redirect=1#2f681022-91ab-4a9e-ac3d-0a6c454d954e).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * DNS record content. fill in the corresponding content according to the type value. if the domain name is in chinese, korean, or japanese, it needs to be converted to punycode before input.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * DNS record resolution route. if not specified, the default is default, which means the default resolution route and is effective in all regions.

- resolution route configuration is only applicable when type (dns record type) is a, aaaa, or cname.
- resolution route configuration is only applicable to standard version and enterprise edition packages. for valid values, please refer to: [resolution routes and corresponding code enumeration](https://intl.cloud.tencent.com/document/product/1552/112542?from_cn_redirect=1).
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Cache time. users can specify a value range of 60-86400. the smaller the value, the faster the modification records will take effect in all regions. default value: 300. unit: seconds.
                     */
                    int64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * DNS record weight. users can specify a value range of -1 to 100. a value of 0 means no resolution. if not specified, the default is -1, which means no weight is set. weight configuration is only applicable when type (dns record type) is a, aaaa, or cname.<br>note: for the same subdomain, different dns records with the same resolution route should either all have weights set or none have weights set.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * MX record priority, which takes effect only when type (dns record type) is mx. the smaller the value, the higher the priority. users can specify a value range of 0–50. the default value is 0 if not specified.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEDNSRECORDREQUEST_H_
