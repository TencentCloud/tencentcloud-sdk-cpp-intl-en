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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DOWNLOADCUSTOMERGATEWAYCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DOWNLOADCUSTOMERGATEWAYCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CustomerGatewayVendor.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DownloadCustomerGatewayConfiguration request structure.
                */
                class DownloadCustomerGatewayConfigurationRequest : public AbstractModel
                {
                public:
                    DownloadCustomerGatewayConfigurationRequest();
                    ~DownloadCustomerGatewayConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the VPN gateway instance.
                     * @return VpnGatewayId The ID of the VPN gateway instance.
                     * 
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置The ID of the VPN gateway instance.
                     * @param _vpnGatewayId The ID of the VPN gateway instance.
                     * 
                     */
                    void SetVpnGatewayId(const std::string& _vpnGatewayId);

                    /**
                     * 判断参数 VpnGatewayId 是否已赋值
                     * @return VpnGatewayId 是否已赋值
                     * 
                     */
                    bool VpnGatewayIdHasBeenSet() const;

                    /**
                     * 获取The ID of the VPN tunnel instance, such as `vpnx-f49l6u0z`.
                     * @return VpnConnectionId The ID of the VPN tunnel instance, such as `vpnx-f49l6u0z`.
                     * 
                     */
                    std::string GetVpnConnectionId() const;

                    /**
                     * 设置The ID of the VPN tunnel instance, such as `vpnx-f49l6u0z`.
                     * @param _vpnConnectionId The ID of the VPN tunnel instance, such as `vpnx-f49l6u0z`.
                     * 
                     */
                    void SetVpnConnectionId(const std::string& _vpnConnectionId);

                    /**
                     * 判断参数 VpnConnectionId 是否已赋值
                     * @return VpnConnectionId 是否已赋值
                     * 
                     */
                    bool VpnConnectionIdHasBeenSet() const;

                    /**
                     * 获取Customer gateway vendor information object, which can be obtained through DescribeCustomerGatewayVendors.
                     * @return CustomerGatewayVendor Customer gateway vendor information object, which can be obtained through DescribeCustomerGatewayVendors.
                     * 
                     */
                    CustomerGatewayVendor GetCustomerGatewayVendor() const;

                    /**
                     * 设置Customer gateway vendor information object, which can be obtained through DescribeCustomerGatewayVendors.
                     * @param _customerGatewayVendor Customer gateway vendor information object, which can be obtained through DescribeCustomerGatewayVendors.
                     * 
                     */
                    void SetCustomerGatewayVendor(const CustomerGatewayVendor& _customerGatewayVendor);

                    /**
                     * 判断参数 CustomerGatewayVendor 是否已赋值
                     * @return CustomerGatewayVendor 是否已赋值
                     * 
                     */
                    bool CustomerGatewayVendorHasBeenSet() const;

                    /**
                     * 获取Name of the physical API for tunnel access device.
                     * @return InterfaceName Name of the physical API for tunnel access device.
                     * 
                     */
                    std::string GetInterfaceName() const;

                    /**
                     * 设置Name of the physical API for tunnel access device.
                     * @param _interfaceName Name of the physical API for tunnel access device.
                     * 
                     */
                    void SetInterfaceName(const std::string& _interfaceName);

                    /**
                     * 判断参数 InterfaceName 是否已赋值
                     * @return InterfaceName 是否已赋值
                     * 
                     */
                    bool InterfaceNameHasBeenSet() const;

                private:

                    /**
                     * The ID of the VPN gateway instance.
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * The ID of the VPN tunnel instance, such as `vpnx-f49l6u0z`.
                     */
                    std::string m_vpnConnectionId;
                    bool m_vpnConnectionIdHasBeenSet;

                    /**
                     * Customer gateway vendor information object, which can be obtained through DescribeCustomerGatewayVendors.
                     */
                    CustomerGatewayVendor m_customerGatewayVendor;
                    bool m_customerGatewayVendorHasBeenSet;

                    /**
                     * Name of the physical API for tunnel access device.
                     */
                    std::string m_interfaceName;
                    bool m_interfaceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DOWNLOADCUSTOMERGATEWAYCONFIGURATIONREQUEST_H_
