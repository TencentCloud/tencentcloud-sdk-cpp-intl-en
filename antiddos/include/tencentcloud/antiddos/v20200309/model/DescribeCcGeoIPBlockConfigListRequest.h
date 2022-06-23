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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCGEOIPBLOCKCONFIGLISTREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCGEOIPBLOCKCONFIGLISTREQUEST_H_

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
                * DescribeCcGeoIPBlockConfigList request structure.
                */
                class DescribeCcGeoIPBlockConfigListRequest : public AbstractModel
                {
                public:
                    DescribeCcGeoIPBlockConfigListRequest();
                    ~DescribeCcGeoIPBlockConfigListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. Valid values: `bgpip-multip` (Anti-DDoS Pro) and `bgpip` (Anti-DDoS Advanced).
                     * @return Business Anti-DDoS service type. Valid values: `bgpip-multip` (Anti-DDoS Pro) and `bgpip` (Anti-DDoS Advanced).
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. Valid values: `bgpip-multip` (Anti-DDoS Pro) and `bgpip` (Anti-DDoS Advanced).
                     * @param Business Anti-DDoS service type. Valid values: `bgpip-multip` (Anti-DDoS Pro) and `bgpip` (Anti-DDoS Advanced).
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * @return Offset Starting offset of the page. Value: (number of pages – 1) * items per page.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * @param Offset Starting offset of the page. Value: (number of pages – 1) * items per page.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results returned in one page
                     * @return Limit Number of results returned in one page
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results returned in one page
                     * @param Limit Number of results returned in one page
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取IP address, which is required when an Anti-DDoS Advanced instance is used.
                     * @return Ip IP address, which is required when an Anti-DDoS Advanced instance is used.
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP address, which is required when an Anti-DDoS Advanced instance is used.
                     * @param Ip IP address, which is required when an Anti-DDoS Advanced instance is used.
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Domain name, which is required when an Anti-DDoS Advanced instance is used.
                     * @return Domain Domain name, which is required when an Anti-DDoS Advanced instance is used.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name, which is required when an Anti-DDoS Advanced instance is used.
                     * @param Domain Domain name, which is required when an Anti-DDoS Advanced instance is used.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Protocol, which is required when an Anti-DDoS Advanced instance is used.
                     * @return Protocol Protocol, which is required when an Anti-DDoS Advanced instance is used.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol, which is required when an Anti-DDoS Advanced instance is used.
                     * @param Protocol Protocol, which is required when an Anti-DDoS Advanced instance is used.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. Valid values: `bgpip-multip` (Anti-DDoS Pro) and `bgpip` (Anti-DDoS Advanced).
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

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
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCGEOIPBLOCKCONFIGLISTREQUEST_H_
