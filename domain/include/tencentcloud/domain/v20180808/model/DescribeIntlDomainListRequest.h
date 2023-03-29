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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINLISTREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeIntlDomainList request structure.
                */
                class DescribeIntlDomainListRequest : public AbstractModel
                {
                public:
                    DescribeIntlDomainListRequest();
                    ~DescribeIntlDomainListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The page number in pagination cases.
                     * @return Offset The page number in pagination cases.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The page number in pagination cases.
                     * @param Offset The page number in pagination cases.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The number of records on each page in pagination cases.
                     * @return Limit The number of records on each page in pagination cases.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of records on each page in pagination cases.
                     * @param Limit The number of records on each page in pagination cases.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The domain keyword for fuzzy search.
                     * @return KeyWord The domain keyword for fuzzy search.
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置The domain keyword for fuzzy search.
                     * @param KeyWord The domain keyword for fuzzy search.
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     */
                    bool KeyWordHasBeenSet() const;

                    /**
                     * 获取The registration time sort order. Valid values: `1` (descending), `2` (ascending).
                     * @return OrderByRegTime The registration time sort order. Valid values: `1` (descending), `2` (ascending).
                     */
                    int64_t GetOrderByRegTime() const;

                    /**
                     * 设置The registration time sort order. Valid values: `1` (descending), `2` (ascending).
                     * @param OrderByRegTime The registration time sort order. Valid values: `1` (descending), `2` (ascending).
                     */
                    void SetOrderByRegTime(const int64_t& _orderByRegTime);

                    /**
                     * 判断参数 OrderByRegTime 是否已赋值
                     * @return OrderByRegTime 是否已赋值
                     */
                    bool OrderByRegTimeHasBeenSet() const;

                    /**
                     * 获取The expiration time sort order. Valid values: `1` (descending), `2` (ascending).
                     * @return OrderByExpireTime The expiration time sort order. Valid values: `1` (descending), `2` (ascending).
                     */
                    int64_t GetOrderByExpireTime() const;

                    /**
                     * 设置The expiration time sort order. Valid values: `1` (descending), `2` (ascending).
                     * @param OrderByExpireTime The expiration time sort order. Valid values: `1` (descending), `2` (ascending).
                     */
                    void SetOrderByExpireTime(const int64_t& _orderByExpireTime);

                    /**
                     * 判断参数 OrderByExpireTime 是否已赋值
                     * @return OrderByExpireTime 是否已赋值
                     */
                    bool OrderByExpireTimeHasBeenSet() const;

                    /**
                     * 获取The domain status.
`all`: All domains.
`UrgentNeedRenew`: The domains that are in urgent need of renewal.
`RedemptionPending`: The domains that are in urgent need of redemption.
`nosubmit`: The domains with unverified identities.
`tran`: The domains that are being transferred in.
                     * @return Status The domain status.
`all`: All domains.
`UrgentNeedRenew`: The domains that are in urgent need of renewal.
`RedemptionPending`: The domains that are in urgent need of redemption.
`nosubmit`: The domains with unverified identities.
`tran`: The domains that are being transferred in.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The domain status.
`all`: All domains.
`UrgentNeedRenew`: The domains that are in urgent need of renewal.
`RedemptionPending`: The domains that are in urgent need of redemption.
`nosubmit`: The domains with unverified identities.
`tran`: The domains that are being transferred in.
                     * @param Status The domain status.
`all`: All domains.
`UrgentNeedRenew`: The domains that are in urgent need of renewal.
`RedemptionPending`: The domains that are in urgent need of redemption.
`nosubmit`: The domains with unverified identities.
`tran`: The domains that are being transferred in.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The DNS type. Valid values: `1` (DNSPod), `2` (others).
                     * @return DnsStatus The DNS type. Valid values: `1` (DNSPod), `2` (others).
                     */
                    uint64_t GetDnsStatus() const;

                    /**
                     * 设置The DNS type. Valid values: `1` (DNSPod), `2` (others).
                     * @param DnsStatus The DNS type. Valid values: `1` (DNSPod), `2` (others).
                     */
                    void SetDnsStatus(const uint64_t& _dnsStatus);

                    /**
                     * 判断参数 DnsStatus 是否已赋值
                     * @return DnsStatus 是否已赋值
                     */
                    bool DnsStatusHasBeenSet() const;

                    /**
                     * 获取The domain sort order. Valid values: `1` (descending), `2` (ascending).
                     * @return OrderByDomainName The domain sort order. Valid values: `1` (descending), `2` (ascending).
                     */
                    uint64_t GetOrderByDomainName() const;

                    /**
                     * 设置The domain sort order. Valid values: `1` (descending), `2` (ascending).
                     * @param OrderByDomainName The domain sort order. Valid values: `1` (descending), `2` (ascending).
                     */
                    void SetOrderByDomainName(const uint64_t& _orderByDomainName);

                    /**
                     * 判断参数 OrderByDomainName 是否已赋值
                     * @return OrderByDomainName 是否已赋值
                     */
                    bool OrderByDomainNameHasBeenSet() const;

                private:

                    /**
                     * The page number in pagination cases.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of records on each page in pagination cases.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The domain keyword for fuzzy search.
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                    /**
                     * The registration time sort order. Valid values: `1` (descending), `2` (ascending).
                     */
                    int64_t m_orderByRegTime;
                    bool m_orderByRegTimeHasBeenSet;

                    /**
                     * The expiration time sort order. Valid values: `1` (descending), `2` (ascending).
                     */
                    int64_t m_orderByExpireTime;
                    bool m_orderByExpireTimeHasBeenSet;

                    /**
                     * The domain status.
`all`: All domains.
`UrgentNeedRenew`: The domains that are in urgent need of renewal.
`RedemptionPending`: The domains that are in urgent need of redemption.
`nosubmit`: The domains with unverified identities.
`tran`: The domains that are being transferred in.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The DNS type. Valid values: `1` (DNSPod), `2` (others).
                     */
                    uint64_t m_dnsStatus;
                    bool m_dnsStatusHasBeenSet;

                    /**
                     * The domain sort order. Valid values: `1` (descending), `2` (ascending).
                     */
                    uint64_t m_orderByDomainName;
                    bool m_orderByDomainNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINLISTREQUEST_H_
