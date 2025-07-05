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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTOCOLPORT_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTOCOLPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * "Protocol" and "Port" parameters
                */
                class ProtocolPort : public AbstractModel
                {
                public:
                    ProtocolPort();
                    ~ProtocolPort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Protocol. Valid values: `tcp`, `udp`
                     * @return Protocol Protocol. Valid values: `tcp`, `udp`
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. Valid values: `tcp`, `udp`
                     * @param _protocol Protocol. Valid values: `tcp`, `udp`
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
                     * 获取Port
                     * @return Port Port
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port
                     * @param _port Port
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * Protocol. Valid values: `tcp`, `udp`
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Port
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTOCOLPORT_H_
