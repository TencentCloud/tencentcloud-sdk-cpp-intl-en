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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXABLEMACHINEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXABLEMACHINEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/MiniTagItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Fixable host information
                */
                class VulFixableMachineItem : public AbstractModel
                {
                public:
                    VulFixableMachineItem();
                    ~VulFixableMachineItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Vulnerability ID list, grouped by SupportAutoFix dimension: repairable vulnerability IDs when SupportAutoFix=1, non-repairable vulnerability IDs when SupportAutoFix=0</p>
                     * @return VulIds <p>Vulnerability ID list, grouped by SupportAutoFix dimension: repairable vulnerability IDs when SupportAutoFix=1, non-repairable vulnerability IDs when SupportAutoFix=0</p>
                     * 
                     */
                    std::vector<int64_t> GetVulIds() const;

                    /**
                     * 设置<p>Vulnerability ID list, grouped by SupportAutoFix dimension: repairable vulnerability IDs when SupportAutoFix=1, non-repairable vulnerability IDs when SupportAutoFix=0</p>
                     * @param _vulIds <p>Vulnerability ID list, grouped by SupportAutoFix dimension: repairable vulnerability IDs when SupportAutoFix=1, non-repairable vulnerability IDs when SupportAutoFix=0</p>
                     * 
                     */
                    void SetVulIds(const std::vector<int64_t>& _vulIds);

                    /**
                     * 判断参数 VulIds 是否已赋值
                     * @return VulIds 是否已赋值
                     * 
                     */
                    bool VulIdsHasBeenSet() const;

                    /**
                     * 获取<p>Host instance ID.</p>
                     * @return InstanceId <p>Host instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Host instance ID.</p>
                     * @param _instanceId <p>Host instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Host name.</p>
                     * @return MachineName <p>Host name.</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>Host name.</p>
                     * @param _machineName <p>Host name.</p>
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取<p>Host IP address.</p>
                     * @return MachineIp <p>Host IP address.</p>
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置<p>Host IP address.</p>
                     * @param _machineIp <p>Host IP address.</p>
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取<p>public IP address</p>
                     * @return PublicIp <p>public IP address</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>public IP address</p>
                     * @param _publicIp <p>public IP address</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>OS type<br>Enumeration value:<br>linux: Linux operating system<br>windows: Windows operating system</p>
                     * @return OsType <p>OS type<br>Enumeration value:<br>linux: Linux operating system<br>windows: Windows operating system</p>
                     * 
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置<p>OS type<br>Enumeration value:<br>linux: Linux operating system<br>windows: Windows operating system</p>
                     * @param _osType <p>OS type<br>Enumeration value:<br>linux: Linux operating system<br>windows: Windows operating system</p>
                     * 
                     */
                    void SetOsType(const std::string& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取<p>Operating system name.</p>
                     * @return OsName <p>Operating system name.</p>
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置<p>Operating system name.</p>
                     * @param _osName <p>Operating system name.</p>
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取<p>Host online status<br>Enumeration value:<br>ONLINE: online<br>OFFLINE: offline</p>
                     * @return MachineStatus <p>Host online status<br>Enumeration value:<br>ONLINE: online<br>OFFLINE: offline</p>
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置<p>Host online status<br>Enumeration value:<br>ONLINE: online<br>OFFLINE: offline</p>
                     * @param _machineStatus <p>Host online status<br>Enumeration value:<br>ONLINE: online<br>OFFLINE: offline</p>
                     * 
                     */
                    void SetMachineStatus(const std::string& _machineStatus);

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     * 
                     */
                    bool MachineStatusHasBeenSet() const;

                    /**
                     * 获取<p>Is auto-repair supported<br>Enumeration value:<br>0: No support<br>1: Support</p>
                     * @return SupportAutoFix <p>Is auto-repair supported<br>Enumeration value:<br>0: No support<br>1: Support</p>
                     * 
                     */
                    int64_t GetSupportAutoFix() const;

                    /**
                     * 设置<p>Is auto-repair supported<br>Enumeration value:<br>0: No support<br>1: Support</p>
                     * @param _supportAutoFix <p>Is auto-repair supported<br>Enumeration value:<br>0: No support<br>1: Support</p>
                     * 
                     */
                    void SetSupportAutoFix(const int64_t& _supportAutoFix);

                    /**
                     * 判断参数 SupportAutoFix 是否已赋值
                     * @return SupportAutoFix 是否已赋值
                     * 
                     */
                    bool SupportAutoFixHasBeenSet() const;

                    /**
                     * 获取<p>Current remediation status<br>Enumeration value:<br>0: Unfixed<br>1: In remediation<br>2: Fix failure<br>3: Repair successful<br>4: Timeout</p>
                     * @return FixStatus <p>Current remediation status<br>Enumeration value:<br>0: Unfixed<br>1: In remediation<br>2: Fix failure<br>3: Repair successful<br>4: Timeout</p>
                     * 
                     */
                    int64_t GetFixStatus() const;

                    /**
                     * 设置<p>Current remediation status<br>Enumeration value:<br>0: Unfixed<br>1: In remediation<br>2: Fix failure<br>3: Repair successful<br>4: Timeout</p>
                     * @param _fixStatus <p>Current remediation status<br>Enumeration value:<br>0: Unfixed<br>1: In remediation<br>2: Fix failure<br>3: Repair successful<br>4: Timeout</p>
                     * 
                     */
                    void SetFixStatus(const int64_t& _fixStatus);

                    /**
                     * 判断参数 FixStatus 是否已赋值
                     * @return FixStatus 是否已赋值
                     * 
                     */
                    bool FixStatusHasBeenSet() const;

                    /**
                     * 获取<p>Last repair time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @return LatestFixTime <p>Last repair time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    std::string GetLatestFixTime() const;

                    /**
                     * 设置<p>Last repair time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @param _latestFixTime <p>Last repair time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    void SetLatestFixTime(const std::string& _latestFixTime);

                    /**
                     * 判断参数 LatestFixTime 是否已赋值
                     * @return LatestFixTime 是否已赋值
                     * 
                     */
                    bool LatestFixTimeHasBeenSet() const;

                    /**
                     * 获取<p>Non-repairable reason. Returned when SupportAutoFix is 0.</p>
                     * @return NotFixableReason <p>Non-repairable reason. Returned when SupportAutoFix is 0.</p>
                     * 
                     */
                    std::string GetNotFixableReason() const;

                    /**
                     * 设置<p>Non-repairable reason. Returned when SupportAutoFix is 0.</p>
                     * @param _notFixableReason <p>Non-repairable reason. Returned when SupportAutoFix is 0.</p>
                     * 
                     */
                    void SetNotFixableReason(const std::string& _notFixableReason);

                    /**
                     * 判断参数 NotFixableReason 是否已赋值
                     * @return NotFixableReason 是否已赋值
                     * 
                     */
                    bool NotFixableReasonHasBeenSet() const;

                    /**
                     * 获取<p>Fix command list, returned when SupportAutoFix is 1</p>
                     * @return FixCommands <p>Fix command list, returned when SupportAutoFix is 1</p>
                     * 
                     */
                    std::vector<std::string> GetFixCommands() const;

                    /**
                     * 设置<p>Fix command list, returned when SupportAutoFix is 1</p>
                     * @param _fixCommands <p>Fix command list, returned when SupportAutoFix is 1</p>
                     * 
                     */
                    void SetFixCommands(const std::vector<std::string>& _fixCommands);

                    /**
                     * 判断参数 FixCommands 是否已赋值
                     * @return FixCommands 是否已赋值
                     * 
                     */
                    bool FixCommandsHasBeenSet() const;

                    /**
                     * 获取<p>Associated component list</p>
                     * @return Components <p>Associated component list</p>
                     * 
                     */
                    std::vector<std::string> GetComponents() const;

                    /**
                     * 设置<p>Associated component list</p>
                     * @param _components <p>Associated component list</p>
                     * 
                     */
                    void SetComponents(const std::vector<std::string>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取<p>Asset tag list</p>
                     * @return TagItems <p>Asset tag list</p>
                     * 
                     */
                    std::vector<MiniTagItem> GetTagItems() const;

                    /**
                     * 设置<p>Asset tag list</p>
                     * @param _tagItems <p>Asset tag list</p>
                     * 
                     */
                    void SetTagItems(const std::vector<MiniTagItem>& _tagItems);

                    /**
                     * 判断参数 TagItems 是否已赋值
                     * @return TagItems 是否已赋值
                     * 
                     */
                    bool TagItemsHasBeenSet() const;

                    /**
                     * 获取<p>Account AppId</p>
                     * @return AppId <p>Account AppId</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>Account AppId</p>
                     * @param _appId <p>Account AppId</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Paid edition info<br>Enumeration value:<br>BASIC: Basic version<br>PRO: Pro edition<br>ULTIMATE: Flagship edition</p>
                     * @return PayVersion <p>Paid edition info<br>Enumeration value:<br>BASIC: Basic version<br>PRO: Pro edition<br>ULTIMATE: Flagship edition</p>
                     * 
                     */
                    std::string GetPayVersion() const;

                    /**
                     * 设置<p>Paid edition info<br>Enumeration value:<br>BASIC: Basic version<br>PRO: Pro edition<br>ULTIMATE: Flagship edition</p>
                     * @param _payVersion <p>Paid edition info<br>Enumeration value:<br>BASIC: Basic version<br>PRO: Pro edition<br>ULTIMATE: Flagship edition</p>
                     * 
                     */
                    void SetPayVersion(const std::string& _payVersion);

                    /**
                     * 判断参数 PayVersion 是否已赋值
                     * @return PayVersion 是否已赋值
                     * 
                     */
                    bool PayVersionHasBeenSet() const;

                private:

                    /**
                     * <p>Vulnerability ID list, grouped by SupportAutoFix dimension: repairable vulnerability IDs when SupportAutoFix=1, non-repairable vulnerability IDs when SupportAutoFix=0</p>
                     */
                    std::vector<int64_t> m_vulIds;
                    bool m_vulIdsHasBeenSet;

                    /**
                     * <p>Host instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Host name.</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>Host IP address.</p>
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * <p>public IP address</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>OS type<br>Enumeration value:<br>linux: Linux operating system<br>windows: Windows operating system</p>
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * <p>Operating system name.</p>
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * <p>Host online status<br>Enumeration value:<br>ONLINE: online<br>OFFLINE: offline</p>
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * <p>Is auto-repair supported<br>Enumeration value:<br>0: No support<br>1: Support</p>
                     */
                    int64_t m_supportAutoFix;
                    bool m_supportAutoFixHasBeenSet;

                    /**
                     * <p>Current remediation status<br>Enumeration value:<br>0: Unfixed<br>1: In remediation<br>2: Fix failure<br>3: Repair successful<br>4: Timeout</p>
                     */
                    int64_t m_fixStatus;
                    bool m_fixStatusHasBeenSet;

                    /**
                     * <p>Last repair time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     */
                    std::string m_latestFixTime;
                    bool m_latestFixTimeHasBeenSet;

                    /**
                     * <p>Non-repairable reason. Returned when SupportAutoFix is 0.</p>
                     */
                    std::string m_notFixableReason;
                    bool m_notFixableReasonHasBeenSet;

                    /**
                     * <p>Fix command list, returned when SupportAutoFix is 1</p>
                     */
                    std::vector<std::string> m_fixCommands;
                    bool m_fixCommandsHasBeenSet;

                    /**
                     * <p>Associated component list</p>
                     */
                    std::vector<std::string> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * <p>Asset tag list</p>
                     */
                    std::vector<MiniTagItem> m_tagItems;
                    bool m_tagItemsHasBeenSet;

                    /**
                     * <p>Account AppId</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Paid edition info<br>Enumeration value:<br>BASIC: Basic version<br>PRO: Pro edition<br>ULTIMATE: Flagship edition</p>
                     */
                    std::string m_payVersion;
                    bool m_payVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXABLEMACHINEITEM_H_
