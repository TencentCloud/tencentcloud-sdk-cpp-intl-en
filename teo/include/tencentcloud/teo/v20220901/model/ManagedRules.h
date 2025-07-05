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
#include <tencentcloud/teo/v20220901/model/ManagedRuleAutoUpdate.h>
#include <tencentcloud/teo/v20220901/model/ManagedRuleGroup.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Managed rules configuration.
                */
                class ManagedRules : public AbstractModel
                {
                public:
                    ManagedRules();
                    ~ManagedRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The managed rule status. Values: <li>`on`: enabled, all managed rules take effect as configured;</li> <li>`off`: disabled, all managed rules do not take effect.</li>.
                     * @return Enabled The managed rule status. Values: <li>`on`: enabled, all managed rules take effect as configured;</li> <li>`off`: disabled, all managed rules do not take effect.</li>.
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置The managed rule status. Values: <li>`on`: enabled, all managed rules take effect as configured;</li> <li>`off`: disabled, all managed rules do not take effect.</li>.
                     * @param _enabled The managed rule status. Values: <li>`on`: enabled, all managed rules take effect as configured;</li> <li>`off`: disabled, all managed rules do not take effect.</li>.
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
                     * 获取Evaluation mode is enabled or not, it is valid only when the `Enabled` parameter is set to `on`. Values: <li>`on`: enabled, all managed rules take effect in `observe` mode.</li> <li>off: disabled, all managed rules take effect according to the specified configuration.</li>.
                     * @return DetectionOnly Evaluation mode is enabled or not, it is valid only when the `Enabled` parameter is set to `on`. Values: <li>`on`: enabled, all managed rules take effect in `observe` mode.</li> <li>off: disabled, all managed rules take effect according to the specified configuration.</li>.
                     * 
                     */
                    std::string GetDetectionOnly() const;

                    /**
                     * 设置Evaluation mode is enabled or not, it is valid only when the `Enabled` parameter is set to `on`. Values: <li>`on`: enabled, all managed rules take effect in `observe` mode.</li> <li>off: disabled, all managed rules take effect according to the specified configuration.</li>.
                     * @param _detectionOnly Evaluation mode is enabled or not, it is valid only when the `Enabled` parameter is set to `on`. Values: <li>`on`: enabled, all managed rules take effect in `observe` mode.</li> <li>off: disabled, all managed rules take effect according to the specified configuration.</li>.
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
                     * 获取Managed rule semantic analysis is enabled or not, it is valid only when the `Enabled` parameter is `on`. Values: <li>`on`: enabled, perform semantic analysis  before processing requests;</li> <li>`off`: disabled, process requests directly without semantic analysis.</li> <br/>The default value is `off`.
                     * @return SemanticAnalysis Managed rule semantic analysis is enabled or not, it is valid only when the `Enabled` parameter is `on`. Values: <li>`on`: enabled, perform semantic analysis  before processing requests;</li> <li>`off`: disabled, process requests directly without semantic analysis.</li> <br/>The default value is `off`.
                     * 
                     */
                    std::string GetSemanticAnalysis() const;

                    /**
                     * 设置Managed rule semantic analysis is enabled or not, it is valid only when the `Enabled` parameter is `on`. Values: <li>`on`: enabled, perform semantic analysis  before processing requests;</li> <li>`off`: disabled, process requests directly without semantic analysis.</li> <br/>The default value is `off`.
                     * @param _semanticAnalysis Managed rule semantic analysis is enabled or not, it is valid only when the `Enabled` parameter is `on`. Values: <li>`on`: enabled, perform semantic analysis  before processing requests;</li> <li>`off`: disabled, process requests directly without semantic analysis.</li> <br/>The default value is `off`.
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
                     * 获取Managed rule automatic update option.
                     * @return AutoUpdate Managed rule automatic update option.
                     * 
                     */
                    ManagedRuleAutoUpdate GetAutoUpdate() const;

                    /**
                     * 设置Managed rule automatic update option.
                     * @param _autoUpdate Managed rule automatic update option.
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
                     * 获取Configuration of the managed rule group. If this structure is passed as an empty array or the GroupId is not included in the array, it will be processed based by default.
                     * @return ManagedRuleGroups Configuration of the managed rule group. If this structure is passed as an empty array or the GroupId is not included in the array, it will be processed based by default.
                     * 
                     */
                    std::vector<ManagedRuleGroup> GetManagedRuleGroups() const;

                    /**
                     * 设置Configuration of the managed rule group. If this structure is passed as an empty array or the GroupId is not included in the array, it will be processed based by default.
                     * @param _managedRuleGroups Configuration of the managed rule group. If this structure is passed as an empty array or the GroupId is not included in the array, it will be processed based by default.
                     * 
                     */
                    void SetManagedRuleGroups(const std::vector<ManagedRuleGroup>& _managedRuleGroups);

                    /**
                     * 判断参数 ManagedRuleGroups 是否已赋值
                     * @return ManagedRuleGroups 是否已赋值
                     * 
                     */
                    bool ManagedRuleGroupsHasBeenSet() const;

                private:

                    /**
                     * The managed rule status. Values: <li>`on`: enabled, all managed rules take effect as configured;</li> <li>`off`: disabled, all managed rules do not take effect.</li>.
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Evaluation mode is enabled or not, it is valid only when the `Enabled` parameter is set to `on`. Values: <li>`on`: enabled, all managed rules take effect in `observe` mode.</li> <li>off: disabled, all managed rules take effect according to the specified configuration.</li>.
                     */
                    std::string m_detectionOnly;
                    bool m_detectionOnlyHasBeenSet;

                    /**
                     * Managed rule semantic analysis is enabled or not, it is valid only when the `Enabled` parameter is `on`. Values: <li>`on`: enabled, perform semantic analysis  before processing requests;</li> <li>`off`: disabled, process requests directly without semantic analysis.</li> <br/>The default value is `off`.
                     */
                    std::string m_semanticAnalysis;
                    bool m_semanticAnalysisHasBeenSet;

                    /**
                     * Managed rule automatic update option.
                     */
                    ManagedRuleAutoUpdate m_autoUpdate;
                    bool m_autoUpdateHasBeenSet;

                    /**
                     * Configuration of the managed rule group. If this structure is passed as an empty array or the GroupId is not included in the array, it will be processed based by default.
                     */
                    std::vector<ManagedRuleGroup> m_managedRuleGroups;
                    bool m_managedRuleGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULES_H_
