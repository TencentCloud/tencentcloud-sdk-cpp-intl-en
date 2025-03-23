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
                     * 获取Managed rule. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WafConfig Managed rule. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    WafConfig GetWafConfig() const;

                    /**
                     * 设置Managed rule. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _wafConfig Managed rule. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Rate limiting. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RateLimitConfig Rate limiting. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    RateLimitConfig GetRateLimitConfig() const;

                    /**
                     * 设置Rate limiting. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _rateLimitConfig Rate limiting. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Custom rule. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AclConfig Custom rule. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    AclConfig GetAclConfig() const;

                    /**
                     * 设置Custom rule. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _aclConfig Custom rule. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Bot configuration. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BotConfig Bot configuration. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    BotConfig GetBotConfig() const;

                    /**
                     * 设置Bot configuration. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _botConfig Bot configuration. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Switch setting of the 7-layer protection. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SwitchConfig Switch setting of the 7-layer protection. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SwitchConfig GetSwitchConfig() const;

                    /**
                     * 设置Switch setting of the 7-layer protection. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _switchConfig Switch setting of the 7-layer protection. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Basic access control. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IpTableConfig Basic access control. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    IpTableConfig GetIpTableConfig() const;

                    /**
                     * 设置Basic access control. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ipTableConfig Basic access control. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Exception rule configuration. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExceptConfig Exception rule configuration. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ExceptConfig GetExceptConfig() const;

                    /**
                     * 设置Exception rule configuration. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _exceptConfig Exception rule configuration. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Custom block page settings. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DropPageConfig Custom block page settings. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    DropPageConfig GetDropPageConfig() const;

                    /**
                     * 设置Custom block page settings. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dropPageConfig Custom block page settings. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Security template settings
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return TemplateConfig Security template settings
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    TemplateConfig GetTemplateConfig() const;

                    /**
                     * 设置Security template settings
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _templateConfig Security template settings
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Settings for slow attack defense. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SlowPostConfig Settings for slow attack defense. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SlowPostConfig GetSlowPostConfig() const;

                    /**
                     * 设置Settings for slow attack defense. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _slowPostConfig Settings for slow attack defense. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Detect the length limit configuration, output parameter only.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return DetectLengthLimitConfig Detect the length limit configuration, output parameter only.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    DetectLengthLimitConfig GetDetectLengthLimitConfig() const;

                    /**
                     * 设置Detect the length limit configuration, output parameter only.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _detectLengthLimitConfig Detect the length limit configuration, output parameter only.
Note: This field may return null, which indicates a failure to obtain a valid value.
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
                     * Managed rule. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    WafConfig m_wafConfig;
                    bool m_wafConfigHasBeenSet;

                    /**
                     * Rate limiting. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    RateLimitConfig m_rateLimitConfig;
                    bool m_rateLimitConfigHasBeenSet;

                    /**
                     * Custom rule. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    AclConfig m_aclConfig;
                    bool m_aclConfigHasBeenSet;

                    /**
                     * Bot configuration. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    BotConfig m_botConfig;
                    bool m_botConfigHasBeenSet;

                    /**
                     * Switch setting of the 7-layer protection. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SwitchConfig m_switchConfig;
                    bool m_switchConfigHasBeenSet;

                    /**
                     * Basic access control. If the parameter is null or not filled, the configuration last set will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    IpTableConfig m_ipTableConfig;
                    bool m_ipTableConfigHasBeenSet;

                    /**
                     * Exception rule configuration. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ExceptConfig m_exceptConfig;
                    bool m_exceptConfigHasBeenSet;

                    /**
                     * Custom block page settings. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    DropPageConfig m_dropPageConfig;
                    bool m_dropPageConfigHasBeenSet;

                    /**
                     * Security template settings
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    TemplateConfig m_templateConfig;
                    bool m_templateConfigHasBeenSet;

                    /**
                     * Settings for slow attack defense. If the parameter is null or not filled, the configuration last set will be used by default.Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SlowPostConfig m_slowPostConfig;
                    bool m_slowPostConfigHasBeenSet;

                    /**
                     * Detect the length limit configuration, output parameter only.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    DetectLengthLimitConfig m_detectLengthLimitConfig;
                    bool m_detectLengthLimitConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYCONFIG_H_
