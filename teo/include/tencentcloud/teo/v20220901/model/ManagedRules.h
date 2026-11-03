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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULES_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SemanticAnalysisRules.h>
#include <tencentcloud/teo/v20220901/model/ManagedRuleAutoUpdate.h>
#include <tencentcloud/teo/v20220901/model/ManagedRuleGroup.h>
#include <tencentcloud/teo/v20220901/model/FrequentScanningProtection.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Managed rules for Web security
                */
                class ManagedRules : public AbstractModel
                {
                public:
                    ManagedRules();
                    ~ManagedRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether managed rules are enabled. Valid values: <li>on: enabled. All managed rules take effect as configured.</li><li>off: disabled. No managed rules take effect.</li></p>
                     * @return Enabled <p>Whether managed rules are enabled. Valid values: <li>on: enabled. All managed rules take effect as configured.</li><li>off: disabled. No managed rules take effect.</li></p>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置<p>Whether managed rules are enabled. Valid values: <li>on: enabled. All managed rules take effect as configured.</li><li>off: disabled. No managed rules take effect.</li></p>
                     * @param _enabled <p>Whether managed rules are enabled. Valid values: <li>on: enabled. All managed rules take effect as configured.</li><li>off: disabled. No managed rules take effect.</li></p>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>Whether evaluation mode is enabled. This parameter is valid only when the `Enabled` parameter is set to `on`. Valid values: <li>on: enabled. All managed rules take effect in observation mode.</li><li>off: disabled. All managed rules take effect as configured.</li></p>
                     * @return DetectionOnly <p>Whether evaluation mode is enabled. This parameter is valid only when the `Enabled` parameter is set to `on`. Valid values: <li>on: enabled. All managed rules take effect in observation mode.</li><li>off: disabled. All managed rules take effect as configured.</li></p>
                     * 
                     */
                    std::string GetDetectionOnly() const;

                    /**
                     * 设置<p>Whether evaluation mode is enabled. This parameter is valid only when the `Enabled` parameter is set to `on`. Valid values: <li>on: enabled. All managed rules take effect in observation mode.</li><li>off: disabled. All managed rules take effect as configured.</li></p>
                     * @param _detectionOnly <p>Whether evaluation mode is enabled. This parameter is valid only when the `Enabled` parameter is set to `on`. Valid values: <li>on: enabled. All managed rules take effect in observation mode.</li><li>off: disabled. All managed rules take effect as configured.</li></p>
                     * 
                     */
                    void SetDetectionOnly(const std::string& _detectionOnly);

                    /**
                     * 判断参数 DetectionOnly 是否已赋值
                     * @return DetectionOnly 是否已赋值
                     * 
                     */
                    bool DetectionOnlyHasBeenSet() const;

                    /**
                     * 获取<p>Whether the deep analysis option for managed rules is enabled. This parameter is valid only when the `Enabled` parameter is set to `on`. Valid values: <li>on: enabled. Requests are processed after deep analysis.</li><li>off: disabled. Requests are processed directly without deep analysis.</li> <br>This parameter is to be deprecated. The switch for deep analysis rules is migrated to the `SemanticAnalysisRules.Enabled` parameter.</p>
                     * @return SemanticAnalysis <p>Whether the deep analysis option for managed rules is enabled. This parameter is valid only when the `Enabled` parameter is set to `on`. Valid values: <li>on: enabled. Requests are processed after deep analysis.</li><li>off: disabled. Requests are processed directly without deep analysis.</li> <br>This parameter is to be deprecated. The switch for deep analysis rules is migrated to the `SemanticAnalysisRules.Enabled` parameter.</p>
                     * 
                     */
                    std::string GetSemanticAnalysis() const;

                    /**
                     * 设置<p>Whether the deep analysis option for managed rules is enabled. This parameter is valid only when the `Enabled` parameter is set to `on`. Valid values: <li>on: enabled. Requests are processed after deep analysis.</li><li>off: disabled. Requests are processed directly without deep analysis.</li> <br>This parameter is to be deprecated. The switch for deep analysis rules is migrated to the `SemanticAnalysisRules.Enabled` parameter.</p>
                     * @param _semanticAnalysis <p>Whether the deep analysis option for managed rules is enabled. This parameter is valid only when the `Enabled` parameter is set to `on`. Valid values: <li>on: enabled. Requests are processed after deep analysis.</li><li>off: disabled. Requests are processed directly without deep analysis.</li> <br>This parameter is to be deprecated. The switch for deep analysis rules is migrated to the `SemanticAnalysisRules.Enabled` parameter.</p>
                     * 
                     */
                    void SetSemanticAnalysis(const std::string& _semanticAnalysis);

                    /**
                     * 判断参数 SemanticAnalysis 是否已赋值
                     * @return SemanticAnalysis 是否已赋值
                     * 
                     */
                    bool SemanticAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>Deep analysis configuration option. Identifies malicious behaviors in requests (such as SQL injection and XSS attacks), and logs and blocks malicious requests.</p>
                     * @return SemanticAnalysisRules <p>Deep analysis configuration option. Identifies malicious behaviors in requests (such as SQL injection and XSS attacks), and logs and blocks malicious requests.</p>
                     * 
                     */
                    SemanticAnalysisRules GetSemanticAnalysisRules() const;

                    /**
                     * 设置<p>Deep analysis configuration option. Identifies malicious behaviors in requests (such as SQL injection and XSS attacks), and logs and blocks malicious requests.</p>
                     * @param _semanticAnalysisRules <p>Deep analysis configuration option. Identifies malicious behaviors in requests (such as SQL injection and XSS attacks), and logs and blocks malicious requests.</p>
                     * 
                     */
                    void SetSemanticAnalysisRules(const SemanticAnalysisRules& _semanticAnalysisRules);

                    /**
                     * 判断参数 SemanticAnalysisRules 是否已赋值
                     * @return SemanticAnalysisRules 是否已赋值
                     * 
                     */
                    bool SemanticAnalysisRulesHasBeenSet() const;

                    /**
                     * 获取<p>Auto-update option for managed rules.</p>
                     * @return AutoUpdate <p>Auto-update option for managed rules.</p>
                     * 
                     */
                    ManagedRuleAutoUpdate GetAutoUpdate() const;

                    /**
                     * 设置<p>Auto-update option for managed rules.</p>
                     * @param _autoUpdate <p>Auto-update option for managed rules.</p>
                     * 
                     */
                    void SetAutoUpdate(const ManagedRuleAutoUpdate& _autoUpdate);

                    /**
                     * 判断参数 AutoUpdate 是否已赋值
                     * @return AutoUpdate 是否已赋值
                     * 
                     */
                    bool AutoUpdateHasBeenSet() const;

                    /**
                     * 获取<p>Configuration of managed rule groups. If an empty array is passed for this structure or `GroupId` is not included in the list, the default processing method is used.</p>
                     * @return ManagedRuleGroups <p>Configuration of managed rule groups. If an empty array is passed for this structure or `GroupId` is not included in the list, the default processing method is used.</p>
                     * 
                     */
                    std::vector<ManagedRuleGroup> GetManagedRuleGroups() const;

                    /**
                     * 设置<p>Configuration of managed rule groups. If an empty array is passed for this structure or `GroupId` is not included in the list, the default processing method is used.</p>
                     * @param _managedRuleGroups <p>Configuration of managed rule groups. If an empty array is passed for this structure or `GroupId` is not included in the list, the default processing method is used.</p>
                     * 
                     */
                    void SetManagedRuleGroups(const std::vector<ManagedRuleGroup>& _managedRuleGroups);

                    /**
                     * 判断参数 ManagedRuleGroups 是否已赋值
                     * @return ManagedRuleGroups 是否已赋值
                     * 
                     */
                    bool ManagedRuleGroupsHasBeenSet() const;

                    /**
                     * 获取<p>High-frequency scan protection configuration option. When a visitor's requests frequently trigger managed rules configured as block, all requests from this visitor are blocked for a period of time.</p>
                     * @return FrequentScanningProtection <p>High-frequency scan protection configuration option. When a visitor's requests frequently trigger managed rules configured as block, all requests from this visitor are blocked for a period of time.</p>
                     * 
                     */
                    FrequentScanningProtection GetFrequentScanningProtection() const;

                    /**
                     * 设置<p>High-frequency scan protection configuration option. When a visitor's requests frequently trigger managed rules configured as block, all requests from this visitor are blocked for a period of time.</p>
                     * @param _frequentScanningProtection <p>High-frequency scan protection configuration option. When a visitor's requests frequently trigger managed rules configured as block, all requests from this visitor are blocked for a period of time.</p>
                     * 
                     */
                    void SetFrequentScanningProtection(const FrequentScanningProtection& _frequentScanningProtection);

                    /**
                     * 判断参数 FrequentScanningProtection 是否已赋值
                     * @return FrequentScanningProtection 是否已赋值
                     * 
                     */
                    bool FrequentScanningProtectionHasBeenSet() const;

                private:

                    /**
                     * <p>Whether managed rules are enabled. Valid values: <li>on: enabled. All managed rules take effect as configured.</li><li>off: disabled. No managed rules take effect.</li></p>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>Whether evaluation mode is enabled. This parameter is valid only when the `Enabled` parameter is set to `on`. Valid values: <li>on: enabled. All managed rules take effect in observation mode.</li><li>off: disabled. All managed rules take effect as configured.</li></p>
                     */
                    std::string m_detectionOnly;
                    bool m_detectionOnlyHasBeenSet;

                    /**
                     * <p>Whether the deep analysis option for managed rules is enabled. This parameter is valid only when the `Enabled` parameter is set to `on`. Valid values: <li>on: enabled. Requests are processed after deep analysis.</li><li>off: disabled. Requests are processed directly without deep analysis.</li> <br>This parameter is to be deprecated. The switch for deep analysis rules is migrated to the `SemanticAnalysisRules.Enabled` parameter.</p>
                     */
                    std::string m_semanticAnalysis;
                    bool m_semanticAnalysisHasBeenSet;

                    /**
                     * <p>Deep analysis configuration option. Identifies malicious behaviors in requests (such as SQL injection and XSS attacks), and logs and blocks malicious requests.</p>
                     */
                    SemanticAnalysisRules m_semanticAnalysisRules;
                    bool m_semanticAnalysisRulesHasBeenSet;

                    /**
                     * <p>Auto-update option for managed rules.</p>
                     */
                    ManagedRuleAutoUpdate m_autoUpdate;
                    bool m_autoUpdateHasBeenSet;

                    /**
                     * <p>Configuration of managed rule groups. If an empty array is passed for this structure or `GroupId` is not included in the list, the default processing method is used.</p>
                     */
                    std::vector<ManagedRuleGroup> m_managedRuleGroups;
                    bool m_managedRuleGroupsHasBeenSet;

                    /**
                     * <p>High-frequency scan protection configuration option. When a visitor's requests frequently trigger managed rules configured as block, all requests from this visitor are blocked for a period of time.</p>
                     */
                    FrequentScanningProtection m_frequentScanningProtection;
                    bool m_frequentScanningProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULES_H_
