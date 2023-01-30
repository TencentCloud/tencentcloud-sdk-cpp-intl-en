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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_RULEBASEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_RULEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Runtime security - Basic policy information
                */
                class RuleBaseInfo : public AbstractModel
                {
                public:
                    RuleBaseInfo();
                    ~RuleBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Valid values: `true` (default policy); `false` (custom policy).
                     * @return IsDefault Valid values: `true` (default policy); `false` (custom policy).
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Valid values: `true` (default policy); `false` (custom policy).
                     * @param IsDefault Valid values: `true` (default policy); `false` (custom policy).
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Number of associated images
                     * @return EffectImageCount Number of associated images
                     */
                    uint64_t GetEffectImageCount() const;

                    /**
                     * 设置Number of associated images
                     * @param EffectImageCount Number of associated images
                     */
                    void SetEffectImageCount(const uint64_t& _effectImageCount);

                    /**
                     * 判断参数 EffectImageCount 是否已赋值
                     * @return EffectImageCount 是否已赋值
                     */
                    bool EffectImageCountHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return RuleId Policy ID
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Policy ID
                     * @param RuleId Policy ID
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Policy update time, which can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Policy update time, which can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Policy update time, which can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UpdateTime Policy update time, which can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Policy name
                     * @return RuleName Policy name
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Policy name
                     * @param RuleName Policy name
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Name of the editing user
                     * @return EditUserName Name of the editing user
                     */
                    std::string GetEditUserName() const;

                    /**
                     * 设置Name of the editing user
                     * @param EditUserName Name of the editing user
                     */
                    void SetEditUserName(const std::string& _editUserName);

                    /**
                     * 判断参数 EditUserName 是否已赋值
                     * @return EditUserName 是否已赋值
                     */
                    bool EditUserNameHasBeenSet() const;

                    /**
                     * 获取Valid values: `true` (enable the policy); `false` (disable the policy).
                     * @return IsEnable Valid values: `true` (enable the policy); `false` (disable the policy).
                     */
                    bool GetIsEnable() const;

                    /**
                     * 设置Valid values: `true` (enable the policy); `false` (disable the policy).
                     * @param IsEnable Valid values: `true` (enable the policy); `false` (disable the policy).
                     */
                    void SetIsEnable(const bool& _isEnable);

                    /**
                     * 判断参数 IsEnable 是否已赋值
                     * @return IsEnable 是否已赋值
                     */
                    bool IsEnableHasBeenSet() const;

                private:

                    /**
                     * Valid values: `true` (default policy); `false` (custom policy).
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Number of associated images
                     */
                    uint64_t m_effectImageCount;
                    bool m_effectImageCountHasBeenSet;

                    /**
                     * Policy ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Policy update time, which can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Name of the editing user
                     */
                    std::string m_editUserName;
                    bool m_editUserNameHasBeenSet;

                    /**
                     * Valid values: `true` (enable the policy); `false` (disable the policy).
                     */
                    bool m_isEnable;
                    bool m_isEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_RULEBASEINFO_H_
