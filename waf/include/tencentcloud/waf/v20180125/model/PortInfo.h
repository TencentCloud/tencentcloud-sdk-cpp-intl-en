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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_PORTINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_PORTINFO_H_

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
                * Service port configuration
                */
                class PortInfo : public AbstractModel
                {
                public:
                    PortInfo();
                    ~PortInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Nginx Server ID
                     * @return NginxServerId Nginx Server ID
                     * 
                     */
                    uint64_t GetNginxServerId() const;

                    /**
                     * 设置Nginx Server ID
                     * @param _nginxServerId Nginx Server ID
                     * 
                     */
                    void SetNginxServerId(const uint64_t& _nginxServerId);

                    /**
                     * 判断参数 NginxServerId 是否已赋值
                     * @return NginxServerId 是否已赋值
                     * 
                     */
                    bool NginxServerIdHasBeenSet() const;

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
                     * 获取Protocol Corresponding to the Port
                     * @return Protocol Protocol Corresponding to the Port
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol Corresponding to the Port
                     * @param _protocol Protocol Corresponding to the Port
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
                     * 获取Origin-pull port
                     * @return UpstreamPort Origin-pull port
                     * 
                     */
                    std::string GetUpstreamPort() const;

                    /**
                     * 设置Origin-pull port
                     * @param _upstreamPort Origin-pull port
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
                     * 获取Origin-pull protocol
                     * @return UpstreamProtocol Origin-pull protocol
                     * 
                     */
                    std::string GetUpstreamProtocol() const;

                    /**
                     * 设置Origin-pull protocol
                     * @param _upstreamProtocol Origin-pull protocol
                     * 
                     */
                    void SetUpstreamProtocol(const std::string& _upstreamProtocol);

                    /**
                     * 判断参数 UpstreamProtocol 是否已赋值
                     * @return UpstreamProtocol 是否已赋值
                     * 
                     */
                    bool UpstreamProtocolHasBeenSet() const;

                private:

                    /**
                     * Nginx Server ID
                     */
                    uint64_t m_nginxServerId;
                    bool m_nginxServerIdHasBeenSet;

                    /**
                     * Listening Port Configuration
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Protocol Corresponding to the Port
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Origin-pull port
                     */
                    std::string m_upstreamPort;
                    bool m_upstreamPortHasBeenSet;

                    /**
                     * Origin-pull protocol
                     */
                    std::string m_upstreamProtocol;
                    bool m_upstreamProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_PORTINFO_H_
