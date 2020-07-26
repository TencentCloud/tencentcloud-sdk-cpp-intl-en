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
                     * 获取The bandwidth package type. Valid values: 'BGP', 'SINGLEISP', and 'ANYCAST'.
                     * @return NetworkType The bandwidth package type. Valid values: 'BGP', 'SINGLEISP', and 'ANYCAST'.
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置The bandwidth package type. Valid values: 'BGP', 'SINGLEISP', and 'ANYCAST'.
                     * @param NetworkType The bandwidth package type. Valid values: 'BGP', 'SINGLEISP', and 'ANYCAST'.
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取The bandwidth package billing mode. Valid values: 'TOP5_POSTPAID_BY_MONTH' and 'PERCENT95_POSTPAID_BY_MONTH'.
                     * @return ChargeType The bandwidth package billing mode. Valid values: 'TOP5_POSTPAID_BY_MONTH' and 'PERCENT95_POSTPAID_BY_MONTH'.
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置The bandwidth package billing mode. Valid values: 'TOP5_POSTPAID_BY_MONTH' and 'PERCENT95_POSTPAID_BY_MONTH'.
                     * @param ChargeType The bandwidth package billing mode. Valid values: 'TOP5_POSTPAID_BY_MONTH' and 'PERCENT95_POSTPAID_BY_MONTH'.
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取The name of the bandwidth package.
                     * @return BandwidthPackageName The name of the bandwidth package.
                     */
                    std::string GetBandwidthPackageName() const;

                    /**
                     * 设置The name of the bandwidth package.
                     * @param BandwidthPackageName The name of the bandwidth package.
                     */
                    void SetBandwidthPackageName(const std::string& _bandwidthPackageName);

                    /**
                     * 判断参数 BandwidthPackageName 是否已赋值
                     * @return BandwidthPackageName 是否已赋值
                     */
                    bool BandwidthPackageNameHasBeenSet() const;

                    /**
                     * 获取The number of bandwidth packages (enter 1 for bill-by-CVM accounts).
                     * @return BandwidthPackageCount The number of bandwidth packages (enter 1 for bill-by-CVM accounts).
                     */
                    uint64_t GetBandwidthPackageCount() const;

                    /**
                     * 设置The number of bandwidth packages (enter 1 for bill-by-CVM accounts).
                     * @param BandwidthPackageCount The number of bandwidth packages (enter 1 for bill-by-CVM accounts).
                     */
                    void SetBandwidthPackageCount(const uint64_t& _bandwidthPackageCount);

                    /**
                     * 判断参数 BandwidthPackageCount 是否已赋值
                     * @return BandwidthPackageCount 是否已赋值
                     */
                    bool BandwidthPackageCountHasBeenSet() const;

                    /**
                     * 获取The limit of the bandwidth package in Mbps. The value '-1' indicates there is no limit.
                     * @return InternetMaxBandwidth The limit of the bandwidth package in Mbps. The value '-1' indicates there is no limit.
                     */
                    int64_t GetInternetMaxBandwidth() const;

                    /**
                     * 设置The limit of the bandwidth package in Mbps. The value '-1' indicates there is no limit.
                     * @param InternetMaxBandwidth The limit of the bandwidth package in Mbps. The value '-1' indicates there is no limit.
                     */
                    void SetInternetMaxBandwidth(const int64_t& _internetMaxBandwidth);

                    /**
                     * 判断参数 InternetMaxBandwidth 是否已赋值
                     * @return InternetMaxBandwidth 是否已赋值
                     */
                    bool InternetMaxBandwidthHasBeenSet() const;

                    /**
                     * 获取The list of tags to be bound.
                     * @return Tags The list of tags to be bound.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置The list of tags to be bound.
                     * @param Tags The list of tags to be bound.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取The protocol type of the bandwidth package. Valid values: 'ipv4' and 'ipv6'. Default value: 'ipv4'.
                     * @return Protocol The protocol type of the bandwidth package. Valid values: 'ipv4' and 'ipv6'. Default value: 'ipv4'.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The protocol type of the bandwidth package. Valid values: 'ipv4' and 'ipv6'. Default value: 'ipv4'.
                     * @param Protocol The protocol type of the bandwidth package. Valid values: 'ipv4' and 'ipv6'. Default value: 'ipv4'.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * The bandwidth package type. Valid values: 'BGP', 'SINGLEISP', and 'ANYCAST'.
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * The bandwidth package billing mode. Valid values: 'TOP5_POSTPAID_BY_MONTH' and 'PERCENT95_POSTPAID_BY_MONTH'.
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * The name of the bandwidth package.
                     */
                    std::string m_bandwidthPackageName;
                    bool m_bandwidthPackageNameHasBeenSet;

                    /**
                     * The number of bandwidth packages (enter 1 for bill-by-CVM accounts).
                     */
                    uint64_t m_bandwidthPackageCount;
                    bool m_bandwidthPackageCountHasBeenSet;

                    /**
                     * The limit of the bandwidth package in Mbps. The value '-1' indicates there is no limit.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEBANDWIDTHPACKAGEREQUEST_H_
