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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBESUBDOMAINANALYTICSREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBESUBDOMAINANALYTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeSubdomainAnalytics request structure.
                */
                class DescribeSubdomainAnalyticsRequest : public AbstractModel
                {
                public:
                    DescribeSubdomainAnalyticsRequest();
                    ~DescribeSubdomainAnalyticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The domain of the DNS query volume to be queried
                     * @return Domain The domain of the DNS query volume to be queried
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain of the DNS query volume to be queried
                     * @param _domain The domain of the DNS query volume to be queried
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
                     * 获取Query start date in the format of `YYYY-MM-DD`
                     * @return StartDate Query start date in the format of `YYYY-MM-DD`
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置Query start date in the format of `YYYY-MM-DD`
                     * @param _startDate Query start date in the format of `YYYY-MM-DD`
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
                     * 获取Query end date in the format of `YYYY-MM-DD`
                     * @return EndDate Query end date in the format of `YYYY-MM-DD`
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置Query end date in the format of `YYYY-MM-DD`
                     * @param _endDate Query end date in the format of `YYYY-MM-DD`
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
                     * 获取The subdomain of the DNS query volume to be queried
                     * @return Subdomain The subdomain of the DNS query volume to be queried
                     * 
                     */
                    std::string GetSubdomain() const;

                    /**
                     * 设置The subdomain of the DNS query volume to be queried
                     * @param _subdomain The subdomain of the DNS query volume to be queried
                     * 
                     */
                    void SetSubdomain(const std::string& _subdomain);

                    /**
                     * 判断参数 Subdomain 是否已赋值
                     * @return Subdomain 是否已赋值
                     * 
                     */
                    bool SubdomainHasBeenSet() const;

                    /**
                     * 获取`DATE`: Daily. `HOUR`: Hourly
                     * @return DnsFormat `DATE`: Daily. `HOUR`: Hourly
                     * 
                     */
                    std::string GetDnsFormat() const;

                    /**
                     * 设置`DATE`: Daily. `HOUR`: Hourly
                     * @param _dnsFormat `DATE`: Daily. `HOUR`: Hourly
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
                     * 获取The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     * @return DomainId The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     * @param _domainId The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                private:

                    /**
                     * The domain of the DNS query volume to be queried
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Query start date in the format of `YYYY-MM-DD`
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * Query end date in the format of `YYYY-MM-DD`
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * The subdomain of the DNS query volume to be queried
                     */
                    std::string m_subdomain;
                    bool m_subdomainHasBeenSet;

                    /**
                     * `DATE`: Daily. `HOUR`: Hourly
                     */
                    std::string m_dnsFormat;
                    bool m_dnsFormatHasBeenSet;

                    /**
                     * The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBESUBDOMAINANALYTICSREQUEST_H_
