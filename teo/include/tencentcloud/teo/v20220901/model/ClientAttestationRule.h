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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTATIONRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTATIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>
#include <tencentcloud/teo/v20220901/model/DeviceProfile.h>
#include <tencentcloud/teo/v20220901/model/AccountProtectionSettings.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Client authentication rules
                */
                class ClientAttestationRule : public AbstractModel
                {
                public:
                    ClientAttestationRule();
                    ~ClientAttestationRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ID of the client authentication rule.<br>Different rule configuration operations are supported by rule ID:<br> <li> <b>Add</b> a new rule: leave ID empty or do not specify the ID parameter;</li><li> <b>Modify</b> an existing rule: specify the rule ID to be updated/modified;</li><li> <b>Delete</b> an existing rule: existing rules not included in the ClientAttestationRule list in the BotManagement parameter will be deleted.</li></p>
                     * @return Id <p>ID of the client authentication rule.<br>Different rule configuration operations are supported by rule ID:<br> <li> <b>Add</b> a new rule: leave ID empty or do not specify the ID parameter;</li><li> <b>Modify</b> an existing rule: specify the rule ID to be updated/modified;</li><li> <b>Delete</b> an existing rule: existing rules not included in the ClientAttestationRule list in the BotManagement parameter will be deleted.</li></p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>ID of the client authentication rule.<br>Different rule configuration operations are supported by rule ID:<br> <li> <b>Add</b> a new rule: leave ID empty or do not specify the ID parameter;</li><li> <b>Modify</b> an existing rule: specify the rule ID to be updated/modified;</li><li> <b>Delete</b> an existing rule: existing rules not included in the ClientAttestationRule list in the BotManagement parameter will be deleted.</li></p>
                     * @param _id <p>ID of the client authentication rule.<br>Different rule configuration operations are supported by rule ID:<br> <li> <b>Add</b> a new rule: leave ID empty or do not specify the ID parameter;</li><li> <b>Modify</b> an existing rule: specify the rule ID to be updated/modified;</li><li> <b>Delete</b> an existing rule: existing rules not included in the ClientAttestationRule list in the BotManagement parameter will be deleted.</li></p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Name of the client authentication rule.</p>
                     * @return Name <p>Name of the client authentication rule.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Name of the client authentication rule.</p>
                     * @param _name <p>Name of the client authentication rule.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Whether the rule is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li></p>
                     * @return Enabled <p>Whether the rule is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li></p>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置<p>Whether the rule is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li></p>
                     * @param _enabled <p>Whether the rule is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li></p>
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
                     * 获取<p>Priority of rules. A smaller value indicates higher priority. Value range: 0-100. Default value: 0.</p>
                     * @return Priority <p>Priority of rules. A smaller value indicates higher priority. Value range: 0-100. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置<p>Priority of rules. A smaller value indicates higher priority. Value range: 0-100. Default value: 0.</p>
                     * @param _priority <p>Priority of rules. A smaller value indicates higher priority. Value range: 0-100. Default value: 0.</p>
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取<p>The specific content of the rule must comply with the expression syntax. For detailed specifications, see the product document.</p>
                     * @return Condition <p>The specific content of the rule must comply with the expression syntax. For detailed specifications, see the product document.</p>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p>The specific content of the rule must comply with the expression syntax. For detailed specifications, see the product document.</p>
                     * @param _condition <p>The specific content of the rule must comply with the expression syntax. For detailed specifications, see the product document.</p>
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取<p>Client authentication option ID.</p>
                     * @return AttesterId <p>Client authentication option ID.</p>
                     * 
                     */
                    std::string GetAttesterId() const;

                    /**
                     * 设置<p>Client authentication option ID.</p>
                     * @param _attesterId <p>Client authentication option ID.</p>
                     * 
                     */
                    void SetAttesterId(const std::string& _attesterId);

                    /**
                     * 判断参数 AttesterId 是否已赋值
                     * @return AttesterId 是否已赋值
                     * 
                     */
                    bool AttesterIdHasBeenSet() const;

                    /**
                     * 获取<p>Handling method when client authentication fails. SecurityAction.Name values are as follows:</p><ul><li>Allow: allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports BlockIp, ReturnCustomPage, and Stall configuration;</li><li>Monitor: observe;</li><li>Challenge: challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge, ManagedChallenge, InterstitialChallenge, and InlineChallenge;</li><li>Redirect: redirect to a URL.</li></ul>
                     * @return InvalidAttestationAction <p>Handling method when client authentication fails. SecurityAction.Name values are as follows:</p><ul><li>Allow: allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports BlockIp, ReturnCustomPage, and Stall configuration;</li><li>Monitor: observe;</li><li>Challenge: challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge, ManagedChallenge, InterstitialChallenge, and InlineChallenge;</li><li>Redirect: redirect to a URL.</li></ul>
                     * 
                     */
                    SecurityAction GetInvalidAttestationAction() const;

                    /**
                     * 设置<p>Handling method when client authentication fails. SecurityAction.Name values are as follows:</p><ul><li>Allow: allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports BlockIp, ReturnCustomPage, and Stall configuration;</li><li>Monitor: observe;</li><li>Challenge: challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge, ManagedChallenge, InterstitialChallenge, and InlineChallenge;</li><li>Redirect: redirect to a URL.</li></ul>
                     * @param _invalidAttestationAction <p>Handling method when client authentication fails. SecurityAction.Name values are as follows:</p><ul><li>Allow: allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports BlockIp, ReturnCustomPage, and Stall configuration;</li><li>Monitor: observe;</li><li>Challenge: challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge, ManagedChallenge, InterstitialChallenge, and InlineChallenge;</li><li>Redirect: redirect to a URL.</li></ul>
                     * 
                     */
                    void SetInvalidAttestationAction(const SecurityAction& _invalidAttestationAction);

                    /**
                     * 判断参数 InvalidAttestationAction 是否已赋值
                     * @return InvalidAttestationAction 是否已赋值
                     * 
                     */
                    bool InvalidAttestationActionHasBeenSet() const;

                    /**
                     * 获取<p>Client device configuration. If the DeviceProfiles parameter value is not specified in the ClientAttestationRules parameter: keep the existing client device configuration without modification.</p>
                     * @return DeviceProfiles <p>Client device configuration. If the DeviceProfiles parameter value is not specified in the ClientAttestationRules parameter: keep the existing client device configuration without modification.</p>
                     * 
                     */
                    std::vector<DeviceProfile> GetDeviceProfiles() const;

                    /**
                     * 设置<p>Client device configuration. If the DeviceProfiles parameter value is not specified in the ClientAttestationRules parameter: keep the existing client device configuration without modification.</p>
                     * @param _deviceProfiles <p>Client device configuration. If the DeviceProfiles parameter value is not specified in the ClientAttestationRules parameter: keep the existing client device configuration without modification.</p>
                     * 
                     */
                    void SetDeviceProfiles(const std::vector<DeviceProfile>& _deviceProfiles);

                    /**
                     * 判断参数 DeviceProfiles 是否已赋值
                     * @return DeviceProfiles 是否已赋值
                     * 
                     */
                    bool DeviceProfilesHasBeenSet() const;

                    /**
                     * 获取<p>Account protection configuration.</p>
                     * @return AccountProtectionSettings <p>Account protection configuration.</p>
                     * 
                     */
                    AccountProtectionSettings GetAccountProtectionSettings() const;

                    /**
                     * 设置<p>Account protection configuration.</p>
                     * @param _accountProtectionSettings <p>Account protection configuration.</p>
                     * 
                     */
                    void SetAccountProtectionSettings(const AccountProtectionSettings& _accountProtectionSettings);

                    /**
                     * 判断参数 AccountProtectionSettings 是否已赋值
                     * @return AccountProtectionSettings 是否已赋值
                     * 
                     */
                    bool AccountProtectionSettingsHasBeenSet() const;

                private:

                    /**
                     * <p>ID of the client authentication rule.<br>Different rule configuration operations are supported by rule ID:<br> <li> <b>Add</b> a new rule: leave ID empty or do not specify the ID parameter;</li><li> <b>Modify</b> an existing rule: specify the rule ID to be updated/modified;</li><li> <b>Delete</b> an existing rule: existing rules not included in the ClientAttestationRule list in the BotManagement parameter will be deleted.</li></p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Name of the client authentication rule.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Whether the rule is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li></p>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>Priority of rules. A smaller value indicates higher priority. Value range: 0-100. Default value: 0.</p>
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>The specific content of the rule must comply with the expression syntax. For detailed specifications, see the product document.</p>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>Client authentication option ID.</p>
                     */
                    std::string m_attesterId;
                    bool m_attesterIdHasBeenSet;

                    /**
                     * <p>Handling method when client authentication fails. SecurityAction.Name values are as follows:</p><ul><li>Allow: allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports BlockIp, ReturnCustomPage, and Stall configuration;</li><li>Monitor: observe;</li><li>Challenge: challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge, ManagedChallenge, InterstitialChallenge, and InlineChallenge;</li><li>Redirect: redirect to a URL.</li></ul>
                     */
                    SecurityAction m_invalidAttestationAction;
                    bool m_invalidAttestationActionHasBeenSet;

                    /**
                     * <p>Client device configuration. If the DeviceProfiles parameter value is not specified in the ClientAttestationRules parameter: keep the existing client device configuration without modification.</p>
                     */
                    std::vector<DeviceProfile> m_deviceProfiles;
                    bool m_deviceProfilesHasBeenSet;

                    /**
                     * <p>Account protection configuration.</p>
                     */
                    AccountProtectionSettings m_accountProtectionSettings;
                    bool m_accountProtectionSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTATIONRULE_H_
