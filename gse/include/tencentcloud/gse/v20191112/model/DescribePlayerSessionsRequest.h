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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEPLAYERSESSIONSREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEPLAYERSESSIONSREQUEST_H_

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
                * DescribePlayerSessions request structure.
                */
                class DescribePlayerSessionsRequest : public AbstractModel
                {
                public:
                    DescribePlayerSessionsRequest();
                    ~DescribePlayerSessionsRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Maximum number of entries in a single query
                     * @return Limit Maximum number of entries in a single query
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of entries in a single query
                     * @param Limit Maximum number of entries in a single query
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset, which is used for querying the next page
                     * @return NextToken Pagination offset, which is used for querying the next page
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置Pagination offset, which is used for querying the next page
                     * @param NextToken Pagination offset, which is used for querying the next page
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取Player ID
                     * @return PlayerId Player ID
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置Player ID
                     * @param PlayerId Player ID
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
                     * 获取Player session status. Valid values: RESERVED, ACTIVE, COMPLETED, TIMEDOUT
                     * @return PlayerSessionStatusFilter Player session status. Valid values: RESERVED, ACTIVE, COMPLETED, TIMEDOUT
                     */
                    std::string GetPlayerSessionStatusFilter() const;

                    /**
                     * 设置Player session status. Valid values: RESERVED, ACTIVE, COMPLETED, TIMEDOUT
                     * @param PlayerSessionStatusFilter Player session status. Valid values: RESERVED, ACTIVE, COMPLETED, TIMEDOUT
                     */
                    void SetPlayerSessionStatusFilter(const std::string& _playerSessionStatusFilter);

                    /**
                     * 判断参数 PlayerSessionStatusFilter 是否已赋值
                     * @return PlayerSessionStatusFilter 是否已赋值
                     */
                    bool PlayerSessionStatusFilterHasBeenSet() const;

                private:

                    /**
                     * Game server session ID
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * Maximum number of entries in a single query
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset, which is used for querying the next page
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * Player ID
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                    /**
                     * Player session ID
                     */
                    std::string m_playerSessionId;
                    bool m_playerSessionIdHasBeenSet;

                    /**
                     * Player session status. Valid values: RESERVED, ACTIVE, COMPLETED, TIMEDOUT
                     */
                    std::string m_playerSessionStatusFilter;
                    bool m_playerSessionStatusFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEPLAYERSESSIONSREQUEST_H_
