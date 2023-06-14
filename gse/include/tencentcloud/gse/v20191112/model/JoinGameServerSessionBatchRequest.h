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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONBATCHREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/PlayerDataMap.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * JoinGameServerSessionBatch request structure.
                */
                class JoinGameServerSessionBatchRequest : public AbstractModel
                {
                public:
                    JoinGameServerSessionBatchRequest();
                    ~JoinGameServerSessionBatchRequest() = default;
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
                     * 获取Player ID list. At least 1 ID and up to 25 IDs.
                     * @return PlayerIds Player ID list. At least 1 ID and up to 25 IDs.
                     * 
                     */
                    std::vector<std::string> GetPlayerIds() const;

                    /**
                     * 设置Player ID list. At least 1 ID and up to 25 IDs.
                     * @param _playerIds Player ID list. At least 1 ID and up to 25 IDs.
                     * 
                     */
                    void SetPlayerIds(const std::vector<std::string>& _playerIds);

                    /**
                     * 判断参数 PlayerIds 是否已赋值
                     * @return PlayerIds 是否已赋值
                     * 
                     */
                    bool PlayerIdsHasBeenSet() const;

                    /**
                     * 获取Player custom data
                     * @return PlayerDataMap Player custom data
                     * 
                     */
                    PlayerDataMap GetPlayerDataMap() const;

                    /**
                     * 设置Player custom data
                     * @param _playerDataMap Player custom data
                     * 
                     */
                    void SetPlayerDataMap(const PlayerDataMap& _playerDataMap);

                    /**
                     * 判断参数 PlayerDataMap 是否已赋值
                     * @return PlayerDataMap 是否已赋值
                     * 
                     */
                    bool PlayerDataMapHasBeenSet() const;

                private:

                    /**
                     * Game server session ID. It should contain 1 to 256 ASCII characters.
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * Player ID list. At least 1 ID and up to 25 IDs.
                     */
                    std::vector<std::string> m_playerIds;
                    bool m_playerIdsHasBeenSet;

                    /**
                     * Player custom data
                     */
                    PlayerDataMap m_playerDataMap;
                    bool m_playerDataMapHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONBATCHREQUEST_H_
