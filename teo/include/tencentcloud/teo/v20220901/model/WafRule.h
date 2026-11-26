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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_WAFRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_WAFRULE_H_

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
                * Waf rule
                */
                class WafRule : public AbstractModel
                {
                public:
                    WafRule();
                    ~WafRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Managed rule switch. Valid values:
<li> on: enabled;</li>
<li> off: disabled</li>
                     * @return Switch Managed rule switch. Valid values:
<li> on: enabled;</li>
<li> off: disabled</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Managed rule switch. Valid values:
<li> on: enabled;</li>
<li> off: disabled</li>
                     * @param _switch Managed rule switch. Valid values:
<li> on: enabled;</li>
<li> off: disabled</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取List of blocklisted IDs. Adding a rule ID to this parameter list disables the ID, meaning the rule ID no longer takes effect.
                     * @return BlockRuleIDs List of blocklisted IDs. Adding a rule ID to this parameter list disables the ID, meaning the rule ID no longer takes effect.
                     * 
                     */
                    std::vector<int64_t> GetBlockRuleIDs() const;

                    /**
                     * 设置List of blocklisted IDs. Adding a rule ID to this parameter list disables the ID, meaning the rule ID no longer takes effect.
                     * @param _blockRuleIDs List of blocklisted IDs. Adding a rule ID to this parameter list disables the ID, meaning the rule ID no longer takes effect.
                     * 
                     */
                    void SetBlockRuleIDs(const std::vector<int64_t>& _blockRuleIDs);

                    /**
                     * 判断参数 BlockRuleIDs 是否已赋值
                     * @return BlockRuleIDs 是否已赋值
                     * 
                     */
                    bool BlockRuleIDsHasBeenSet() const;

                    /**
                     * 获取List of observation mode IDs. Add a rule ID to this parameter list to make the ID take effect in observation mode, that is, the rule ID enters observation mode.
                     * @return ObserveRuleIDs List of observation mode IDs. Add a rule ID to this parameter list to make the ID take effect in observation mode, that is, the rule ID enters observation mode.
                     * 
                     */
                    std::vector<int64_t> GetObserveRuleIDs() const;

                    /**
                     * 设置List of observation mode IDs. Add a rule ID to this parameter list to make the ID take effect in observation mode, that is, the rule ID enters observation mode.
                     * @param _observeRuleIDs List of observation mode IDs. Add a rule ID to this parameter list to make the ID take effect in observation mode, that is, the rule ID enters observation mode.
                     * 
                     */
                    void SetObserveRuleIDs(const std::vector<int64_t>& _observeRuleIDs);

                    /**
                     * 判断参数 ObserveRuleIDs 是否已赋值
                     * @return ObserveRuleIDs 是否已赋值
                     * 
                     */
                    bool ObserveRuleIDsHasBeenSet() const;

                private:

                    /**
                     * Managed rule switch. Valid values:
<li> on: enabled;</li>
<li> off: disabled</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * List of blocklisted IDs. Adding a rule ID to this parameter list disables the ID, meaning the rule ID no longer takes effect.
                     */
                    std::vector<int64_t> m_blockRuleIDs;
                    bool m_blockRuleIDsHasBeenSet;

                    /**
                     * List of observation mode IDs. Add a rule ID to this parameter list to make the ID take effect in observation mode, that is, the rule ID enters observation mode.
                     */
                    std::vector<int64_t> m_observeRuleIDs;
                    bool m_observeRuleIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WAFRULE_H_
