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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_IGNOREBASELINERULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_IGNOREBASELINERULE_H_

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
                * Information on the ignored baseline check item
                */
                class IgnoreBaselineRule : public AbstractModel
                {
                public:
                    IgnoreBaselineRule();
                    ~IgnoreBaselineRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Baseline check item name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleName Baseline check item name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Baseline check item name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleName Baseline check item name
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
                     * 获取Baseline check item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId Baseline check item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Baseline check item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleId Baseline check item ID
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

                    /**
                     * 获取Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Fixing suggestions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Fix Fixing suggestions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置Fixing suggestions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fix Fixing suggestions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFix(const std::string& _fix);

                    /**
                     * 判断参数 Fix 是否已赋值
                     * @return Fix 是否已赋值
                     * 
                     */
                    bool FixHasBeenSet() const;

                    /**
                     * 获取Number of affected hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EffectHostCount Number of affected hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEffectHostCount() const;

                    /**
                     * 设置Number of affected hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _effectHostCount Number of affected hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEffectHostCount(const uint64_t& _effectHostCount);

                    /**
                     * 判断参数 EffectHostCount 是否已赋值
                     * @return EffectHostCount 是否已赋值
                     * 
                     */
                    bool EffectHostCountHasBeenSet() const;

                private:

                    /**
                     * Baseline check item name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Baseline check item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Fixing suggestions
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * Number of affected hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_effectHostCount;
                    bool m_effectHostCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_IGNOREBASELINERULE_H_
