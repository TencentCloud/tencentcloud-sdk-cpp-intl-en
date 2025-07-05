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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCBLACKWHITEIPLISTREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCBLACKWHITEIPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeCcBlackWhiteIpList request structure.
                */
                class DescribeCcBlackWhiteIpListRequest : public AbstractModel
                {
                public:
                    DescribeCcBlackWhiteIpListRequest();
                    ~DescribeCcBlackWhiteIpListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. Valid values: `bgpip-multip` (Anti-DDoS Pro) and `bgpip` (Anti-DDoS Advanced).
                     * @return Business Anti-DDoS service type. Valid values: `bgpip-multip` (Anti-DDoS Pro) and `bgpip` (Anti-DDoS Advanced).
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. Valid values: `bgpip-multip` (Anti-DDoS Pro) and `bgpip` (Anti-DDoS Advanced).
                     * @param _business Anti-DDoS service type. Valid values: `bgpip-multip` (Anti-DDoS Pro) and `bgpip` (Anti-DDoS Advanced).
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * @return Offset Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * @param _offset Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results returned in one page
                     * @return Limit Number of results returned in one page
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results returned in one page
                     * @param _limit Number of results returned in one page
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取IP address, which is required when an Anti-DDoS Advanced instance is used.
                     * @return Ip IP address, which is required when an Anti-DDoS Advanced instance is used.
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP address, which is required when an Anti-DDoS Advanced instance is used.
                     * @param _ip IP address, which is required when an Anti-DDoS Advanced instance is used.
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Domain name, which is required when an Anti-DDoS Advanced instance is used.
                     * @return Domain Domain name, which is required when an Anti-DDoS Advanced instance is used.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name, which is required when an Anti-DDoS Advanced instance is used.
                     * @param _domain Domain name, which is required when an Anti-DDoS Advanced instance is used.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Protocol, which is required when an Anti-DDoS Advanced instance is used.
                     * @return Protocol Protocol, which is required when an Anti-DDoS Advanced instance is used.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol, which is required when an Anti-DDoS Advanced instance is used.
                     * @param _protocol Protocol, which is required when an Anti-DDoS Advanced instance is used.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Specifies a blocklist/allowlist IP.
                     * @return FilterIp Specifies a blocklist/allowlist IP.
                     * 
                     */
                    std::string GetFilterIp() const;

                    /**
                     * 设置Specifies a blocklist/allowlist IP.
                     * @param _filterIp Specifies a blocklist/allowlist IP.
                     * 
                     */
                    void SetFilterIp(const std::string& _filterIp);

                    /**
                     * 判断参数 FilterIp 是否已赋值
                     * @return FilterIp 是否已赋值
                     * 
                     */
                    bool FilterIpHasBeenSet() const;

                    /**
                     * 获取Specifies whether is an IP blocklist or IP allowlist.
                     * @return FilterType Specifies whether is an IP blocklist or IP allowlist.
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置Specifies whether is an IP blocklist or IP allowlist.
                     * @param _filterType Specifies whether is an IP blocklist or IP allowlist.
                     * 
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. Valid values: `bgpip-multip` (Anti-DDoS Pro) and `bgpip` (Anti-DDoS Advanced).
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Starting offset of the page. Value: (number of pages – 1) * items per page.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results returned in one page
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * IP address, which is required when an Anti-DDoS Advanced instance is used.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Domain name, which is required when an Anti-DDoS Advanced instance is used.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Protocol, which is required when an Anti-DDoS Advanced instance is used.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Specifies a blocklist/allowlist IP.
                     */
                    std::string m_filterIp;
                    bool m_filterIpHasBeenSet;

                    /**
                     * Specifies whether is an IP blocklist or IP allowlist.
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCBLACKWHITEIPLISTREQUEST_H_
