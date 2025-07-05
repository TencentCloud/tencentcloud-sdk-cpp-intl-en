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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_PORTMAPPING_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_PORTMAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * Service port mapping
                */
                class PortMapping : public AbstractModel
                {
                public:
                    PortMapping();
                    ~PortMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Port.
                     * @return Port Port.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port.
                     * @param _port Port.
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
                     * 获取Mapped port.
                     * @return TargetPort Mapped port.
                     * 
                     */
                    int64_t GetTargetPort() const;

                    /**
                     * 设置Mapped port.
                     * @param _targetPort Mapped port.
                     * 
                     */
                    void SetTargetPort(const int64_t& _targetPort);

                    /**
                     * 判断参数 TargetPort 是否已赋值
                     * @return TargetPort 是否已赋值
                     * 
                     */
                    bool TargetPortHasBeenSet() const;

                    /**
                     * 获取TCP/UDP protocol stack.
                     * @return Protocol TCP/UDP protocol stack.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置TCP/UDP protocol stack.
                     * @param _protocol TCP/UDP protocol stack.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * Port.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Mapped port.
                     */
                    int64_t m_targetPort;
                    bool m_targetPortHasBeenSet;

                    /**
                     * TCP/UDP protocol stack.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_PORTMAPPING_H_
