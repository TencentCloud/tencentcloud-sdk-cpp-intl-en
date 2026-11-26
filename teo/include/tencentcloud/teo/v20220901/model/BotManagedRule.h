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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEDRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEDRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bot Rules. The following rule IDs can be found in the ID information returned by the DescribeBotManagedRules API.
                */
                class BotManagedRule : public AbstractModel
                {
                public:
                    BotManagedRule();
                    ~BotManagedRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Handling method after the trigger rule is triggered. Valid values:
<li>drop: block;</li>
<li>trans: pass;</li>
<li>alg: Javascript challenge;</li>
<li>monitor: observation.</li>
                     * @return Action Handling method after the trigger rule is triggered. Valid values:
<li>drop: block;</li>
<li>trans: pass;</li>
<li>alg: Javascript challenge;</li>
<li>monitor: observation.</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Handling method after the trigger rule is triggered. Valid values:
<li>drop: block;</li>
<li>trans: pass;</li>
<li>alg: Javascript challenge;</li>
<li>monitor: observation.</li>
                     * @param _action Handling method after the trigger rule is triggered. Valid values:
<li>drop: block;</li>
<li>trans: pass;</li>
<li>alg: Javascript challenge;</li>
<li>monitor: observation.</li>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Rule ID. Output only.
                     * @return RuleID Rule ID. Output only.
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置Rule ID. Output only.
                     * @param _ruleID Rule ID. Output only.
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取Rule ID to allow. By default, no rule is allowed.
                     * @return TransManagedIds Rule ID to allow. By default, no rule is allowed.
                     * 
                     */
                    std::vector<int64_t> GetTransManagedIds() const;

                    /**
                     * 设置Rule ID to allow. By default, no rule is allowed.
                     * @param _transManagedIds Rule ID to allow. By default, no rule is allowed.
                     * 
                     */
                    void SetTransManagedIds(const std::vector<int64_t>& _transManagedIds);

                    /**
                     * 判断参数 TransManagedIds 是否已赋值
                     * @return TransManagedIds 是否已赋值
                     * 
                     */
                    bool TransManagedIdsHasBeenSet() const;

                    /**
                     * 获取Rule ID of the JS challenge. By default, no JS challenge is configured for all rules.
                     * @return AlgManagedIds Rule ID of the JS challenge. By default, no JS challenge is configured for all rules.
                     * 
                     */
                    std::vector<int64_t> GetAlgManagedIds() const;

                    /**
                     * 设置Rule ID of the JS challenge. By default, no JS challenge is configured for all rules.
                     * @param _algManagedIds Rule ID of the JS challenge. By default, no JS challenge is configured for all rules.
                     * 
                     */
                    void SetAlgManagedIds(const std::vector<int64_t>& _algManagedIds);

                    /**
                     * 判断参数 AlgManagedIds 是否已赋值
                     * @return AlgManagedIds 是否已赋值
                     * 
                     */
                    bool AlgManagedIdsHasBeenSet() const;

                    /**
                     * 获取Rule ID of the digit verification code. By default, no digit verification code is configured for all rules.
                     * @return CapManagedIds Rule ID of the digit verification code. By default, no digit verification code is configured for all rules.
                     * 
                     */
                    std::vector<int64_t> GetCapManagedIds() const;

                    /**
                     * 设置Rule ID of the digit verification code. By default, no digit verification code is configured for all rules.
                     * @param _capManagedIds Rule ID of the digit verification code. By default, no digit verification code is configured for all rules.
                     * 
                     */
                    void SetCapManagedIds(const std::vector<int64_t>& _capManagedIds);

                    /**
                     * 判断参数 CapManagedIds 是否已赋值
                     * @return CapManagedIds 是否已赋值
                     * 
                     */
                    bool CapManagedIdsHasBeenSet() const;

                    /**
                     * 获取Rule ID to observe. By default, no rule is configured for observation.
                     * @return MonManagedIds Rule ID to observe. By default, no rule is configured for observation.
                     * 
                     */
                    std::vector<int64_t> GetMonManagedIds() const;

                    /**
                     * 设置Rule ID to observe. By default, no rule is configured for observation.
                     * @param _monManagedIds Rule ID to observe. By default, no rule is configured for observation.
                     * 
                     */
                    void SetMonManagedIds(const std::vector<int64_t>& _monManagedIds);

                    /**
                     * 判断参数 MonManagedIds 是否已赋值
                     * @return MonManagedIds 是否已赋值
                     * 
                     */
                    bool MonManagedIdsHasBeenSet() const;

                    /**
                     * 获取Rule ID to intercept. By default, no rule is intercepted.
                     * @return DropManagedIds Rule ID to intercept. By default, no rule is intercepted.
                     * 
                     */
                    std::vector<int64_t> GetDropManagedIds() const;

                    /**
                     * 设置Rule ID to intercept. By default, no rule is intercepted.
                     * @param _dropManagedIds Rule ID to intercept. By default, no rule is intercepted.
                     * 
                     */
                    void SetDropManagedIds(const std::vector<int64_t>& _dropManagedIds);

                    /**
                     * 判断参数 DropManagedIds 是否已赋值
                     * @return DropManagedIds 是否已赋值
                     * 
                     */
                    bool DropManagedIdsHasBeenSet() const;

                private:

                    /**
                     * Handling method after the trigger rule is triggered. Valid values:
<li>drop: block;</li>
<li>trans: pass;</li>
<li>alg: Javascript challenge;</li>
<li>monitor: observation.</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Rule ID. Output only.
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Rule ID to allow. By default, no rule is allowed.
                     */
                    std::vector<int64_t> m_transManagedIds;
                    bool m_transManagedIdsHasBeenSet;

                    /**
                     * Rule ID of the JS challenge. By default, no JS challenge is configured for all rules.
                     */
                    std::vector<int64_t> m_algManagedIds;
                    bool m_algManagedIdsHasBeenSet;

                    /**
                     * Rule ID of the digit verification code. By default, no digit verification code is configured for all rules.
                     */
                    std::vector<int64_t> m_capManagedIds;
                    bool m_capManagedIdsHasBeenSet;

                    /**
                     * Rule ID to observe. By default, no rule is configured for observation.
                     */
                    std::vector<int64_t> m_monManagedIds;
                    bool m_monManagedIdsHasBeenSet;

                    /**
                     * Rule ID to intercept. By default, no rule is intercepted.
                     */
                    std::vector<int64_t> m_dropManagedIds;
                    bool m_dropManagedIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEDRULE_H_
