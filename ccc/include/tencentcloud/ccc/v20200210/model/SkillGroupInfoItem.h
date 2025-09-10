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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SKILLGROUPINFOITEM_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SKILLGROUPINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Skill group information.
                */
                class SkillGroupInfoItem : public AbstractModel
                {
                public:
                    SkillGroupInfoItem();
                    ~SkillGroupInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Skill group id.
                     * @return SkillGroupId Skill group id.
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置Skill group id.
                     * @param _skillGroupId Skill group id.
                     * 
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取Skill group name.
                     * @return SkillGroupName Skill group name.
                     * 
                     */
                    std::string GetSkillGroupName() const;

                    /**
                     * 设置Skill group name.
                     * @param _skillGroupName Skill group name.
                     * 
                     */
                    void SetSkillGroupName(const std::string& _skillGroupName);

                    /**
                     * 判断参数 SkillGroupName 是否已赋值
                     * @return SkillGroupName 是否已赋值
                     * 
                     */
                    bool SkillGroupNameHasBeenSet() const;

                    /**
                     * 获取(Deprecated) type: im, tel, all (full media).
                     * @return Type (Deprecated) type: im, tel, all (full media).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置(Deprecated) type: im, tel, all (full media).
                     * @param _type (Deprecated) type: im, tel, all (full media).
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Session allocation policy.
                     * @return RoutePolicy Session allocation policy.
                     * 
                     */
                    std::string GetRoutePolicy() const;

                    /**
                     * 设置Session allocation policy.
                     * @param _routePolicy Session allocation policy.
                     * 
                     */
                    void SetRoutePolicy(const std::string& _routePolicy);

                    /**
                     * 判断参数 RoutePolicy 是否已赋值
                     * @return RoutePolicy 是否已赋值
                     * 
                     */
                    bool RoutePolicyHasBeenSet() const;

                    /**
                     * 获取Whether the session is allocated to the last serviced agent first.
                     * @return UsingLastSeat Whether the session is allocated to the last serviced agent first.
                     * 
                     */
                    int64_t GetUsingLastSeat() const;

                    /**
                     * 设置Whether the session is allocated to the last serviced agent first.
                     * @param _usingLastSeat Whether the session is allocated to the last serviced agent first.
                     * 
                     */
                    void SetUsingLastSeat(const int64_t& _usingLastSeat);

                    /**
                     * 判断参数 UsingLastSeat 是否已赋值
                     * @return UsingLastSeat 是否已赋值
                     * 
                     */
                    bool UsingLastSeatHasBeenSet() const;

                    /**
                     * 获取Maximum concurrency number of single client service (default 1 for telephone type).
                     * @return MaxConcurrency Maximum concurrency number of single client service (default 1 for telephone type).
                     * 
                     */
                    int64_t GetMaxConcurrency() const;

                    /**
                     * 设置Maximum concurrency number of single client service (default 1 for telephone type).
                     * @param _maxConcurrency Maximum concurrency number of single client service (default 1 for telephone type).
                     * 
                     */
                    void SetMaxConcurrency(const int64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                    /**
                     * 获取Last modification time.
                     * @return LastModifyTimestamp Last modification time.
                     * 
                     */
                    int64_t GetLastModifyTimestamp() const;

                    /**
                     * 设置Last modification time.
                     * @param _lastModifyTimestamp Last modification time.
                     * 
                     */
                    void SetLastModifyTimestamp(const int64_t& _lastModifyTimestamp);

                    /**
                     * 判断参数 LastModifyTimestamp 是否已赋值
                     * @return LastModifyTimestamp 是否已赋值
                     * 
                     */
                    bool LastModifyTimestampHasBeenSet() const;

                    /**
                     * 获取Skill group type 0-cell phone, 1-online, 3-audio, 4-video.	.	
                     * @return SkillGroupType Skill group type 0-cell phone, 1-online, 3-audio, 4-video.	.	
                     * 
                     */
                    int64_t GetSkillGroupType() const;

                    /**
                     * 设置Skill group type 0-cell phone, 1-online, 3-audio, 4-video.	.	
                     * @param _skillGroupType Skill group type 0-cell phone, 1-online, 3-audio, 4-video.	.	
                     * 
                     */
                    void SetSkillGroupType(const int64_t& _skillGroupType);

                    /**
                     * 判断参数 SkillGroupType 是否已赋值
                     * @return SkillGroupType 是否已赋值
                     * 
                     */
                    bool SkillGroupTypeHasBeenSet() const;

                    /**
                     * 获取Intra-Skill group line number.
                     * @return Alias Intra-Skill group line number.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Intra-Skill group line number.
                     * @param _alias Intra-Skill group line number.
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable simultaneous ring.
                     * @return RingAll Specifies whether to enable simultaneous ring.
                     * 
                     */
                    bool GetRingAll() const;

                    /**
                     * 设置Specifies whether to enable simultaneous ring.
                     * @param _ringAll Specifies whether to enable simultaneous ring.
                     * 
                     */
                    void SetRingAll(const bool& _ringAll);

                    /**
                     * 判断参数 RingAll 是否已赋值
                     * @return RingAll 是否已赋值
                     * 
                     */
                    bool RingAllHasBeenSet() const;

                private:

                    /**
                     * Skill group id.
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * Skill group name.
                     */
                    std::string m_skillGroupName;
                    bool m_skillGroupNameHasBeenSet;

                    /**
                     * (Deprecated) type: im, tel, all (full media).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Session allocation policy.
                     */
                    std::string m_routePolicy;
                    bool m_routePolicyHasBeenSet;

                    /**
                     * Whether the session is allocated to the last serviced agent first.
                     */
                    int64_t m_usingLastSeat;
                    bool m_usingLastSeatHasBeenSet;

                    /**
                     * Maximum concurrency number of single client service (default 1 for telephone type).
                     */
                    int64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * Last modification time.
                     */
                    int64_t m_lastModifyTimestamp;
                    bool m_lastModifyTimestampHasBeenSet;

                    /**
                     * Skill group type 0-cell phone, 1-online, 3-audio, 4-video.	.	
                     */
                    int64_t m_skillGroupType;
                    bool m_skillGroupTypeHasBeenSet;

                    /**
                     * Intra-Skill group line number.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Specifies whether to enable simultaneous ring.
                     */
                    bool m_ringAll;
                    bool m_ringAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SKILLGROUPINFOITEM_H_
