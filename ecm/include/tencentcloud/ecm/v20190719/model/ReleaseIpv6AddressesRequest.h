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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_RELEASEIPV6ADDRESSESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_RELEASEIPV6ADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Ipv6Address.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ReleaseIpv6Addresses request structure.
                */
                class ReleaseIpv6AddressesRequest : public AbstractModel
                {
                public:
                    ReleaseIpv6AddressesRequest();
                    ~ReleaseIpv6AddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ECM region
                     * @return EcmRegion ECM region
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM region
                     * @param EcmRegion ECM region
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取ENI instance ID, such as `eni-m6dyj72l`.
                     * @return NetworkInterfaceId ENI instance ID, such as `eni-m6dyj72l`.
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置ENI instance ID, such as `eni-m6dyj72l`.
                     * @param NetworkInterfaceId ENI instance ID, such as `eni-m6dyj72l`.
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取List of the specified IPv6 addresses. You can specify up to 10 IPv6 addresses at a time.
                     * @return Ipv6Addresses List of the specified IPv6 addresses. You can specify up to 10 IPv6 addresses at a time.
                     */
                    std::vector<Ipv6Address> GetIpv6Addresses() const;

                    /**
                     * 设置List of the specified IPv6 addresses. You can specify up to 10 IPv6 addresses at a time.
                     * @param Ipv6Addresses List of the specified IPv6 addresses. You can specify up to 10 IPv6 addresses at a time.
                     */
                    void SetIpv6Addresses(const std::vector<Ipv6Address>& _ipv6Addresses);

                    /**
                     * 判断参数 Ipv6Addresses 是否已赋值
                     * @return Ipv6Addresses 是否已赋值
                     */
                    bool Ipv6AddressesHasBeenSet() const;

                private:

                    /**
                     * ECM region
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * ENI instance ID, such as `eni-m6dyj72l`.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * List of the specified IPv6 addresses. You can specify up to 10 IPv6 addresses at a time.
                     */
                    std::vector<Ipv6Address> m_ipv6Addresses;
                    bool m_ipv6AddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_RELEASEIPV6ADDRESSESREQUEST_H_
