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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_FORWARDIP_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_FORWARDIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * PrivateDNS outbound endpoint forwarding IP
                */
                class ForwardIp : public AbstractModel
                {
                public:
                    ForwardIp();
                    ~ForwardIp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Forwarding target IP network access type.
CLB: The forwarding IP is the internal CLB VIP.
CCN: Forwarding IP through CCN routing.
                     * @return AccessType Forwarding target IP network access type.
CLB: The forwarding IP is the internal CLB VIP.
CCN: Forwarding IP through CCN routing.
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置Forwarding target IP network access type.
CLB: The forwarding IP is the internal CLB VIP.
CCN: Forwarding IP through CCN routing.
                     * @param _accessType Forwarding target IP network access type.
CLB: The forwarding IP is the internal CLB VIP.
CCN: Forwarding IP through CCN routing.
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取Forwarding target IP address.
                     * @return Host Forwarding target IP address.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Forwarding target IP address.
                     * @param _host Forwarding target IP address.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Specifies the forwarding IP port number.
                     * @return Port Specifies the forwarding IP port number.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Specifies the forwarding IP port number.
                     * @param _port Specifies the forwarding IP port number.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Specifies the number of outbound endpoints.
Minimum 1, maximum 6.
                     * @return IpNum Specifies the number of outbound endpoints.
Minimum 1, maximum 6.
                     * 
                     */
                    int64_t GetIpNum() const;

                    /**
                     * 设置Specifies the number of outbound endpoints.
Minimum 1, maximum 6.
                     * @param _ipNum Specifies the number of outbound endpoints.
Minimum 1, maximum 6.
                     * 
                     */
                    void SetIpNum(const int64_t& _ipNum);

                    /**
                     * 判断参数 IpNum 是否已赋值
                     * @return IpNum 是否已赋值
                     * 
                     */
                    bool IpNumHasBeenSet() const;

                    /**
                     * 获取Unique VPC ID.
                     * @return VpcId Unique VPC ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unique VPC ID.
                     * @param _vpcId Unique VPC ID.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Unique subnet ID.
Required when the access type is CCN.
                     * @return SubnetId Unique subnet ID.
Required when the access type is CCN.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Unique subnet ID.
Required when the access type is CCN.
                     * @param _subnetId Unique subnet ID.
Required when the access type is CCN.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取ccn id
Required when the access type is CCN.
                     * @return AccessGatewayId ccn id
Required when the access type is CCN.
                     * 
                     */
                    std::string GetAccessGatewayId() const;

                    /**
                     * 设置ccn id
Required when the access type is CCN.
                     * @param _accessGatewayId ccn id
Required when the access type is CCN.
                     * 
                     */
                    void SetAccessGatewayId(const std::string& _accessGatewayId);

                    /**
                     * 判断参数 AccessGatewayId 是否已赋值
                     * @return AccessGatewayId 是否已赋值
                     * 
                     */
                    bool AccessGatewayIdHasBeenSet() const;

                private:

                    /**
                     * Forwarding target IP network access type.
CLB: The forwarding IP is the internal CLB VIP.
CCN: Forwarding IP through CCN routing.
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * Forwarding target IP address.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Specifies the forwarding IP port number.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Specifies the number of outbound endpoints.
Minimum 1, maximum 6.
                     */
                    int64_t m_ipNum;
                    bool m_ipNumHasBeenSet;

                    /**
                     * Unique VPC ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Unique subnet ID.
Required when the access type is CCN.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * ccn id
Required when the access type is CCN.
                     */
                    std::string m_accessGatewayId;
                    bool m_accessGatewayIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_FORWARDIP_H_
