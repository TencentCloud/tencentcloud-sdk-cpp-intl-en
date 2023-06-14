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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIPV6ADDRESSESATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIPV6ADDRESSESATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Ipv6Address.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyIpv6AddressesAttribute request structure.
                */
                class ModifyIpv6AddressesAttributeRequest : public AbstractModel
                {
                public:
                    ModifyIpv6AddressesAttributeRequest();
                    ~ModifyIpv6AddressesAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The `ID` of the ENI instance, such as `eni-m6dyj72l`.
                     * @return NetworkInterfaceId The `ID` of the ENI instance, such as `eni-m6dyj72l`.
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置The `ID` of the ENI instance, such as `eni-m6dyj72l`.
                     * @param _networkInterfaceId The `ID` of the ENI instance, such as `eni-m6dyj72l`.
                     * 
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取The information of the specified private `IPv6` addresses.
                     * @return Ipv6Addresses The information of the specified private `IPv6` addresses.
                     * 
                     */
                    std::vector<Ipv6Address> GetIpv6Addresses() const;

                    /**
                     * 设置The information of the specified private `IPv6` addresses.
                     * @param _ipv6Addresses The information of the specified private `IPv6` addresses.
                     * 
                     */
                    void SetIpv6Addresses(const std::vector<Ipv6Address>& _ipv6Addresses);

                    /**
                     * 判断参数 Ipv6Addresses 是否已赋值
                     * @return Ipv6Addresses 是否已赋值
                     * 
                     */
                    bool Ipv6AddressesHasBeenSet() const;

                private:

                    /**
                     * The `ID` of the ENI instance, such as `eni-m6dyj72l`.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * The information of the specified private `IPv6` addresses.
                     */
                    std::vector<Ipv6Address> m_ipv6Addresses;
                    bool m_ipv6AddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIPV6ADDRESSESATTRIBUTEREQUEST_H_
