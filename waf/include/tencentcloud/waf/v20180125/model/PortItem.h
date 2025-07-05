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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_PORTITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_PORTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Protection domain port configuration information
                */
                class PortItem : public AbstractModel
                {
                public:
                    PortItem();
                    ~PortItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Listening Port Configuration
                     * @return Port Listening Port Configuration
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Listening Port Configuration
                     * @param _port Listening Port Configuration
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Corresponds one-to-one with ports, indicating the protocol associated with the port.
                     * @return Protocol Corresponds one-to-one with ports, indicating the protocol associated with the port.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Corresponds one-to-one with ports, indicating the protocol associated with the port.
                     * @param _protocol Corresponds one-to-one with ports, indicating the protocol associated with the port.
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
                     * 获取Corresponds one-to-one with port, indicates the origin port
                     * @return UpstreamPort Corresponds one-to-one with port, indicates the origin port
                     * 
                     */
                    std::string GetUpstreamPort() const;

                    /**
                     * 设置Corresponds one-to-one with port, indicates the origin port
                     * @param _upstreamPort Corresponds one-to-one with port, indicates the origin port
                     * 
                     */
                    void SetUpstreamPort(const std::string& _upstreamPort);

                    /**
                     * 判断参数 UpstreamPort 是否已赋值
                     * @return UpstreamPort 是否已赋值
                     * 
                     */
                    bool UpstreamPortHasBeenSet() const;

                    /**
                     * 获取Corresponds one-to-one with Port, indicating the origin protocol
                     * @return UpstreamProtocol Corresponds one-to-one with Port, indicating the origin protocol
                     * 
                     */
                    std::string GetUpstreamProtocol() const;

                    /**
                     * 设置Corresponds one-to-one with Port, indicating the origin protocol
                     * @param _upstreamProtocol Corresponds one-to-one with Port, indicating the origin protocol
                     * 
                     */
                    void SetUpstreamProtocol(const std::string& _upstreamProtocol);

                    /**
                     * 判断参数 UpstreamProtocol 是否已赋值
                     * @return UpstreamProtocol 是否已赋值
                     * 
                     */
                    bool UpstreamProtocolHasBeenSet() const;

                    /**
                     * 获取Nginx Server ID
                     * @return NginxServerId Nginx Server ID
                     * 
                     */
                    std::string GetNginxServerId() const;

                    /**
                     * 设置Nginx Server ID
                     * @param _nginxServerId Nginx Server ID
                     * 
                     */
                    void SetNginxServerId(const std::string& _nginxServerId);

                    /**
                     * 判断参数 NginxServerId 是否已赋值
                     * @return NginxServerId 是否已赋值
                     * 
                     */
                    bool NginxServerIdHasBeenSet() const;

                private:

                    /**
                     * Listening Port Configuration
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Corresponds one-to-one with ports, indicating the protocol associated with the port.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Corresponds one-to-one with port, indicates the origin port
                     */
                    std::string m_upstreamPort;
                    bool m_upstreamPortHasBeenSet;

                    /**
                     * Corresponds one-to-one with Port, indicating the origin protocol
                     */
                    std::string m_upstreamProtocol;
                    bool m_upstreamProtocolHasBeenSet;

                    /**
                     * Nginx Server ID
                     */
                    std::string m_nginxServerId;
                    bool m_nginxServerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_PORTITEM_H_
