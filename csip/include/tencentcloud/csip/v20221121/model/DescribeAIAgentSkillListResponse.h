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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIAGENTSKILLLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIAGENTSKILLLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AIAgentSkillInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAIAgentSkillList response structure.
                */
                class DescribeAIAgentSkillListResponse : public AbstractModel
                {
                public:
                    DescribeAIAgentSkillListResponse();
                    ~DescribeAIAgentSkillListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Skill list.
                     * @return SkillList Skill list.
                     * 
                     */
                    std::vector<AIAgentSkillInfo> GetSkillList() const;

                    /**
                     * 判断参数 SkillList 是否已赋值
                     * @return SkillList 是否已赋值
                     * 
                     */
                    bool SkillListHasBeenSet() const;

                    /**
                     * 获取Total number.
                     * @return TotalCount Total number.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Skill list.
                     */
                    std::vector<AIAgentSkillInfo> m_skillList;
                    bool m_skillListHasBeenSet;

                    /**
                     * Total number.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIAGENTSKILLLISTRESPONSE_H_
