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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESIREDPLAYERSESSION_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESIREDPLAYERSESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Player game session information
                */
                class DesiredPlayerSession : public AbstractModel
                {
                public:
                    DesiredPlayerSession();
                    ~DesiredPlayerSession() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique player ID associated with player session
                     * @return PlayerId Unique player ID associated with player session
                     * 
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置Unique player ID associated with player session
                     * @param _playerId Unique player ID associated with player session
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
                     * 获取Developer-defined player data
                     * @return PlayerData Developer-defined player data
                     * 
                     */
                    std::string GetPlayerData() const;

                    /**
                     * 设置Developer-defined player data
                     * @param _playerData Developer-defined player data
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
                     * Unique player ID associated with player session
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                    /**
                     * Developer-defined player data
                     */
                    std::string m_playerData;
                    bool m_playerDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESIREDPLAYERSESSION_H_
