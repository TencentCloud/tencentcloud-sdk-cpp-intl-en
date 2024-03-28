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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_NUMBERINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_NUMBERINFO_H_

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
                * Number information.
                */
                class NumberInfo : public AbstractModel
                {
                public:
                    NumberInfo();
                    ~NumberInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number.
                     * @return Number Number.
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置Number.
                     * @param _number Number.
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取Bound outbound call skill group.
                     * @return CallOutSkillGroupIds Bound outbound call skill group.
                     * 
                     */
                    std::vector<uint64_t> GetCallOutSkillGroupIds() const;

                    /**
                     * 设置Bound outbound call skill group.
                     * @param _callOutSkillGroupIds Bound outbound call skill group.
                     * 
                     */
                    void SetCallOutSkillGroupIds(const std::vector<uint64_t>& _callOutSkillGroupIds);

                    /**
                     * 判断参数 CallOutSkillGroupIds 是否已赋值
                     * @return CallOutSkillGroupIds 是否已赋值
                     * 
                     */
                    bool CallOutSkillGroupIdsHasBeenSet() const;

                    /**
                     * 获取Number status, 1-normal, 2-disabled due to overdue payment, 4-disabled by the administrator, 5-disabled due to violation.
                     * @return State Number status, 1-normal, 2-disabled due to overdue payment, 4-disabled by the administrator, 5-disabled due to violation.
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置Number status, 1-normal, 2-disabled due to overdue payment, 4-disabled by the administrator, 5-disabled due to violation.
                     * @param _state Number status, 1-normal, 2-disabled due to overdue payment, 4-disabled by the administrator, 5-disabled due to violation.
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * Number.
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Bound outbound call skill group.
                     */
                    std::vector<uint64_t> m_callOutSkillGroupIds;
                    bool m_callOutSkillGroupIdsHasBeenSet;

                    /**
                     * Number status, 1-normal, 2-disabled due to overdue payment, 4-disabled by the administrator, 5-disabled due to violation.
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_NUMBERINFO_H_
