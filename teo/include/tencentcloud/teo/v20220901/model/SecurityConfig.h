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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/WafConfig.h>
#include <tencentcloud/teo/v20220901/model/RateLimitConfig.h>
#include <tencentcloud/teo/v20220901/model/AclConfig.h>
#include <tencentcloud/teo/v20220901/model/BotConfig.h>
#include <tencentcloud/teo/v20220901/model/SwitchConfig.h>
#include <tencentcloud/teo/v20220901/model/IpTableConfig.h>
#include <tencentcloud/teo/v20220901/model/ExceptConfig.h>
#include <tencentcloud/teo/v20220901/model/DropPageConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
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
                     * 获取The settings of the managed rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WafConfig The settings of the managed rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    WafConfig GetWafConfig() const;

                    /**
                     * 设置The settings of the managed rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param WafConfig The settings of the managed rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWafConfig(const WafConfig& _wafConfig);

                    /**
                     * 判断参数 WafConfig 是否已赋值
                     * @return WafConfig 是否已赋值
                     */
                    bool WafConfigHasBeenSet() const;

                    /**
                     * 获取The settings of the rate limiting rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RateLimitConfig The settings of the rate limiting rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RateLimitConfig GetRateLimitConfig() const;

                    /**
                     * 设置The settings of the rate limiting rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RateLimitConfig The settings of the rate limiting rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRateLimitConfig(const RateLimitConfig& _rateLimitConfig);

                    /**
                     * 判断参数 RateLimitConfig 是否已赋值
                     * @return RateLimitConfig 是否已赋值
                     */
                    bool RateLimitConfigHasBeenSet() const;

                    /**
                     * 获取The settings of the custom rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AclConfig The settings of the custom rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AclConfig GetAclConfig() const;

                    /**
                     * 设置The settings of the custom rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AclConfig The settings of the custom rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAclConfig(const AclConfig& _aclConfig);

                    /**
                     * 判断参数 AclConfig 是否已赋值
                     * @return AclConfig 是否已赋值
                     */
                    bool AclConfigHasBeenSet() const;

                    /**
                     * 获取The settings of the bot configuration. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BotConfig The settings of the bot configuration. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BotConfig GetBotConfig() const;

                    /**
                     * 设置The settings of the bot configuration. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param BotConfig The settings of the bot configuration. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBotConfig(const BotConfig& _botConfig);

                    /**
                     * 判断参数 BotConfig 是否已赋值
                     * @return BotConfig 是否已赋值
                     */
                    bool BotConfigHasBeenSet() const;

                    /**
                     * 获取The switch setting of the layer-7 protection. If it is null, the setting that was last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SwitchConfig The switch setting of the layer-7 protection. If it is null, the setting that was last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SwitchConfig GetSwitchConfig() const;

                    /**
                     * 设置The switch setting of the layer-7 protection. If it is null, the setting that was last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SwitchConfig The switch setting of the layer-7 protection. If it is null, the setting that was last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSwitchConfig(const SwitchConfig& _switchConfig);

                    /**
                     * 判断参数 SwitchConfig 是否已赋值
                     * @return SwitchConfig 是否已赋值
                     */
                    bool SwitchConfigHasBeenSet() const;

                    /**
                     * 获取The settings of the basic access control rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IpTableConfig The settings of the basic access control rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    IpTableConfig GetIpTableConfig() const;

                    /**
                     * 设置The settings of the basic access control rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IpTableConfig The settings of the basic access control rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIpTableConfig(const IpTableConfig& _ipTableConfig);

                    /**
                     * 判断参数 IpTableConfig 是否已赋值
                     * @return IpTableConfig 是否已赋值
                     */
                    bool IpTableConfigHasBeenSet() const;

                    /**
                     * 获取The settings of the exception rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExceptConfig The settings of the exception rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ExceptConfig GetExceptConfig() const;

                    /**
                     * 设置The settings of the exception rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ExceptConfig The settings of the exception rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExceptConfig(const ExceptConfig& _exceptConfig);

                    /**
                     * 判断参数 ExceptConfig 是否已赋值
                     * @return ExceptConfig 是否已赋值
                     */
                    bool ExceptConfigHasBeenSet() const;

                    /**
                     * 获取The settings of the custom block page. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DropPageConfig The settings of the custom block page. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DropPageConfig GetDropPageConfig() const;

                    /**
                     * 设置The settings of the custom block page. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DropPageConfig The settings of the custom block page. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDropPageConfig(const DropPageConfig& _dropPageConfig);

                    /**
                     * 判断参数 DropPageConfig 是否已赋值
                     * @return DropPageConfig 是否已赋值
                     */
                    bool DropPageConfigHasBeenSet() const;

                private:

                    /**
                     * The settings of the managed rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    WafConfig m_wafConfig;
                    bool m_wafConfigHasBeenSet;

                    /**
                     * The settings of the rate limiting rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RateLimitConfig m_rateLimitConfig;
                    bool m_rateLimitConfigHasBeenSet;

                    /**
                     * The settings of the custom rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AclConfig m_aclConfig;
                    bool m_aclConfigHasBeenSet;

                    /**
                     * The settings of the bot configuration. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BotConfig m_botConfig;
                    bool m_botConfigHasBeenSet;

                    /**
                     * The switch setting of the layer-7 protection. If it is null, the setting that was last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SwitchConfig m_switchConfig;
                    bool m_switchConfigHasBeenSet;

                    /**
                     * The settings of the basic access control rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    IpTableConfig m_ipTableConfig;
                    bool m_ipTableConfigHasBeenSet;

                    /**
                     * The settings of the exception rule. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ExceptConfig m_exceptConfig;
                    bool m_exceptConfigHasBeenSet;

                    /**
                     * The settings of the custom block page. If it is null, the settings that were last configured will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DropPageConfig m_dropPageConfig;
                    bool m_dropPageConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYCONFIG_H_
