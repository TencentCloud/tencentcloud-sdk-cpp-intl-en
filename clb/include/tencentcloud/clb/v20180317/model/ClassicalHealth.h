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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALHEALTH_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALHEALTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Real server health status of a classic CLB
                */
                class ClassicalHealth : public AbstractModel
                {
                public:
                    ClassicalHealth();
                    ~ClassicalHealth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Private IP of a real server
                     * @return IP Private IP of a real server
                     */
                    std::string GetIP() const;

                    /**
                     * 设置Private IP of a real server
                     * @param IP Private IP of a real server
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取Real server port
                     * @return Port Real server port
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Real server port
                     * @param Port Real server port
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取CLB listener port
                     * @return ListenerPort CLB listener port
                     */
                    int64_t GetListenerPort() const;

                    /**
                     * 设置CLB listener port
                     * @param ListenerPort CLB listener port
                     */
                    void SetListenerPort(const int64_t& _listenerPort);

                    /**
                     * 判断参数 ListenerPort 是否已赋值
                     * @return ListenerPort 是否已赋值
                     */
                    bool ListenerPortHasBeenSet() const;

                    /**
                     * 获取Forwarding protocol
                     * @return Protocol Forwarding protocol
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Forwarding protocol
                     * @param Protocol Forwarding protocol
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Health check result. Value range: 1 (healthy), 0 (unhealthy)
                     * @return HealthStatus Health check result. Value range: 1 (healthy), 0 (unhealthy)
                     */
                    int64_t GetHealthStatus() const;

                    /**
                     * 设置Health check result. Value range: 1 (healthy), 0 (unhealthy)
                     * @param HealthStatus Health check result. Value range: 1 (healthy), 0 (unhealthy)
                     */
                    void SetHealthStatus(const int64_t& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     */
                    bool HealthStatusHasBeenSet() const;

                private:

                    /**
                     * Private IP of a real server
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Real server port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * CLB listener port
                     */
                    int64_t m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * Forwarding protocol
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Health check result. Value range: 1 (healthy), 0 (unhealthy)
                     */
                    int64_t m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALHEALTH_H_
