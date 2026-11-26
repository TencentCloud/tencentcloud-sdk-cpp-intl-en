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
                * Rate limiting rule
                */
                class RateLimitConfig : public AbstractModel
                {
                public:
                    RateLimitConfig();
                    ~RateLimitConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @return Switch Switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @param _switch Switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
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
                     * 获取Rate limit - user rule list. If null, use the last set configuration by default.
                     * @return RateLimitUserRules Rate limit - user rule list. If null, use the last set configuration by default.
                     * 
                     */
                    std::vector<RateLimitUserRule> GetRateLimitUserRules() const;

                    /**
                     * 设置Rate limit - user rule list. If null, use the last set configuration by default.
                     * @param _rateLimitUserRules Rate limit - user rule list. If null, use the last set configuration by default.
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
                     * 获取Rate limit template feature. If null, use the last set configuration by default.
                     * @return RateLimitTemplate Rate limit template feature. If null, use the last set configuration by default.
                     * 
                     */
                    RateLimitTemplate GetRateLimitTemplate() const;

                    /**
                     * 设置Rate limit template feature. If null, use the last set configuration by default.
                     * @param _rateLimitTemplate Rate limit template feature. If null, use the last set configuration by default.
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
                     * 获取Intelligent client filtering. If it is null, use the last set configuration by default.
                     * @return RateLimitIntelligence Intelligent client filtering. If it is null, use the last set configuration by default.
                     * 
                     */
                    RateLimitIntelligence GetRateLimitIntelligence() const;

                    /**
                     * 设置Intelligent client filtering. If it is null, use the last set configuration by default.
                     * @param _rateLimitIntelligence Intelligent client filtering. If it is null, use the last set configuration by default.
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
                     * 获取Rate limit - Managed Custom Rules. If null, use the last set configuration by default.
                     * @return RateLimitCustomizes Rate limit - Managed Custom Rules. If null, use the last set configuration by default.
                     * 
                     */
                    std::vector<RateLimitUserRule> GetRateLimitCustomizes() const;

                    /**
                     * 设置Rate limit - Managed Custom Rules. If null, use the last set configuration by default.
                     * @param _rateLimitCustomizes Rate limit - Managed Custom Rules. If null, use the last set configuration by default.
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
                     * Switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Rate limit - user rule list. If null, use the last set configuration by default.
                     */
                    std::vector<RateLimitUserRule> m_rateLimitUserRules;
                    bool m_rateLimitUserRulesHasBeenSet;

                    /**
                     * Rate limit template feature. If null, use the last set configuration by default.
                     */
                    RateLimitTemplate m_rateLimitTemplate;
                    bool m_rateLimitTemplateHasBeenSet;

                    /**
                     * Intelligent client filtering. If it is null, use the last set configuration by default.
                     */
                    RateLimitIntelligence m_rateLimitIntelligence;
                    bool m_rateLimitIntelligenceHasBeenSet;

                    /**
                     * Rate limit - Managed Custom Rules. If null, use the last set configuration by default.
                     */
                    std::vector<RateLimitUserRule> m_rateLimitCustomizes;
                    bool m_rateLimitCustomizesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITCONFIG_H_
