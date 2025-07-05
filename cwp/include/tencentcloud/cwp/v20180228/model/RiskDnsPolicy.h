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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSPOLICY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Malicious request policy
                */
                class RiskDnsPolicy : public AbstractModel
                {
                public:
                    RiskDnsPolicy();
                    ~RiskDnsPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy name
                     * @return PolicyName Policy name
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name
                     * @param _policyName Policy name
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Policy type [0: system; 1: user]
                     * @return PolicyType Policy type [0: system; 1: user]
                     * 
                     */
                    int64_t GetPolicyType() const;

                    /**
                     * 设置Policy type [0: system; 1: user]
                     * @param _policyType Policy type [0: system; 1: user]
                     * 
                     */
                    void SetPolicyType(const int64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取Policy action [0: alarm; 1: allow; 2:intercept + alarm]
                     * @return PolicyAction Policy action [0: alarm; 1: allow; 2:intercept + alarm]
                     * 
                     */
                    int64_t GetPolicyAction() const;

                    /**
                     * 设置Policy action [0: alarm; 1: allow; 2:intercept + alarm]
                     * @param _policyAction Policy action [0: alarm; 1: allow; 2:intercept + alarm]
                     * 
                     */
                    void SetPolicyAction(const int64_t& _policyAction);

                    /**
                     * 判断参数 PolicyAction 是否已赋值
                     * @return PolicyAction 是否已赋值
                     * 
                     */
                    bool PolicyActionHasBeenSet() const;

                    /**
                     * 获取Host range [1: all Professional + Ultimate Editions|2: all Ultimate Editions|0: partial hosts]
                     * @return HostScope Host range [1: all Professional + Ultimate Editions|2: all Ultimate Editions|0: partial hosts]
                     * 
                     */
                    int64_t GetHostScope() const;

                    /**
                     * 设置Host range [1: all Professional + Ultimate Editions|2: all Ultimate Editions|0: partial hosts]
                     * @param _hostScope Host range [1: all Professional + Ultimate Editions|2: all Ultimate Editions|0: partial hosts]
                     * 
                     */
                    void SetHostScope(const int64_t& _hostScope);

                    /**
                     * 判断参数 HostScope 是否已赋值
                     * @return HostScope 是否已赋值
                     * 
                     */
                    bool HostScopeHasBeenSet() const;

                    /**
                     * 获取Host ID
                     * @return HostIds Host ID
                     * 
                     */
                    std::vector<std::string> GetHostIds() const;

                    /**
                     * 设置Host ID
                     * @param _hostIds Host ID
                     * 
                     */
                    void SetHostIds(const std::vector<std::string>& _hostIds);

                    /**
                     * 判断参数 HostIds 是否已赋值
                     * @return HostIds 是否已赋值
                     * 
                     */
                    bool HostIdsHasBeenSet() const;

                    /**
                     * 获取Domain name (when used as an input parameter, it needs base64 encode.)
                     * @return Domains Domain name (when used as an input parameter, it needs base64 encode.)
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置Domain name (when used as an input parameter, it needs base64 encode.)
                     * @param _domains Domain name (when used as an input parameter, it needs base64 encode.)
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Whether effective [0: effective,1: not effective]
                     * @return IsEnabled Whether effective [0: effective,1: not effective]
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置Whether effective [0: effective,1: not effective]
                     * @param _isEnabled Whether effective [0: effective,1: not effective]
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID
                     * @param _policyId Policy ID
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Policy description
                     * @return PolicyDesc Policy description
                     * 
                     */
                    std::string GetPolicyDesc() const;

                    /**
                     * 设置Policy description
                     * @param _policyDesc Policy description
                     * 
                     */
                    void SetPolicyDesc(const std::string& _policyDesc);

                    /**
                     * 判断参数 PolicyDesc 是否已赋值
                     * @return PolicyDesc 是否已赋值
                     * 
                     */
                    bool PolicyDescHasBeenSet() const;

                    /**
                     * 获取Whether to process previous events [0: no|1: yes]
                     * @return IsDealOldEvent Whether to process previous events [0: no|1: yes]
                     * 
                     */
                    int64_t GetIsDealOldEvent() const;

                    /**
                     * 设置Whether to process previous events [0: no|1: yes]
                     * @param _isDealOldEvent Whether to process previous events [0: no|1: yes]
                     * 
                     */
                    void SetIsDealOldEvent(const int64_t& _isDealOldEvent);

                    /**
                     * 判断参数 IsDealOldEvent 是否已赋值
                     * @return IsDealOldEvent 是否已赋值
                     * 
                     */
                    bool IsDealOldEventHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Event ID
                     * @return EventId Event ID
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置Event ID
                     * @param _eventId Event ID
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * Policy name
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Policy type [0: system; 1: user]
                     */
                    int64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * Policy action [0: alarm; 1: allow; 2:intercept + alarm]
                     */
                    int64_t m_policyAction;
                    bool m_policyActionHasBeenSet;

                    /**
                     * Host range [1: all Professional + Ultimate Editions|2: all Ultimate Editions|0: partial hosts]
                     */
                    int64_t m_hostScope;
                    bool m_hostScopeHasBeenSet;

                    /**
                     * Host ID
                     */
                    std::vector<std::string> m_hostIds;
                    bool m_hostIdsHasBeenSet;

                    /**
                     * Domain name (when used as an input parameter, it needs base64 encode.)
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Whether effective [0: effective,1: not effective]
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * Policy ID
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Policy description
                     */
                    std::string m_policyDesc;
                    bool m_policyDescHasBeenSet;

                    /**
                     * Whether to process previous events [0: no|1: yes]
                     */
                    int64_t m_isDealOldEvent;
                    bool m_isDealOldEventHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Event ID
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSPOLICY_H_
