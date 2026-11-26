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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ZONEFULLCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ZONEFULLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ZoneConfig.h>
#include <tencentcloud/teo/v20220901/model/ZoneCustomVariables.h>
#include <tencentcloud/teo/v20220901/model/ConfigGroupRuleEngineItem.h>
#include <tencentcloud/teo/v20220901/model/WebSecurity.h>
#include <tencentcloud/teo/v20220901/model/ConfigGroupFunctionTrigger.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Complete site configuration architecture.
                */
                class ZoneFullConfig : public AbstractModel
                {
                public:
                    ZoneFullConfig();
                    ~ZoneFullConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Syntax version. It defaults to 1.0. An error will be reported if you input other values.</p>
                     * @return FormatVersion <p>Syntax version. It defaults to 1.0. An error will be reported if you input other values.</p>
                     * 
                     */
                    std::string GetFormatVersion() const;

                    /**
                     * 设置<p>Syntax version. It defaults to 1.0. An error will be reported if you input other values.</p>
                     * @param _formatVersion <p>Syntax version. It defaults to 1.0. An error will be reported if you input other values.</p>
                     * 
                     */
                    void SetFormatVersion(const std::string& _formatVersion);

                    /**
                     * 判断参数 FormatVersion 是否已赋值
                     * @return FormatVersion 是否已赋值
                     * 
                     */
                    bool FormatVersionHasBeenSet() const;

                    /**
                     * 获取<p>Site-level configuration, including all configuration items in "Site Acceleration". All items are required; otherwise, the configuration is invalid.</p>
                     * @return ZoneConfig <p>Site-level configuration, including all configuration items in "Site Acceleration". All items are required; otherwise, the configuration is invalid.</p>
                     * 
                     */
                    ZoneConfig GetZoneConfig() const;

                    /**
                     * 设置<p>Site-level configuration, including all configuration items in "Site Acceleration". All items are required; otherwise, the configuration is invalid.</p>
                     * @param _zoneConfig <p>Site-level configuration, including all configuration items in "Site Acceleration". All items are required; otherwise, the configuration is invalid.</p>
                     * 
                     */
                    void SetZoneConfig(const ZoneConfig& _zoneConfig);

                    /**
                     * 判断参数 ZoneConfig 是否已赋值
                     * @return ZoneConfig 是否已赋值
                     * 
                     */
                    bool ZoneConfigHasBeenSet() const;

                    /**
                     * 获取<p>Site-level custom variable configuration, including variable definition and variable operations.</p>
                     * @return ZoneCustomVariables <p>Site-level custom variable configuration, including variable definition and variable operations.</p>
                     * 
                     */
                    ZoneCustomVariables GetZoneCustomVariables() const;

                    /**
                     * 设置<p>Site-level custom variable configuration, including variable definition and variable operations.</p>
                     * @param _zoneCustomVariables <p>Site-level custom variable configuration, including variable definition and variable operations.</p>
                     * 
                     */
                    void SetZoneCustomVariables(const ZoneCustomVariables& _zoneCustomVariables);

                    /**
                     * 判断参数 ZoneCustomVariables 是否已赋值
                     * @return ZoneCustomVariables 是否已赋值
                     * 
                     */
                    bool ZoneCustomVariablesHasBeenSet() const;

                    /**
                     * 获取<p>Rule-level configuration, including all rules in the rule engine. The array can be empty, indicating that no rules are enabled.</p>
                     * @return Rules <p>Rule-level configuration, including all rules in the rule engine. The array can be empty, indicating that no rules are enabled.</p>
                     * 
                     */
                    std::vector<ConfigGroupRuleEngineItem> GetRules() const;

                    /**
                     * 设置<p>Rule-level configuration, including all rules in the rule engine. The array can be empty, indicating that no rules are enabled.</p>
                     * @param _rules <p>Rule-level configuration, including all rules in the rule engine. The array can be empty, indicating that no rules are enabled.</p>
                     * 
                     */
                    void SetRules(const std::vector<ConfigGroupRuleEngineItem>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取<p>Web security protection settings, corresponding to the functions supported in "Security Protection - Web Protection" in the console.</p>
                     * @return WebSecurity <p>Web security protection settings, corresponding to the functions supported in "Security Protection - Web Protection" in the console.</p>
                     * 
                     */
                    WebSecurity GetWebSecurity() const;

                    /**
                     * 设置<p>Web security protection settings, corresponding to the functions supported in "Security Protection - Web Protection" in the console.</p>
                     * @param _webSecurity <p>Web security protection settings, corresponding to the functions supported in "Security Protection - Web Protection" in the console.</p>
                     * 
                     */
                    void SetWebSecurity(const WebSecurity& _webSecurity);

                    /**
                     * 判断参数 WebSecurity 是否已赋值
                     * @return WebSecurity 是否已赋值
                     * 
                     */
                    bool WebSecurityHasBeenSet() const;

                    /**
                     * 获取<p>Edge function trigger rule configuration, including all rules in the edge function. The array can be empty, indicating that no rules are enabled.</p>
                     * @return FunctionTriggers <p>Edge function trigger rule configuration, including all rules in the edge function. The array can be empty, indicating that no rules are enabled.</p>
                     * 
                     */
                    std::vector<ConfigGroupFunctionTrigger> GetFunctionTriggers() const;

                    /**
                     * 设置<p>Edge function trigger rule configuration, including all rules in the edge function. The array can be empty, indicating that no rules are enabled.</p>
                     * @param _functionTriggers <p>Edge function trigger rule configuration, including all rules in the edge function. The array can be empty, indicating that no rules are enabled.</p>
                     * 
                     */
                    void SetFunctionTriggers(const std::vector<ConfigGroupFunctionTrigger>& _functionTriggers);

                    /**
                     * 判断参数 FunctionTriggers 是否已赋值
                     * @return FunctionTriggers 是否已赋值
                     * 
                     */
                    bool FunctionTriggersHasBeenSet() const;

                private:

                    /**
                     * <p>Syntax version. It defaults to 1.0. An error will be reported if you input other values.</p>
                     */
                    std::string m_formatVersion;
                    bool m_formatVersionHasBeenSet;

                    /**
                     * <p>Site-level configuration, including all configuration items in "Site Acceleration". All items are required; otherwise, the configuration is invalid.</p>
                     */
                    ZoneConfig m_zoneConfig;
                    bool m_zoneConfigHasBeenSet;

                    /**
                     * <p>Site-level custom variable configuration, including variable definition and variable operations.</p>
                     */
                    ZoneCustomVariables m_zoneCustomVariables;
                    bool m_zoneCustomVariablesHasBeenSet;

                    /**
                     * <p>Rule-level configuration, including all rules in the rule engine. The array can be empty, indicating that no rules are enabled.</p>
                     */
                    std::vector<ConfigGroupRuleEngineItem> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * <p>Web security protection settings, corresponding to the functions supported in "Security Protection - Web Protection" in the console.</p>
                     */
                    WebSecurity m_webSecurity;
                    bool m_webSecurityHasBeenSet;

                    /**
                     * <p>Edge function trigger rule configuration, including all rules in the edge function. The array can be empty, indicating that no rules are enabled.</p>
                     */
                    std::vector<ConfigGroupFunctionTrigger> m_functionTriggers;
                    bool m_functionTriggersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ZONEFULLCONFIG_H_
