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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSIONPLACEMENT_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSIONPLACEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/PlayerLatency.h>
#include <tencentcloud/gse/v20191112/model/GameProperty.h>
#include <tencentcloud/gse/v20191112/model/PlacedPlayerSession.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * Game session deployment object
                */
                class GameServerSessionPlacement : public AbstractModel
                {
                public:
                    GameServerSessionPlacement();
                    ~GameServerSessionPlacement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Deployment ID
                     * @return PlacementId Deployment ID
                     */
                    std::string GetPlacementId() const;

                    /**
                     * 设置Deployment ID
                     * @param PlacementId Deployment ID
                     */
                    void SetPlacementId(const std::string& _placementId);

                    /**
                     * 判断参数 PlacementId 是否已赋值
                     * @return PlacementId 是否已赋值
                     */
                    bool PlacementIdHasBeenSet() const;

                    /**
                     * 获取Service deployment group name
                     * @return GameServerSessionQueueName Service deployment group name
                     */
                    std::string GetGameServerSessionQueueName() const;

                    /**
                     * 设置Service deployment group name
                     * @param GameServerSessionQueueName Service deployment group name
                     */
                    void SetGameServerSessionQueueName(const std::string& _gameServerSessionQueueName);

                    /**
                     * 判断参数 GameServerSessionQueueName 是否已赋值
                     * @return GameServerSessionQueueName 是否已赋值
                     */
                    bool GameServerSessionQueueNameHasBeenSet() const;

                    /**
                     * 获取Player latency
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PlayerLatencies Player latency
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PlayerLatency> GetPlayerLatencies() const;

                    /**
                     * 设置Player latency
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PlayerLatencies Player latency
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPlayerLatencies(const std::vector<PlayerLatency>& _playerLatencies);

                    /**
                     * 判断参数 PlayerLatencies 是否已赋值
                     * @return PlayerLatencies 是否已赋值
                     */
                    bool PlayerLatenciesHasBeenSet() const;

                    /**
                     * 获取Service deployment status
                     * @return Status Service deployment status
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Service deployment status
                     * @param Status Service deployment status
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取DNS ID assigned to the instance where the game session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DnsName DNS ID assigned to the instance where the game session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDnsName() const;

                    /**
                     * 设置DNS ID assigned to the instance where the game session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DnsName DNS ID assigned to the instance where the game session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDnsName(const std::string& _dnsName);

                    /**
                     * 判断参数 DnsName 是否已赋值
                     * @return DnsName 是否已赋值
                     */
                    bool DnsNameHasBeenSet() const;

                    /**
                     * 获取Game session ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return GameServerSessionId Game session ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetGameServerSessionId() const;

                    /**
                     * 设置Game session ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param GameServerSessionId Game session ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGameServerSessionId(const std::string& _gameServerSessionId);

                    /**
                     * 判断参数 GameServerSessionId 是否已赋值
                     * @return GameServerSessionId 是否已赋值
                     */
                    bool GameServerSessionIdHasBeenSet() const;

                    /**
                     * 获取Game session name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return GameServerSessionName Game session name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetGameServerSessionName() const;

                    /**
                     * 设置Game session name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param GameServerSessionName Game session name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGameServerSessionName(const std::string& _gameServerSessionName);

                    /**
                     * 判断参数 GameServerSessionName 是否已赋值
                     * @return GameServerSessionName 是否已赋值
                     */
                    bool GameServerSessionNameHasBeenSet() const;

                    /**
                     * 获取Service deployment region
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return GameServerSessionRegion Service deployment region
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetGameServerSessionRegion() const;

                    /**
                     * 设置Service deployment region
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param GameServerSessionRegion Service deployment region
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGameServerSessionRegion(const std::string& _gameServerSessionRegion);

                    /**
                     * 判断参数 GameServerSessionRegion 是否已赋值
                     * @return GameServerSessionRegion 是否已赋值
                     */
                    bool GameServerSessionRegionHasBeenSet() const;

                    /**
                     * 获取Game attributes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return GameProperties Game attributes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<GameProperty> GetGameProperties() const;

                    /**
                     * 设置Game attributes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param GameProperties Game attributes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGameProperties(const std::vector<GameProperty>& _gameProperties);

                    /**
                     * 判断参数 GameProperties 是否已赋值
                     * @return GameProperties 是否已赋值
                     */
                    bool GamePropertiesHasBeenSet() const;

                    /**
                     * 获取The maximum number of players that can be connected simultaneously to the game session. It should a value between 1 to the maximum number of player sessions.
                     * @return MaximumPlayerSessionCount The maximum number of players that can be connected simultaneously to the game session. It should a value between 1 to the maximum number of player sessions.
                     */
                    uint64_t GetMaximumPlayerSessionCount() const;

                    /**
                     * 设置The maximum number of players that can be connected simultaneously to the game session. It should a value between 1 to the maximum number of player sessions.
                     * @param MaximumPlayerSessionCount The maximum number of players that can be connected simultaneously to the game session. It should a value between 1 to the maximum number of player sessions.
                     */
                    void SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount);

                    /**
                     * 判断参数 MaximumPlayerSessionCount 是否已赋值
                     * @return MaximumPlayerSessionCount 是否已赋值
                     */
                    bool MaximumPlayerSessionCountHasBeenSet() const;

                    /**
                     * 获取Game session data
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return GameServerSessionData Game session data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetGameServerSessionData() const;

                    /**
                     * 设置Game session data
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param GameServerSessionData Game session data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGameServerSessionData(const std::string& _gameServerSessionData);

                    /**
                     * 判断参数 GameServerSessionData 是否已赋值
                     * @return GameServerSessionData 是否已赋值
                     */
                    bool GameServerSessionDataHasBeenSet() const;

                    /**
                     * 获取IP address of the instance where the game session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IpAddress IP address of the instance where the game session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置IP address of the instance where the game session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IpAddress IP address of the instance where the game session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取Port number of the instance where the game session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Port Port number of the instance where the game session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port number of the instance where the game session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Port Port number of the instance where the game session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Game match data
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MatchmakerData Game match data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMatchmakerData() const;

                    /**
                     * 设置Game match data
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MatchmakerData Game match data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMatchmakerData(const std::string& _matchmakerData);

                    /**
                     * 判断参数 MatchmakerData 是否已赋值
                     * @return MatchmakerData 是否已赋值
                     */
                    bool MatchmakerDataHasBeenSet() const;

                    /**
                     * 获取Deployed player game data
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PlacedPlayerSessions Deployed player game data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PlacedPlayerSession> GetPlacedPlayerSessions() const;

                    /**
                     * 设置Deployed player game data
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PlacedPlayerSessions Deployed player game data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPlacedPlayerSessions(const std::vector<PlacedPlayerSession>& _placedPlayerSessions);

                    /**
                     * 判断参数 PlacedPlayerSessions 是否已赋值
                     * @return PlacedPlayerSessions 是否已赋值
                     */
                    bool PlacedPlayerSessionsHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param StartTime Start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EndTime End time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param EndTime End time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Deployment ID
                     */
                    std::string m_placementId;
                    bool m_placementIdHasBeenSet;

                    /**
                     * Service deployment group name
                     */
                    std::string m_gameServerSessionQueueName;
                    bool m_gameServerSessionQueueNameHasBeenSet;

                    /**
                     * Player latency
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PlayerLatency> m_playerLatencies;
                    bool m_playerLatenciesHasBeenSet;

                    /**
                     * Service deployment status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * DNS ID assigned to the instance where the game session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dnsName;
                    bool m_dnsNameHasBeenSet;

                    /**
                     * Game session ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * Game session name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gameServerSessionName;
                    bool m_gameServerSessionNameHasBeenSet;

                    /**
                     * Service deployment region
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gameServerSessionRegion;
                    bool m_gameServerSessionRegionHasBeenSet;

                    /**
                     * Game attributes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<GameProperty> m_gameProperties;
                    bool m_gamePropertiesHasBeenSet;

                    /**
                     * The maximum number of players that can be connected simultaneously to the game session. It should a value between 1 to the maximum number of player sessions.
                     */
                    uint64_t m_maximumPlayerSessionCount;
                    bool m_maximumPlayerSessionCountHasBeenSet;

                    /**
                     * Game session data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gameServerSessionData;
                    bool m_gameServerSessionDataHasBeenSet;

                    /**
                     * IP address of the instance where the game session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * Port number of the instance where the game session is running
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Game match data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_matchmakerData;
                    bool m_matchmakerDataHasBeenSet;

                    /**
                     * Deployed player game data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PlacedPlayerSession> m_placedPlayerSessions;
                    bool m_placedPlayerSessionsHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSIONPLACEMENT_H_
