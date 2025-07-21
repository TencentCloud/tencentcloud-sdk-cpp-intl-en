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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYPOLICY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomRules.h>
#include <tencentcloud/teo/v20220901/model/ManagedRules.h>
#include <tencentcloud/teo/v20220901/model/HttpDDoSProtection.h>
#include <tencentcloud/teo/v20220901/model/RateLimitingRules.h>
#include <tencentcloud/teo/v20220901/model/ExceptionRules.h>
#include <tencentcloud/teo/v20220901/model/BotManagement.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Web security policy.
                */
                class SecurityPolicy : public AbstractModel
                {
                public:
                    SecurityPolicy();
                    ~SecurityPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom rules. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CustomRules Custom rules. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    CustomRules GetCustomRules() const;

                    /**
                     * 设置Custom rules. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _customRules Custom rules. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCustomRules(const CustomRules& _customRules);

                    /**
                     * 判断参数 CustomRules 是否已赋值
                     * @return CustomRules 是否已赋值
                     * 
                     */
                    bool CustomRulesHasBeenSet() const;

                    /**
                     * 获取Managed. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ManagedRules Managed. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ManagedRules GetManagedRules() const;

                    /**
                     * 设置Managed. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _managedRules Managed. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetManagedRules(const ManagedRules& _managedRules);

                    /**
                     * 判断参数 ManagedRules 是否已赋值
                     * @return ManagedRules 是否已赋值
                     * 
                     */
                    bool ManagedRulesHasBeenSet() const;

                    /**
                     * 获取HTTP DDOS protection configuration.
                     * @return HttpDDoSProtection HTTP DDOS protection configuration.
                     * 
                     */
                    HttpDDoSProtection GetHttpDDoSProtection() const;

                    /**
                     * 设置HTTP DDOS protection configuration.
                     * @param _httpDDoSProtection HTTP DDOS protection configuration.
                     * 
                     */
                    void SetHttpDDoSProtection(const HttpDDoSProtection& _httpDDoSProtection);

                    /**
                     * 判断参数 HttpDDoSProtection 是否已赋值
                     * @return HttpDDoSProtection 是否已赋值
                     * 
                     */
                    bool HttpDDoSProtectionHasBeenSet() const;

                    /**
                     * 获取Configures the rate limiting rule.
                     * @return RateLimitingRules Configures the rate limiting rule.
                     * 
                     */
                    RateLimitingRules GetRateLimitingRules() const;

                    /**
                     * 设置Configures the rate limiting rule.
                     * @param _rateLimitingRules Configures the rate limiting rule.
                     * 
                     */
                    void SetRateLimitingRules(const RateLimitingRules& _rateLimitingRules);

                    /**
                     * 判断参数 RateLimitingRules 是否已赋值
                     * @return RateLimitingRules 是否已赋值
                     * 
                     */
                    bool RateLimitingRulesHasBeenSet() const;

                    /**
                     * 获取Exception rule configuration.
                     * @return ExceptionRules Exception rule configuration.
                     * 
                     */
                    ExceptionRules GetExceptionRules() const;

                    /**
                     * 设置Exception rule configuration.
                     * @param _exceptionRules Exception rule configuration.
                     * 
                     */
                    void SetExceptionRules(const ExceptionRules& _exceptionRules);

                    /**
                     * 判断参数 ExceptionRules 是否已赋值
                     * @return ExceptionRules 是否已赋值
                     * 
                     */
                    bool ExceptionRulesHasBeenSet() const;

                    /**
                     * 获取Bot management configuration.
                     * @return BotManagement Bot management configuration.
                     * 
                     */
                    BotManagement GetBotManagement() const;

                    /**
                     * 设置Bot management configuration.
                     * @param _botManagement Bot management configuration.
                     * 
                     */
                    void SetBotManagement(const BotManagement& _botManagement);

                    /**
                     * 判断参数 BotManagement 是否已赋值
                     * @return BotManagement 是否已赋值
                     * 
                     */
                    bool BotManagementHasBeenSet() const;

                private:

                    /**
                     * Custom rules. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    CustomRules m_customRules;
                    bool m_customRulesHasBeenSet;

                    /**
                     * Managed. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ManagedRules m_managedRules;
                    bool m_managedRulesHasBeenSet;

                    /**
                     * HTTP DDOS protection configuration.
                     */
                    HttpDDoSProtection m_httpDDoSProtection;
                    bool m_httpDDoSProtectionHasBeenSet;

                    /**
                     * Configures the rate limiting rule.
                     */
                    RateLimitingRules m_rateLimitingRules;
                    bool m_rateLimitingRulesHasBeenSet;

                    /**
                     * Exception rule configuration.
                     */
                    ExceptionRules m_exceptionRules;
                    bool m_exceptionRulesHasBeenSet;

                    /**
                     * Bot management configuration.
                     */
                    BotManagement m_botManagement;
                    bool m_botManagementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYPOLICY_H_
