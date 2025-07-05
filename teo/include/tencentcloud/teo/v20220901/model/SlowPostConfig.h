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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SLOWPOSTCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SLOWPOSTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/FirstPartConfig.h>
#include <tencentcloud/teo/v20220901/model/SlowRateConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Slow attack defense configuration.
                */
                class SlowPostConfig : public AbstractModel
                {
                public:
                    SlowPostConfig();
                    ~SlowPostConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @return Switch Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @param _switch Values:
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
                     * 获取Detect slow attacks by the transfer period of the first 8 KB of requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FirstPartConfig Detect slow attacks by the transfer period of the first 8 KB of requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    FirstPartConfig GetFirstPartConfig() const;

                    /**
                     * 设置Detect slow attacks by the transfer period of the first 8 KB of requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _firstPartConfig Detect slow attacks by the transfer period of the first 8 KB of requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFirstPartConfig(const FirstPartConfig& _firstPartConfig);

                    /**
                     * 判断参数 FirstPartConfig 是否已赋值
                     * @return FirstPartConfig 是否已赋值
                     * 
                     */
                    bool FirstPartConfigHasBeenSet() const;

                    /**
                     * 获取Detect slow attacks by the data rate of the main body (excluding the first 8 KB) of requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SlowRateConfig Detect slow attacks by the data rate of the main body (excluding the first 8 KB) of requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    SlowRateConfig GetSlowRateConfig() const;

                    /**
                     * 设置Detect slow attacks by the data rate of the main body (excluding the first 8 KB) of requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _slowRateConfig Detect slow attacks by the data rate of the main body (excluding the first 8 KB) of requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSlowRateConfig(const SlowRateConfig& _slowRateConfig);

                    /**
                     * 判断参数 SlowRateConfig 是否已赋值
                     * @return SlowRateConfig 是否已赋值
                     * 
                     */
                    bool SlowRateConfigHasBeenSet() const;

                    /**
                     * 获取The action to taken when a slow attack is detected. Values:
<li>`monitor`: Observe</li>
<li>`drop`: Block the request</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Action The action to taken when a slow attack is detected. Values:
<li>`monitor`: Observe</li>
<li>`drop`: Block the request</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置The action to taken when a slow attack is detected. Values:
<li>`monitor`: Observe</li>
<li>`drop`: Block the request</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _action The action to taken when a slow attack is detected. Values:
<li>`monitor`: Observe</li>
<li>`drop`: Block the request</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取ID of the rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RuleId ID of the rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置ID of the rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ruleId ID of the rule
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Detect slow attacks by the transfer period of the first 8 KB of requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    FirstPartConfig m_firstPartConfig;
                    bool m_firstPartConfigHasBeenSet;

                    /**
                     * Detect slow attacks by the data rate of the main body (excluding the first 8 KB) of requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    SlowRateConfig m_slowRateConfig;
                    bool m_slowRateConfigHasBeenSet;

                    /**
                     * The action to taken when a slow attack is detected. Values:
<li>`monitor`: Observe</li>
<li>`drop`: Block the request</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * ID of the rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SLOWPOSTCONFIG_H_
