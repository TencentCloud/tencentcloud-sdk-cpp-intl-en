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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_SUBDOMAINANALYTICSINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_SUBDOMAINANALYTICSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * Statistics on the DNS query volume of a subdomain
                */
                class SubdomainAnalyticsInfo : public AbstractModel
                {
                public:
                    SubdomainAnalyticsInfo();
                    ~SubdomainAnalyticsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`DATE`: Daily; `HOUR`: Hourly
                     * @return DnsFormat `DATE`: Daily; `HOUR`: Hourly
                     * 
                     */
                    std::string GetDnsFormat() const;

                    /**
                     * 设置`DATE`: Daily; `HOUR`: Hourly
                     * @param _dnsFormat `DATE`: Daily; `HOUR`: Hourly
                     * 
                     */
                    void SetDnsFormat(const std::string& _dnsFormat);

                    /**
                     * 判断参数 DnsFormat 是否已赋值
                     * @return DnsFormat 是否已赋值
                     * 
                     */
                    bool DnsFormatHasBeenSet() const;

                    /**
                     * 获取Total DNS query volume for the current statistical period
                     * @return DnsTotal Total DNS query volume for the current statistical period
                     * 
                     */
                    uint64_t GetDnsTotal() const;

                    /**
                     * 设置Total DNS query volume for the current statistical period
                     * @param _dnsTotal Total DNS query volume for the current statistical period
                     * 
                     */
                    void SetDnsTotal(const uint64_t& _dnsTotal);

                    /**
                     * 判断参数 DnsTotal 是否已赋值
                     * @return DnsTotal 是否已赋值
                     * 
                     */
                    bool DnsTotalHasBeenSet() const;

                    /**
                     * 获取The queried domain
                     * @return Domain The queried domain
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The queried domain
                     * @param _domain The queried domain
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
                     * 获取Start date of the current statistical period
                     * @return StartDate Start date of the current statistical period
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置Start date of the current statistical period
                     * @param _startDate Start date of the current statistical period
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取End date of the current statistical period
                     * @return EndDate End date of the current statistical period
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置End date of the current statistical period
                     * @param _endDate End date of the current statistical period
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取Subdomain
                     * @return Subdomain Subdomain
                     * 
                     */
                    std::string GetSubdomain() const;

                    /**
                     * 设置Subdomain
                     * @param _subdomain Subdomain
                     * 
                     */
                    void SetSubdomain(const std::string& _subdomain);

                    /**
                     * 判断参数 Subdomain 是否已赋值
                     * @return Subdomain 是否已赋值
                     * 
                     */
                    bool SubdomainHasBeenSet() const;

                private:

                    /**
                     * `DATE`: Daily; `HOUR`: Hourly
                     */
                    std::string m_dnsFormat;
                    bool m_dnsFormatHasBeenSet;

                    /**
                     * Total DNS query volume for the current statistical period
                     */
                    uint64_t m_dnsTotal;
                    bool m_dnsTotalHasBeenSet;

                    /**
                     * The queried domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Start date of the current statistical period
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * End date of the current statistical period
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * Subdomain
                     */
                    std::string m_subdomain;
                    bool m_subdomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_SUBDOMAINANALYTICSINFO_H_
