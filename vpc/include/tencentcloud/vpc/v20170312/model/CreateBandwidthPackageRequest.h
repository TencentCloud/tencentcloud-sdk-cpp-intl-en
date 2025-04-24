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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEBANDWIDTHPACKAGEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEBANDWIDTHPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateBandwidthPackage request structure.
                */
                class CreateBandwidthPackageRequest : public AbstractModel
                {
                public:
                    CreateBandwidthPackageRequest();
                    ~CreateBandwidthPackageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The network type of the bandwidth package. Default value: `BGP`. Valid values:
`BGP`
`HIGH_QUALITY_BGP`
                     * @return NetworkType The network type of the bandwidth package. Default value: `BGP`. Valid values:
`BGP`
`HIGH_QUALITY_BGP`
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置The network type of the bandwidth package. Default value: `BGP`. Valid values:
`BGP`
`HIGH_QUALITY_BGP`
                     * @param _networkType The network type of the bandwidth package. Default value: `BGP`. Valid values:
`BGP`
`HIGH_QUALITY_BGP`
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取The billing mode of the bandwidth package. Default value: `ENHANCED95_POSTPAID_BY_MONTH`. Valid values:
<li>`ENHANCED95_POSTPAID_BY_MONTH`: Pay-as-you-go - Enhanced 95th percentile</li>
<li>`PRIMARY_TRAFFIC_POSTPAID_BY_HOUR`: Postpaid - Main Traffic Billing</li>
<li>`BANDWIDTH_POSTPAID_BY_DAY`: General BGP, Pay-as-you-go - Bandwidth-based</li>
<li>`PEAK_BANDWIDTH_POSTPAID_BY_DAY`: Static single-line, Pay-as-you-go - Daily billed</li>
<li>`TOP5_POSTPAID_BY_MONTH`: Pay-as-you-go - Monthly top 5th, If you need to use this Bglling mode, please submit a ticket.</li>


                     * @return ChargeType The billing mode of the bandwidth package. Default value: `ENHANCED95_POSTPAID_BY_MONTH`. Valid values:
<li>`ENHANCED95_POSTPAID_BY_MONTH`: Pay-as-you-go - Enhanced 95th percentile</li>
<li>`PRIMARY_TRAFFIC_POSTPAID_BY_HOUR`: Postpaid - Main Traffic Billing</li>
<li>`BANDWIDTH_POSTPAID_BY_DAY`: General BGP, Pay-as-you-go - Bandwidth-based</li>
<li>`PEAK_BANDWIDTH_POSTPAID_BY_DAY`: Static single-line, Pay-as-you-go - Daily billed</li>
<li>`TOP5_POSTPAID_BY_MONTH`: Pay-as-you-go - Monthly top 5th, If you need to use this Bglling mode, please submit a ticket.</li>


                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置The billing mode of the bandwidth package. Default value: `ENHANCED95_POSTPAID_BY_MONTH`. Valid values:
<li>`ENHANCED95_POSTPAID_BY_MONTH`: Pay-as-you-go - Enhanced 95th percentile</li>
<li>`PRIMARY_TRAFFIC_POSTPAID_BY_HOUR`: Postpaid - Main Traffic Billing</li>
<li>`BANDWIDTH_POSTPAID_BY_DAY`: General BGP, Pay-as-you-go - Bandwidth-based</li>
<li>`PEAK_BANDWIDTH_POSTPAID_BY_DAY`: Static single-line, Pay-as-you-go - Daily billed</li>
<li>`TOP5_POSTPAID_BY_MONTH`: Pay-as-you-go - Monthly top 5th, If you need to use this Bglling mode, please submit a ticket.</li>


                     * @param _chargeType The billing mode of the bandwidth package. Default value: `ENHANCED95_POSTPAID_BY_MONTH`. Valid values:
<li>`ENHANCED95_POSTPAID_BY_MONTH`: Pay-as-you-go - Enhanced 95th percentile</li>
<li>`PRIMARY_TRAFFIC_POSTPAID_BY_HOUR`: Postpaid - Main Traffic Billing</li>
<li>`BANDWIDTH_POSTPAID_BY_DAY`: General BGP, Pay-as-you-go - Bandwidth-based</li>
<li>`PEAK_BANDWIDTH_POSTPAID_BY_DAY`: Static single-line, Pay-as-you-go - Daily billed</li>
<li>`TOP5_POSTPAID_BY_MONTH`: Pay-as-you-go - Monthly top 5th, If you need to use this Bglling mode, please submit a ticket.</li>


                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取The name of the bandwidth package.
                     * @return BandwidthPackageName The name of the bandwidth package.
                     * 
                     */
                    std::string GetBandwidthPackageName() const;

                    /**
                     * 设置The name of the bandwidth package.
                     * @param _bandwidthPackageName The name of the bandwidth package.
                     * 
                     */
                    void SetBandwidthPackageName(const std::string& _bandwidthPackageName);

                    /**
                     * 判断参数 BandwidthPackageName 是否已赋值
                     * @return BandwidthPackageName 是否已赋值
                     * 
                     */
                    bool BandwidthPackageNameHasBeenSet() const;

                    /**
                     * 获取The number of bandwidth packages to create. Valid range: 1-20. It can only be "1" for bill-by-CVM accounts.
                     * @return BandwidthPackageCount The number of bandwidth packages to create. Valid range: 1-20. It can only be "1" for bill-by-CVM accounts.
                     * 
                     */
                    uint64_t GetBandwidthPackageCount() const;

                    /**
                     * 设置The number of bandwidth packages to create. Valid range: 1-20. It can only be "1" for bill-by-CVM accounts.
                     * @param _bandwidthPackageCount The number of bandwidth packages to create. Valid range: 1-20. It can only be "1" for bill-by-CVM accounts.
                     * 
                     */
                    void SetBandwidthPackageCount(const uint64_t& _bandwidthPackageCount);

                    /**
                     * 判断参数 BandwidthPackageCount 是否已赋值
                     * @return BandwidthPackageCount 是否已赋值
                     * 
                     */
                    bool BandwidthPackageCountHasBeenSet() const;

                    /**
                     * 获取The limit of the bandwidth package in Mbps. The value '-1' indicates there is no limit. This feature is currently in beta.
                     * @return InternetMaxBandwidth The limit of the bandwidth package in Mbps. The value '-1' indicates there is no limit. This feature is currently in beta.
                     * 
                     */
                    int64_t GetInternetMaxBandwidth() const;

                    /**
                     * 设置The limit of the bandwidth package in Mbps. The value '-1' indicates there is no limit. This feature is currently in beta.
                     * @param _internetMaxBandwidth The limit of the bandwidth package in Mbps. The value '-1' indicates there is no limit. This feature is currently in beta.
                     * 
                     */
                    void SetInternetMaxBandwidth(const int64_t& _internetMaxBandwidth);

                    /**
                     * 判断参数 InternetMaxBandwidth 是否已赋值
                     * @return InternetMaxBandwidth 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthHasBeenSet() const;

                    /**
                     * 获取The list of tags to be bound.
                     * @return Tags The list of tags to be bound.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置The list of tags to be bound.
                     * @param _tags The list of tags to be bound.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取The protocol type of the bandwidth package. Valid values: 'ipv4' and 'ipv6'. Default value: 'ipv4'.
                     * @return Protocol The protocol type of the bandwidth package. Valid values: 'ipv4' and 'ipv6'. Default value: 'ipv4'.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The protocol type of the bandwidth package. Valid values: 'ipv4' and 'ipv6'. Default value: 'ipv4'.
                     * @param _protocol The protocol type of the bandwidth package. Valid values: 'ipv4' and 'ipv6'. Default value: 'ipv4'.
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
                     * 获取
                     * @return TimeSpan 
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置
                     * @param _timeSpan 
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取    Network egress. It defaults to `center_egress1`. Valid values:
center_egress1,center_egress2,center_egress3

                     * @return Egress     Network egress. It defaults to `center_egress1`. Valid values:
center_egress1,center_egress2,center_egress3

                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置    Network egress. It defaults to `center_egress1`. Valid values:
center_egress1,center_egress2,center_egress3

                     * @param _egress     Network egress. It defaults to `center_egress1`. Valid values:
center_egress1,center_egress2,center_egress3

                     * 
                     */
                    void SetEgress(const std::string& _egress);

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     * 
                     */
                    bool EgressHasBeenSet() const;

                private:

                    /**
                     * The network type of the bandwidth package. Default value: `BGP`. Valid values:
`BGP`
`HIGH_QUALITY_BGP`
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * The billing mode of the bandwidth package. Default value: `ENHANCED95_POSTPAID_BY_MONTH`. Valid values:
<li>`ENHANCED95_POSTPAID_BY_MONTH`: Pay-as-you-go - Enhanced 95th percentile</li>
<li>`PRIMARY_TRAFFIC_POSTPAID_BY_HOUR`: Postpaid - Main Traffic Billing</li>
<li>`BANDWIDTH_POSTPAID_BY_DAY`: General BGP, Pay-as-you-go - Bandwidth-based</li>
<li>`PEAK_BANDWIDTH_POSTPAID_BY_DAY`: Static single-line, Pay-as-you-go - Daily billed</li>
<li>`TOP5_POSTPAID_BY_MONTH`: Pay-as-you-go - Monthly top 5th, If you need to use this Bglling mode, please submit a ticket.</li>


                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * The name of the bandwidth package.
                     */
                    std::string m_bandwidthPackageName;
                    bool m_bandwidthPackageNameHasBeenSet;

                    /**
                     * The number of bandwidth packages to create. Valid range: 1-20. It can only be "1" for bill-by-CVM accounts.
                     */
                    uint64_t m_bandwidthPackageCount;
                    bool m_bandwidthPackageCountHasBeenSet;

                    /**
                     * The limit of the bandwidth package in Mbps. The value '-1' indicates there is no limit. This feature is currently in beta.
                     */
                    int64_t m_internetMaxBandwidth;
                    bool m_internetMaxBandwidthHasBeenSet;

                    /**
                     * The list of tags to be bound.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * The protocol type of the bandwidth package. Valid values: 'ipv4' and 'ipv6'. Default value: 'ipv4'.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     *     Network egress. It defaults to `center_egress1`. Valid values:
center_egress1,center_egress2,center_egress3

                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEBANDWIDTHPACKAGEREQUEST_H_
