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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_INQUIRYPRICECREATEPROXYREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_INQUIRYPRICECREATEPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateProxy request structure.
                */
                class InquiryPriceCreateProxyRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateProxyRequest();
                    ~InquiryPriceCreateProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Acceleration region name.
                     * @return AccessRegion Acceleration region name.
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置Acceleration region name.
                     * @param AccessRegion Acceleration region name.
                     */
                    void SetAccessRegion(const std::string& _accessRegion);

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     */
                    bool AccessRegionHasBeenSet() const;

                    /**
                     * 获取Connection bandwidth cap. Unit: Mbps.
                     * @return Bandwidth Connection bandwidth cap. Unit: Mbps.
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Connection bandwidth cap. Unit: Mbps.
                     * @param Bandwidth Connection bandwidth cap. Unit: Mbps.
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Origin server region name. It's an old parameter, please switch to RealServerRegion.
                     * @return DestRegion Origin server region name. It's an old parameter, please switch to RealServerRegion.
                     */
                    std::string GetDestRegion() const;

                    /**
                     * 设置Origin server region name. It's an old parameter, please switch to RealServerRegion.
                     * @param DestRegion Origin server region name. It's an old parameter, please switch to RealServerRegion.
                     */
                    void SetDestRegion(const std::string& _destRegion);

                    /**
                     * 判断参数 DestRegion 是否已赋值
                     * @return DestRegion 是否已赋值
                     */
                    bool DestRegionHasBeenSet() const;

                    /**
                     * 获取Upper limit of connection concurrence, which indicates a number of simultaneous online connections. Unit: 10,000 connections. It's an old parameter, please switch to Concurrent.
                     * @return Concurrency Upper limit of connection concurrence, which indicates a number of simultaneous online connections. Unit: 10,000 connections. It's an old parameter, please switch to Concurrent.
                     */
                    int64_t GetConcurrency() const;

                    /**
                     * 设置Upper limit of connection concurrence, which indicates a number of simultaneous online connections. Unit: 10,000 connections. It's an old parameter, please switch to Concurrent.
                     * @param Concurrency Upper limit of connection concurrence, which indicates a number of simultaneous online connections. Unit: 10,000 connections. It's an old parameter, please switch to Concurrent.
                     */
                    void SetConcurrency(const int64_t& _concurrency);

                    /**
                     * 判断参数 Concurrency 是否已赋值
                     * @return Concurrency 是否已赋值
                     */
                    bool ConcurrencyHasBeenSet() const;

                    /**
                     * 获取Origin server region name; It's a new parameter.
                     * @return RealServerRegion Origin server region name; It's a new parameter.
                     */
                    std::string GetRealServerRegion() const;

                    /**
                     * 设置Origin server region name; It's a new parameter.
                     * @param RealServerRegion Origin server region name; It's a new parameter.
                     */
                    void SetRealServerRegion(const std::string& _realServerRegion);

                    /**
                     * 判断参数 RealServerRegion 是否已赋值
                     * @return RealServerRegion 是否已赋值
                     */
                    bool RealServerRegionHasBeenSet() const;

                    /**
                     * 获取Upper limit of connection concurrence, which indicates a number of simultaneous online connections. Unit: 10,000 connections. It's a new parameter.
                     * @return Concurrent Upper limit of connection concurrence, which indicates a number of simultaneous online connections. Unit: 10,000 connections. It's a new parameter.
                     */
                    int64_t GetConcurrent() const;

                    /**
                     * 设置Upper limit of connection concurrence, which indicates a number of simultaneous online connections. Unit: 10,000 connections. It's a new parameter.
                     * @param Concurrent Upper limit of connection concurrence, which indicates a number of simultaneous online connections. Unit: 10,000 connections. It's a new parameter.
                     */
                    void SetConcurrent(const int64_t& _concurrent);

                    /**
                     * 判断参数 Concurrent 是否已赋值
                     * @return Concurrent 是否已赋值
                     */
                    bool ConcurrentHasBeenSet() const;

                    /**
                     * 获取Billing mode. Valid values: 0: bill-by-bandwidth (default value); 1: bill-by-traffic.
                     * @return BillingType Billing mode. Valid values: 0: bill-by-bandwidth (default value); 1: bill-by-traffic.
                     */
                    int64_t GetBillingType() const;

                    /**
                     * 设置Billing mode. Valid values: 0: bill-by-bandwidth (default value); 1: bill-by-traffic.
                     * @param BillingType Billing mode. Valid values: 0: bill-by-bandwidth (default value); 1: bill-by-traffic.
                     */
                    void SetBillingType(const int64_t& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     */
                    bool BillingTypeHasBeenSet() const;

                private:

                    /**
                     * Acceleration region name.
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                    /**
                     * Connection bandwidth cap. Unit: Mbps.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Origin server region name. It's an old parameter, please switch to RealServerRegion.
                     */
                    std::string m_destRegion;
                    bool m_destRegionHasBeenSet;

                    /**
                     * Upper limit of connection concurrence, which indicates a number of simultaneous online connections. Unit: 10,000 connections. It's an old parameter, please switch to Concurrent.
                     */
                    int64_t m_concurrency;
                    bool m_concurrencyHasBeenSet;

                    /**
                     * Origin server region name; It's a new parameter.
                     */
                    std::string m_realServerRegion;
                    bool m_realServerRegionHasBeenSet;

                    /**
                     * Upper limit of connection concurrence, which indicates a number of simultaneous online connections. Unit: 10,000 connections. It's a new parameter.
                     */
                    int64_t m_concurrent;
                    bool m_concurrentHasBeenSet;

                    /**
                     * Billing mode. Valid values: 0: bill-by-bandwidth (default value); 1: bill-by-traffic.
                     */
                    int64_t m_billingType;
                    bool m_billingTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_INQUIRYPRICECREATEPROXYREQUEST_H_
