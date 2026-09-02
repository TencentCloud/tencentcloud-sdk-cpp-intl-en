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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXDLPRULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXDLPRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPRuleContentItem.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPUserRuleInfo.h>
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
                * ModifySandboxDLPRule request structure.
                */
                class ModifySandboxDLPRuleRequest : public AbstractModel
                {
                public:
                    ModifySandboxDLPRuleRequest();
                    ~ModifySandboxDLPRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Rule ID.</p>
                     * @return ID <p>Rule ID.</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>Rule ID.</p>
                     * @param _iD <p>Rule ID.</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Rule name<br>Input limit: length 1-128<br>Default value: no modification if not passed</p>
                     * @return RuleName <p>Rule name<br>Input limit: length 1-128<br>Default value: no modification if not passed</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>Rule name<br>Input limit: length 1-128<br>Default value: no modification if not passed</p>
                     * @param _ruleName <p>Rule name<br>Input limit: length 1-128<br>Default value: no modification if not passed</p>
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
                     * 获取<p>Rule level<br>Enumeration values:<br>INFO: notification<br>LOW: low risk<br>MEDIUM: medium risk<br>HIGH: high risk<br>CRITICAL: critical<br>Default value: no modification if not passed in</p>
                     * @return Level <p>Rule level<br>Enumeration values:<br>INFO: notification<br>LOW: low risk<br>MEDIUM: medium risk<br>HIGH: high risk<br>CRITICAL: critical<br>Default value: no modification if not passed in</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>Rule level<br>Enumeration values:<br>INFO: notification<br>LOW: low risk<br>MEDIUM: medium risk<br>HIGH: high risk<br>CRITICAL: critical<br>Default value: no modification if not passed in</p>
                     * @param _level <p>Rule level<br>Enumeration values:<br>INFO: notification<br>LOW: low risk<br>MEDIUM: medium risk<br>HIGH: high risk<br>CRITICAL: critical<br>Default value: no modification if not passed in</p>
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
                     * 获取<p>Rule action<br>Enumeration values:<br>PASS: blocklist<br>BLOCK: block and alarm<br>MONITOR: alarm<br>Default value: no modification if not passed in</p>
                     * @return RuleAction <p>Rule action<br>Enumeration values:<br>PASS: blocklist<br>BLOCK: block and alarm<br>MONITOR: alarm<br>Default value: no modification if not passed in</p>
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置<p>Rule action<br>Enumeration values:<br>PASS: blocklist<br>BLOCK: block and alarm<br>MONITOR: alarm<br>Default value: no modification if not passed in</p>
                     * @param _ruleAction <p>Rule action<br>Enumeration values:<br>PASS: blocklist<br>BLOCK: block and alarm<br>MONITOR: alarm<br>Default value: no modification if not passed in</p>
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
                     * 获取<p>Referenced system rule ID list<br>Input parameter limit: up to 1000; when passed, overwrites the original collection entirely; if not passed, means no modification</p>
                     * @return SystemRuleIDList <p>Referenced system rule ID list<br>Input parameter limit: up to 1000; when passed, overwrites the original collection entirely; if not passed, means no modification</p>
                     * 
                     */
                    std::vector<int64_t> GetSystemRuleIDList() const;

                    /**
                     * 设置<p>Referenced system rule ID list<br>Input parameter limit: up to 1000; when passed, overwrites the original collection entirely; if not passed, means no modification</p>
                     * @param _systemRuleIDList <p>Referenced system rule ID list<br>Input parameter limit: up to 1000; when passed, overwrites the original collection entirely; if not passed, means no modification</p>
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
                     * 获取<p>User-defined rule content<br>Input parameter limits: when passed in, the entire collection is overwritten (passing an empty array is allowed to clear it); if not passed, no modification is made</p>
                     * @return UserRuleContent <p>User-defined rule content<br>Input parameter limits: when passed in, the entire collection is overwritten (passing an empty array is allowed to clear it); if not passed, no modification is made</p>
                     * 
                     */
                    std::vector<TrafficSandboxDLPRuleContentItem> GetUserRuleContent() const;

                    /**
                     * 设置<p>User-defined rule content<br>Input parameter limits: when passed in, the entire collection is overwritten (passing an empty array is allowed to clear it); if not passed, no modification is made</p>
                     * @param _userRuleContent <p>User-defined rule content<br>Input parameter limits: when passed in, the entire collection is overwritten (passing an empty array is allowed to clear it); if not passed, no modification is made</p>
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
                     * 获取<p>Structured input parameters support 5 detection dimensions (file name/file size/file format/outbound domain name/outbound content). Each dimension is selectable, and at least one must be hit. When passed in, it overwrites the original collection as a whole; if not passed, no modification is made. It will override when passed in at the same time as UserRuleContent</p>
                     * @return UserRuleInfo <p>Structured input parameters support 5 detection dimensions (file name/file size/file format/outbound domain name/outbound content). Each dimension is selectable, and at least one must be hit. When passed in, it overwrites the original collection as a whole; if not passed, no modification is made. It will override when passed in at the same time as UserRuleContent</p>
                     * 
                     */
                    TrafficSandboxDLPUserRuleInfo GetUserRuleInfo() const;

                    /**
                     * 设置<p>Structured input parameters support 5 detection dimensions (file name/file size/file format/outbound domain name/outbound content). Each dimension is selectable, and at least one must be hit. When passed in, it overwrites the original collection as a whole; if not passed, no modification is made. It will override when passed in at the same time as UserRuleContent</p>
                     * @param _userRuleInfo <p>Structured input parameters support 5 detection dimensions (file name/file size/file format/outbound domain name/outbound content). Each dimension is selectable, and at least one must be hit. When passed in, it overwrites the original collection as a whole; if not passed, no modification is made. It will override when passed in at the same time as UserRuleContent</p>
                     * 
                     */
                    void SetUserRuleInfo(const TrafficSandboxDLPUserRuleInfo& _userRuleInfo);

                    /**
                     * 判断参数 UserRuleInfo 是否已赋值
                     * @return UserRuleInfo 是否已赋值
                     * 
                     */
                    bool UserRuleInfoHasBeenSet() const;

                    /**
                     * 获取<p>Effective scope<br>Default value: no modification if not passed</p>
                     * @return EffectScope <p>Effective scope<br>Default value: no modification if not passed</p>
                     * 
                     */
                    TrafficSandboxEffectScope GetEffectScope() const;

                    /**
                     * 设置<p>Effective scope<br>Default value: no modification if not passed</p>
                     * @param _effectScope <p>Effective scope<br>Default value: no modification if not passed</p>
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
                     * 获取<p>Target status<br>Enumeration values: <br>ON: Enablement<br>OFF: Disablement<br>Default value: No modification if not passed in</p>
                     * @return Status <p>Target status<br>Enumeration values: <br>ON: Enablement<br>OFF: Disablement<br>Default value: No modification if not passed in</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Target status<br>Enumeration values: <br>ON: Enablement<br>OFF: Disablement<br>Default value: No modification if not passed in</p>
                     * @param _status <p>Target status<br>Enumeration values: <br>ON: Enablement<br>OFF: Disablement<br>Default value: No modification if not passed in</p>
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
                     * <p>Rule ID.</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Rule name<br>Input limit: length 1-128<br>Default value: no modification if not passed</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Rule level<br>Enumeration values:<br>INFO: notification<br>LOW: low risk<br>MEDIUM: medium risk<br>HIGH: high risk<br>CRITICAL: critical<br>Default value: no modification if not passed in</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Rule action<br>Enumeration values:<br>PASS: blocklist<br>BLOCK: block and alarm<br>MONITOR: alarm<br>Default value: no modification if not passed in</p>
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * <p>Referenced system rule ID list<br>Input parameter limit: up to 1000; when passed, overwrites the original collection entirely; if not passed, means no modification</p>
                     */
                    std::vector<int64_t> m_systemRuleIDList;
                    bool m_systemRuleIDListHasBeenSet;

                    /**
                     * <p>User-defined rule content<br>Input parameter limits: when passed in, the entire collection is overwritten (passing an empty array is allowed to clear it); if not passed, no modification is made</p>
                     */
                    std::vector<TrafficSandboxDLPRuleContentItem> m_userRuleContent;
                    bool m_userRuleContentHasBeenSet;

                    /**
                     * <p>Structured input parameters support 5 detection dimensions (file name/file size/file format/outbound domain name/outbound content). Each dimension is selectable, and at least one must be hit. When passed in, it overwrites the original collection as a whole; if not passed, no modification is made. It will override when passed in at the same time as UserRuleContent</p>
                     */
                    TrafficSandboxDLPUserRuleInfo m_userRuleInfo;
                    bool m_userRuleInfoHasBeenSet;

                    /**
                     * <p>Effective scope<br>Default value: no modification if not passed</p>
                     */
                    TrafficSandboxEffectScope m_effectScope;
                    bool m_effectScopeHasBeenSet;

                    /**
                     * <p>Target status<br>Enumeration values: <br>ON: Enablement<br>OFF: Disablement<br>Default value: No modification if not passed in</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXDLPRULEREQUEST_H_
