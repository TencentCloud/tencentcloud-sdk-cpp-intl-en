/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATEIPV6ADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATEIPV6ADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AssociateIPv6Address request structure.
                */
                class AssociateIPv6AddressRequest : public AbstractModel
                {
                public:
                    AssociateIPv6AddressRequest();
                    ~AssociateIPv6AddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the EIPv6, such as eipv6-11112222.
                     * @return IPv6AddressId Unique ID of the EIPv6, such as eipv6-11112222.
                     * 
                     */
                    std::string GetIPv6AddressId() const;

                    /**
                     * 设置Unique ID of the EIPv6, such as eipv6-11112222.
                     * @param _iPv6AddressId Unique ID of the EIPv6, such as eipv6-11112222.
                     * 
                     */
                    void SetIPv6AddressId(const std::string& _iPv6AddressId);

                    /**
                     * 判断参数 IPv6AddressId 是否已赋值
                     * @return IPv6AddressId 是否已赋值
                     * 
                     */
                    bool IPv6AddressIdHasBeenSet() const;

                    /**
                     * 获取ID of the ENI to be bound, such as eni-11112222. NetworkInterfaceId and InstanceId cannot be specified at the same time. The ENI ID can be queried by logging in to the console or obtained from the networkInterfaceId field in the returned value of the DescribeNetworkInterfaces API.
                     * @return NetworkInterfaceId ID of the ENI to be bound, such as eni-11112222. NetworkInterfaceId and InstanceId cannot be specified at the same time. The ENI ID can be queried by logging in to the console or obtained from the networkInterfaceId field in the returned value of the DescribeNetworkInterfaces API.
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置ID of the ENI to be bound, such as eni-11112222. NetworkInterfaceId and InstanceId cannot be specified at the same time. The ENI ID can be queried by logging in to the console or obtained from the networkInterfaceId field in the returned value of the DescribeNetworkInterfaces API.
                     * @param _networkInterfaceId ID of the ENI to be bound, such as eni-11112222. NetworkInterfaceId and InstanceId cannot be specified at the same time. The ENI ID can be queried by logging in to the console or obtained from the networkInterfaceId field in the returned value of the DescribeNetworkInterfaces API.
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
                     * 获取Private IPv6 to be bound. If NetworkInterfaceId is specified, PrivateIPv6Address must also be specified, which indicates that the EIP will be bound to the specified private IPv6 of the specified ENI. At the same time, it shall be ensured that the specified PrivateIPv6Address is a private IPv6 on the specified NetworkInterfaceId. The specified ENI's private IPv6 can be queried by logging in to the console or obtained from the Ipv6AddressSet.Address field in the returned value of the DescribeNetworkInterfaces API.
                     * @return PrivateIPv6Address Private IPv6 to be bound. If NetworkInterfaceId is specified, PrivateIPv6Address must also be specified, which indicates that the EIP will be bound to the specified private IPv6 of the specified ENI. At the same time, it shall be ensured that the specified PrivateIPv6Address is a private IPv6 on the specified NetworkInterfaceId. The specified ENI's private IPv6 can be queried by logging in to the console or obtained from the Ipv6AddressSet.Address field in the returned value of the DescribeNetworkInterfaces API.
                     * 
                     */
                    std::string GetPrivateIPv6Address() const;

                    /**
                     * 设置Private IPv6 to be bound. If NetworkInterfaceId is specified, PrivateIPv6Address must also be specified, which indicates that the EIP will be bound to the specified private IPv6 of the specified ENI. At the same time, it shall be ensured that the specified PrivateIPv6Address is a private IPv6 on the specified NetworkInterfaceId. The specified ENI's private IPv6 can be queried by logging in to the console or obtained from the Ipv6AddressSet.Address field in the returned value of the DescribeNetworkInterfaces API.
                     * @param _privateIPv6Address Private IPv6 to be bound. If NetworkInterfaceId is specified, PrivateIPv6Address must also be specified, which indicates that the EIP will be bound to the specified private IPv6 of the specified ENI. At the same time, it shall be ensured that the specified PrivateIPv6Address is a private IPv6 on the specified NetworkInterfaceId. The specified ENI's private IPv6 can be queried by logging in to the console or obtained from the Ipv6AddressSet.Address field in the returned value of the DescribeNetworkInterfaces API.
                     * 
                     */
                    void SetPrivateIPv6Address(const std::string& _privateIPv6Address);

                    /**
                     * 判断参数 PrivateIPv6Address 是否已赋值
                     * @return PrivateIPv6Address 是否已赋值
                     * 
                     */
                    bool PrivateIPv6AddressHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the EIPv6, such as eipv6-11112222.
                     */
                    std::string m_iPv6AddressId;
                    bool m_iPv6AddressIdHasBeenSet;

                    /**
                     * ID of the ENI to be bound, such as eni-11112222. NetworkInterfaceId and InstanceId cannot be specified at the same time. The ENI ID can be queried by logging in to the console or obtained from the networkInterfaceId field in the returned value of the DescribeNetworkInterfaces API.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * Private IPv6 to be bound. If NetworkInterfaceId is specified, PrivateIPv6Address must also be specified, which indicates that the EIP will be bound to the specified private IPv6 of the specified ENI. At the same time, it shall be ensured that the specified PrivateIPv6Address is a private IPv6 on the specified NetworkInterfaceId. The specified ENI's private IPv6 can be queried by logging in to the console or obtained from the Ipv6AddressSet.Address field in the returned value of the DescribeNetworkInterfaces API.
                     */
                    std::string m_privateIPv6Address;
                    bool m_privateIPv6AddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATEIPV6ADDRESSREQUEST_H_
