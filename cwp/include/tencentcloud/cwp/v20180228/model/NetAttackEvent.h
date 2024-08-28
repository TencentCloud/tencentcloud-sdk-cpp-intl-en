/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKEVENT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKEVENT_H_

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
                * Network attack event
                */
                class NetAttackEvent : public AbstractModel
                {
                public:
                    NetAttackEvent();
                    ~NetAttackEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log ID
                     * @return Id Log ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Log ID
                     * @param _id Log ID
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
                     * 获取Client ID
                     * @return Uuid Client ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Client ID
                     * @param _uuid Client ID
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
                     * 获取Source IP
                     * @return SrcIP Source IP
                     * 
                     */
                    std::string GetSrcIP() const;

                    /**
                     * 设置Source IP
                     * @param _srcIP Source IP
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
                     * 获取Source location
                     * @return Location Source location
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Source location
                     * @param _location Source location
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
                     * 获取Attack time
                     * @return MergeTime Attack time
                     * 
                     */
                    std::string GetMergeTime() const;

                    /**
                     * 设置Attack time
                     * @param _mergeTime Attack time
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
                     * 获取Attack Status: 0: Attack Attempt 1: Confirmed Attack (Successful Attack).
                     * @return Type Attack Status: 0: Attack Attempt 1: Confirmed Attack (Successful Attack).
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Attack Status: 0: Attack Attempt 1: Confirmed Attack (Successful Attack).
                     * @param _type Attack Status: 0: Attack Attempt 1: Confirmed Attack (Successful Attack).
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
                     * 获取Whether to enable vulnerability defense: 0 - No, 1 - Yes
                     * @return VulDefenceStatus Whether to enable vulnerability defense: 0 - No, 1 - Yes
                     * 
                     */
                    uint64_t GetVulDefenceStatus() const;

                    /**
                     * 设置Whether to enable vulnerability defense: 0 - No, 1 - Yes
                     * @param _vulDefenceStatus Whether to enable vulnerability defense: 0 - No, 1 - Yes
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
                     * @return Quuid cvm uuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置cvm uuid
                     * @param _quuid cvm uuid
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
                     * 获取Attacks
                     * @return Count Attacks
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Attacks
                     * @param _count Attacks
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
                     * 获取Whether to add new hosts today
                     * @return New Whether to add new hosts today
                     * 
                     */
                    bool GetNew() const;

                    /**
                     * 设置Whether to add new hosts today
                     * @param _new Whether to add new hosts today
                     * 
                     */
                    void SetNew(const bool& _new);

                    /**
                     * 判断参数 New 是否已赋值
                     * @return New 是否已赋值
                     * 
                     */
                    bool NewHasBeenSet() const;

                private:

                    /**
                     * Log ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Client ID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Target port
                     */
                    uint64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * Source IP
                     */
                    std::string m_srcIP;
                    bool m_srcIPHasBeenSet;

                    /**
                     * Source location
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Attack time
                     */
                    std::string m_mergeTime;
                    bool m_mergeTimeHasBeenSet;

                    /**
                     * Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * Attack Status: 0: Attack Attempt 1: Confirmed Attack (Successful Attack).
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Processing Status: 0 Pending, 1 Processed, 2 Allowlisted, 3 Ignored, 4 Deleted, 5: Defense Enabled.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether vulnerabilities support defense. 0: No 1: Yes
                     */
                    uint64_t m_vulSupportDefense;
                    bool m_vulSupportDefenseHasBeenSet;

                    /**
                     * Whether to enable vulnerability defense: 0 - No, 1 - Yes
                     */
                    uint64_t m_vulDefenceStatus;
                    bool m_vulDefenceStatusHasBeenSet;

                    /**
                     * Machine payment edition. 0: Basic Edition; 1: Professional Edition; 2: Premium Edition; 3: General Discount Edition
                     */
                    uint64_t m_payVersion;
                    bool m_payVersionHasBeenSet;

                    /**
                     * cvm uuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Attacks
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Whether to add new hosts today
                     */
                    bool m_new;
                    bool m_newHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKEVENT_H_
