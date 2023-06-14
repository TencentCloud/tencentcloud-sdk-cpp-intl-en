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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERNETWORK_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERNETWORK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Container network information
                */
                class ContainerNetwork : public AbstractModel
                {
                public:
                    ContainerNetwork();
                    ~ContainerNetwork() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Endpoint ID
                     * @return EndpointID Endpoint ID
                     * 
                     */
                    std::string GetEndpointID() const;

                    /**
                     * 设置Endpoint ID
                     * @param _endpointID Endpoint ID
                     * 
                     */
                    void SetEndpointID(const std::string& _endpointID);

                    /**
                     * 判断参数 EndpointID 是否已赋值
                     * @return EndpointID 是否已赋值
                     * 
                     */
                    bool EndpointIDHasBeenSet() const;

                    /**
                     * 获取Mode: `bridge`.
                     * @return Mode Mode: `bridge`.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Mode: `bridge`.
                     * @param _mode Mode: `bridge`.
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Network name
                     * @return Name Network name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Network name
                     * @param _name Network name
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
                     * 获取Network ID
                     * @return NetworkID Network ID
                     * 
                     */
                    std::string GetNetworkID() const;

                    /**
                     * 设置Network ID
                     * @param _networkID Network ID
                     * 
                     */
                    void SetNetworkID(const std::string& _networkID);

                    /**
                     * 判断参数 NetworkID 是否已赋值
                     * @return NetworkID 是否已赋值
                     * 
                     */
                    bool NetworkIDHasBeenSet() const;

                    /**
                     * 获取Gateway
                     * @return Gateway Gateway
                     * 
                     */
                    std::string GetGateway() const;

                    /**
                     * 设置Gateway
                     * @param _gateway Gateway
                     * 
                     */
                    void SetGateway(const std::string& _gateway);

                    /**
                     * 判断参数 Gateway 是否已赋值
                     * @return Gateway 是否已赋值
                     * 
                     */
                    bool GatewayHasBeenSet() const;

                    /**
                     * 获取IPv4 address
                     * @return Ipv4 IPv4 address
                     * 
                     */
                    std::string GetIpv4() const;

                    /**
                     * 设置IPv4 address
                     * @param _ipv4 IPv4 address
                     * 
                     */
                    void SetIpv4(const std::string& _ipv4);

                    /**
                     * 判断参数 Ipv4 是否已赋值
                     * @return Ipv4 是否已赋值
                     * 
                     */
                    bool Ipv4HasBeenSet() const;

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
                     * 获取MAC address
                     * @return MAC MAC address
                     * 
                     */
                    std::string GetMAC() const;

                    /**
                     * 设置MAC address
                     * @param _mAC MAC address
                     * 
                     */
                    void SetMAC(const std::string& _mAC);

                    /**
                     * 判断参数 MAC 是否已赋值
                     * @return MAC 是否已赋值
                     * 
                     */
                    bool MACHasBeenSet() const;

                private:

                    /**
                     * Endpoint ID
                     */
                    std::string m_endpointID;
                    bool m_endpointIDHasBeenSet;

                    /**
                     * Mode: `bridge`.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Network name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Network ID
                     */
                    std::string m_networkID;
                    bool m_networkIDHasBeenSet;

                    /**
                     * Gateway
                     */
                    std::string m_gateway;
                    bool m_gatewayHasBeenSet;

                    /**
                     * IPv4 address
                     */
                    std::string m_ipv4;
                    bool m_ipv4HasBeenSet;

                    /**
                     * IPv6 address
                     */
                    std::string m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * MAC address
                     */
                    std::string m_mAC;
                    bool m_mACHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERNETWORK_H_
