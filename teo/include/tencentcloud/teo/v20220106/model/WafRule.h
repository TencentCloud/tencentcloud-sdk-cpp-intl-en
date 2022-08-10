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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_WAFRULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_WAFRULE_H_

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
        namespace V20220106
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
                     * 获取Blocklist
                     * @return BlockRuleIDs Blocklist
                     */
                    std::vector<int64_t> GetBlockRuleIDs() const;

                    /**
                     * 设置Blocklist
                     * @param BlockRuleIDs Blocklist
                     */
                    void SetBlockRuleIDs(const std::vector<int64_t>& _blockRuleIDs);

                    /**
                     * 判断参数 BlockRuleIDs 是否已赋值
                     * @return BlockRuleIDs 是否已赋值
                     */
                    bool BlockRuleIDsHasBeenSet() const;

                    /**
                     * 获取Whether the WAF rule is enabled or disabled
                     * @return Switch Whether the WAF rule is enabled or disabled
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether the WAF rule is enabled or disabled
                     * @param Switch Whether the WAF rule is enabled or disabled
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Observe mode
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ObserveRuleIDs Observe mode
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> GetObserveRuleIDs() const;

                    /**
                     * 设置Observe mode
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param ObserveRuleIDs Observe mode
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetObserveRuleIDs(const std::vector<int64_t>& _observeRuleIDs);

                    /**
                     * 判断参数 ObserveRuleIDs 是否已赋值
                     * @return ObserveRuleIDs 是否已赋值
                     */
                    bool ObserveRuleIDsHasBeenSet() const;

                private:

                    /**
                     * Blocklist
                     */
                    std::vector<int64_t> m_blockRuleIDs;
                    bool m_blockRuleIDsHasBeenSet;

                    /**
                     * Whether the WAF rule is enabled or disabled
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Observe mode
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_observeRuleIDs;
                    bool m_observeRuleIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_WAFRULE_H_
