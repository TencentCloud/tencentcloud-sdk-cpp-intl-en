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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_PLAYER_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_PLAYER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/MatchAttribute.h>
#include <tencentcloud/gpm/v20200820/model/RegionLatency.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * Player information
                */
                class Player : public AbstractModel
                {
                public:
                    Player();
                    ~Player() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Player ID. It can contain up to 128 characters, supporting [a-zA-Z\d-\._]*.
                     * @return Id Player ID. It can contain up to 128 characters, supporting [a-zA-Z\d-\._]*.
                     */
                    std::string GetId() const;

                    /**
                     * 设置Player ID. It can contain up to 128 characters, supporting [a-zA-Z\d-\._]*.
                     * @param Id Player ID. It can contain up to 128 characters, supporting [a-zA-Z\d-\._]*.
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Player nickname. Up to 128 characters are allowed.
                     * @return Name Player nickname. Up to 128 characters are allowed.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Player nickname. Up to 128 characters are allowed.
                     * @param Name Player nickname. Up to 128 characters are allowed.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Player attribute for matching. Up to 10 attributes are supported.
                     * @return MatchAttributes Player attribute for matching. Up to 10 attributes are supported.
                     */
                    std::vector<MatchAttribute> GetMatchAttributes() const;

                    /**
                     * 设置Player attribute for matching. Up to 10 attributes are supported.
                     * @param MatchAttributes Player attribute for matching. Up to 10 attributes are supported.
                     */
                    void SetMatchAttributes(const std::vector<MatchAttribute>& _matchAttributes);

                    /**
                     * 判断参数 MatchAttributes 是否已赋值
                     * @return MatchAttributes 是否已赋值
                     */
                    bool MatchAttributesHasBeenSet() const;

                    /**
                     * 获取Team name. A player can pass in a different team name, which can contain up to 128 characters, and support [a-zA-Z0-9-\.]*.
                     * @return Team Team name. A player can pass in a different team name, which can contain up to 128 characters, and support [a-zA-Z0-9-\.]*.
                     */
                    std::string GetTeam() const;

                    /**
                     * 设置Team name. A player can pass in a different team name, which can contain up to 128 characters, and support [a-zA-Z0-9-\.]*.
                     * @param Team Team name. A player can pass in a different team name, which can contain up to 128 characters, and support [a-zA-Z0-9-\.]*.
                     */
                    void SetTeam(const std::string& _team);

                    /**
                     * 判断参数 Team 是否已赋值
                     * @return Team 是否已赋值
                     */
                    bool TeamHasBeenSet() const;

                    /**
                     * 获取Custom player status. This parameter will be passed through. Value range: [0, 99999]
                     * @return CustomPlayerStatus Custom player status. This parameter will be passed through. Value range: [0, 99999]
                     */
                    uint64_t GetCustomPlayerStatus() const;

                    /**
                     * 设置Custom player status. This parameter will be passed through. Value range: [0, 99999]
                     * @param CustomPlayerStatus Custom player status. This parameter will be passed through. Value range: [0, 99999]
                     */
                    void SetCustomPlayerStatus(const uint64_t& _customPlayerStatus);

                    /**
                     * 判断参数 CustomPlayerStatus 是否已赋值
                     * @return CustomPlayerStatus 是否已赋值
                     */
                    bool CustomPlayerStatusHasBeenSet() const;

                    /**
                     * 获取Custom player information. Up to 1024 characters are allowed. This parameter will be passed through.
                     * @return CustomProfile Custom player information. Up to 1024 characters are allowed. This parameter will be passed through.
                     */
                    std::string GetCustomProfile() const;

                    /**
                     * 设置Custom player information. Up to 1024 characters are allowed. This parameter will be passed through.
                     * @param CustomProfile Custom player information. Up to 1024 characters are allowed. This parameter will be passed through.
                     */
                    void SetCustomProfile(const std::string& _customProfile);

                    /**
                     * 判断参数 CustomProfile 是否已赋值
                     * @return CustomProfile 是否已赋值
                     */
                    bool CustomProfileHasBeenSet() const;

                    /**
                     * 获取Number of delays in each area. Up to 20 delays are supported.
                     * @return RegionLatencies Number of delays in each area. Up to 20 delays are supported.
                     */
                    std::vector<RegionLatency> GetRegionLatencies() const;

                    /**
                     * 设置Number of delays in each area. Up to 20 delays are supported.
                     * @param RegionLatencies Number of delays in each area. Up to 20 delays are supported.
                     */
                    void SetRegionLatencies(const std::vector<RegionLatency>& _regionLatencies);

                    /**
                     * 判断参数 RegionLatencies 是否已赋值
                     * @return RegionLatencies 是否已赋值
                     */
                    bool RegionLatenciesHasBeenSet() const;

                private:

                    /**
                     * Player ID. It can contain up to 128 characters, supporting [a-zA-Z\d-\._]*.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Player nickname. Up to 128 characters are allowed.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Player attribute for matching. Up to 10 attributes are supported.
                     */
                    std::vector<MatchAttribute> m_matchAttributes;
                    bool m_matchAttributesHasBeenSet;

                    /**
                     * Team name. A player can pass in a different team name, which can contain up to 128 characters, and support [a-zA-Z0-9-\.]*.
                     */
                    std::string m_team;
                    bool m_teamHasBeenSet;

                    /**
                     * Custom player status. This parameter will be passed through. Value range: [0, 99999]
                     */
                    uint64_t m_customPlayerStatus;
                    bool m_customPlayerStatusHasBeenSet;

                    /**
                     * Custom player information. Up to 1024 characters are allowed. This parameter will be passed through.
                     */
                    std::string m_customProfile;
                    bool m_customProfileHasBeenSet;

                    /**
                     * Number of delays in each area. Up to 20 delays are supported.
                     */
                    std::vector<RegionLatency> m_regionLatencies;
                    bool m_regionLatenciesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_PLAYER_H_
