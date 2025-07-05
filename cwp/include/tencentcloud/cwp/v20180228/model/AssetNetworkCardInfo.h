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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETNETWORKCARDINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETNETWORKCARDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Asset management network interface information
                */
                class AssetNetworkCardInfo : public AbstractModel
                {
                public:
                    AssetNetworkCardInfo();
                    ~AssetNetworkCardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network interface name
                     * @return Name Network interface name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Network interface name
                     * @param _name Network interface name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取IPv4 address
                     * @return Ip IPv4 address
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IPv4 address
                     * @param _ip IPv4 address
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Gateway
                     * @return GateWay Gateway
                     * 
                     */
                    std::string GetGateWay() const;

                    /**
                     * 设置Gateway
                     * @param _gateWay Gateway
                     * 
                     */
                    void SetGateWay(const std::string& _gateWay);

                    /**
                     * 判断参数 GateWay 是否已赋值
                     * @return GateWay 是否已赋值
                     * 
                     */
                    bool GateWayHasBeenSet() const;

                    /**
                     * 获取MAC address
                     * @return Mac MAC address
                     * 
                     */
                    std::string GetMac() const;

                    /**
                     * 设置MAC address
                     * @param _mac MAC address
                     * 
                     */
                    void SetMac(const std::string& _mac);

                    /**
                     * 判断参数 Mac 是否已赋值
                     * @return Mac 是否已赋值
                     * 
                     */
                    bool MacHasBeenSet() const;

                    /**
                     * 获取IPv6 address
                     * @return Ipv6 IPv6 address
                     * 
                     */
                    std::string GetIpv6() const;

                    /**
                     * 设置IPv6 address
                     * @param _ipv6 IPv6 address
                     * 
                     */
                    void SetIpv6(const std::string& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     * 
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取DNS server
                     * @return DnsServer DNS server
                     * 
                     */
                    std::string GetDnsServer() const;

                    /**
                     * 设置DNS server
                     * @param _dnsServer DNS server
                     * 
                     */
                    void SetDnsServer(const std::string& _dnsServer);

                    /**
                     * 判断参数 DnsServer 是否已赋值
                     * @return DnsServer 是否已赋值
                     * 
                     */
                    bool DnsServerHasBeenSet() const;

                private:

                    /**
                     * Network interface name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * IPv4 address
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Gateway
                     */
                    std::string m_gateWay;
                    bool m_gateWayHasBeenSet;

                    /**
                     * MAC address
                     */
                    std::string m_mac;
                    bool m_macHasBeenSet;

                    /**
                     * IPv6 address
                     */
                    std::string m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * DNS server
                     */
                    std::string m_dnsServer;
                    bool m_dnsServerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETNETWORKCARDINFO_H_
