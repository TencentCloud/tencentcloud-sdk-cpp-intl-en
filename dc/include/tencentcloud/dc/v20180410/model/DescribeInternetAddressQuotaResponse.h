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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSQUOTARESPONSE_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * DescribeInternetAddressQuota response structure.
                */
                class DescribeInternetAddressQuotaResponse : public AbstractModel
                {
                public:
                    DescribeInternetAddressQuotaResponse();
                    ~DescribeInternetAddressQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Minimum prefix length allowed for a public IPv6 address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Ipv6PrefixLen Minimum prefix length allowed for a public IPv6 address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetIpv6PrefixLen() const;

                    /**
                     * 判断参数 Ipv6PrefixLen 是否已赋值
                     * @return Ipv6PrefixLen 是否已赋值
                     */
                    bool Ipv6PrefixLenHasBeenSet() const;

                    /**
                     * 获取Quota of BGP IPv4 addresses
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Ipv4BgpQuota Quota of BGP IPv4 addresses
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetIpv4BgpQuota() const;

                    /**
                     * 判断参数 Ipv4BgpQuota 是否已赋值
                     * @return Ipv4BgpQuota 是否已赋值
                     */
                    bool Ipv4BgpQuotaHasBeenSet() const;

                    /**
                     * 获取Quota of non-BGP IPv4 addresses
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Ipv4OtherQuota Quota of non-BGP IPv4 addresses
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetIpv4OtherQuota() const;

                    /**
                     * 判断参数 Ipv4OtherQuota 是否已赋值
                     * @return Ipv4OtherQuota 是否已赋值
                     */
                    bool Ipv4OtherQuotaHasBeenSet() const;

                    /**
                     * 获取Used number of BGP IPv4 addresses
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Ipv4BgpNum Used number of BGP IPv4 addresses
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetIpv4BgpNum() const;

                    /**
                     * 判断参数 Ipv4BgpNum 是否已赋值
                     * @return Ipv4BgpNum 是否已赋值
                     */
                    bool Ipv4BgpNumHasBeenSet() const;

                    /**
                     * 获取Used number of non-BGP IPv4 addresses
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Ipv4OtherNum Used number of non-BGP IPv4 addresses
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetIpv4OtherNum() const;

                    /**
                     * 判断参数 Ipv4OtherNum 是否已赋值
                     * @return Ipv4OtherNum 是否已赋值
                     */
                    bool Ipv4OtherNumHasBeenSet() const;

                private:

                    /**
                     * Minimum prefix length allowed for a public IPv6 address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_ipv6PrefixLen;
                    bool m_ipv6PrefixLenHasBeenSet;

                    /**
                     * Quota of BGP IPv4 addresses
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_ipv4BgpQuota;
                    bool m_ipv4BgpQuotaHasBeenSet;

                    /**
                     * Quota of non-BGP IPv4 addresses
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_ipv4OtherQuota;
                    bool m_ipv4OtherQuotaHasBeenSet;

                    /**
                     * Used number of BGP IPv4 addresses
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_ipv4BgpNum;
                    bool m_ipv4BgpNumHasBeenSet;

                    /**
                     * Used number of non-BGP IPv4 addresses
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_ipv4OtherNum;
                    bool m_ipv4OtherNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSQUOTARESPONSE_H_
