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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_STARTGAMESERVERSESSIONPLACEMENTREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_STARTGAMESERVERSESSIONPLACEMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/DesiredPlayerSession.h>
#include <tencentcloud/gse/v20191112/model/GameProperty.h>
#include <tencentcloud/gse/v20191112/model/PlayerLatency.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * StartGameServerSessionPlacement request structure.
                */
                class StartGameServerSessionPlacementRequest : public AbstractModel
                {
                public:
                    StartGameServerSessionPlacementRequest();
                    ~StartGameServerSessionPlacementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of starting game server session placement
                     * @return PlacementId Unique ID of starting game server session placement
                     */
                    std::string GetPlacementId() const;

                    /**
                     * 设置Unique ID of starting game server session placement
                     * @param PlacementId Unique ID of starting game server session placement
                     */
                    void SetPlacementId(const std::string& _placementId);

                    /**
                     * 判断参数 PlacementId 是否已赋值
                     * @return PlacementId 是否已赋值
                     */
                    bool PlacementIdHasBeenSet() const;

                    /**
                     * 获取Game server session queue name
                     * @return GameServerSessionQueueName Game server session queue name
                     */
                    std::string GetGameServerSessionQueueName() const;

                    /**
                     * 设置Game server session queue name
                     * @param GameServerSessionQueueName Game server session queue name
                     */
                    void SetGameServerSessionQueueName(const std::string& _gameServerSessionQueueName);

                    /**
                     * 判断参数 GameServerSessionQueueName 是否已赋值
                     * @return GameServerSessionQueueName 是否已赋值
                     */
                    bool GameServerSessionQueueNameHasBeenSet() const;

                    /**
                     * 获取Maximum number of concurrent players allowed by the game server to connect to the game session
                     * @return MaximumPlayerSessionCount Maximum number of concurrent players allowed by the game server to connect to the game session
                     */
                    uint64_t GetMaximumPlayerSessionCount() const;

                    /**
                     * 设置Maximum number of concurrent players allowed by the game server to connect to the game session
                     * @param MaximumPlayerSessionCount Maximum number of concurrent players allowed by the game server to connect to the game session
                     */
                    void SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount);

                    /**
                     * 判断参数 MaximumPlayerSessionCount 是否已赋值
                     * @return MaximumPlayerSessionCount 是否已赋值
                     */
                    bool MaximumPlayerSessionCountHasBeenSet() const;

                    /**
                     * 获取Player game session information
                     * @return DesiredPlayerSessions Player game session information
                     */
                    std::vector<DesiredPlayerSession> GetDesiredPlayerSessions() const;

                    /**
                     * 设置Player game session information
                     * @param DesiredPlayerSessions Player game session information
                     */
                    void SetDesiredPlayerSessions(const std::vector<DesiredPlayerSession>& _desiredPlayerSessions);

                    /**
                     * 判断参数 DesiredPlayerSessions 是否已赋值
                     * @return DesiredPlayerSessions 是否已赋值
                     */
                    bool DesiredPlayerSessionsHasBeenSet() const;

                    /**
                     * 获取Player game session attributes
                     * @return GameProperties Player game session attributes
                     */
                    std::vector<GameProperty> GetGameProperties() const;

                    /**
                     * 设置Player game session attributes
                     * @param GameProperties Player game session attributes
                     */
                    void SetGameProperties(const std::vector<GameProperty>& _gameProperties);

                    /**
                     * 判断参数 GameProperties 是否已赋值
                     * @return GameProperties 是否已赋值
                     */
                    bool GamePropertiesHasBeenSet() const;

                    /**
                     * 获取Game server session data
                     * @return GameServerSessionData Game server session data
                     */
                    std::string GetGameServerSessionData() const;

                    /**
                     * 设置Game server session data
                     * @param GameServerSessionData Game server session data
                     */
                    void SetGameServerSessionData(const std::string& _gameServerSessionData);

                    /**
                     * 判断参数 GameServerSessionData 是否已赋值
                     * @return GameServerSessionData 是否已赋值
                     */
                    bool GameServerSessionDataHasBeenSet() const;

                    /**
                     * 获取Game server session name
                     * @return GameServerSessionName Game server session name
                     */
                    std::string GetGameServerSessionName() const;

                    /**
                     * 设置Game server session name
                     * @param GameServerSessionName Game server session name
                     */
                    void SetGameServerSessionName(const std::string& _gameServerSessionName);

                    /**
                     * 判断参数 GameServerSessionName 是否已赋值
                     * @return GameServerSessionName 是否已赋值
                     */
                    bool GameServerSessionNameHasBeenSet() const;

                    /**
                     * 获取Player latency
                     * @return PlayerLatencies Player latency
                     */
                    std::vector<PlayerLatency> GetPlayerLatencies() const;

                    /**
                     * 设置Player latency
                     * @param PlayerLatencies Player latency
                     */
                    void SetPlayerLatencies(const std::vector<PlayerLatency>& _playerLatencies);

                    /**
                     * 判断参数 PlayerLatencies 是否已赋值
                     * @return PlayerLatencies 是否已赋值
                     */
                    bool PlayerLatenciesHasBeenSet() const;

                private:

                    /**
                     * Unique ID of starting game server session placement
                     */
                    std::string m_placementId;
                    bool m_placementIdHasBeenSet;

                    /**
                     * Game server session queue name
                     */
                    std::string m_gameServerSessionQueueName;
                    bool m_gameServerSessionQueueNameHasBeenSet;

                    /**
                     * Maximum number of concurrent players allowed by the game server to connect to the game session
                     */
                    uint64_t m_maximumPlayerSessionCount;
                    bool m_maximumPlayerSessionCountHasBeenSet;

                    /**
                     * Player game session information
                     */
                    std::vector<DesiredPlayerSession> m_desiredPlayerSessions;
                    bool m_desiredPlayerSessionsHasBeenSet;

                    /**
                     * Player game session attributes
                     */
                    std::vector<GameProperty> m_gameProperties;
                    bool m_gamePropertiesHasBeenSet;

                    /**
                     * Game server session data
                     */
                    std::string m_gameServerSessionData;
                    bool m_gameServerSessionDataHasBeenSet;

                    /**
                     * Game server session name
                     */
                    std::string m_gameServerSessionName;
                    bool m_gameServerSessionNameHasBeenSet;

                    /**
                     * Player latency
                     */
                    std::vector<PlayerLatency> m_playerLatencies;
                    bool m_playerLatenciesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_STARTGAMESERVERSESSIONPLACEMENTREQUEST_H_
