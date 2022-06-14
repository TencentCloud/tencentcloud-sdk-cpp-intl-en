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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDCCRULES_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDCCRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnSevenLayerRules.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * SCDN custom CC rules
                */
                class AdvancedCCRules : public AbstractModel
                {
                public:
                    AdvancedCCRules();
                    ~AdvancedCCRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule name
                     * @return RuleName Rule name
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
                     * @param RuleName Rule name
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Detection duration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DetectionTime Detection duration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetDetectionTime() const;

                    /**
                     * 设置Detection duration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param DetectionTime Detection duration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDetectionTime(const uint64_t& _detectionTime);

                    /**
                     * 判断参数 DetectionTime 是否已赋值
                     * @return DetectionTime 是否已赋值
                     */
                    bool DetectionTimeHasBeenSet() const;

                    /**
                     * 获取Detection frequency threshold
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return FrequencyLimit Detection frequency threshold
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetFrequencyLimit() const;

                    /**
                     * 设置Detection frequency threshold
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param FrequencyLimit Detection frequency threshold
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetFrequencyLimit(const uint64_t& _frequencyLimit);

                    /**
                     * 判断参数 FrequencyLimit 是否已赋值
                     * @return FrequencyLimit 是否已赋值
                     */
                    bool FrequencyLimitHasBeenSet() const;

                    /**
                     * 获取Whether to enable IP penalty. Valid values: `on` and `off`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PunishmentSwitch Whether to enable IP penalty. Valid values: `on` and `off`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetPunishmentSwitch() const;

                    /**
                     * 设置Whether to enable IP penalty. Valid values: `on` and `off`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param PunishmentSwitch Whether to enable IP penalty. Valid values: `on` and `off`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPunishmentSwitch(const std::string& _punishmentSwitch);

                    /**
                     * 判断参数 PunishmentSwitch 是否已赋值
                     * @return PunishmentSwitch 是否已赋值
                     */
                    bool PunishmentSwitchHasBeenSet() const;

                    /**
                     * 获取IP penalty duration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PunishmentTime IP penalty duration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetPunishmentTime() const;

                    /**
                     * 设置IP penalty duration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param PunishmentTime IP penalty duration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPunishmentTime(const uint64_t& _punishmentTime);

                    /**
                     * 判断参数 PunishmentTime 是否已赋值
                     * @return PunishmentTime 是否已赋值
                     */
                    bool PunishmentTimeHasBeenSet() const;

                    /**
                     * 获取Action. Valid values: `intercept` and `redirect`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Action Action. Valid values: `intercept` and `redirect`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action. Valid values: `intercept` and `redirect`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Action Action. Valid values: `intercept` and `redirect`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取A redirection URL used when Action is `redirect`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RedirectUrl A redirection URL used when Action is `redirect`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置A redirection URL used when Action is `redirect`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param RedirectUrl A redirection URL used when Action is `redirect`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     */
                    bool RedirectUrlHasBeenSet() const;

                    /**
                     * 获取Layer-7 rule configuration for CC frequency limiting
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Configure Layer-7 rule configuration for CC frequency limiting
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ScdnSevenLayerRules> GetConfigure() const;

                    /**
                     * 设置Layer-7 rule configuration for CC frequency limiting
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Configure Layer-7 rule configuration for CC frequency limiting
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetConfigure(const std::vector<ScdnSevenLayerRules>& _configure);

                    /**
                     * 判断参数 Configure 是否已赋值
                     * @return Configure 是否已赋值
                     */
                    bool ConfigureHasBeenSet() const;

                private:

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Detection duration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_detectionTime;
                    bool m_detectionTimeHasBeenSet;

                    /**
                     * Detection frequency threshold
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_frequencyLimit;
                    bool m_frequencyLimitHasBeenSet;

                    /**
                     * Whether to enable IP penalty. Valid values: `on` and `off`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_punishmentSwitch;
                    bool m_punishmentSwitchHasBeenSet;

                    /**
                     * IP penalty duration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_punishmentTime;
                    bool m_punishmentTimeHasBeenSet;

                    /**
                     * Action. Valid values: `intercept` and `redirect`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * A redirection URL used when Action is `redirect`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * Layer-7 rule configuration for CC frequency limiting
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ScdnSevenLayerRules> m_configure;
                    bool m_configureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDCCRULES_H_
