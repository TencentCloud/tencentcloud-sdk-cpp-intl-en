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
                * WAF rule
                */
                class WafRule : public AbstractModel
                {
                public:
                    WafRule();
                    ~WafRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable managed rules. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @return Switch Whether to enable managed rules. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable managed rules. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @param _switch Whether to enable managed rules. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
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
                     * 获取IDs of the rules to be disabled.
                     * @return BlockRuleIDs IDs of the rules to be disabled.
                     * 
                     */
                    std::vector<int64_t> GetBlockRuleIDs() const;

                    /**
                     * 设置IDs of the rules to be disabled.
                     * @param _blockRuleIDs IDs of the rules to be disabled.
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
                     * 获取IDs of the rules to be executed in Observe mode.
                     * @return ObserveRuleIDs IDs of the rules to be executed in Observe mode.
                     * 
                     */
                    std::vector<int64_t> GetObserveRuleIDs() const;

                    /**
                     * 设置IDs of the rules to be executed in Observe mode.
                     * @param _observeRuleIDs IDs of the rules to be executed in Observe mode.
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
                     * Whether to enable managed rules. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * IDs of the rules to be disabled.
                     */
                    std::vector<int64_t> m_blockRuleIDs;
                    bool m_blockRuleIDsHasBeenSet;

                    /**
                     * IDs of the rules to be executed in Observe mode.
                     */
                    std::vector<int64_t> m_observeRuleIDs;
                    bool m_observeRuleIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WAFRULE_H_
