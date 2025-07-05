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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_SECURITYCONFIG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_SECURITYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/WafConfig.h>
#include <tencentcloud/teo/v20220106/model/RateLimitConfig.h>
#include <tencentcloud/teo/v20220106/model/DDoSConfig.h>
#include <tencentcloud/teo/v20220106/model/AclConfig.h>
#include <tencentcloud/teo/v20220106/model/BotConfig.h>
#include <tencentcloud/teo/v20220106/model/SwitchConfig.h>
#include <tencentcloud/teo/v20220106/model/IpTableConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Security configuration
                */
                class SecurityConfig : public AbstractModel
                {
                public:
                    SecurityConfig();
                    ~SecurityConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取WAF configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return WafConfig WAF configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    WafConfig GetWafConfig() const;

                    /**
                     * 设置WAF configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _wafConfig WAF configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWafConfig(const WafConfig& _wafConfig);

                    /**
                     * 判断参数 WafConfig 是否已赋值
                     * @return WafConfig 是否已赋值
                     * 
                     */
                    bool WafConfigHasBeenSet() const;

                    /**
                     * 获取Rate limit configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RateLimitConfig Rate limit configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    RateLimitConfig GetRateLimitConfig() const;

                    /**
                     * 设置Rate limit configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _rateLimitConfig Rate limit configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRateLimitConfig(const RateLimitConfig& _rateLimitConfig);

                    /**
                     * 判断参数 RateLimitConfig 是否已赋值
                     * @return RateLimitConfig 是否已赋值
                     * 
                     */
                    bool RateLimitConfigHasBeenSet() const;

                    /**
                     * 获取DDoS mitigation configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DdosConfig DDoS mitigation configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    DDoSConfig GetDdosConfig() const;

                    /**
                     * 设置DDoS mitigation configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ddosConfig DDoS mitigation configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDdosConfig(const DDoSConfig& _ddosConfig);

                    /**
                     * 判断参数 DdosConfig 是否已赋值
                     * @return DdosConfig 是否已赋值
                     * 
                     */
                    bool DdosConfigHasBeenSet() const;

                    /**
                     * 获取ACL configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AclConfig ACL configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    AclConfig GetAclConfig() const;

                    /**
                     * 设置ACL configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _aclConfig ACL configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAclConfig(const AclConfig& _aclConfig);

                    /**
                     * 判断参数 AclConfig 是否已赋值
                     * @return AclConfig 是否已赋值
                     * 
                     */
                    bool AclConfigHasBeenSet() const;

                    /**
                     * 获取Bot configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return BotConfig Bot configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    BotConfig GetBotConfig() const;

                    /**
                     * 设置Bot configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _botConfig Bot configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetBotConfig(const BotConfig& _botConfig);

                    /**
                     * 判断参数 BotConfig 是否已赋值
                     * @return BotConfig 是否已赋值
                     * 
                     */
                    bool BotConfigHasBeenSet() const;

                    /**
                     * 获取Switch that controls all web security configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SwitchConfig Switch that controls all web security configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    SwitchConfig GetSwitchConfig() const;

                    /**
                     * 设置Switch that controls all web security configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _switchConfig Switch that controls all web security configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSwitchConfig(const SwitchConfig& _switchConfig);

                    /**
                     * 判断参数 SwitchConfig 是否已赋值
                     * @return SwitchConfig 是否已赋值
                     * 
                     */
                    bool SwitchConfigHasBeenSet() const;

                    /**
                     * 获取IP blocklist/allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IpTableConfig IP blocklist/allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    IpTableConfig GetIpTableConfig() const;

                    /**
                     * 设置IP blocklist/allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ipTableConfig IP blocklist/allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIpTableConfig(const IpTableConfig& _ipTableConfig);

                    /**
                     * 判断参数 IpTableConfig 是否已赋值
                     * @return IpTableConfig 是否已赋值
                     * 
                     */
                    bool IpTableConfigHasBeenSet() const;

                private:

                    /**
                     * WAF configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    WafConfig m_wafConfig;
                    bool m_wafConfigHasBeenSet;

                    /**
                     * Rate limit configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    RateLimitConfig m_rateLimitConfig;
                    bool m_rateLimitConfigHasBeenSet;

                    /**
                     * DDoS mitigation configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    DDoSConfig m_ddosConfig;
                    bool m_ddosConfigHasBeenSet;

                    /**
                     * ACL configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    AclConfig m_aclConfig;
                    bool m_aclConfigHasBeenSet;

                    /**
                     * Bot configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    BotConfig m_botConfig;
                    bool m_botConfigHasBeenSet;

                    /**
                     * Switch that controls all web security configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    SwitchConfig m_switchConfig;
                    bool m_switchConfigHasBeenSet;

                    /**
                     * IP blocklist/allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    IpTableConfig m_ipTableConfig;
                    bool m_ipTableConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_SECURITYCONFIG_H_
