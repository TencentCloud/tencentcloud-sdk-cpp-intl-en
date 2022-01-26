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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEGAMESERVERSESSIONDETAILSREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEGAMESERVERSESSIONDETAILSREQUEST_H_

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
                * DescribeGameServerSessionDetails request structure.
                */
                class DescribeGameServerSessionDetailsRequest : public AbstractModel
                {
                public:
                    DescribeGameServerSessionDetailsRequest();
                    ~DescribeGameServerSessionDetailsRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Game server session ID. It should contain 1 to 48 ASCII characters.
                     * @return GameServerSessionId Game server session ID. It should contain 1 to 48 ASCII characters.
                     */
                    std::string GetGameServerSessionId() const;

                    /**
                     * 设置Game server session ID. It should contain 1 to 48 ASCII characters.
                     * @param GameServerSessionId Game server session ID. It should contain 1 to 48 ASCII characters.
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
                     * 获取Pagination offset, which is used for querying the next page. It should contain 1 to 1024 ASCII characters.
                     * @return NextToken Pagination offset, which is used for querying the next page. It should contain 1 to 1024 ASCII characters.
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置Pagination offset, which is used for querying the next page. It should contain 1 to 1024 ASCII characters.
                     * @param NextToken Pagination offset, which is used for querying the next page. It should contain 1 to 1024 ASCII characters.
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取Game server session status. Valid values: ACTIVE, ACTIVATING, TERMINATED, TERMINATING, ERROR
                     * @return StatusFilter Game server session status. Valid values: ACTIVE, ACTIVATING, TERMINATED, TERMINATING, ERROR
                     */
                    std::string GetStatusFilter() const;

                    /**
                     * 设置Game server session status. Valid values: ACTIVE, ACTIVATING, TERMINATED, TERMINATING, ERROR
                     * @param StatusFilter Game server session status. Valid values: ACTIVE, ACTIVATING, TERMINATED, TERMINATING, ERROR
                     */
                    void SetStatusFilter(const std::string& _statusFilter);

                    /**
                     * 判断参数 StatusFilter 是否已赋值
                     * @return StatusFilter 是否已赋值
                     */
                    bool StatusFilterHasBeenSet() const;

                private:

                    /**
                     * Alias ID
                     */
                    std::string m_aliasId;
                    bool m_aliasIdHasBeenSet;

                    /**
                     * Fleet ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * Game server session ID. It should contain 1 to 48 ASCII characters.
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * Maximum number of entries in a single query
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset, which is used for querying the next page. It should contain 1 to 1024 ASCII characters.
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * Game server session status. Valid values: ACTIVE, ACTIVATING, TERMINATED, TERMINATING, ERROR
                     */
                    std::string m_statusFilter;
                    bool m_statusFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEGAMESERVERSESSIONDETAILSREQUEST_H_
