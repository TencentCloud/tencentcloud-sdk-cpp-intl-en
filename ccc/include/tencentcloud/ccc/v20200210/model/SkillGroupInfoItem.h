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
                     * 获取Skill group ID.
                     * @return SkillGroupId Skill group ID.
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置Skill group ID.
                     * @param _skillGroupId Skill group ID.
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
                     * 获取(Deprecated) Type: IM, TEL, ALL (full media).
                     * @return Type (Deprecated) Type: IM, TEL, ALL (full media).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置(Deprecated) Type: IM, TEL, ALL (full media).
                     * @param _type (Deprecated) Type: IM, TEL, ALL (full media).
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RoutePolicy Session allocation policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRoutePolicy() const;

                    /**
                     * 设置Session allocation policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _routePolicy Session allocation policy.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Should the conversation allocation prioritize the last service seat?
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UsingLastSeat Should the conversation allocation prioritize the last service seat?
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUsingLastSeat() const;

                    /**
                     * 设置Should the conversation allocation prioritize the last service seat?
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _usingLastSeat Should the conversation allocation prioritize the last service seat?
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxConcurrency Maximum concurrency number of single client service (default 1 for telephone type).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxConcurrency() const;

                    /**
                     * 设置Maximum concurrency number of single client service (default 1 for telephone type).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _maxConcurrency Maximum concurrency number of single client service (default 1 for telephone type).
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastModifyTimestamp Last modification time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLastModifyTimestamp() const;

                    /**
                     * 设置Last modification time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _lastModifyTimestamp Last modification time.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Skill group type 0-phone, 1-online, 3-audio, 4-video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SkillGroupType Skill group type 0-phone, 1-online, 3-audio, 4-video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSkillGroupType() const;

                    /**
                     * 设置Skill group type 0-phone, 1-online, 3-audio, 4-video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _skillGroupType Skill group type 0-phone, 1-online, 3-audio, 4-video.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Extension number within the skill group
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Alias Extension number within the skill group
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Extension number within the skill group
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _alias Extension number within the skill group
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                private:

                    /**
                     * Skill group ID.
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * Skill group name.
                     */
                    std::string m_skillGroupName;
                    bool m_skillGroupNameHasBeenSet;

                    /**
                     * (Deprecated) Type: IM, TEL, ALL (full media).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Session allocation policy.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_routePolicy;
                    bool m_routePolicyHasBeenSet;

                    /**
                     * Should the conversation allocation prioritize the last service seat?
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_usingLastSeat;
                    bool m_usingLastSeatHasBeenSet;

                    /**
                     * Maximum concurrency number of single client service (default 1 for telephone type).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * Last modification time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_lastModifyTimestamp;
                    bool m_lastModifyTimestampHasBeenSet;

                    /**
                     * Skill group type 0-phone, 1-online, 3-audio, 4-video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_skillGroupType;
                    bool m_skillGroupTypeHasBeenSet;

                    /**
                     * Extension number within the skill group
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SKILLGROUPINFOITEM_H_
