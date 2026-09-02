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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESANDBOXDLPRULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESANDBOXDLPRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxEffectScope.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPRuleContentItem.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPUserRuleInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateSandboxDLPRule request structure.
                */
                class CreateSandboxDLPRuleRequest : public AbstractModel
                {
                public:
                    CreateSandboxDLPRuleRequest();
                    ~CreateSandboxDLPRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Rule name<br>Input parameter limit: length 1-128</p>
                     * @return RuleName <p>Rule name<br>Input parameter limit: length 1-128</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>Rule name<br>Input parameter limit: length 1-128</p>
                     * @param _ruleName <p>Rule name<br>Input parameter limit: length 1-128</p>
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
                     * 获取<p>Rule level<br>Enumeration values:<br>INFO: notification<br>LOW: low risk<br>MEDIUM: medium risk<br>HIGH: high risk<br>CRITICAL: critical</p>
                     * @return Level <p>Rule level<br>Enumeration values:<br>INFO: notification<br>LOW: low risk<br>MEDIUM: medium risk<br>HIGH: high risk<br>CRITICAL: critical</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>Rule level<br>Enumeration values:<br>INFO: notification<br>LOW: low risk<br>MEDIUM: medium risk<br>HIGH: high risk<br>CRITICAL: critical</p>
                     * @param _level <p>Rule level<br>Enumeration values:<br>INFO: notification<br>LOW: low risk<br>MEDIUM: medium risk<br>HIGH: high risk<br>CRITICAL: critical</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>Rule action<br>Enumeration value:<br>PASS: allowlist<br>BLOCK: block and alarm<br>MONITOR: alarm</p>
                     * @return RuleAction <p>Rule action<br>Enumeration value:<br>PASS: allowlist<br>BLOCK: block and alarm<br>MONITOR: alarm</p>
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置<p>Rule action<br>Enumeration value:<br>PASS: allowlist<br>BLOCK: block and alarm<br>MONITOR: alarm</p>
                     * @param _ruleAction <p>Rule action<br>Enumeration value:<br>PASS: allowlist<br>BLOCK: block and alarm<br>MONITOR: alarm</p>
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取<p>Affiliated asset type<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
                     * @return BelongAssetType <p>Affiliated asset type<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
                     * 
                     */
                    std::string GetBelongAssetType() const;

                    /**
                     * 设置<p>Affiliated asset type<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
                     * @param _belongAssetType <p>Affiliated asset type<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
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
                     * 获取<p>Effective scope</p>
                     * @return EffectScope <p>Effective scope</p>
                     * 
                     */
                    TrafficSandboxEffectScope GetEffectScope() const;

                    /**
                     * 设置<p>Effective scope</p>
                     * @param _effectScope <p>Effective scope</p>
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
                     * 获取<p>Initial status<br>Enumeration values:<br>ON: Enable<br>OFF: Disable</p>
                     * @return Status <p>Initial status<br>Enumeration values:<br>ON: Enable<br>OFF: Disable</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Initial status<br>Enumeration values:<br>ON: Enable<br>OFF: Disable</p>
                     * @param _status <p>Initial status<br>Enumeration values:<br>ON: Enable<br>OFF: Disable</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Referenced system rule ID list<br>Input limit: up to 1000; at least one of this or UserRuleContent must be provided</p>
                     * @return SystemRuleIDList <p>Referenced system rule ID list<br>Input limit: up to 1000; at least one of this or UserRuleContent must be provided</p>
                     * 
                     */
                    std::vector<int64_t> GetSystemRuleIDList() const;

                    /**
                     * 设置<p>Referenced system rule ID list<br>Input limit: up to 1000; at least one of this or UserRuleContent must be provided</p>
                     * @param _systemRuleIDList <p>Referenced system rule ID list<br>Input limit: up to 1000; at least one of this or UserRuleContent must be provided</p>
                     * 
                     */
                    void SetSystemRuleIDList(const std::vector<int64_t>& _systemRuleIDList);

                    /**
                     * 判断参数 SystemRuleIDList 是否已赋值
                     * @return SystemRuleIDList 是否已赋值
                     * 
                     */
                    bool SystemRuleIDListHasBeenSet() const;

                    /**
                     * 获取<p>User-defined rule content<br>Input limits: up to 100 sub-rules; import either this or UserRuleInfo. If both are imported at the same time, UserRuleInfo takes precedence</p>
                     * @return UserRuleContent <p>User-defined rule content<br>Input limits: up to 100 sub-rules; import either this or UserRuleInfo. If both are imported at the same time, UserRuleInfo takes precedence</p>
                     * 
                     */
                    std::vector<TrafficSandboxDLPRuleContentItem> GetUserRuleContent() const;

                    /**
                     * 设置<p>User-defined rule content<br>Input limits: up to 100 sub-rules; import either this or UserRuleInfo. If both are imported at the same time, UserRuleInfo takes precedence</p>
                     * @param _userRuleContent <p>User-defined rule content<br>Input limits: up to 100 sub-rules; import either this or UserRuleInfo. If both are imported at the same time, UserRuleInfo takes precedence</p>
                     * 
                     */
                    void SetUserRuleContent(const std::vector<TrafficSandboxDLPRuleContentItem>& _userRuleContent);

                    /**
                     * 判断参数 UserRuleContent 是否已赋值
                     * @return UserRuleContent 是否已赋值
                     * 
                     */
                    bool UserRuleContentHasBeenSet() const;

                    /**
                     * 获取<p>Newly-added selectable structured input parameters support 5 detection dimensions (file name/file size/file format/outbound domain name/outbound content). Each dimension is selectable and at least one must be hit. It will override when passed at the same time as UserRuleContent.</p>
                     * @return UserRuleInfo <p>Newly-added selectable structured input parameters support 5 detection dimensions (file name/file size/file format/outbound domain name/outbound content). Each dimension is selectable and at least one must be hit. It will override when passed at the same time as UserRuleContent.</p>
                     * 
                     */
                    TrafficSandboxDLPUserRuleInfo GetUserRuleInfo() const;

                    /**
                     * 设置<p>Newly-added selectable structured input parameters support 5 detection dimensions (file name/file size/file format/outbound domain name/outbound content). Each dimension is selectable and at least one must be hit. It will override when passed at the same time as UserRuleContent.</p>
                     * @param _userRuleInfo <p>Newly-added selectable structured input parameters support 5 detection dimensions (file name/file size/file format/outbound domain name/outbound content). Each dimension is selectable and at least one must be hit. It will override when passed at the same time as UserRuleContent.</p>
                     * 
                     */
                    void SetUserRuleInfo(const TrafficSandboxDLPUserRuleInfo& _userRuleInfo);

                    /**
                     * 判断参数 UserRuleInfo 是否已赋值
                     * @return UserRuleInfo 是否已赋值
                     * 
                     */
                    bool UserRuleInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Rule name<br>Input parameter limit: length 1-128</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Rule level<br>Enumeration values:<br>INFO: notification<br>LOW: low risk<br>MEDIUM: medium risk<br>HIGH: high risk<br>CRITICAL: critical</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Rule action<br>Enumeration value:<br>PASS: allowlist<br>BLOCK: block and alarm<br>MONITOR: alarm</p>
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * <p>Affiliated asset type<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * <p>Effective scope</p>
                     */
                    TrafficSandboxEffectScope m_effectScope;
                    bool m_effectScopeHasBeenSet;

                    /**
                     * <p>Initial status<br>Enumeration values:<br>ON: Enable<br>OFF: Disable</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Referenced system rule ID list<br>Input limit: up to 1000; at least one of this or UserRuleContent must be provided</p>
                     */
                    std::vector<int64_t> m_systemRuleIDList;
                    bool m_systemRuleIDListHasBeenSet;

                    /**
                     * <p>User-defined rule content<br>Input limits: up to 100 sub-rules; import either this or UserRuleInfo. If both are imported at the same time, UserRuleInfo takes precedence</p>
                     */
                    std::vector<TrafficSandboxDLPRuleContentItem> m_userRuleContent;
                    bool m_userRuleContentHasBeenSet;

                    /**
                     * <p>Newly-added selectable structured input parameters support 5 detection dimensions (file name/file size/file format/outbound domain name/outbound content). Each dimension is selectable and at least one must be hit. It will override when passed at the same time as UserRuleContent.</p>
                     */
                    TrafficSandboxDLPUserRuleInfo m_userRuleInfo;
                    bool m_userRuleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESANDBOXDLPRULEREQUEST_H_
