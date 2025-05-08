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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONNECTION_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * RabbitMQ connection detail.
                */
                class RabbitMQConnection : public AbstractModel
                {
                public:
                    RabbitMQConnection();
                    ~RabbitMQConnection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Connection name.
                     * @return ConnectionName Connection name.
                     * 
                     */
                    std::string GetConnectionName() const;

                    /**
                     * 设置Connection name.
                     * @param _connectionName Connection name.
                     * 
                     */
                    void SetConnectionName(const std::string& _connectionName);

                    /**
                     * 判断参数 ConnectionName 是否已赋值
                     * @return ConnectionName 是否已赋值
                     * 
                     */
                    bool ConnectionNameHasBeenSet() const;

                    /**
                     * 获取Client IP
                     * @return PeerHost Client IP
                     * 
                     */
                    std::string GetPeerHost() const;

                    /**
                     * 设置Client IP
                     * @param _peerHost Client IP
                     * 
                     */
                    void SetPeerHost(const std::string& _peerHost);

                    /**
                     * 判断参数 PeerHost 是否已赋值
                     * @return PeerHost 是否已赋值
                     * 
                     */
                    bool PeerHostHasBeenSet() const;

                    /**
                     * 获取Specifies the connection status, including starting, tuning, opening, running, flow, blocking, blocked, closing, and closed.
                     * @return State Specifies the connection status, including starting, tuning, opening, running, flow, blocking, blocked, closing, and closed.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Specifies the connection status, including starting, tuning, opening, running, flow, blocking, blocked, closing, and closed.
                     * @param _state Specifies the connection status, including starting, tuning, opening, running, flow, blocking, blocked, closing, and closed.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取User that who has created this connection.
                     * @return User User that who has created this connection.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置User that who has created this connection.
                     * @param _user User that who has created this connection.
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Whether ssl is enabled.
                     * @return SSL Whether ssl is enabled.
                     * 
                     */
                    bool GetSSL() const;

                    /**
                     * 设置Whether ssl is enabled.
                     * @param _sSL Whether ssl is enabled.
                     * 
                     */
                    void SetSSL(const bool& _sSL);

                    /**
                     * 判断参数 SSL 是否已赋值
                     * @return SSL 是否已赋值
                     * 
                     */
                    bool SSLHasBeenSet() const;

                    /**
                     * 获取Connection protocol.
                     * @return Protocol Connection protocol.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Connection protocol.
                     * @param _protocol Connection protocol.
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
                     * 获取Specifies the number of channels under the connection.
                     * @return Channels Specifies the number of channels under the connection.
                     * 
                     */
                    int64_t GetChannels() const;

                    /**
                     * 设置Specifies the number of channels under the connection.
                     * @param _channels Specifies the number of channels under the connection.
                     * 
                     */
                    void SetChannels(const int64_t& _channels);

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     * 
                     */
                    bool ChannelsHasBeenSet() const;

                private:

                    /**
                     * Connection name.
                     */
                    std::string m_connectionName;
                    bool m_connectionNameHasBeenSet;

                    /**
                     * Client IP
                     */
                    std::string m_peerHost;
                    bool m_peerHostHasBeenSet;

                    /**
                     * Specifies the connection status, including starting, tuning, opening, running, flow, blocking, blocked, closing, and closed.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * User that who has created this connection.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Whether ssl is enabled.
                     */
                    bool m_sSL;
                    bool m_sSLHasBeenSet;

                    /**
                     * Connection protocol.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Specifies the number of channels under the connection.
                     */
                    int64_t m_channels;
                    bool m_channelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONNECTION_H_
