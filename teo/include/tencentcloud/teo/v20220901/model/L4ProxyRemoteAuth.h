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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXYREMOTEAUTH_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXYREMOTEAUTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * L4 remote authentication information.
                */
                class L4ProxyRemoteAuth : public AbstractModel
                {
                public:
                    L4ProxyRemoteAuth();
                    ~L4ProxyRemoteAuth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable L4 remote authentication. Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>
                     * @return Switch Whether to enable L4 remote authentication. Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable L4 remote authentication. Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>
                     * @param _switch Whether to enable L4 remote authentication. Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Remote authentication service address, in the format of domain/ip:port, such as example.auth.com:8888.

                     * @return Address Remote authentication service address, in the format of domain/ip:port, such as example.auth.com:8888.

                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Remote authentication service address, in the format of domain/ip:port, such as example.auth.com:8888.

                     * @param _address Remote authentication service address, in the format of domain/ip:port, such as example.auth.com:8888.

                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Default origin-pull behavior based on L4 forwarding rules after the remote authentication service is disabled. Valid values:
<li>reject: Block and deny access;</li>
<li>allow: Allow access.</li>
                     * @return ServerFaultyBehavior Default origin-pull behavior based on L4 forwarding rules after the remote authentication service is disabled. Valid values:
<li>reject: Block and deny access;</li>
<li>allow: Allow access.</li>
                     * 
                     */
                    std::string GetServerFaultyBehavior() const;

                    /**
                     * 设置Default origin-pull behavior based on L4 forwarding rules after the remote authentication service is disabled. Valid values:
<li>reject: Block and deny access;</li>
<li>allow: Allow access.</li>
                     * @param _serverFaultyBehavior Default origin-pull behavior based on L4 forwarding rules after the remote authentication service is disabled. Valid values:
<li>reject: Block and deny access;</li>
<li>allow: Allow access.</li>
                     * 
                     */
                    void SetServerFaultyBehavior(const std::string& _serverFaultyBehavior);

                    /**
                     * 判断参数 ServerFaultyBehavior 是否已赋值
                     * @return ServerFaultyBehavior 是否已赋值
                     * 
                     */
                    bool ServerFaultyBehaviorHasBeenSet() const;

                private:

                    /**
                     * Whether to enable L4 remote authentication. Valid values:
<li>on: Enable;</li>
<li>off: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Remote authentication service address, in the format of domain/ip:port, such as example.auth.com:8888.

                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Default origin-pull behavior based on L4 forwarding rules after the remote authentication service is disabled. Valid values:
<li>reject: Block and deny access;</li>
<li>allow: Allow access.</li>
                     */
                    std::string m_serverFaultyBehavior;
                    bool m_serverFaultyBehaviorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXYREMOTEAUTH_H_
