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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_PORTDETECTINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_PORTDETECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Port detection information
                */
                class PortDetectInfo : public AbstractModel
                {
                public:
                    PortDetectInfo();
                    ~PortDetectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host address (ip or domain name)
                     * @return Host Host address (ip or domain name)
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host address (ip or domain name)
                     * @param _host Host address (ip or domain name)
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
                     * 获取Port.
                     * @return Port Port.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port.
                     * @param _port Port.
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Protocol
                     * @return Protocol Protocol
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol
                     * @param _protocol Protocol
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
                     * 获取Status.
                     * @return Status Status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status.
                     * @param _status Status.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Last discovery time
                     * @return UpdateTime Last discovery time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last discovery time
                     * @param _updateTime Last discovery time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Host address (ip or domain name)
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Port.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Protocol
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Last discovery time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_PORTDETECTINFO_H_
