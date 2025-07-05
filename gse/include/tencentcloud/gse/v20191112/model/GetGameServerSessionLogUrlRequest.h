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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_GETGAMESERVERSESSIONLOGURLREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_GETGAMESERVERSESSIONLOGURLREQUEST_H_

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
                * GetGameServerSessionLogUrl request structure.
                */
                class GetGameServerSessionLogUrlRequest : public AbstractModel
                {
                public:
                    GetGameServerSessionLogUrlRequest();
                    ~GetGameServerSessionLogUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Game server session ID. It should contain 1 to 48 ASCII characters.
                     * @return GameServerSessionId Game server session ID. It should contain 1 to 48 ASCII characters.
                     * 
                     */
                    std::string GetGameServerSessionId() const;

                    /**
                     * 设置Game server session ID. It should contain 1 to 48 ASCII characters.
                     * @param _gameServerSessionId Game server session ID. It should contain 1 to 48 ASCII characters.
                     * 
                     */
                    void SetGameServerSessionId(const std::string& _gameServerSessionId);

                    /**
                     * 判断参数 GameServerSessionId 是否已赋值
                     * @return GameServerSessionId 是否已赋值
                     * 
                     */
                    bool GameServerSessionIdHasBeenSet() const;

                private:

                    /**
                     * Game server session ID. It should contain 1 to 48 ASCII characters.
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_GETGAMESERVERSESSIONLOGURLREQUEST_H_
