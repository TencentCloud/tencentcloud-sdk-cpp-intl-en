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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEIP6ADDRESSESBANDWIDTHREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEIP6ADDRESSESBANDWIDTHREQUEST_H_

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
                * AllocateIp6AddressesBandwidth request structure.
                */
                class AllocateIp6AddressesBandwidthRequest : public AbstractModel
                {
                public:
                    AllocateIp6AddressesBandwidthRequest();
                    ~AllocateIp6AddressesBandwidthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IPv6 addresses that require the public network access capability.
                     * @return Ip6Addresses IPv6 addresses that require the public network access capability.
                     * 
                     */
                    std::vector<std::string> GetIp6Addresses() const;

                    /**
                     * 设置IPv6 addresses that require the public network access capability.
                     * @param _ip6Addresses IPv6 addresses that require the public network access capability.
                     * 
                     */
                    void SetIp6Addresses(const std::vector<std::string>& _ip6Addresses);

                    /**
                     * 判断参数 Ip6Addresses 是否已赋值
                     * @return Ip6Addresses 是否已赋值
                     * 
                     */
                    bool Ip6AddressesHasBeenSet() const;

                    /**
                     * 获取Bandwidth, in Mbps. The default value is 1 Mbps.
                     * @return InternetMaxBandwidthOut Bandwidth, in Mbps. The default value is 1 Mbps.
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Bandwidth, in Mbps. The default value is 1 Mbps.
                     * @param _internetMaxBandwidthOut Bandwidth, in Mbps. The default value is 1 Mbps.
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Network billing mode. IPv6 addresses currently support "TRAFFIC_POSTPAID_BY_HOUR" and "BANDWIDTH_PACKAGE". The default network billing mode is "TRAFFIC_POSTPAID_BY_HOUR".
                     * @return InternetChargeType Network billing mode. IPv6 addresses currently support "TRAFFIC_POSTPAID_BY_HOUR" and "BANDWIDTH_PACKAGE". The default network billing mode is "TRAFFIC_POSTPAID_BY_HOUR".
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置Network billing mode. IPv6 addresses currently support "TRAFFIC_POSTPAID_BY_HOUR" and "BANDWIDTH_PACKAGE". The default network billing mode is "TRAFFIC_POSTPAID_BY_HOUR".
                     * @param _internetChargeType Network billing mode. IPv6 addresses currently support "TRAFFIC_POSTPAID_BY_HOUR" and "BANDWIDTH_PACKAGE". The default network billing mode is "TRAFFIC_POSTPAID_BY_HOUR".
                     * 
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     * 
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                    /**
                     * 获取Bandwidth package ID. This ID is required for standard accounts to add the IPv6 addresses to the bandwidth package, thus using the billing mode.
                     * @return BandwidthPackageId Bandwidth package ID. This ID is required for standard accounts to add the IPv6 addresses to the bandwidth package, thus using the billing mode.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置Bandwidth package ID. This ID is required for standard accounts to add the IPv6 addresses to the bandwidth package, thus using the billing mode.
                     * @param _bandwidthPackageId Bandwidth package ID. This ID is required for standard accounts to add the IPv6 addresses to the bandwidth package, thus using the billing mode.
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取List of tags to be associated.		
                     * @return Tags List of tags to be associated.		
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags to be associated.		
                     * @param _tags List of tags to be associated.		
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * IPv6 addresses that require the public network access capability.
                     */
                    std::vector<std::string> m_ip6Addresses;
                    bool m_ip6AddressesHasBeenSet;

                    /**
                     * Bandwidth, in Mbps. The default value is 1 Mbps.
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Network billing mode. IPv6 addresses currently support "TRAFFIC_POSTPAID_BY_HOUR" and "BANDWIDTH_PACKAGE". The default network billing mode is "TRAFFIC_POSTPAID_BY_HOUR".
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * Bandwidth package ID. This ID is required for standard accounts to add the IPv6 addresses to the bandwidth package, thus using the billing mode.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * List of tags to be associated.		
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEIP6ADDRESSESBANDWIDTHREQUEST_H_
