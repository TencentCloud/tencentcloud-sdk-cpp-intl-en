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
#include <tencentcloud/teo/v20220901/model/TemplateConfig.h>
#include <tencentcloud/teo/v20220901/model/SlowPostConfig.h>
#include <tencentcloud/teo/v20220901/model/DetectLengthLimitConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Web security configuration.
                */
                class SecurityConfig : public AbstractModel
                {
                public:
                    SecurityConfig();
                    ~SecurityConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Managed rule. if the parameter is null or not filled, use the last set configuration by default.
                     * @return WafConfig Managed rule. if the parameter is null or not filled, use the last set configuration by default.
                     * 
                     */
                    WafConfig GetWafConfig() const;

                    /**
                     * 设置Managed rule. if the parameter is null or not filled, use the last set configuration by default.
                     * @param _wafConfig Managed rule. if the parameter is null or not filled, use the last set configuration by default.
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
                     * 获取Rate limiting. if the parameter is null or not filled, the configuration last set will be used by default.
                     * @return RateLimitConfig Rate limiting. if the parameter is null or not filled, the configuration last set will be used by default.
                     * 
                     */
                    RateLimitConfig GetRateLimitConfig() const;

                    /**
                     * 设置Rate limiting. if the parameter is null or not filled, the configuration last set will be used by default.
                     * @param _rateLimitConfig Rate limiting. if the parameter is null or not filled, the configuration last set will be used by default.
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
                     * 获取Custom rule. specifies if the parameter is null or not filled, use the last set configuration by default.
                     * @return AclConfig Custom rule. specifies if the parameter is null or not filled, use the last set configuration by default.
                     * 
                     */
                    AclConfig GetAclConfig() const;

                    /**
                     * 设置Custom rule. specifies if the parameter is null or not filled, use the last set configuration by default.
                     * @param _aclConfig Custom rule. specifies if the parameter is null or not filled, use the last set configuration by default.
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
                     * 获取Bot configuration. if the parameter is null or not filled, use the last set configuration by default.
                     * @return BotConfig Bot configuration. if the parameter is null or not filled, use the last set configuration by default.
                     * 
                     */
                    BotConfig GetBotConfig() const;

                    /**
                     * 设置Bot configuration. if the parameter is null or not filled, use the last set configuration by default.
                     * @param _botConfig Bot configuration. if the parameter is null or not filled, use the last set configuration by default.
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
                     * 获取Switch setting of the 7-layer protection. if the parameter is null or not filled, use the last set configuration by default.
                     * @return SwitchConfig Switch setting of the 7-layer protection. if the parameter is null or not filled, use the last set configuration by default.
                     * 
                     */
                    SwitchConfig GetSwitchConfig() const;

                    /**
                     * 设置Switch setting of the 7-layer protection. if the parameter is null or not filled, use the last set configuration by default.
                     * @param _switchConfig Switch setting of the 7-layer protection. if the parameter is null or not filled, use the last set configuration by default.
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
                     * 获取Basic access control. if the parameter is null or not filled, use the last set configuration by default.
                     * @return IpTableConfig Basic access control. if the parameter is null or not filled, use the last set configuration by default.
                     * 
                     */
                    IpTableConfig GetIpTableConfig() const;

                    /**
                     * 设置Basic access control. if the parameter is null or not filled, use the last set configuration by default.
                     * @param _ipTableConfig Basic access control. if the parameter is null or not filled, use the last set configuration by default.
                     * 
                     */
                    void SetIpTableConfig(const IpTableConfig& _ipTableConfig);

                    /**
                     * 判断参数 IpTableConfig 是否已赋值
                     * @return IpTableConfig 是否已赋值
                     * 
                     */
                    bool IpTableConfigHasBeenSet() const;

                    /**
                     * 获取Exception rule configuration. if the parameter is null or not filled, use the last set configuration by default.
                     * @return ExceptConfig Exception rule configuration. if the parameter is null or not filled, use the last set configuration by default.
                     * 
                     */
                    ExceptConfig GetExceptConfig() const;

                    /**
                     * 设置Exception rule configuration. if the parameter is null or not filled, use the last set configuration by default.
                     * @param _exceptConfig Exception rule configuration. if the parameter is null or not filled, use the last set configuration by default.
                     * 
                     */
                    void SetExceptConfig(const ExceptConfig& _exceptConfig);

                    /**
                     * 判断参数 ExceptConfig 是否已赋值
                     * @return ExceptConfig 是否已赋值
                     * 
                     */
                    bool ExceptConfigHasBeenSet() const;

                    /**
                     * 获取Custom block page settings. if the parameter is null or not filled, use the last set configuration by default.
                     * @return DropPageConfig Custom block page settings. if the parameter is null or not filled, use the last set configuration by default.
                     * 
                     */
                    DropPageConfig GetDropPageConfig() const;

                    /**
                     * 设置Custom block page settings. if the parameter is null or not filled, use the last set configuration by default.
                     * @param _dropPageConfig Custom block page settings. if the parameter is null or not filled, use the last set configuration by default.
                     * 
                     */
                    void SetDropPageConfig(const DropPageConfig& _dropPageConfig);

                    /**
                     * 判断参数 DropPageConfig 是否已赋值
                     * @return DropPageConfig 是否已赋值
                     * 
                     */
                    bool DropPageConfigHasBeenSet() const;

                    /**
                     * 获取Template configuration. specifies parameter usage for output only.
                     * @return TemplateConfig Template configuration. specifies parameter usage for output only.
                     * 
                     */
                    TemplateConfig GetTemplateConfig() const;

                    /**
                     * 设置Template configuration. specifies parameter usage for output only.
                     * @param _templateConfig Template configuration. specifies parameter usage for output only.
                     * 
                     */
                    void SetTemplateConfig(const TemplateConfig& _templateConfig);

                    /**
                     * 判断参数 TemplateConfig 是否已赋值
                     * @return TemplateConfig 是否已赋值
                     * 
                     */
                    bool TemplateConfigHasBeenSet() const;

                    /**
                     * 获取Slow attack configuration. if the parameter is null or not filled, use the last set configuration by default.
                     * @return SlowPostConfig Slow attack configuration. if the parameter is null or not filled, use the last set configuration by default.
                     * 
                     */
                    SlowPostConfig GetSlowPostConfig() const;

                    /**
                     * 设置Slow attack configuration. if the parameter is null or not filled, use the last set configuration by default.
                     * @param _slowPostConfig Slow attack configuration. if the parameter is null or not filled, use the last set configuration by default.
                     * 
                     */
                    void SetSlowPostConfig(const SlowPostConfig& _slowPostConfig);

                    /**
                     * 判断参数 SlowPostConfig 是否已赋值
                     * @return SlowPostConfig 是否已赋值
                     * 
                     */
                    bool SlowPostConfigHasBeenSet() const;

                    /**
                     * 获取Detect length limit configuration. for output usage only.
                     * @return DetectLengthLimitConfig Detect length limit configuration. for output usage only.
                     * 
                     */
                    DetectLengthLimitConfig GetDetectLengthLimitConfig() const;

                    /**
                     * 设置Detect length limit configuration. for output usage only.
                     * @param _detectLengthLimitConfig Detect length limit configuration. for output usage only.
                     * 
                     */
                    void SetDetectLengthLimitConfig(const DetectLengthLimitConfig& _detectLengthLimitConfig);

                    /**
                     * 判断参数 DetectLengthLimitConfig 是否已赋值
                     * @return DetectLengthLimitConfig 是否已赋值
                     * 
                     */
                    bool DetectLengthLimitConfigHasBeenSet() const;

                private:

                    /**
                     * Managed rule. if the parameter is null or not filled, use the last set configuration by default.
                     */
                    WafConfig m_wafConfig;
                    bool m_wafConfigHasBeenSet;

                    /**
                     * Rate limiting. if the parameter is null or not filled, the configuration last set will be used by default.
                     */
                    RateLimitConfig m_rateLimitConfig;
                    bool m_rateLimitConfigHasBeenSet;

                    /**
                     * Custom rule. specifies if the parameter is null or not filled, use the last set configuration by default.
                     */
                    AclConfig m_aclConfig;
                    bool m_aclConfigHasBeenSet;

                    /**
                     * Bot configuration. if the parameter is null or not filled, use the last set configuration by default.
                     */
                    BotConfig m_botConfig;
                    bool m_botConfigHasBeenSet;

                    /**
                     * Switch setting of the 7-layer protection. if the parameter is null or not filled, use the last set configuration by default.
                     */
                    SwitchConfig m_switchConfig;
                    bool m_switchConfigHasBeenSet;

                    /**
                     * Basic access control. if the parameter is null or not filled, use the last set configuration by default.
                     */
                    IpTableConfig m_ipTableConfig;
                    bool m_ipTableConfigHasBeenSet;

                    /**
                     * Exception rule configuration. if the parameter is null or not filled, use the last set configuration by default.
                     */
                    ExceptConfig m_exceptConfig;
                    bool m_exceptConfigHasBeenSet;

                    /**
                     * Custom block page settings. if the parameter is null or not filled, use the last set configuration by default.
                     */
                    DropPageConfig m_dropPageConfig;
                    bool m_dropPageConfigHasBeenSet;

                    /**
                     * Template configuration. specifies parameter usage for output only.
                     */
                    TemplateConfig m_templateConfig;
                    bool m_templateConfigHasBeenSet;

                    /**
                     * Slow attack configuration. if the parameter is null or not filled, use the last set configuration by default.
                     */
                    SlowPostConfig m_slowPostConfig;
                    bool m_slowPostConfigHasBeenSet;

                    /**
                     * Detect length limit configuration. for output usage only.
                     */
                    DetectLengthLimitConfig m_detectLengthLimitConfig;
                    bool m_detectLengthLimitConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYCONFIG_H_
