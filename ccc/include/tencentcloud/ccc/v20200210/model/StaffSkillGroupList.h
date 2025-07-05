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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSKILLGROUPLIST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSKILLGROUPLIST_H_

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
                * Bound skill group list for agents.
                */
                class StaffSkillGroupList : public AbstractModel
                {
                public:
                    StaffSkillGroupList();
                    ~StaffSkillGroupList() = default;
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
                     * 获取Priority of the agent in the skill group (1 is the highest, 5 is the lowest, 3 by default).
                     * @return Priority Priority of the agent in the skill group (1 is the highest, 5 is the lowest, 3 by default).
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Priority of the agent in the skill group (1 is the highest, 5 is the lowest, 3 by default).
                     * @param _priority Priority of the agent in the skill group (1 is the highest, 5 is the lowest, 3 by default).
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * Skill group id.
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * Priority of the agent in the skill group (1 is the highest, 5 is the lowest, 3 by default).
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSKILLGROUPLIST_H_
