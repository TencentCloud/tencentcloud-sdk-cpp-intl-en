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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNOTIFYSETTINGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNOTIFYSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyNotifySetting request structure.
                */
                class ModifyNotifySettingRequest : public AbstractModel
                {
                public:
                    ModifyNotifySettingRequest();
                    ~ModifyNotifySettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Notification module</p><p>Enumeration values:</p><ul><li>AkSk: Cloud API Risk Governance</li><li>Alert: Alert Center</li><li>Agent: Client</li></ul>
                     * @return Module <p>Notification module</p><p>Enumeration values:</p><ul><li>AkSk: Cloud API Risk Governance</li><li>Alert: Alert Center</li><li>Agent: Client</li></ul>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>Notification module</p><p>Enumeration values:</p><ul><li>AkSk: Cloud API Risk Governance</li><li>Alert: Alert Center</li><li>Agent: Client</li></ul>
                     * @param _module <p>Notification module</p><p>Enumeration values:</p><ul><li>AkSk: Cloud API Risk Governance</li><li>Alert: Alert Center</li><li>Agent: Client</li></ul>
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
                     * 获取<p>Notification setting mode</p><p>Enumeration values:</p><ul><li>0: Standard mode</li><li>1: Advanced mode</li></ul>
                     * @return Mode <p>Notification setting mode</p><p>Enumeration values:</p><ul><li>0: Standard mode</li><li>1: Advanced mode</li></ul>
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置<p>Notification setting mode</p><p>Enumeration values:</p><ul><li>0: Standard mode</li><li>1: Advanced mode</li></ul>
                     * @param _mode <p>Notification setting mode</p><p>Enumeration values:</p><ul><li>0: Standard mode</li><li>1: Advanced mode</li></ul>
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>Notification status</p><p>Enumeration values:</p><ul><li>0: Notifications off</li><li>1: Notifications on</li></ul>
                     * @return Status <p>Notification status</p><p>Enumeration values:</p><ul><li>0: Notifications off</li><li>1: Notifications on</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Notification status</p><p>Enumeration values:</p><ul><li>0: Notifications off</li><li>1: Notifications on</li></ul>
                     * @param _status <p>Notification status</p><p>Enumeration values:</p><ul><li>0: Notifications off</li><li>1: Notifications on</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Notification start time</p><p>Parameter format: hh:mm:ss</p>
                     * @return BeginTime <p>Notification start time</p><p>Parameter format: hh:mm:ss</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>Notification start time</p><p>Parameter format: hh:mm:ss</p>
                     * @param _beginTime <p>Notification start time</p><p>Parameter format: hh:mm:ss</p>
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>Notification end time</p><p>Parameter format: hh:mm:ss</p>
                     * @return EndTime <p>Notification end time</p><p>Parameter format: hh:mm:ss</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Notification end time</p><p>Parameter format: hh:mm:ss</p>
                     * @param _endTime <p>Notification end time</p><p>Parameter format: hh:mm:ss</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Notification option</p><p>Enumeration values:</p><ul><li>CRITICAL: Alarm level: critical</li><li>HIGH: Alarm level: high risk</li><li>MEDIUM: Alarm level: medium risk</li><li>LOW: Alarm level: low risk</li><li>INFO: Alarm level: reminder</li><li>AGENT_UNINSTALL: Client uninstallation</li><li>AGENT_OFFLINE: Client offline</li></ul>
                     * @return Option <p>Notification option</p><p>Enumeration values:</p><ul><li>CRITICAL: Alarm level: critical</li><li>HIGH: Alarm level: high risk</li><li>MEDIUM: Alarm level: medium risk</li><li>LOW: Alarm level: low risk</li><li>INFO: Alarm level: reminder</li><li>AGENT_UNINSTALL: Client uninstallation</li><li>AGENT_OFFLINE: Client offline</li></ul>
                     * 
                     */
                    std::vector<std::string> GetOption() const;

                    /**
                     * 设置<p>Notification option</p><p>Enumeration values:</p><ul><li>CRITICAL: Alarm level: critical</li><li>HIGH: Alarm level: high risk</li><li>MEDIUM: Alarm level: medium risk</li><li>LOW: Alarm level: low risk</li><li>INFO: Alarm level: reminder</li><li>AGENT_UNINSTALL: Client uninstallation</li><li>AGENT_OFFLINE: Client offline</li></ul>
                     * @param _option <p>Notification option</p><p>Enumeration values:</p><ul><li>CRITICAL: Alarm level: critical</li><li>HIGH: Alarm level: high risk</li><li>MEDIUM: Alarm level: medium risk</li><li>LOW: Alarm level: low risk</li><li>INFO: Alarm level: reminder</li><li>AGENT_UNINSTALL: Client uninstallation</li><li>AGENT_OFFLINE: Client offline</li></ul>
                     * 
                     */
                    void SetOption(const std::vector<std::string>& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     * 
                     */
                    bool OptionHasBeenSet() const;

                private:

                    /**
                     * <p>Notification module</p><p>Enumeration values:</p><ul><li>AkSk: Cloud API Risk Governance</li><li>Alert: Alert Center</li><li>Agent: Client</li></ul>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>Notification setting mode</p><p>Enumeration values:</p><ul><li>0: Standard mode</li><li>1: Advanced mode</li></ul>
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>Notification status</p><p>Enumeration values:</p><ul><li>0: Notifications off</li><li>1: Notifications on</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Notification start time</p><p>Parameter format: hh:mm:ss</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>Notification end time</p><p>Parameter format: hh:mm:ss</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Notification option</p><p>Enumeration values:</p><ul><li>CRITICAL: Alarm level: critical</li><li>HIGH: Alarm level: high risk</li><li>MEDIUM: Alarm level: medium risk</li><li>LOW: Alarm level: low risk</li><li>INFO: Alarm level: reminder</li><li>AGENT_UNINSTALL: Client uninstallation</li><li>AGENT_OFFLINE: Client offline</li></ul>
                     */
                    std::vector<std::string> m_option;
                    bool m_optionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNOTIFYSETTINGREQUEST_H_
