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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTCLIENTINFO_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTCLIENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/MQTTClientSubscription.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * MQTT client information.
                */
                class MQTTClientInfo : public AbstractModel
                {
                public:
                    MQTTClientInfo();
                    ~MQTTClientInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client ID
                     * @return ClientId Client ID
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置Client ID
                     * @param _clientId Client ID
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取Client network address.
                     * @return ClientAddress Client network address.
                     * 
                     */
                    std::string GetClientAddress() const;

                    /**
                     * 设置Client network address.
                     * @param _clientAddress Client network address.
                     * 
                     */
                    void SetClientAddress(const std::string& _clientAddress);

                    /**
                     * 判断参数 ClientAddress 是否已赋值
                     * @return ClientAddress 是否已赋值
                     * 
                     */
                    bool ClientAddressHasBeenSet() const;

                    /**
                     * 获取MQTT protocol version.
3: indicates MQTT version 3.1.
4: indicates MQTT 3.1.1.
5: indicates the MQTT 5.0 protocol.
                     * @return ProtocolVersion MQTT protocol version.
3: indicates MQTT version 3.1.
4: indicates MQTT 3.1.1.
5: indicates the MQTT 5.0 protocol.
                     * 
                     */
                    int64_t GetProtocolVersion() const;

                    /**
                     * 设置MQTT protocol version.
3: indicates MQTT version 3.1.
4: indicates MQTT 3.1.1.
5: indicates the MQTT 5.0 protocol.
                     * @param _protocolVersion MQTT protocol version.
3: indicates MQTT version 3.1.
4: indicates MQTT 3.1.1.
5: indicates the MQTT 5.0 protocol.
                     * 
                     */
                    void SetProtocolVersion(const int64_t& _protocolVersion);

                    /**
                     * 判断参数 ProtocolVersion 是否已赋值
                     * @return ProtocolVersion 是否已赋值
                     * 
                     */
                    bool ProtocolVersionHasBeenSet() const;

                    /**
                     * 获取Keep-alive duration. Unit: second.
                     * @return Keepalive Keep-alive duration. Unit: second.
                     * 
                     */
                    int64_t GetKeepalive() const;

                    /**
                     * 设置Keep-alive duration. Unit: second.
                     * @param _keepalive Keep-alive duration. Unit: second.
                     * 
                     */
                    void SetKeepalive(const int64_t& _keepalive);

                    /**
                     * 判断参数 Keepalive 是否已赋值
                     * @return Keepalive 是否已赋值
                     * 
                     */
                    bool KeepaliveHasBeenSet() const;

                    /**
                     * 获取Connection status. CONNECTED: connected; DISCONNECTED: not connected.
                     * @return ConnectionStatus Connection status. CONNECTED: connected; DISCONNECTED: not connected.
                     * 
                     */
                    std::string GetConnectionStatus() const;

                    /**
                     * 设置Connection status. CONNECTED: connected; DISCONNECTED: not connected.
                     * @param _connectionStatus Connection status. CONNECTED: connected; DISCONNECTED: not connected.
                     * 
                     */
                    void SetConnectionStatus(const std::string& _connectionStatus);

                    /**
                     * 判断参数 ConnectionStatus 是否已赋值
                     * @return ConnectionStatus 是否已赋值
                     * 
                     */
                    bool ConnectionStatusHasBeenSet() const;

                    /**
                     * 获取Client creation time. millisecond-level timestamp.
                     * @return CreateTime Client creation time. millisecond-level timestamp.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Client creation time. millisecond-level timestamp.
                     * @param _createTime Client creation time. millisecond-level timestamp.
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last connection establishment time. millisecond-level timestamp.
                     * @return ConnectTime Last connection establishment time. millisecond-level timestamp.
                     * 
                     */
                    int64_t GetConnectTime() const;

                    /**
                     * 设置Last connection establishment time. millisecond-level timestamp.
                     * @param _connectTime Last connection establishment time. millisecond-level timestamp.
                     * 
                     */
                    void SetConnectTime(const int64_t& _connectTime);

                    /**
                     * 判断参数 ConnectTime 是否已赋值
                     * @return ConnectTime 是否已赋值
                     * 
                     */
                    bool ConnectTimeHasBeenSet() const;

                    /**
                     * 获取Last disconnection time, only applicable to persistent sessions (cleanSession=false) and when the client is currently disconnected, millisecond-level timestamp.
                     * @return DisconnectTime Last disconnection time, only applicable to persistent sessions (cleanSession=false) and when the client is currently disconnected, millisecond-level timestamp.
                     * 
                     */
                    int64_t GetDisconnectTime() const;

                    /**
                     * 设置Last disconnection time, only applicable to persistent sessions (cleanSession=false) and when the client is currently disconnected, millisecond-level timestamp.
                     * @param _disconnectTime Last disconnection time, only applicable to persistent sessions (cleanSession=false) and when the client is currently disconnected, millisecond-level timestamp.
                     * 
                     */
                    void SetDisconnectTime(const int64_t& _disconnectTime);

                    /**
                     * 判断参数 DisconnectTime 是否已赋值
                     * @return DisconnectTime 是否已赋值
                     * 
                     */
                    bool DisconnectTimeHasBeenSet() const;

                    /**
                     * 获取Client subscription list.
                     * @return MQTTClientSubscriptions Client subscription list.
                     * 
                     */
                    std::vector<MQTTClientSubscription> GetMQTTClientSubscriptions() const;

                    /**
                     * 设置Client subscription list.
                     * @param _mQTTClientSubscriptions Client subscription list.
                     * 
                     */
                    void SetMQTTClientSubscriptions(const std::vector<MQTTClientSubscription>& _mQTTClientSubscriptions);

                    /**
                     * 判断参数 MQTTClientSubscriptions 是否已赋值
                     * @return MQTTClientSubscriptions 是否已赋值
                     * 
                     */
                    bool MQTTClientSubscriptionsHasBeenSet() const;

                private:

                    /**
                     * Client ID
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Client network address.
                     */
                    std::string m_clientAddress;
                    bool m_clientAddressHasBeenSet;

                    /**
                     * MQTT protocol version.
3: indicates MQTT version 3.1.
4: indicates MQTT 3.1.1.
5: indicates the MQTT 5.0 protocol.
                     */
                    int64_t m_protocolVersion;
                    bool m_protocolVersionHasBeenSet;

                    /**
                     * Keep-alive duration. Unit: second.
                     */
                    int64_t m_keepalive;
                    bool m_keepaliveHasBeenSet;

                    /**
                     * Connection status. CONNECTED: connected; DISCONNECTED: not connected.
                     */
                    std::string m_connectionStatus;
                    bool m_connectionStatusHasBeenSet;

                    /**
                     * Client creation time. millisecond-level timestamp.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last connection establishment time. millisecond-level timestamp.
                     */
                    int64_t m_connectTime;
                    bool m_connectTimeHasBeenSet;

                    /**
                     * Last disconnection time, only applicable to persistent sessions (cleanSession=false) and when the client is currently disconnected, millisecond-level timestamp.
                     */
                    int64_t m_disconnectTime;
                    bool m_disconnectTimeHasBeenSet;

                    /**
                     * Client subscription list.
                     */
                    std::vector<MQTTClientSubscription> m_mQTTClientSubscriptions;
                    bool m_mQTTClientSubscriptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTCLIENTINFO_H_
