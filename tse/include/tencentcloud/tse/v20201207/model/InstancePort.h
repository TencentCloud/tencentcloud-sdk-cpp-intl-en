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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_INSTANCEPORT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_INSTANCEPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Instance listen port information
                */
                class InstancePort : public AbstractModel
                {
                public:
                    InstancePort();
                    ~InstancePort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Listen http port range.
                     * @return HttpPort Listen http port range.
                     * 
                     */
                    std::string GetHttpPort() const;

                    /**
                     * 设置Listen http port range.
                     * @param _httpPort Listen http port range.
                     * 
                     */
                    void SetHttpPort(const std::string& _httpPort);

                    /**
                     * 判断参数 HttpPort 是否已赋值
                     * @return HttpPort 是否已赋值
                     * 
                     */
                    bool HttpPortHasBeenSet() const;

                    /**
                     * 获取Listen port range for https.
                     * @return HttpsPort Listen port range for https.
                     * 
                     */
                    std::string GetHttpsPort() const;

                    /**
                     * 设置Listen port range for https.
                     * @param _httpsPort Listen port range for https.
                     * 
                     */
                    void SetHttpsPort(const std::string& _httpsPort);

                    /**
                     * 判断参数 HttpsPort 是否已赋值
                     * @return HttpsPort 是否已赋值
                     * 
                     */
                    bool HttpsPortHasBeenSet() const;

                    /**
                     * 获取Listen port range for tcp.
                     * @return TcpPort Listen port range for tcp.
                     * 
                     */
                    std::string GetTcpPort() const;

                    /**
                     * 设置Listen port range for tcp.
                     * @param _tcpPort Listen port range for tcp.
                     * 
                     */
                    void SetTcpPort(const std::string& _tcpPort);

                    /**
                     * 判断参数 TcpPort 是否已赋值
                     * @return TcpPort 是否已赋值
                     * 
                     */
                    bool TcpPortHasBeenSet() const;

                    /**
                     * 获取Listen udp port range.
                     * @return UdpPort Listen udp port range.
                     * 
                     */
                    std::string GetUdpPort() const;

                    /**
                     * 设置Listen udp port range.
                     * @param _udpPort Listen udp port range.
                     * 
                     */
                    void SetUdpPort(const std::string& _udpPort);

                    /**
                     * 判断参数 UdpPort 是否已赋值
                     * @return UdpPort 是否已赋值
                     * 
                     */
                    bool UdpPortHasBeenSet() const;

                private:

                    /**
                     * Listen http port range.
                     */
                    std::string m_httpPort;
                    bool m_httpPortHasBeenSet;

                    /**
                     * Listen port range for https.
                     */
                    std::string m_httpsPort;
                    bool m_httpsPortHasBeenSet;

                    /**
                     * Listen port range for tcp.
                     */
                    std::string m_tcpPort;
                    bool m_tcpPortHasBeenSet;

                    /**
                     * Listen udp port range.
                     */
                    std::string m_udpPort;
                    bool m_udpPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_INSTANCEPORT_H_
