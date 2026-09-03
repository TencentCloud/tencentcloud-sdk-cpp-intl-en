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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_PODSSHINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_PODSSHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Information about Pod access over SSH.
                */
                class PodSSHInfo : public AbstractModel
                {
                public:
                    PodSSHInfo();
                    ~PodSSHInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP address of the Pod.
                     * @return Host IP address of the Pod.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置IP address of the Pod.
                     * @param _host IP address of the Pod.
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
                     * 获取SSH port of the Pod.
                     * @return Port SSH port of the Pod.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置SSH port of the Pod.
                     * @param _port SSH port of the Pod.
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
                     * 获取SSH access command.
                     * @return LoginCommand SSH access command.
                     * 
                     */
                    std::string GetLoginCommand() const;

                    /**
                     * 设置SSH access command.
                     * @param _loginCommand SSH access command.
                     * 
                     */
                    void SetLoginCommand(const std::string& _loginCommand);

                    /**
                     * 判断参数 LoginCommand 是否已赋值
                     * @return LoginCommand 是否已赋值
                     * 
                     */
                    bool LoginCommandHasBeenSet() const;

                private:

                    /**
                     * IP address of the Pod.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * SSH port of the Pod.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * SSH access command.
                     */
                    std::string m_loginCommand;
                    bool m_loginCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_PODSSHINFO_H_
