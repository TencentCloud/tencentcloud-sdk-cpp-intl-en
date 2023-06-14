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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * JoinGameServerSession request structure.
                */
                class JoinGameServerSessionRequest : public AbstractModel
                {
                public:
                    JoinGameServerSessionRequest();
                    ~JoinGameServerSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Game server session ID. It should contain 1 to 256 ASCII characters.
                     * @return GameServerSessionId Game server session ID. It should contain 1 to 256 ASCII characters.
                     * 
                     */
                    std::string GetGameServerSessionId() const;

                    /**
                     * 设置Game server session ID. It should contain 1 to 256 ASCII characters.
                     * @param _gameServerSessionId Game server session ID. It should contain 1 to 256 ASCII characters.
                     * 
                     */
                    void SetGameServerSessionId(const std::string& _gameServerSessionId);

                    /**
                     * 判断参数 GameServerSessionId 是否已赋值
                     * @return GameServerSessionId 是否已赋值
                     * 
                     */
                    bool GameServerSessionIdHasBeenSet() const;

                    /**
                     * 获取Player ID. Up to 1024 ASCII characters are allowed.
                     * @return PlayerId Player ID. Up to 1024 ASCII characters are allowed.
                     * 
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置Player ID. Up to 1024 ASCII characters are allowed.
                     * @param _playerId Player ID. Up to 1024 ASCII characters are allowed.
                     * 
                     */
                    void SetPlayerId(const std::string& _playerId);

                    /**
                     * 判断参数 PlayerId 是否已赋值
                     * @return PlayerId 是否已赋值
                     * 
                     */
                    bool PlayerIdHasBeenSet() const;

                    /**
                     * 获取Player custom data. Up to 2048 ASCII characters are allowed.
                     * @return PlayerData Player custom data. Up to 2048 ASCII characters are allowed.
                     * 
                     */
                    std::string GetPlayerData() const;

                    /**
                     * 设置Player custom data. Up to 2048 ASCII characters are allowed.
                     * @param _playerData Player custom data. Up to 2048 ASCII characters are allowed.
                     * 
                     */
                    void SetPlayerData(const std::string& _playerData);

                    /**
                     * 判断参数 PlayerData 是否已赋值
                     * @return PlayerData 是否已赋值
                     * 
                     */
                    bool PlayerDataHasBeenSet() const;

                private:

                    /**
                     * Game server session ID. It should contain 1 to 256 ASCII characters.
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * Player ID. Up to 1024 ASCII characters are allowed.
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                    /**
                     * Player custom data. Up to 2048 ASCII characters are allowed.
                     */
                    std::string m_playerData;
                    bool m_playerDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONREQUEST_H_
