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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEGAMESERVERSESSIONREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEGAMESERVERSESSIONREQUEST_H_

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
                * UpdateGameServerSession request structure.
                */
                class UpdateGameServerSessionRequest : public AbstractModel
                {
                public:
                    UpdateGameServerSessionRequest();
                    ~UpdateGameServerSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Game server session ID. It should contain 1 to 256 ASCII characters.
                     * @return GameServerSessionId Game server session ID. It should contain 1 to 256 ASCII characters.
                     */
                    std::string GetGameServerSessionId() const;

                    /**
                     * 设置Game server session ID. It should contain 1 to 256 ASCII characters.
                     * @param GameServerSessionId Game server session ID. It should contain 1 to 256 ASCII characters.
                     */
                    void SetGameServerSessionId(const std::string& _gameServerSessionId);

                    /**
                     * 判断参数 GameServerSessionId 是否已赋值
                     * @return GameServerSessionId 是否已赋值
                     */
                    bool GameServerSessionIdHasBeenSet() const;

                    /**
                     * 获取The maximum number of players, which cannot be less than 0.
                     * @return MaximumPlayerSessionCount The maximum number of players, which cannot be less than 0.
                     */
                    uint64_t GetMaximumPlayerSessionCount() const;

                    /**
                     * 设置The maximum number of players, which cannot be less than 0.
                     * @param MaximumPlayerSessionCount The maximum number of players, which cannot be less than 0.
                     */
                    void SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount);

                    /**
                     * 判断参数 MaximumPlayerSessionCount 是否已赋值
                     * @return MaximumPlayerSessionCount 是否已赋值
                     */
                    bool MaximumPlayerSessionCountHasBeenSet() const;

                    /**
                     * 获取Name of the game server session. It should contain 1 to 1024 ASCII characters.
                     * @return Name Name of the game server session. It should contain 1 to 1024 ASCII characters.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the game server session. It should contain 1 to 1024 ASCII characters.
                     * @param Name Name of the game server session. It should contain 1 to 1024 ASCII characters.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Player session creation policy, which includes `ACCEPT_ALL` (allow all players) and `DENY_ALL` (reject all players).
                     * @return PlayerSessionCreationPolicy Player session creation policy, which includes `ACCEPT_ALL` (allow all players) and `DENY_ALL` (reject all players).
                     */
                    std::string GetPlayerSessionCreationPolicy() const;

                    /**
                     * 设置Player session creation policy, which includes `ACCEPT_ALL` (allow all players) and `DENY_ALL` (reject all players).
                     * @param PlayerSessionCreationPolicy Player session creation policy, which includes `ACCEPT_ALL` (allow all players) and `DENY_ALL` (reject all players).
                     */
                    void SetPlayerSessionCreationPolicy(const std::string& _playerSessionCreationPolicy);

                    /**
                     * 判断参数 PlayerSessionCreationPolicy 是否已赋值
                     * @return PlayerSessionCreationPolicy 是否已赋值
                     */
                    bool PlayerSessionCreationPolicyHasBeenSet() const;

                    /**
                     * 获取Protection policy, which includes `NoProtection`·(no protection), `TimeLimitProtection` (time-limited protection) and `FullProtection` (full protection)
                     * @return ProtectionPolicy Protection policy, which includes `NoProtection`·(no protection), `TimeLimitProtection` (time-limited protection) and `FullProtection` (full protection)
                     */
                    std::string GetProtectionPolicy() const;

                    /**
                     * 设置Protection policy, which includes `NoProtection`·(no protection), `TimeLimitProtection` (time-limited protection) and `FullProtection` (full protection)
                     * @param ProtectionPolicy Protection policy, which includes `NoProtection`·(no protection), `TimeLimitProtection` (time-limited protection) and `FullProtection` (full protection)
                     */
                    void SetProtectionPolicy(const std::string& _protectionPolicy);

                    /**
                     * 判断参数 ProtectionPolicy 是否已赋值
                     * @return ProtectionPolicy 是否已赋值
                     */
                    bool ProtectionPolicyHasBeenSet() const;

                private:

                    /**
                     * Game server session ID. It should contain 1 to 256 ASCII characters.
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * The maximum number of players, which cannot be less than 0.
                     */
                    uint64_t m_maximumPlayerSessionCount;
                    bool m_maximumPlayerSessionCountHasBeenSet;

                    /**
                     * Name of the game server session. It should contain 1 to 1024 ASCII characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Player session creation policy, which includes `ACCEPT_ALL` (allow all players) and `DENY_ALL` (reject all players).
                     */
                    std::string m_playerSessionCreationPolicy;
                    bool m_playerSessionCreationPolicyHasBeenSet;

                    /**
                     * Protection policy, which includes `NoProtection`·(no protection), `TimeLimitProtection` (time-limited protection) and `FullProtection` (full protection)
                     */
                    std::string m_protectionPolicy;
                    bool m_protectionPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEGAMESERVERSESSIONREQUEST_H_
