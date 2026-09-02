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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_KBUPDATEMACHINEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_KBUPDATEMACHINEITEM_H_

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
                * Host information for update patches
                */
                class KBUpdateMachineItem : public AbstractModel
                {
                public:
                    KBUpdateMachineItem();
                    ~KBUpdateMachineItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>KB patch ID</p>
                     * @return KBId <p>KB patch ID</p>
                     * 
                     */
                    int64_t GetKBId() const;

                    /**
                     * 设置<p>KB patch ID</p>
                     * @param _kBId <p>KB patch ID</p>
                     * 
                     */
                    void SetKBId(const int64_t& _kBId);

                    /**
                     * 判断参数 KBId 是否已赋值
                     * @return KBId 是否已赋值
                     * 
                     */
                    bool KBIdHasBeenSet() const;

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
                     * 获取<p>Public IP address</p>
                     * @return PublicIp <p>Public IP address</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>Public IP address</p>
                     * @param _publicIp <p>Public IP address</p>
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
                     * 获取<p>OS name</p>
                     * @return OsName <p>OS name</p>
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置<p>OS name</p>
                     * @param _osName <p>OS name</p>
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
                     * 获取<p>Host online status<br>Enumeration values:<br>ONLINE: online<br>OFFLINE: offline</p>
                     * @return MachineStatus <p>Host online status<br>Enumeration values:<br>ONLINE: online<br>OFFLINE: offline</p>
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置<p>Host online status<br>Enumeration values:<br>ONLINE: online<br>OFFLINE: offline</p>
                     * @param _machineStatus <p>Host online status<br>Enumeration values:<br>ONLINE: online<br>OFFLINE: offline</p>
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
                     * 获取<p>Whether auto-update patch is supported<br>Enumeration values:<br>0: unsupported<br>1: supported</p>
                     * @return SupportAutoFix <p>Whether auto-update patch is supported<br>Enumeration values:<br>0: unsupported<br>1: supported</p>
                     * 
                     */
                    int64_t GetSupportAutoFix() const;

                    /**
                     * 设置<p>Whether auto-update patch is supported<br>Enumeration values:<br>0: unsupported<br>1: supported</p>
                     * @param _supportAutoFix <p>Whether auto-update patch is supported<br>Enumeration values:<br>0: unsupported<br>1: supported</p>
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
                     * 获取<p>Current remediation status<br>Enumeration values:<br>0: Unfixed<br>1: In remediation<br>2: Fix failed<br>3: Repair successful<br>4: Remediation timeout</p>
                     * @return FixStatus <p>Current remediation status<br>Enumeration values:<br>0: Unfixed<br>1: In remediation<br>2: Fix failed<br>3: Repair successful<br>4: Remediation timeout</p>
                     * 
                     */
                    int64_t GetFixStatus() const;

                    /**
                     * 设置<p>Current remediation status<br>Enumeration values:<br>0: Unfixed<br>1: In remediation<br>2: Fix failed<br>3: Repair successful<br>4: Remediation timeout</p>
                     * @param _fixStatus <p>Current remediation status<br>Enumeration values:<br>0: Unfixed<br>1: In remediation<br>2: Fix failed<br>3: Repair successful<br>4: Remediation timeout</p>
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
                     * 获取<p>Payment version information<br>Enumeration values:<br>BASIC: basic version<br>PRO: pro edition<br>ULTIMATE: flagship edition</p>
                     * @return PayVersion <p>Payment version information<br>Enumeration values:<br>BASIC: basic version<br>PRO: pro edition<br>ULTIMATE: flagship edition</p>
                     * 
                     */
                    std::string GetPayVersion() const;

                    /**
                     * 设置<p>Payment version information<br>Enumeration values:<br>BASIC: basic version<br>PRO: pro edition<br>ULTIMATE: flagship edition</p>
                     * @param _payVersion <p>Payment version information<br>Enumeration values:<br>BASIC: basic version<br>PRO: pro edition<br>ULTIMATE: flagship edition</p>
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
                     * <p>KB patch ID</p>
                     */
                    int64_t m_kBId;
                    bool m_kBIdHasBeenSet;

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
                     * <p>Public IP address</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>OS name</p>
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * <p>Host online status<br>Enumeration values:<br>ONLINE: online<br>OFFLINE: offline</p>
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * <p>Whether auto-update patch is supported<br>Enumeration values:<br>0: unsupported<br>1: supported</p>
                     */
                    int64_t m_supportAutoFix;
                    bool m_supportAutoFixHasBeenSet;

                    /**
                     * <p>Current remediation status<br>Enumeration values:<br>0: Unfixed<br>1: In remediation<br>2: Fix failed<br>3: Repair successful<br>4: Remediation timeout</p>
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
                     * <p>Payment version information<br>Enumeration values:<br>BASIC: basic version<br>PRO: pro edition<br>ULTIMATE: flagship edition</p>
                     */
                    std::string m_payVersion;
                    bool m_payVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_KBUPDATEMACHINEITEM_H_
