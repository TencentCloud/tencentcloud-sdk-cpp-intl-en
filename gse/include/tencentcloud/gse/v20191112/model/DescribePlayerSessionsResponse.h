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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEPLAYERSESSIONSRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEPLAYERSESSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/PlayerSession.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribePlayerSessions response structure.
                */
                class DescribePlayerSessionsResponse : public AbstractModel
                {
                public:
                    DescribePlayerSessionsResponse();
                    ~DescribePlayerSessionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Player session list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PlayerSessions Player session list
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PlayerSession> GetPlayerSessions() const;

                    /**
                     * 判断参数 PlayerSessions 是否已赋值
                     * @return PlayerSessions 是否已赋值
                     * 
                     */
                    bool PlayerSessionsHasBeenSet() const;

                    /**
                     * 获取Pagination offset, which is used for querying the next page. It should contain 1 to 1024 ASCII characters.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return NextToken Pagination offset, which is used for querying the next page. It should contain 1 to 1024 ASCII characters.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * Player session list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PlayerSession> m_playerSessions;
                    bool m_playerSessionsHasBeenSet;

                    /**
                     * Pagination offset, which is used for querying the next page. It should contain 1 to 1024 ASCII characters.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEPLAYERSESSIONSRESPONSE_H_
