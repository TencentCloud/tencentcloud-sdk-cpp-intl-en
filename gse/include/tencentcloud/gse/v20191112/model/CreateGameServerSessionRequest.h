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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_CREATEGAMESERVERSESSIONREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_CREATEGAMESERVERSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/GameProperty.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * CreateGameServerSession request structure.
                */
                class CreateGameServerSessionRequest : public AbstractModel
                {
                public:
                    CreateGameServerSessionRequest();
                    ~CreateGameServerSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Maximum number of players
                     * @return MaximumPlayerSessionCount Maximum number of players
                     */
                    uint64_t GetMaximumPlayerSessionCount() const;

                    /**
                     * 设置Maximum number of players
                     * @param MaximumPlayerSessionCount Maximum number of players
                     */
                    void SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount);

                    /**
                     * 判断参数 MaximumPlayerSessionCount 是否已赋值
                     * @return MaximumPlayerSessionCount 是否已赋值
                     */
                    bool MaximumPlayerSessionCountHasBeenSet() const;

                    /**
                     * 获取Alias ID
                     * @return AliasId Alias ID
                     */
                    std::string GetAliasId() const;

                    /**
                     * 设置Alias ID
                     * @param AliasId Alias ID
                     */
                    void SetAliasId(const std::string& _aliasId);

                    /**
                     * 判断参数 AliasId 是否已赋值
                     * @return AliasId 是否已赋值
                     */
                    bool AliasIdHasBeenSet() const;

                    /**
                     * 获取Creator ID
                     * @return CreatorId Creator ID
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置Creator ID
                     * @param CreatorId Creator ID
                     */
                    void SetCreatorId(const std::string& _creatorId);

                    /**
                     * 判断参数 CreatorId 是否已赋值
                     * @return CreatorId 是否已赋值
                     */
                    bool CreatorIdHasBeenSet() const;

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
                     * 获取Game attributes
                     * @return GameProperties Game attributes
                     */
                    std::vector<GameProperty> GetGameProperties() const;

                    /**
                     * 设置Game attributes
                     * @param GameProperties Game attributes
                     */
                    void SetGameProperties(const std::vector<GameProperty>& _gameProperties);

                    /**
                     * 判断参数 GameProperties 是否已赋值
                     * @return GameProperties 是否已赋值
                     */
                    bool GamePropertiesHasBeenSet() const;

                    /**
                     * 获取Game server session attribute details
                     * @return GameServerSessionData Game server session attribute details
                     */
                    std::string GetGameServerSessionData() const;

                    /**
                     * 设置Game server session attribute details
                     * @param GameServerSessionData Game server session attribute details
                     */
                    void SetGameServerSessionData(const std::string& _gameServerSessionData);

                    /**
                     * 判断参数 GameServerSessionData 是否已赋值
                     * @return GameServerSessionData 是否已赋值
                     */
                    bool GameServerSessionDataHasBeenSet() const;

                    /**
                     * 获取Custom ID of game server session
                     * @return GameServerSessionId Custom ID of game server session
                     */
                    std::string GetGameServerSessionId() const;

                    /**
                     * 设置Custom ID of game server session
                     * @param GameServerSessionId Custom ID of game server session
                     */
                    void SetGameServerSessionId(const std::string& _gameServerSessionId);

                    /**
                     * 判断参数 GameServerSessionId 是否已赋值
                     * @return GameServerSessionId 是否已赋值
                     */
                    bool GameServerSessionIdHasBeenSet() const;

                    /**
                     * 获取Idempotency token
                     * @return IdempotencyToken Idempotency token
                     */
                    std::string GetIdempotencyToken() const;

                    /**
                     * 设置Idempotency token
                     * @param IdempotencyToken Idempotency token
                     */
                    void SetIdempotencyToken(const std::string& _idempotencyToken);

                    /**
                     * 判断参数 IdempotencyToken 是否已赋值
                     * @return IdempotencyToken 是否已赋值
                     */
                    bool IdempotencyTokenHasBeenSet() const;

                    /**
                     * 获取Game server session name
                     * @return Name Game server session name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Game server session name
                     * @param Name Game server session name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Maximum number of players
                     */
                    uint64_t m_maximumPlayerSessionCount;
                    bool m_maximumPlayerSessionCountHasBeenSet;

                    /**
                     * Alias ID
                     */
                    std::string m_aliasId;
                    bool m_aliasIdHasBeenSet;

                    /**
                     * Creator ID
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * Fleet ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * Game attributes
                     */
                    std::vector<GameProperty> m_gameProperties;
                    bool m_gamePropertiesHasBeenSet;

                    /**
                     * Game server session attribute details
                     */
                    std::string m_gameServerSessionData;
                    bool m_gameServerSessionDataHasBeenSet;

                    /**
                     * Custom ID of game server session
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * Idempotency token
                     */
                    std::string m_idempotencyToken;
                    bool m_idempotencyTokenHasBeenSet;

                    /**
                     * Game server session name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_CREATEGAMESERVERSESSIONREQUEST_H_
