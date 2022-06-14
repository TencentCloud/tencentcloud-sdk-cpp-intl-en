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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNWAFCONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNWAFCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnErrorPage.h>
#include <tencentcloud/cdn/v20180606/model/ScdnWafRule.h>
#include <tencentcloud/cdn/v20180606/model/WafSubRuleStatus.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * WAF configuration
                */
                class ScdnWafConfig : public AbstractModel
                {
                public:
                    ScdnWafConfig();
                    ~ScdnWafConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable WAF. Valid values: `on` and `off`.
                     * @return Switch Whether to enable WAF. Valid values: `on` and `off`.
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable WAF. Valid values: `on` and `off`.
                     * @param Switch Whether to enable WAF. Valid values: `on` and `off`.
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取WAF protection mode. Valid values: `intercept` and `observe`. Default value: `intercept`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Mode WAF protection mode. Valid values: `intercept` and `observe`. Default value: `intercept`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetMode() const;

                    /**
                     * 设置WAF protection mode. Valid values: `intercept` and `observe`. Default value: `intercept`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Mode WAF protection mode. Valid values: `intercept` and `observe`. Default value: `intercept`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Redirection error page
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ErrorPage Redirection error page
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ScdnErrorPage GetErrorPage() const;

                    /**
                     * 设置Redirection error page
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ErrorPage Redirection error page
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetErrorPage(const ScdnErrorPage& _errorPage);

                    /**
                     * 判断参数 ErrorPage 是否已赋值
                     * @return ErrorPage 是否已赋值
                     */
                    bool ErrorPageHasBeenSet() const;

                    /**
                     * 获取Whether to enable Web shell blocking. Valid values: `on` and `off`. Default value: `off`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return WebShellSwitch Whether to enable Web shell blocking. Valid values: `on` and `off`. Default value: `off`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetWebShellSwitch() const;

                    /**
                     * 设置Whether to enable Web shell blocking. Valid values: `on` and `off`. Default value: `off`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param WebShellSwitch Whether to enable Web shell blocking. Valid values: `on` and `off`. Default value: `off`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetWebShellSwitch(const std::string& _webShellSwitch);

                    /**
                     * 判断参数 WebShellSwitch 是否已赋值
                     * @return WebShellSwitch 是否已赋值
                     */
                    bool WebShellSwitchHasBeenSet() const;

                    /**
                     * 获取Attack blocking rules
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Rules Attack blocking rules
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ScdnWafRule> GetRules() const;

                    /**
                     * 设置Attack blocking rules
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Rules Attack blocking rules
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRules(const std::vector<ScdnWafRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取WAF rule level. Valid values: 100, 200, and 300.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Level WAF rule level. Valid values: 100, 200, and 300.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置WAF rule level. Valid values: 100, 200, and 300.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Level WAF rule level. Valid values: 100, 200, and 300.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取WAF sub-rule switch
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SubRuleSwitch WAF sub-rule switch
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<WafSubRuleStatus> GetSubRuleSwitch() const;

                    /**
                     * 设置WAF sub-rule switch
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param SubRuleSwitch WAF sub-rule switch
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSubRuleSwitch(const std::vector<WafSubRuleStatus>& _subRuleSwitch);

                    /**
                     * 判断参数 SubRuleSwitch 是否已赋值
                     * @return SubRuleSwitch 是否已赋值
                     */
                    bool SubRuleSwitchHasBeenSet() const;

                private:

                    /**
                     * Whether to enable WAF. Valid values: `on` and `off`.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * WAF protection mode. Valid values: `intercept` and `observe`. Default value: `intercept`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Redirection error page
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ScdnErrorPage m_errorPage;
                    bool m_errorPageHasBeenSet;

                    /**
                     * Whether to enable Web shell blocking. Valid values: `on` and `off`. Default value: `off`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_webShellSwitch;
                    bool m_webShellSwitchHasBeenSet;

                    /**
                     * Attack blocking rules
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ScdnWafRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * WAF rule level. Valid values: 100, 200, and 300.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * WAF sub-rule switch
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<WafSubRuleStatus> m_subRuleSwitch;
                    bool m_subRuleSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNWAFCONFIG_H_
