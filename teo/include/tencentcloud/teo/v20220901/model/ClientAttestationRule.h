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
#include <tencentcloud/teo/v20220901/model/DeviceProfile.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Client authentication rule.
                */
                class ClientAttestationRule : public AbstractModel
                {
                public:
                    ClientAttestationRule();
                    ~ClientAttestationRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client authentication rule ID. supported rule configuration operations by rule ID: <li> <b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li> <b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li> <b>delete</b> an existing rule: existing rules not included in the ClientAttestationRule list under BotManagement parameters will be deleted.</li>.
                     * @return Id Client authentication rule ID. supported rule configuration operations by rule ID: <li> <b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li> <b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li> <b>delete</b> an existing rule: existing rules not included in the ClientAttestationRule list under BotManagement parameters will be deleted.</li>.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Client authentication rule ID. supported rule configuration operations by rule ID: <li> <b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li> <b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li> <b>delete</b> an existing rule: existing rules not included in the ClientAttestationRule list under BotManagement parameters will be deleted.</li>.
                     * @param _id Client authentication rule ID. supported rule configuration operations by rule ID: <li> <b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li> <b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li> <b>delete</b> an existing rule: existing rules not included in the ClientAttestationRule list under BotManagement parameters will be deleted.</li>.
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
                     * 获取Specifies the name of the client authentication rule.
                     * @return Name Specifies the name of the client authentication rule.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specifies the name of the client authentication rule.
                     * @param _name Specifies the name of the client authentication rule.
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
                     * 获取Whether the rule is enabled. valid values: <li>`on`: enable</li> <li>`off`: disable</li>.
                     * @return Enabled Whether the rule is enabled. valid values: <li>`on`: enable</li> <li>`off`: disable</li>.
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Whether the rule is enabled. valid values: <li>`on`: enable</li> <li>`off`: disable</li>.
                     * @param _enabled Whether the rule is enabled. valid values: <li>`on`: enable</li> <li>`off`: disable</li>.
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
                     * 获取Priority of rules. a smaller value indicates higher priority execution. value range: 0-100. default value: 0.
                     * @return Priority Priority of rules. a smaller value indicates higher priority execution. value range: 0-100. default value: 0.
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置Priority of rules. a smaller value indicates higher priority execution. value range: 0-100. default value: 0.
                     * @param _priority Priority of rules. a smaller value indicates higher priority execution. value range: 0-100. default value: 0.
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
                     * 获取The rule content must comply with expression grammar. for details, see the product document.
                     * @return Condition The rule content must comply with expression grammar. for details, see the product document.
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置The rule content must comply with expression grammar. for details, see the product document.
                     * @param _condition The rule content must comply with expression grammar. for details, see the product document.
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
                     * 获取Specifies the client authentication option ID.
                     * @return AttesterId Specifies the client authentication option ID.
                     * 
                     */
                    std::string GetAttesterId() const;

                    /**
                     * 设置Specifies the client authentication option ID.
                     * @param _attesterId Specifies the client authentication option ID.
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
                     * 获取Client device configuration. if the DeviceProfiles parameter value is not specified in the ClientAttestationRules parameter, keep the existing client device configuration and do not modify it.
                     * @return DeviceProfiles Client device configuration. if the DeviceProfiles parameter value is not specified in the ClientAttestationRules parameter, keep the existing client device configuration and do not modify it.
                     * 
                     */
                    std::vector<DeviceProfile> GetDeviceProfiles() const;

                    /**
                     * 设置Client device configuration. if the DeviceProfiles parameter value is not specified in the ClientAttestationRules parameter, keep the existing client device configuration and do not modify it.
                     * @param _deviceProfiles Client device configuration. if the DeviceProfiles parameter value is not specified in the ClientAttestationRules parameter, keep the existing client device configuration and do not modify it.
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
                     * 获取Handling method for failed client authentication. valid values for SecurityAction Name: <li>Deny: block;</li> <li>Monitor: observation;</li> <li>Redirect: redirection;</li> <li>Challenge: Challenge.</li> default value: Monitor.
                     * @return InvalidAttestationAction Handling method for failed client authentication. valid values for SecurityAction Name: <li>Deny: block;</li> <li>Monitor: observation;</li> <li>Redirect: redirection;</li> <li>Challenge: Challenge.</li> default value: Monitor.
                     * 
                     */
                    SecurityAction GetInvalidAttestationAction() const;

                    /**
                     * 设置Handling method for failed client authentication. valid values for SecurityAction Name: <li>Deny: block;</li> <li>Monitor: observation;</li> <li>Redirect: redirection;</li> <li>Challenge: Challenge.</li> default value: Monitor.
                     * @param _invalidAttestationAction Handling method for failed client authentication. valid values for SecurityAction Name: <li>Deny: block;</li> <li>Monitor: observation;</li> <li>Redirect: redirection;</li> <li>Challenge: Challenge.</li> default value: Monitor.
                     * 
                     */
                    void SetInvalidAttestationAction(const SecurityAction& _invalidAttestationAction);

                    /**
                     * 判断参数 InvalidAttestationAction 是否已赋值
                     * @return InvalidAttestationAction 是否已赋值
                     * 
                     */
                    bool InvalidAttestationActionHasBeenSet() const;

                private:

                    /**
                     * Client authentication rule ID. supported rule configuration operations by rule ID: <li> <b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li> <b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li> <b>delete</b> an existing rule: existing rules not included in the ClientAttestationRule list under BotManagement parameters will be deleted.</li>.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Specifies the name of the client authentication rule.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether the rule is enabled. valid values: <li>`on`: enable</li> <li>`off`: disable</li>.
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Priority of rules. a smaller value indicates higher priority execution. value range: 0-100. default value: 0.
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * The rule content must comply with expression grammar. for details, see the product document.
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Specifies the client authentication option ID.
                     */
                    std::string m_attesterId;
                    bool m_attesterIdHasBeenSet;

                    /**
                     * Client device configuration. if the DeviceProfiles parameter value is not specified in the ClientAttestationRules parameter, keep the existing client device configuration and do not modify it.
                     */
                    std::vector<DeviceProfile> m_deviceProfiles;
                    bool m_deviceProfilesHasBeenSet;

                    /**
                     * Handling method for failed client authentication. valid values for SecurityAction Name: <li>Deny: block;</li> <li>Monitor: observation;</li> <li>Redirect: redirection;</li> <li>Challenge: Challenge.</li> default value: Monitor.
                     */
                    SecurityAction m_invalidAttestationAction;
                    bool m_invalidAttestationActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTATIONRULE_H_
