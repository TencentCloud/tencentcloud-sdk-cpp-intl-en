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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULETOPINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULETOPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Information on TOP baseline detection item
                */
                class BaselineRuleTopInfo : public AbstractModel
                {
                public:
                    BaselineRuleTopInfo();
                    ~BaselineRuleTopInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Baseline detection item name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleName Baseline detection item name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Baseline detection item name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleName Baseline detection item name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Detection item hazard level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Level Detection item hazard level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Detection item hazard level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _level Detection item hazard level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Total number of events
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventCount Total number of events
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEventCount() const;

                    /**
                     * 设置Total number of events
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventCount Total number of events
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventCount(const uint64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取Detection Item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId Detection Item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Detection Item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleId Detection Item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * Baseline detection item name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Detection item hazard level
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Total number of events
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * Detection Item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULETOPINFO_H_
