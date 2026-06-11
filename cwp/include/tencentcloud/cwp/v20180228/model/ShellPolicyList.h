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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SHELLPOLICYLIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SHELLPOLICYLIST_H_

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
                * Reverse shell list data details.
                */
                class ShellPolicyList : public AbstractModel
                {
                public:
                    ShellPolicyList();
                    ~ShellPolicyList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyId Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyId Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyName Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyName Policy name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取0: system policy, 1: custom policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyType 0: system policy, 1: custom policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPolicyType() const;

                    /**
                     * 设置0: system policy, 1: custom policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyType 0: system policy, 1: custom policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicyType(const uint64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取Policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyDesc Policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPolicyDesc() const;

                    /**
                     * 设置Policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyDesc Policy description
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Policy action [0: alarm; 1: allow; 2:intercept + alarm]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyAction Policy action [0: alarm; 1: allow; 2:intercept + alarm]
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPolicyAction() const;

                    /**
                     * 设置Policy action [0: alarm; 1: allow; 2:intercept + alarm]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyAction Policy action [0: alarm; 1: allow; 2:intercept + alarm]
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicyAction(const uint64_t& _policyAction);

                    /**
                     * 判断参数 PolicyAction 是否已赋值
                     * @return PolicyAction 是否已赋值
                     * 
                     */
                    bool PolicyActionHasBeenSet() const;

                    /**
                     * 获取0: enabled, 1: disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsEnabled 0: enabled, 1: disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsEnabled() const;

                    /**
                     * 设置0: enabled, 1: disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isEnabled 0: enabled, 1: disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsEnabled(const uint64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Host range. [0: a group of QUuids, 1: all Pro edition hosts, 2: Premium edition, 3: all hosts.]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostScope Host range. [0: a group of QUuids, 1: all Pro edition hosts, 2: Premium edition, 3: all hosts.]
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetHostScope() const;

                    /**
                     * 设置Host range. [0: a group of QUuids, 1: all Pro edition hosts, 2: Premium edition, 3: all hosts.]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostScope Host range. [0: a group of QUuids, 1: all Pro edition hosts, 2: Premium edition, 3: all hosts.]
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostScope(const uint64_t& _hostScope);

                    /**
                     * 判断参数 HostScope 是否已赋值
                     * @return HostScope 是否已赋值
                     * 
                     */
                    bool HostScopeHasBeenSet() const;

                private:

                    /**
                     * Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 0: system policy, 1: custom policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * Policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_policyDesc;
                    bool m_policyDescHasBeenSet;

                    /**
                     * Policy action [0: alarm; 1: allow; 2:intercept + alarm]
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_policyAction;
                    bool m_policyActionHasBeenSet;

                    /**
                     * 0: enabled, 1: disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Host range. [0: a group of QUuids, 1: all Pro edition hosts, 2: Premium edition, 3: all hosts.]
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_hostScope;
                    bool m_hostScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SHELLPOLICYLIST_H_
