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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COMMANDSANDBOXFILERULEBASE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COMMANDSANDBOXFILERULEBASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxEffectScope.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Command sandbox file access rule basic information
                */
                class CommandSandboxFileRuleBase : public AbstractModel
                {
                public:
                    CommandSandboxFileRuleBase();
                    ~CommandSandboxFileRuleBase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>rule name</p>
                     * @return RuleName <p>rule name</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>rule name</p>
                     * @param _ruleName <p>rule name</p>
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取<p>Rule asset scope type</p><p>Enumeration values:</p><ul><li>HOST: Host</li><li>CONTAINER: Container</li></ul>
                     * @return BelongAssetType <p>Rule asset scope type</p><p>Enumeration values:</p><ul><li>HOST: Host</li><li>CONTAINER: Container</li></ul>
                     * 
                     */
                    std::string GetBelongAssetType() const;

                    /**
                     * 设置<p>Rule asset scope type</p><p>Enumeration values:</p><ul><li>HOST: Host</li><li>CONTAINER: Container</li></ul>
                     * @param _belongAssetType <p>Rule asset scope type</p><p>Enumeration values:</p><ul><li>HOST: Host</li><li>CONTAINER: Container</li></ul>
                     * 
                     */
                    void SetBelongAssetType(const std::string& _belongAssetType);

                    /**
                     * 判断参数 BelongAssetType 是否已赋值
                     * @return BelongAssetType 是否已赋值
                     * 
                     */
                    bool BelongAssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>Rule effective scope</p>
                     * @return EffectScope <p>Rule effective scope</p>
                     * 
                     */
                    TrafficSandboxEffectScope GetEffectScope() const;

                    /**
                     * 设置<p>Rule effective scope</p>
                     * @param _effectScope <p>Rule effective scope</p>
                     * 
                     */
                    void SetEffectScope(const TrafficSandboxEffectScope& _effectScope);

                    /**
                     * 判断参数 EffectScope 是否已赋值
                     * @return EffectScope 是否已赋值
                     * 
                     */
                    bool EffectScopeHasBeenSet() const;

                    /**
                     * 获取<p>Rule behavior type</p><p>Enumeration values:</p><ul><li>RO: read-only</li><li>RW: read-write</li></ul>
                     * @return Action <p>Rule behavior type</p><p>Enumeration values:</p><ul><li>RO: read-only</li><li>RW: read-write</li></ul>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>Rule behavior type</p><p>Enumeration values:</p><ul><li>RO: read-only</li><li>RW: read-write</li></ul>
                     * @param _action <p>Rule behavior type</p><p>Enumeration values:</p><ul><li>RO: read-only</li><li>RW: read-write</li></ul>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>Allowlist path</p>
                     * @return PathWhitelist <p>Allowlist path</p>
                     * 
                     */
                    std::vector<std::string> GetPathWhitelist() const;

                    /**
                     * 设置<p>Allowlist path</p>
                     * @param _pathWhitelist <p>Allowlist path</p>
                     * 
                     */
                    void SetPathWhitelist(const std::vector<std::string>& _pathWhitelist);

                    /**
                     * 判断参数 PathWhitelist 是否已赋值
                     * @return PathWhitelist 是否已赋值
                     * 
                     */
                    bool PathWhitelistHasBeenSet() const;

                    /**
                     * 获取<p>Rule status</p><p>Enumeration values: </p><ul><li>ON: Enablement</li><li>OFF: Disablement</li></ul>
                     * @return Status <p>Rule status</p><p>Enumeration values: </p><ul><li>ON: Enablement</li><li>OFF: Disablement</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Rule status</p><p>Enumeration values: </p><ul><li>ON: Enablement</li><li>OFF: Disablement</li></ul>
                     * @param _status <p>Rule status</p><p>Enumeration values: </p><ul><li>ON: Enablement</li><li>OFF: Disablement</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>rule name</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Rule asset scope type</p><p>Enumeration values:</p><ul><li>HOST: Host</li><li>CONTAINER: Container</li></ul>
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * <p>Rule effective scope</p>
                     */
                    TrafficSandboxEffectScope m_effectScope;
                    bool m_effectScopeHasBeenSet;

                    /**
                     * <p>Rule behavior type</p><p>Enumeration values:</p><ul><li>RO: read-only</li><li>RW: read-write</li></ul>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>Allowlist path</p>
                     */
                    std::vector<std::string> m_pathWhitelist;
                    bool m_pathWhitelistHasBeenSet;

                    /**
                     * <p>Rule status</p><p>Enumeration values: </p><ul><li>ON: Enablement</li><li>OFF: Disablement</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COMMANDSANDBOXFILERULEBASE_H_
