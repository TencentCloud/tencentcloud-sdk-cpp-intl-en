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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKEVENTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKEVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Details of Network Attack Events
                */
                class NetAttackEventInfo : public AbstractModel
                {
                public:
                    NetAttackEventInfo();
                    ~NetAttackEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Processing Status: 0 Pending, 1 Processed, 2 Allowlisted, 3 Ignored, 4 Deleted, 5: Defense Enabled.
                     * @return Status Processing Status: 0 Pending, 1 Processed, 2 Allowlisted, 3 Ignored, 4 Deleted, 5: Defense Enabled.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Processing Status: 0 Pending, 1 Processed, 2 Allowlisted, 3 Ignored, 4 Deleted, 5: Defense Enabled.
                     * @param _status Processing Status: 0 Pending, 1 Processed, 2 Allowlisted, 3 Ignored, 4 Deleted, 5: Defense Enabled.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Attack source IP address
                     * @return SrcIP Attack source IP address
                     * 
                     */
                    std::string GetSrcIP() const;

                    /**
                     * 设置Attack source IP address
                     * @param _srcIP Attack source IP address
                     * 
                     */
                    void SetSrcIP(const std::string& _srcIP);

                    /**
                     * 判断参数 SrcIP 是否已赋值
                     * @return SrcIP 是否已赋值
                     * 
                     */
                    bool SrcIPHasBeenSet() const;

                    /**
                     * 获取Attack Source
                     * @return Location Attack Source
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Attack Source
                     * @param _location Attack Source
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return VulName Vulnerability name
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _vulName Vulnerability name
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取Vulnerability ID
                     * @return VulId Vulnerability ID
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _vulId Vulnerability ID
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取Vulnerability CVE ID
                     * @return CVEId Vulnerability CVE ID
                     * 
                     */
                    std::string GetCVEId() const;

                    /**
                     * 设置Vulnerability CVE ID
                     * @param _cVEId Vulnerability CVE ID
                     * 
                     */
                    void SetCVEId(const std::string& _cVEId);

                    /**
                     * 判断参数 CVEId 是否已赋值
                     * @return CVEId 是否已赋值
                     * 
                     */
                    bool CVEIdHasBeenSet() const;

                    /**
                     * 获取Vulnerability attack level
                     * @return AttackLevel Vulnerability attack level
                     * 
                     */
                    uint64_t GetAttackLevel() const;

                    /**
                     * 设置Vulnerability attack level
                     * @param _attackLevel Vulnerability attack level
                     * 
                     */
                    void SetAttackLevel(const uint64_t& _attackLevel);

                    /**
                     * 判断参数 AttackLevel 是否已赋值
                     * @return AttackLevel 是否已赋值
                     * 
                     */
                    bool AttackLevelHasBeenSet() const;

                    /**
                     * 获取Vulnerability Defense Status: 0 Disabled, 1 Enabled.
                     * @return VulDefenceStatus Vulnerability Defense Status: 0 Disabled, 1 Enabled.
                     * 
                     */
                    uint64_t GetVulDefenceStatus() const;

                    /**
                     * 设置Vulnerability Defense Status: 0 Disabled, 1 Enabled.
                     * @param _vulDefenceStatus Vulnerability Defense Status: 0 Disabled, 1 Enabled.
                     * 
                     */
                    void SetVulDefenceStatus(const uint64_t& _vulDefenceStatus);

                    /**
                     * 判断参数 VulDefenceStatus 是否已赋值
                     * @return VulDefenceStatus 是否已赋值
                     * 
                     */
                    bool VulDefenceStatusHasBeenSet() const;

                    /**
                     * 获取Whether vulnerabilities support defense. 0: No 1: Yes
                     * @return VulSupportDefense Whether vulnerabilities support defense. 0: No 1: Yes
                     * 
                     */
                    uint64_t GetVulSupportDefense() const;

                    /**
                     * 设置Whether vulnerabilities support defense. 0: No 1: Yes
                     * @param _vulSupportDefense Whether vulnerabilities support defense. 0: No 1: Yes
                     * 
                     */
                    void SetVulSupportDefense(const uint64_t& _vulSupportDefense);

                    /**
                     * 判断参数 VulSupportDefense 是否已赋值
                     * @return VulSupportDefense 是否已赋值
                     * 
                     */
                    bool VulSupportDefenseHasBeenSet() const;

                    /**
                     * 获取Service Process Base64 
                     * @return SvcPs Service Process Base64 
                     * 
                     */
                    std::string GetSvcPs() const;

                    /**
                     * 设置Service Process Base64 
                     * @param _svcPs Service Process Base64 
                     * 
                     */
                    void SetSvcPs(const std::string& _svcPs);

                    /**
                     * 判断参数 SvcPs 是否已赋值
                     * @return SvcPs 是否已赋值
                     * 
                     */
                    bool SvcPsHasBeenSet() const;

                    /**
                     * 获取Attack packet
                     * @return NetPayload Attack packet
                     * 
                     */
                    std::string GetNetPayload() const;

                    /**
                     * 设置Attack packet
                     * @param _netPayload Attack packet
                     * 
                     */
                    void SetNetPayload(const std::string& _netPayload);

                    /**
                     * 判断参数 NetPayload 是否已赋值
                     * @return NetPayload 是否已赋值
                     * 
                     */
                    bool NetPayloadHasBeenSet() const;

                    /**
                     * 获取Abnormal behavior
                     * @return AbnormalAction Abnormal behavior
                     * 
                     */
                    std::string GetAbnormalAction() const;

                    /**
                     * 设置Abnormal behavior
                     * @param _abnormalAction Abnormal behavior
                     * 
                     */
                    void SetAbnormalAction(const std::string& _abnormalAction);

                    /**
                     * 判断参数 AbnormalAction 是否已赋值
                     * @return AbnormalAction 是否已赋值
                     * 
                     */
                    bool AbnormalActionHasBeenSet() const;

                    /**
                     * 获取Host UUID
                     * @return Uuid Host UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host UUID
                     * @param _uuid Host UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Event ID
                     * @return Id Event ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Event ID
                     * @param _id Event ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineExtraInfo Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineExtraInfo Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取Target port
                     * @return DstPort Target port
                     * 
                     */
                    uint64_t GetDstPort() const;

                    /**
                     * 设置Target port
                     * @param _dstPort Target port
                     * 
                     */
                    void SetDstPort(const uint64_t& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取Attack count
                     * @return Count Attack count
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Attack count
                     * @param _count Attack count
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Machine payment edition. 0: Basic Edition; 1: Professional Edition; 2: Premium Edition; 3: General Discount Edition
                     * @return PayVersion Machine payment edition. 0: Basic Edition; 1: Professional Edition; 2: Premium Edition; 3: General Discount Edition
                     * 
                     */
                    uint64_t GetPayVersion() const;

                    /**
                     * 设置Machine payment edition. 0: Basic Edition; 1: Professional Edition; 2: Premium Edition; 3: General Discount Edition
                     * @param _payVersion Machine payment edition. 0: Basic Edition; 1: Professional Edition; 2: Premium Edition; 3: General Discount Edition
                     * 
                     */
                    void SetPayVersion(const uint64_t& _payVersion);

                    /**
                     * 判断参数 PayVersion 是否已赋值
                     * @return PayVersion 是否已赋值
                     * 
                     */
                    bool PayVersionHasBeenSet() const;

                    /**
                     * 获取cvm uuid
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quuid cvm uuid
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置cvm uuid
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quuid cvm uuid
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Time of Attack
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MergeTime Time of Attack
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMergeTime() const;

                    /**
                     * 设置Time of Attack
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mergeTime Time of Attack
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMergeTime(const std::string& _mergeTime);

                    /**
                     * 判断参数 MergeTime 是否已赋值
                     * @return MergeTime 是否已赋值
                     * 
                     */
                    bool MergeTimeHasBeenSet() const;

                    /**
                     * 获取0: Attack Attempt 1: Successful Attack
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type 0: Attack Attempt 1: Successful Attack
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置0: Attack Attempt 1: Successful Attack
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type 0: Attack Attempt 1: Successful Attack
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取0: No Compromised Behavior 1: RCE (command execution) 2: Dnslog 3: Writefile
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostOpType 0: No Compromised Behavior 1: RCE (command execution) 2: Dnslog 3: Writefile
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetHostOpType() const;

                    /**
                     * 设置0: No Compromised Behavior 1: RCE (command execution) 2: Dnslog 3: Writefile
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostOpType 0: No Compromised Behavior 1: RCE (command execution) 2: Dnslog 3: Writefile
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostOpType(const uint64_t& _hostOpType);

                    /**
                     * 判断参数 HostOpType 是否已赋值
                     * @return HostOpType 是否已赋值
                     * 
                     */
                    bool HostOpTypeHasBeenSet() const;

                    /**
                     * 获取Process Tree, needs to be decoded with base64.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostOpProcessTree Process Tree, needs to be decoded with base64.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostOpProcessTree() const;

                    /**
                     * 设置Process Tree, needs to be decoded with base64.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostOpProcessTree Process Tree, needs to be decoded with base64.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostOpProcessTree(const std::string& _hostOpProcessTree);

                    /**
                     * 判断参数 HostOpProcessTree 是否已赋值
                     * @return HostOpProcessTree 是否已赋值
                     * 
                     */
                    bool HostOpProcessTreeHasBeenSet() const;

                private:

                    /**
                     * Processing Status: 0 Pending, 1 Processed, 2 Allowlisted, 3 Ignored, 4 Deleted, 5: Defense Enabled.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Attack source IP address
                     */
                    std::string m_srcIP;
                    bool m_srcIPHasBeenSet;

                    /**
                     * Attack Source
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Vulnerability CVE ID
                     */
                    std::string m_cVEId;
                    bool m_cVEIdHasBeenSet;

                    /**
                     * Vulnerability attack level
                     */
                    uint64_t m_attackLevel;
                    bool m_attackLevelHasBeenSet;

                    /**
                     * Vulnerability Defense Status: 0 Disabled, 1 Enabled.
                     */
                    uint64_t m_vulDefenceStatus;
                    bool m_vulDefenceStatusHasBeenSet;

                    /**
                     * Whether vulnerabilities support defense. 0: No 1: Yes
                     */
                    uint64_t m_vulSupportDefense;
                    bool m_vulSupportDefenseHasBeenSet;

                    /**
                     * Service Process Base64 
                     */
                    std::string m_svcPs;
                    bool m_svcPsHasBeenSet;

                    /**
                     * Attack packet
                     */
                    std::string m_netPayload;
                    bool m_netPayloadHasBeenSet;

                    /**
                     * Abnormal behavior
                     */
                    std::string m_abnormalAction;
                    bool m_abnormalActionHasBeenSet;

                    /**
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Event ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * Target port
                     */
                    uint64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * Attack count
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Machine payment edition. 0: Basic Edition; 1: Professional Edition; 2: Premium Edition; 3: General Discount Edition
                     */
                    uint64_t m_payVersion;
                    bool m_payVersionHasBeenSet;

                    /**
                     * cvm uuid
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Time of Attack
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mergeTime;
                    bool m_mergeTimeHasBeenSet;

                    /**
                     * 0: Attack Attempt 1: Successful Attack
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 0: No Compromised Behavior 1: RCE (command execution) 2: Dnslog 3: Writefile
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_hostOpType;
                    bool m_hostOpTypeHasBeenSet;

                    /**
                     * Process Tree, needs to be decoded with base64.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostOpProcessTree;
                    bool m_hostOpProcessTreeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKEVENTINFO_H_
