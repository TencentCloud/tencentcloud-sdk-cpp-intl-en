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
                     * 获取The maximum number of players, which cannot be less than 0.
                     * @return MaximumPlayerSessionCount The maximum number of players, which cannot be less than 0.
                     * 
                     */
                    uint64_t GetMaximumPlayerSessionCount() const;

                    /**
                     * 设置The maximum number of players, which cannot be less than 0.
                     * @param _maximumPlayerSessionCount The maximum number of players, which cannot be less than 0.
                     * 
                     */
                    void SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount);

                    /**
                     * 判断参数 MaximumPlayerSessionCount 是否已赋值
                     * @return MaximumPlayerSessionCount 是否已赋值
                     * 
                     */
                    bool MaximumPlayerSessionCountHasBeenSet() const;

                    /**
                     * 获取Alias ID. You need to specify an alias ID or fleet ID for each request. If both of them are specified, the fleet ID shall prevail.
                     * @return AliasId Alias ID. You need to specify an alias ID or fleet ID for each request. If both of them are specified, the fleet ID shall prevail.
                     * 
                     */
                    std::string GetAliasId() const;

                    /**
                     * 设置Alias ID. You need to specify an alias ID or fleet ID for each request. If both of them are specified, the fleet ID shall prevail.
                     * @param _aliasId Alias ID. You need to specify an alias ID or fleet ID for each request. If both of them are specified, the fleet ID shall prevail.
                     * 
                     */
                    void SetAliasId(const std::string& _aliasId);

                    /**
                     * 判断参数 AliasId 是否已赋值
                     * @return AliasId 是否已赋值
                     * 
                     */
                    bool AliasIdHasBeenSet() const;

                    /**
                     * 获取Creator ID. Up to 1024 ASCII characters are allowed.
                     * @return CreatorId Creator ID. Up to 1024 ASCII characters are allowed.
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置Creator ID. Up to 1024 ASCII characters are allowed.
                     * @param _creatorId Creator ID. Up to 1024 ASCII characters are allowed.
                     * 
                     */
                    void SetCreatorId(const std::string& _creatorId);

                    /**
                     * 判断参数 CreatorId 是否已赋值
                     * @return CreatorId 是否已赋值
                     * 
                     */
                    bool CreatorIdHasBeenSet() const;

                    /**
                     * 获取Fleet ID. You need to specify an alias ID or fleet ID for each request. If both of them are specified, the fleet ID shall prevail.
                     * @return FleetId Fleet ID. You need to specify an alias ID or fleet ID for each request. If both of them are specified, the fleet ID shall prevail.
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置Fleet ID. You need to specify an alias ID or fleet ID for each request. If both of them are specified, the fleet ID shall prevail.
                     * @param _fleetId Fleet ID. You need to specify an alias ID or fleet ID for each request. If both of them are specified, the fleet ID shall prevail.
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取Game attributes. Up to 16 groups of attributes are allowed.
                     * @return GameProperties Game attributes. Up to 16 groups of attributes are allowed.
                     * 
                     */
                    std::vector<GameProperty> GetGameProperties() const;

                    /**
                     * 设置Game attributes. Up to 16 groups of attributes are allowed.
                     * @param _gameProperties Game attributes. Up to 16 groups of attributes are allowed.
                     * 
                     */
                    void SetGameProperties(const std::vector<GameProperty>& _gameProperties);

                    /**
                     * 判断参数 GameProperties 是否已赋值
                     * @return GameProperties 是否已赋值
                     * 
                     */
                    bool GamePropertiesHasBeenSet() const;

                    /**
                     * 获取The attribute details of game server session. Up to 4096 ASCII characters are allowed.
                     * @return GameServerSessionData The attribute details of game server session. Up to 4096 ASCII characters are allowed.
                     * 
                     */
                    std::string GetGameServerSessionData() const;

                    /**
                     * 设置The attribute details of game server session. Up to 4096 ASCII characters are allowed.
                     * @param _gameServerSessionData The attribute details of game server session. Up to 4096 ASCII characters are allowed.
                     * 
                     */
                    void SetGameServerSessionData(const std::string& _gameServerSessionData);

                    /**
                     * 判断参数 GameServerSessionData 是否已赋值
                     * @return GameServerSessionData 是否已赋值
                     * 
                     */
                    bool GameServerSessionDataHasBeenSet() const;

                    /**
                     * 获取The custom ID of game server session. Up to 4096 ASCII characters are allowed.
                     * @return GameServerSessionId The custom ID of game server session. Up to 4096 ASCII characters are allowed.
                     * 
                     */
                    std::string GetGameServerSessionId() const;

                    /**
                     * 设置The custom ID of game server session. Up to 4096 ASCII characters are allowed.
                     * @param _gameServerSessionId The custom ID of game server session. Up to 4096 ASCII characters are allowed.
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
                     * 获取Idempotency token. Up to 48 ASCII characters are allowed.
                     * @return IdempotencyToken Idempotency token. Up to 48 ASCII characters are allowed.
                     * 
                     */
                    std::string GetIdempotencyToken() const;

                    /**
                     * 设置Idempotency token. Up to 48 ASCII characters are allowed.
                     * @param _idempotencyToken Idempotency token. Up to 48 ASCII characters are allowed.
                     * 
                     */
                    void SetIdempotencyToken(const std::string& _idempotencyToken);

                    /**
                     * 判断参数 IdempotencyToken 是否已赋值
                     * @return IdempotencyToken 是否已赋值
                     * 
                     */
                    bool IdempotencyTokenHasBeenSet() const;

                    /**
                     * 获取The name of game server session. Up to 1024 ASCII characters are allowed.
                     * @return Name The name of game server session. Up to 1024 ASCII characters are allowed.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The name of game server session. Up to 1024 ASCII characters are allowed.
                     * @param _name The name of game server session. Up to 1024 ASCII characters are allowed.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * The maximum number of players, which cannot be less than 0.
                     */
                    uint64_t m_maximumPlayerSessionCount;
                    bool m_maximumPlayerSessionCountHasBeenSet;

                    /**
                     * Alias ID. You need to specify an alias ID or fleet ID for each request. If both of them are specified, the fleet ID shall prevail.
                     */
                    std::string m_aliasId;
                    bool m_aliasIdHasBeenSet;

                    /**
                     * Creator ID. Up to 1024 ASCII characters are allowed.
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * Fleet ID. You need to specify an alias ID or fleet ID for each request. If both of them are specified, the fleet ID shall prevail.
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * Game attributes. Up to 16 groups of attributes are allowed.
                     */
                    std::vector<GameProperty> m_gameProperties;
                    bool m_gamePropertiesHasBeenSet;

                    /**
                     * The attribute details of game server session. Up to 4096 ASCII characters are allowed.
                     */
                    std::string m_gameServerSessionData;
                    bool m_gameServerSessionDataHasBeenSet;

                    /**
                     * The custom ID of game server session. Up to 4096 ASCII characters are allowed.
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * Idempotency token. Up to 48 ASCII characters are allowed.
                     */
                    std::string m_idempotencyToken;
                    bool m_idempotencyTokenHasBeenSet;

                    /**
                     * The name of game server session. Up to 1024 ASCII characters are allowed.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_CREATEGAMESERVERSESSIONREQUEST_H_
