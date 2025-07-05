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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBENEWL7RULESREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBENEWL7RULESREQUEST_H_

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
                * DescribeNewL7Rules request structure.
                */
                class DescribeNewL7RulesRequest : public AbstractModel
                {
                public:
                    DescribeNewL7RulesRequest();
                    ~DescribeNewL7RulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     * @return Business Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     * @param _business Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
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
                     * 获取(Optional) Searches by rule status. Valid values: `0` (Successfully configured), `1` (Being configured), `2` (Configuration failed), `3` (Being deleted), `5` (Deletion failed), `6` (awaiting configuration), `7` (awaiting deletion), and `8` (awaiting certificate configuration).
                     * @return StatusList (Optional) Searches by rule status. Valid values: `0` (Successfully configured), `1` (Being configured), `2` (Configuration failed), `3` (Being deleted), `5` (Deletion failed), `6` (awaiting configuration), `7` (awaiting deletion), and `8` (awaiting certificate configuration).
                     * 
                     */
                    std::vector<uint64_t> GetStatusList() const;

                    /**
                     * 设置(Optional) Searches by rule status. Valid values: `0` (Successfully configured), `1` (Being configured), `2` (Configuration failed), `3` (Being deleted), `5` (Deletion failed), `6` (awaiting configuration), `7` (awaiting deletion), and `8` (awaiting certificate configuration).
                     * @param _statusList (Optional) Searches by rule status. Valid values: `0` (Successfully configured), `1` (Being configured), `2` (Configuration failed), `3` (Being deleted), `5` (Deletion failed), `6` (awaiting configuration), `7` (awaiting deletion), and `8` (awaiting certificate configuration).
                     * 
                     */
                    void SetStatusList(const std::vector<uint64_t>& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                    /**
                     * 获取(Optional) Searches by domain name.
                     * @return Domain (Optional) Searches by domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置(Optional) Searches by domain name.
                     * @param _domain (Optional) Searches by domain name.
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
                     * 获取(Optional) Searches by IP.
                     * @return Ip (Optional) Searches by IP.
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置(Optional) Searches by IP.
                     * @param _ip (Optional) Searches by IP.
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
                     * 获取Number of items in a page. Returned results are not paged if you enter “0”.
                     * @return Limit Number of items in a page. Returned results are not paged if you enter “0”.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items in a page. Returned results are not paged if you enter “0”.
                     * @param _limit Number of items in a page. Returned results are not paged if you enter “0”.
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
                     * 获取(Optional) Searches by forwarding protocol. Values: [http, https, http/https]
                     * @return ProtocolList (Optional) Searches by forwarding protocol. Values: [http, https, http/https]
                     * 
                     */
                    std::vector<std::string> GetProtocolList() const;

                    /**
                     * 设置(Optional) Searches by forwarding protocol. Values: [http, https, http/https]
                     * @param _protocolList (Optional) Searches by forwarding protocol. Values: [http, https, http/https]
                     * 
                     */
                    void SetProtocolList(const std::vector<std::string>& _protocolList);

                    /**
                     * 判断参数 ProtocolList 是否已赋值
                     * @return ProtocolList 是否已赋值
                     * 
                     */
                    bool ProtocolListHasBeenSet() const;

                    /**
                     * 获取CNAME of the Anti-DDoS Advanced instance
                     * @return Cname CNAME of the Anti-DDoS Advanced instance
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置CNAME of the Anti-DDoS Advanced instance
                     * @param _cname CNAME of the Anti-DDoS Advanced instance
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * (Optional) Searches by rule status. Valid values: `0` (Successfully configured), `1` (Being configured), `2` (Configuration failed), `3` (Being deleted), `5` (Deletion failed), `6` (awaiting configuration), `7` (awaiting deletion), and `8` (awaiting certificate configuration).
                     */
                    std::vector<uint64_t> m_statusList;
                    bool m_statusListHasBeenSet;

                    /**
                     * (Optional) Searches by domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * (Optional) Searches by IP.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Number of items in a page. Returned results are not paged if you enter “0”.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Starting offset of the page. Value: (number of pages – 1) * items per page.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * (Optional) Searches by forwarding protocol. Values: [http, https, http/https]
                     */
                    std::vector<std::string> m_protocolList;
                    bool m_protocolListHasBeenSet;

                    /**
                     * CNAME of the Anti-DDoS Advanced instance
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBENEWL7RULESREQUEST_H_
