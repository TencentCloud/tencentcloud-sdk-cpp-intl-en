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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKNOTIFYITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKNOTIFYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * A single notification item
                */
                class WebhookNotifyItem : public AbstractModel
                {
                public:
                    WebhookNotifyItem();
                    ~WebhookNotifyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Module code (shares enumeration with ModifyNotifySettingAlert)<br>Enumeration values:<br>Vul: vulnerability and cloud security posture<br>Alert: alarm center<br>AkSk: Cloud API Risk Governance<br>Agent: client/host asset<br>LogAnalysis: log analysis</p>
                     * @return Module <p>Module code (shares enumeration with ModifyNotifySettingAlert)<br>Enumeration values:<br>Vul: vulnerability and cloud security posture<br>Alert: alarm center<br>AkSk: Cloud API Risk Governance<br>Agent: client/host asset<br>LogAnalysis: log analysis</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>Module code (shares enumeration with ModifyNotifySettingAlert)<br>Enumeration values:<br>Vul: vulnerability and cloud security posture<br>Alert: alarm center<br>AkSk: Cloud API Risk Governance<br>Agent: client/host asset<br>LogAnalysis: log analysis</p>
                     * @param _module <p>Module code (shares enumeration with ModifyNotifySettingAlert)<br>Enumeration values:<br>Vul: vulnerability and cloud security posture<br>Alert: alarm center<br>AkSk: Cloud API Risk Governance<br>Agent: client/host asset<br>LogAnalysis: log analysis</p>
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取<p>Submodule code<br>Enumeration values (partial):<br>MALWARE_FILE: MALICIOUS FILE<br>MALWARE_PROCESS: MALICIOUS PROCESS<br>RISK_LOGIN: abnormal LOGIN<br>BRUTE_FORCE: password cracking<br>MALICIOUS_REQUEST: MALICIOUS REQUEST<br>HIGH_RISK_COMMAND: HIGH-RISK COMMAND<br>PRIVILEGE_ESCALATION: local PRIVILEGE ESCALATION<br>REVERSE_SHELL: REVERSE SHELL<br>NETWORK_ATTACK: NETWORK ATTACK<br>MULTI_BEHAVIOR_ATTACK: MULTI-BEHAVIOR ATTACK<br>AGENT_OFFLINE: client OFFLINE<br>AGENT_UNINSTALL: client uninstallation<br>For the complete enumeration, see DescribeWebhookNotifyItemTree</p>
                     * @return SubModule <p>Submodule code<br>Enumeration values (partial):<br>MALWARE_FILE: MALICIOUS FILE<br>MALWARE_PROCESS: MALICIOUS PROCESS<br>RISK_LOGIN: abnormal LOGIN<br>BRUTE_FORCE: password cracking<br>MALICIOUS_REQUEST: MALICIOUS REQUEST<br>HIGH_RISK_COMMAND: HIGH-RISK COMMAND<br>PRIVILEGE_ESCALATION: local PRIVILEGE ESCALATION<br>REVERSE_SHELL: REVERSE SHELL<br>NETWORK_ATTACK: NETWORK ATTACK<br>MULTI_BEHAVIOR_ATTACK: MULTI-BEHAVIOR ATTACK<br>AGENT_OFFLINE: client OFFLINE<br>AGENT_UNINSTALL: client uninstallation<br>For the complete enumeration, see DescribeWebhookNotifyItemTree</p>
                     * 
                     */
                    std::string GetSubModule() const;

                    /**
                     * 设置<p>Submodule code<br>Enumeration values (partial):<br>MALWARE_FILE: MALICIOUS FILE<br>MALWARE_PROCESS: MALICIOUS PROCESS<br>RISK_LOGIN: abnormal LOGIN<br>BRUTE_FORCE: password cracking<br>MALICIOUS_REQUEST: MALICIOUS REQUEST<br>HIGH_RISK_COMMAND: HIGH-RISK COMMAND<br>PRIVILEGE_ESCALATION: local PRIVILEGE ESCALATION<br>REVERSE_SHELL: REVERSE SHELL<br>NETWORK_ATTACK: NETWORK ATTACK<br>MULTI_BEHAVIOR_ATTACK: MULTI-BEHAVIOR ATTACK<br>AGENT_OFFLINE: client OFFLINE<br>AGENT_UNINSTALL: client uninstallation<br>For the complete enumeration, see DescribeWebhookNotifyItemTree</p>
                     * @param _subModule <p>Submodule code<br>Enumeration values (partial):<br>MALWARE_FILE: MALICIOUS FILE<br>MALWARE_PROCESS: MALICIOUS PROCESS<br>RISK_LOGIN: abnormal LOGIN<br>BRUTE_FORCE: password cracking<br>MALICIOUS_REQUEST: MALICIOUS REQUEST<br>HIGH_RISK_COMMAND: HIGH-RISK COMMAND<br>PRIVILEGE_ESCALATION: local PRIVILEGE ESCALATION<br>REVERSE_SHELL: REVERSE SHELL<br>NETWORK_ATTACK: NETWORK ATTACK<br>MULTI_BEHAVIOR_ATTACK: MULTI-BEHAVIOR ATTACK<br>AGENT_OFFLINE: client OFFLINE<br>AGENT_UNINSTALL: client uninstallation<br>For the complete enumeration, see DescribeWebhookNotifyItemTree</p>
                     * 
                     */
                    void SetSubModule(const std::string& _subModule);

                    /**
                     * 判断参数 SubModule 是否已赋值
                     * @return SubModule 是否已赋值
                     * 
                     */
                    bool SubModuleHasBeenSet() const;

                    /**
                     * 获取<p>Risk level collection<br>Enumeration values:<br>CRITICAL: Critical<br>HIGH: High risk<br>MEDIUM: Medium risk<br>LOW: Low risk<br>INFO: Notification<br>Submodules with unsupported levels pass an empty array</p>
                     * @return Levels <p>Risk level collection<br>Enumeration values:<br>CRITICAL: Critical<br>HIGH: High risk<br>MEDIUM: Medium risk<br>LOW: Low risk<br>INFO: Notification<br>Submodules with unsupported levels pass an empty array</p>
                     * 
                     */
                    std::vector<std::string> GetLevels() const;

                    /**
                     * 设置<p>Risk level collection<br>Enumeration values:<br>CRITICAL: Critical<br>HIGH: High risk<br>MEDIUM: Medium risk<br>LOW: Low risk<br>INFO: Notification<br>Submodules with unsupported levels pass an empty array</p>
                     * @param _levels <p>Risk level collection<br>Enumeration values:<br>CRITICAL: Critical<br>HIGH: High risk<br>MEDIUM: Medium risk<br>LOW: Low risk<br>INFO: Notification<br>Submodules with unsupported levels pass an empty array</p>
                     * 
                     */
                    void SetLevels(const std::vector<std::string>& _levels);

                    /**
                     * 判断参数 Levels 是否已赋值
                     * @return Levels 是否已赋值
                     * 
                     */
                    bool LevelsHasBeenSet() const;

                    /**
                     * 获取<p>Processing status</p>
                     * @return Items <p>Processing status</p>
                     * 
                     */
                    std::vector<std::string> GetItems() const;

                    /**
                     * 设置<p>Processing status</p>
                     * @param _items <p>Processing status</p>
                     * 
                     */
                    void SetItems(const std::vector<std::string>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * <p>Module code (shares enumeration with ModifyNotifySettingAlert)<br>Enumeration values:<br>Vul: vulnerability and cloud security posture<br>Alert: alarm center<br>AkSk: Cloud API Risk Governance<br>Agent: client/host asset<br>LogAnalysis: log analysis</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>Submodule code<br>Enumeration values (partial):<br>MALWARE_FILE: MALICIOUS FILE<br>MALWARE_PROCESS: MALICIOUS PROCESS<br>RISK_LOGIN: abnormal LOGIN<br>BRUTE_FORCE: password cracking<br>MALICIOUS_REQUEST: MALICIOUS REQUEST<br>HIGH_RISK_COMMAND: HIGH-RISK COMMAND<br>PRIVILEGE_ESCALATION: local PRIVILEGE ESCALATION<br>REVERSE_SHELL: REVERSE SHELL<br>NETWORK_ATTACK: NETWORK ATTACK<br>MULTI_BEHAVIOR_ATTACK: MULTI-BEHAVIOR ATTACK<br>AGENT_OFFLINE: client OFFLINE<br>AGENT_UNINSTALL: client uninstallation<br>For the complete enumeration, see DescribeWebhookNotifyItemTree</p>
                     */
                    std::string m_subModule;
                    bool m_subModuleHasBeenSet;

                    /**
                     * <p>Risk level collection<br>Enumeration values:<br>CRITICAL: Critical<br>HIGH: High risk<br>MEDIUM: Medium risk<br>LOW: Low risk<br>INFO: Notification<br>Submodules with unsupported levels pass an empty array</p>
                     */
                    std::vector<std::string> m_levels;
                    bool m_levelsHasBeenSet;

                    /**
                     * <p>Processing status</p>
                     */
                    std::vector<std::string> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKNOTIFYITEM_H_
