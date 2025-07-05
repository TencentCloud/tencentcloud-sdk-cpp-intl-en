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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATECCCSKILLGROUPREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATECCCSKILLGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateCCCSkillGroup request structure.
                */
                class CreateCCCSkillGroupRequest : public AbstractModel
                {
                public:
                    CreateCCCSkillGroupRequest();
                    ~CreateCCCSkillGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

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
                     * 获取Skill group type 0-cell phone, 1-online, 3-audio, 4-video.
                     * @return SkillGroupType Skill group type 0-cell phone, 1-online, 3-audio, 4-video.
                     * 
                     */
                    int64_t GetSkillGroupType() const;

                    /**
                     * 设置Skill group type 0-cell phone, 1-online, 3-audio, 4-video.
                     * @param _skillGroupType Skill group type 0-cell phone, 1-online, 3-audio, 4-video.
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
                     * 获取The maximum number of people received by the skill group (the maximum number of people that one agent in this skill group can receive) is set to 1 by default. if the skill group type is online, the maximum can be set to one or more.
2. if the skill group type is phone, audio, or video, then the reception limit must be 1.
                     * @return MaxConcurrency The maximum number of people received by the skill group (the maximum number of people that one agent in this skill group can receive) is set to 1 by default. if the skill group type is online, the maximum can be set to one or more.
2. if the skill group type is phone, audio, or video, then the reception limit must be 1.
                     * 
                     */
                    uint64_t GetMaxConcurrency() const;

                    /**
                     * 设置The maximum number of people received by the skill group (the maximum number of people that one agent in this skill group can receive) is set to 1 by default. if the skill group type is online, the maximum can be set to one or more.
2. if the skill group type is phone, audio, or video, then the reception limit must be 1.
                     * @param _maxConcurrency The maximum number of people received by the skill group (the maximum number of people that one agent in this skill group can receive) is set to 1 by default. if the skill group type is online, the maximum can be set to one or more.
2. if the skill group type is phone, audio, or video, then the reception limit must be 1.
                     * 
                     */
                    void SetMaxConcurrency(const uint64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Skill group name.
                     */
                    std::string m_skillGroupName;
                    bool m_skillGroupNameHasBeenSet;

                    /**
                     * Skill group type 0-cell phone, 1-online, 3-audio, 4-video.
                     */
                    int64_t m_skillGroupType;
                    bool m_skillGroupTypeHasBeenSet;

                    /**
                     * The maximum number of people received by the skill group (the maximum number of people that one agent in this skill group can receive) is set to 1 by default. if the skill group type is online, the maximum can be set to one or more.
2. if the skill group type is phone, audio, or video, then the reception limit must be 1.
                     */
                    uint64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATECCCSKILLGROUPREQUEST_H_
