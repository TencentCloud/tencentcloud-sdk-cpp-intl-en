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
#include <tencentcloud/teo/v20220901/model/BotManagementLite.h>
#include <tencentcloud/teo/v20220901/model/DefaultDenySecurityActionParameters.h>
#include <tencentcloud/teo/v20220901/model/SecurityHeadersToOrigin.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Security policy configuration.
                */
                class SecurityPolicy : public AbstractModel
                {
                public:
                    SecurityPolicy();
                    ~SecurityPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Custom rule configuration.</p>
                     * @return CustomRules <p>Custom rule configuration.</p>
                     * 
                     */
                    CustomRules GetCustomRules() const;

                    /**
                     * 设置<p>Custom rule configuration.</p>
                     * @param _customRules <p>Custom rule configuration.</p>
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
                     * 获取<p>Managed rule configuration.</p>
                     * @return ManagedRules <p>Managed rule configuration.</p>
                     * 
                     */
                    ManagedRules GetManagedRules() const;

                    /**
                     * 设置<p>Managed rule configuration.</p>
                     * @param _managedRules <p>Managed rule configuration.</p>
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
                     * 获取<p>HTTP DDoS protection configuration.</p>
                     * @return HttpDDoSProtection <p>HTTP DDoS protection configuration.</p>
                     * 
                     */
                    HttpDDoSProtection GetHttpDDoSProtection() const;

                    /**
                     * 设置<p>HTTP DDoS protection configuration.</p>
                     * @param _httpDDoSProtection <p>HTTP DDoS protection configuration.</p>
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
                     * 获取<p>Rate limiting rule configuration.</p>
                     * @return RateLimitingRules <p>Rate limiting rule configuration.</p>
                     * 
                     */
                    RateLimitingRules GetRateLimitingRules() const;

                    /**
                     * 设置<p>Rate limiting rule configuration.</p>
                     * @param _rateLimitingRules <p>Rate limiting rule configuration.</p>
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
                     * 获取<p>Exception rule configuration.</p>
                     * @return ExceptionRules <p>Exception rule configuration.</p>
                     * 
                     */
                    ExceptionRules GetExceptionRules() const;

                    /**
                     * 设置<p>Exception rule configuration.</p>
                     * @param _exceptionRules <p>Exception rule configuration.</p>
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
                     * 获取<p>Bot management configuration.</p>
                     * @return BotManagement <p>Bot management configuration.</p>
                     * 
                     */
                    BotManagement GetBotManagement() const;

                    /**
                     * 设置<p>Bot management configuration.</p>
                     * @param _botManagement <p>Bot management configuration.</p>
                     * 
                     */
                    void SetBotManagement(const BotManagement& _botManagement);

                    /**
                     * 判断参数 BotManagement 是否已赋值
                     * @return BotManagement 是否已赋值
                     * 
                     */
                    bool BotManagementHasBeenSet() const;

                    /**
                     * 获取<p>Basic Bot management configuration.</p>
                     * @return BotManagementLite <p>Basic Bot management configuration.</p>
                     * 
                     */
                    BotManagementLite GetBotManagementLite() const;

                    /**
                     * 设置<p>Basic Bot management configuration.</p>
                     * @param _botManagementLite <p>Basic Bot management configuration.</p>
                     * 
                     */
                    void SetBotManagementLite(const BotManagementLite& _botManagementLite);

                    /**
                     * 判断参数 BotManagementLite 是否已赋值
                     * @return BotManagementLite 是否已赋值
                     * 
                     */
                    bool BotManagementLiteHasBeenSet() const;

                    /**
                     * 获取<p>Default block action configuration.</p>
                     * @return DefaultDenySecurityActionParameters <p>Default block action configuration.</p>
                     * 
                     */
                    DefaultDenySecurityActionParameters GetDefaultDenySecurityActionParameters() const;

                    /**
                     * 设置<p>Default block action configuration.</p>
                     * @param _defaultDenySecurityActionParameters <p>Default block action configuration.</p>
                     * 
                     */
                    void SetDefaultDenySecurityActionParameters(const DefaultDenySecurityActionParameters& _defaultDenySecurityActionParameters);

                    /**
                     * 判断参数 DefaultDenySecurityActionParameters 是否已赋值
                     * @return DefaultDenySecurityActionParameters 是否已赋值
                     * 
                     */
                    bool DefaultDenySecurityActionParametersHasBeenSet() const;

                    /**
                     * 获取<p>Security headers to include in requests to the origin. After the configuration takes effect, request headers with the corresponding `keyname` will be sent to the origin.</p>
                     * @return SecurityHeadersToOrigin <p>Security headers to include in requests to the origin. After the configuration takes effect, request headers with the corresponding `keyname` will be sent to the origin.</p>
                     * 
                     */
                    SecurityHeadersToOrigin GetSecurityHeadersToOrigin() const;

                    /**
                     * 设置<p>Security headers to include in requests to the origin. After the configuration takes effect, request headers with the corresponding `keyname` will be sent to the origin.</p>
                     * @param _securityHeadersToOrigin <p>Security headers to include in requests to the origin. After the configuration takes effect, request headers with the corresponding `keyname` will be sent to the origin.</p>
                     * 
                     */
                    void SetSecurityHeadersToOrigin(const SecurityHeadersToOrigin& _securityHeadersToOrigin);

                    /**
                     * 判断参数 SecurityHeadersToOrigin 是否已赋值
                     * @return SecurityHeadersToOrigin 是否已赋值
                     * 
                     */
                    bool SecurityHeadersToOriginHasBeenSet() const;

                private:

                    /**
                     * <p>Custom rule configuration.</p>
                     */
                    CustomRules m_customRules;
                    bool m_customRulesHasBeenSet;

                    /**
                     * <p>Managed rule configuration.</p>
                     */
                    ManagedRules m_managedRules;
                    bool m_managedRulesHasBeenSet;

                    /**
                     * <p>HTTP DDoS protection configuration.</p>
                     */
                    HttpDDoSProtection m_httpDDoSProtection;
                    bool m_httpDDoSProtectionHasBeenSet;

                    /**
                     * <p>Rate limiting rule configuration.</p>
                     */
                    RateLimitingRules m_rateLimitingRules;
                    bool m_rateLimitingRulesHasBeenSet;

                    /**
                     * <p>Exception rule configuration.</p>
                     */
                    ExceptionRules m_exceptionRules;
                    bool m_exceptionRulesHasBeenSet;

                    /**
                     * <p>Bot management configuration.</p>
                     */
                    BotManagement m_botManagement;
                    bool m_botManagementHasBeenSet;

                    /**
                     * <p>Basic Bot management configuration.</p>
                     */
                    BotManagementLite m_botManagementLite;
                    bool m_botManagementLiteHasBeenSet;

                    /**
                     * <p>Default block action configuration.</p>
                     */
                    DefaultDenySecurityActionParameters m_defaultDenySecurityActionParameters;
                    bool m_defaultDenySecurityActionParametersHasBeenSet;

                    /**
                     * <p>Security headers to include in requests to the origin. After the configuration takes effect, request headers with the corresponding `keyname` will be sent to the origin.</p>
                     */
                    SecurityHeadersToOrigin m_securityHeadersToOrigin;
                    bool m_securityHeadersToOriginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYPOLICY_H_
