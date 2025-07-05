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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONRESPONSE_H_

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
                * JoinGameServerSession response structure.
                */
                class JoinGameServerSessionResponse : public AbstractModel
                {
                public:
                    JoinGameServerSessionResponse();
                    ~JoinGameServerSessionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Player session
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PlayerSession Player session
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PlayerSession GetPlayerSession() const;

                    /**
                     * 判断参数 PlayerSession 是否已赋值
                     * @return PlayerSession 是否已赋值
                     * 
                     */
                    bool PlayerSessionHasBeenSet() const;

                private:

                    /**
                     * Player session
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    PlayerSession m_playerSession;
                    bool m_playerSessionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONRESPONSE_H_
