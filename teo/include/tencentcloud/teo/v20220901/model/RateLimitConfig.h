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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RateLimitUserRule.h>
#include <tencentcloud/teo/v20220901/model/RateLimitTemplate.h>
#include <tencentcloud/teo/v20220901/model/RateLimitIntelligence.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Rate limiting rules
                */
                class RateLimitConfig : public AbstractModel
                {
                public:
                    RateLimitConfig();
                    ~RateLimitConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @return Switch Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @param _switch Switch. Values:
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
                     * 获取The settings of the custom rate limiting rule. If it is null, the settings that were last configured will be used.
                     * @return RateLimitUserRules The settings of the custom rate limiting rule. If it is null, the settings that were last configured will be used.
                     * 
                     */
                    std::vector<RateLimitUserRule> GetRateLimitUserRules() const;

                    /**
                     * 设置The settings of the custom rate limiting rule. If it is null, the settings that were last configured will be used.
                     * @param _rateLimitUserRules The settings of the custom rate limiting rule. If it is null, the settings that were last configured will be used.
                     * 
                     */
                    void SetRateLimitUserRules(const std::vector<RateLimitUserRule>& _rateLimitUserRules);

                    /**
                     * 判断参数 RateLimitUserRules 是否已赋值
                     * @return RateLimitUserRules 是否已赋值
                     * 
                     */
                    bool RateLimitUserRulesHasBeenSet() const;

                    /**
                     * 获取The settings of the rate limiting template. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RateLimitTemplate The settings of the rate limiting template. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RateLimitTemplate GetRateLimitTemplate() const;

                    /**
                     * 设置The settings of the rate limiting template. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rateLimitTemplate The settings of the rate limiting template. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRateLimitTemplate(const RateLimitTemplate& _rateLimitTemplate);

                    /**
                     * 判断参数 RateLimitTemplate 是否已赋值
                     * @return RateLimitTemplate 是否已赋值
                     * 
                     */
                    bool RateLimitTemplateHasBeenSet() const;

                    /**
                     * 获取The client filtering settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RateLimitIntelligence The client filtering settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RateLimitIntelligence GetRateLimitIntelligence() const;

                    /**
                     * 设置The client filtering settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rateLimitIntelligence The client filtering settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRateLimitIntelligence(const RateLimitIntelligence& _rateLimitIntelligence);

                    /**
                     * 判断参数 RateLimitIntelligence 是否已赋值
                     * @return RateLimitIntelligence 是否已赋值
                     * 
                     */
                    bool RateLimitIntelligenceHasBeenSet() const;

                    /**
                     * 获取The custom rate limiting rules. If it is `null`, the previous settings is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RateLimitCustomizes The custom rate limiting rules. If it is `null`, the previous settings is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RateLimitUserRule> GetRateLimitCustomizes() const;

                    /**
                     * 设置The custom rate limiting rules. If it is `null`, the previous settings is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _rateLimitCustomizes The custom rate limiting rules. If it is `null`, the previous settings is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRateLimitCustomizes(const std::vector<RateLimitUserRule>& _rateLimitCustomizes);

                    /**
                     * 判断参数 RateLimitCustomizes 是否已赋值
                     * @return RateLimitCustomizes 是否已赋值
                     * 
                     */
                    bool RateLimitCustomizesHasBeenSet() const;

                private:

                    /**
                     * Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The settings of the custom rate limiting rule. If it is null, the settings that were last configured will be used.
                     */
                    std::vector<RateLimitUserRule> m_rateLimitUserRules;
                    bool m_rateLimitUserRulesHasBeenSet;

                    /**
                     * The settings of the rate limiting template. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RateLimitTemplate m_rateLimitTemplate;
                    bool m_rateLimitTemplateHasBeenSet;

                    /**
                     * The client filtering settings. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RateLimitIntelligence m_rateLimitIntelligence;
                    bool m_rateLimitIntelligenceHasBeenSet;

                    /**
                     * The custom rate limiting rules. If it is `null`, the previous settings is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<RateLimitUserRule> m_rateLimitCustomizes;
                    bool m_rateLimitCustomizesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITCONFIG_H_
