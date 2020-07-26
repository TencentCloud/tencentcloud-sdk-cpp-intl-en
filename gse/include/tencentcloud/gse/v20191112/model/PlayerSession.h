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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERSESSION_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERSESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * Player session details
                */
                class PlayerSession : public AbstractModel
                {
                public:
                    PlayerSession();
                    ~PlayerSession() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Player session creation time
                     * @return CreationTime Player session creation time
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置Player session creation time
                     * @param CreationTime Player session creation time
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取ID of the DNS where the game server session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DnsName ID of the DNS where the game server session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDnsName() const;

                    /**
                     * 设置ID of the DNS where the game server session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DnsName ID of the DNS where the game server session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDnsName(const std::string& _dnsName);

                    /**
                     * 判断参数 DnsName 是否已赋值
                     * @return DnsName 是否已赋值
                     */
                    bool DnsNameHasBeenSet() const;

                    /**
                     * 获取Fleet ID
                     * @return FleetId Fleet ID
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置Fleet ID
                     * @param FleetId Fleet ID
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取Game server session ID
                     * @return GameServerSessionId Game server session ID
                     */
                    std::string GetGameServerSessionId() const;

                    /**
                     * 设置Game server session ID
                     * @param GameServerSessionId Game server session ID
                     */
                    void SetGameServerSessionId(const std::string& _gameServerSessionId);

                    /**
                     * 判断参数 GameServerSessionId 是否已赋值
                     * @return GameServerSessionId 是否已赋值
                     */
                    bool GameServerSessionIdHasBeenSet() const;

                    /**
                     * 获取Address of the CVM instance where the game server session is running
                     * @return IpAddress Address of the CVM instance where the game server session is running
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置Address of the CVM instance where the game server session is running
                     * @param IpAddress Address of the CVM instance where the game server session is running
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取Player information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PlayerData Player information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPlayerData() const;

                    /**
                     * 设置Player information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PlayerData Player information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPlayerData(const std::string& _playerData);

                    /**
                     * 判断参数 PlayerData 是否已赋值
                     * @return PlayerData 是否已赋值
                     */
                    bool PlayerDataHasBeenSet() const;

                    /**
                     * 获取Player ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PlayerId Player ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置Player ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PlayerId Player ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPlayerId(const std::string& _playerId);

                    /**
                     * 判断参数 PlayerId 是否已赋值
                     * @return PlayerId 是否已赋值
                     */
                    bool PlayerIdHasBeenSet() const;

                    /**
                     * 获取Player session ID
                     * @return PlayerSessionId Player session ID
                     */
                    std::string GetPlayerSessionId() const;

                    /**
                     * 设置Player session ID
                     * @param PlayerSessionId Player session ID
                     */
                    void SetPlayerSessionId(const std::string& _playerSessionId);

                    /**
                     * 判断参数 PlayerSessionId 是否已赋值
                     * @return PlayerSessionId 是否已赋值
                     */
                    bool PlayerSessionIdHasBeenSet() const;

                    /**
                     * 获取Port number
                     * @return Port Port number
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port number
                     * @param Port Port number
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Player session status
                     * @return Status Player session status
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Player session status
                     * @param Status Player session status
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Player session termination time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TerminationTime Player session termination time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTerminationTime() const;

                    /**
                     * 设置Player session termination time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TerminationTime Player session termination time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTerminationTime(const std::string& _terminationTime);

                    /**
                     * 判断参数 TerminationTime 是否已赋值
                     * @return TerminationTime 是否已赋值
                     */
                    bool TerminationTimeHasBeenSet() const;

                private:

                    /**
                     * Player session creation time
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * ID of the DNS where the game server session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dnsName;
                    bool m_dnsNameHasBeenSet;

                    /**
                     * Fleet ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * Game server session ID
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * Address of the CVM instance where the game server session is running
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * Player information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_playerData;
                    bool m_playerDataHasBeenSet;

                    /**
                     * Player ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                    /**
                     * Player session ID
                     */
                    std::string m_playerSessionId;
                    bool m_playerSessionIdHasBeenSet;

                    /**
                     * Port number
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Player session status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Player session termination time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_terminationTime;
                    bool m_terminationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERSESSION_H_
