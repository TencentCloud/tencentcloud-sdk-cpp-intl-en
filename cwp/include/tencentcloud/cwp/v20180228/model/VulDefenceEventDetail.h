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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEEVENTDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEEVENTDETAIL_H_

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
                * Vulnerability details
                */
                class VulDefenceEventDetail : public AbstractModel
                {
                public:
                    VulDefenceEventDetail();
                    ~VulDefenceEventDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取CVE ID
                     * @return CveId CVE ID
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置CVE ID
                     * @param _cveId CVE ID
                     * 
                     */
                    void SetCveId(const std::string& _cveId);

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     * 
                     */
                    bool CveIdHasBeenSet() const;

                    /**
                     * 获取Vulnerability Event ID
                     * @return Id Vulnerability Event ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Vulnerability Event ID
                     * @param _id Vulnerability Event ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Host QUUID
                     * @return Quuid Host QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
                     * @param _quuid Host QUUID
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
                     * 获取Host name
                     * @return Alias Host name
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Host name
                     * @param _alias Host name
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Private IP address
                     * @return PrivateIp Private IP address
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Private IP address
                     * @param _privateIp Private IP address
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取Public IP address
                     * @return PublicIp Public IP address
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP address
                     * @param _publicIp Public IP address
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
                     * 获取0: Attack Attempt (WeDetect); 1: Successful Attack Attempt (WeDetect); 2: RASP Defense Event
                     * @return EventType 0: Attack Attempt (WeDetect); 1: Successful Attack Attempt (WeDetect); 2: RASP Defense Event
                     * 
                     */
                    uint64_t GetEventType() const;

                    /**
                     * 设置0: Attack Attempt (WeDetect); 1: Successful Attack Attempt (WeDetect); 2: RASP Defense Event
                     * @param _eventType 0: Attack Attempt (WeDetect); 1: Successful Attack Attempt (WeDetect); 2: RASP Defense Event
                     * 
                     */
                    void SetEventType(const uint64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Attack source IP address
                     * @return SourceIp Attack source IP address
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置Attack source IP address
                     * @param _sourceIp Attack source IP address
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取City of the attack source IP address
                     * @return City City of the attack source IP address
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置City of the attack source IP address
                     * @param _city City of the attack source IP address
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Attack source port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourcePort Attack source port
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetSourcePort() const;

                    /**
                     * 设置Attack source port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourcePort Attack source port
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourcePort(const std::vector<uint64_t>& _sourcePort);

                    /**
                     * 判断参数 SourcePort 是否已赋值
                     * @return SourcePort 是否已赋值
                     * 
                     */
                    bool SourcePortHasBeenSet() const;

                    /**
                     * 获取Event Creation Time
                     * @return CreateTime Event Creation Time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Event Creation Time
                     * @param _createTime Event Creation Time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update Event Time
                     * @return MergeTime Update Event Time
                     * 
                     */
                    std::string GetMergeTime() const;

                    /**
                     * 设置Update Event Time
                     * @param _mergeTime Update Event Time
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
                     * 获取Number of Occurrences
                     * @return Count Number of Occurrences
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of Occurrences
                     * @param _count Number of Occurrences
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Status. 0: Pending; 1: Defended; 2: Processed; 3: Ignored; 4: Deleted
                     * @return Status Status. 0: Pending; 1: Defended; 2: Processed; 3: Ignored; 4: Deleted
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. 0: Pending; 1: Defended; 2: Processed; 3: Ignored; 4: Deleted
                     * @param _status Status. 0: Pending; 1: Defended; 2: Processed; 3: Ignored; 4: Deleted
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
                     * 获取ONLINE OFFLINE
                     * @return MachineStatus ONLINE OFFLINE
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置ONLINE OFFLINE
                     * @param _machineStatus ONLINE OFFLINE
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
                     * 获取Vulnerability Description Information
                     * @return Description Vulnerability Description Information
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Vulnerability Description Information
                     * @param _description Vulnerability Description Information
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Fixing suggestion
                     * @return Fix Fixing suggestion
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置Fixing suggestion
                     * @param _fix Fixing suggestion
                     * 
                     */
                    void SetFix(const std::string& _fix);

                    /**
                     * 判断参数 Fix 是否已赋值
                     * @return Fix 是否已赋值
                     * 
                     */
                    bool FixHasBeenSet() const;

                    /**
                     * 获取Attack Payload
                     * @return NetworkPayload Attack Payload
                     * 
                     */
                    std::string GetNetworkPayload() const;

                    /**
                     * 设置Attack Payload
                     * @param _networkPayload Attack Payload
                     * 
                     */
                    void SetNetworkPayload(const std::string& _networkPayload);

                    /**
                     * 判断参数 NetworkPayload 是否已赋值
                     * @return NetworkPayload 是否已赋值
                     * 
                     */
                    bool NetworkPayloadHasBeenSet() const;

                    /**
                     * 获取Associated Process PID
                     * @return Pid Associated Process PID
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置Associated Process PID
                     * @param _pid Associated Process PID
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Associated Process Main Class Name
                     * @return MainClass Associated Process Main Class Name
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置Associated Process Main Class Name
                     * @param _mainClass Associated Process Main Class Name
                     * 
                     */
                    void SetMainClass(const std::string& _mainClass);

                    /**
                     * 判断参数 MainClass 是否已赋值
                     * @return MainClass 是否已赋值
                     * 
                     */
                    bool MainClassHasBeenSet() const;

                    /**
                     * 获取Stack Information (Unique for RASP)
                     * @return StackTrace Stack Information (Unique for RASP)
                     * 
                     */
                    std::string GetStackTrace() const;

                    /**
                     * 设置Stack Information (Unique for RASP)
                     * @param _stackTrace Stack Information (Unique for RASP)
                     * 
                     */
                    void SetStackTrace(const std::string& _stackTrace);

                    /**
                     * 判断参数 StackTrace 是否已赋值
                     * @return StackTrace 是否已赋值
                     * 
                     */
                    bool StackTraceHasBeenSet() const;

                    /**
                     * 获取Vulnerability ID-Related Event Details (JSON array format, unique to RASP)
                     * @return EventDetail Vulnerability ID-Related Event Details (JSON array format, unique to RASP)
                     * 
                     */
                    std::string GetEventDetail() const;

                    /**
                     * 设置Vulnerability ID-Related Event Details (JSON array format, unique to RASP)
                     * @param _eventDetail Vulnerability ID-Related Event Details (JSON array format, unique to RASP)
                     * 
                     */
                    void SetEventDetail(const std::string& _eventDetail);

                    /**
                     * 判断参数 EventDetail 是否已赋值
                     * @return EventDetail 是否已赋值
                     * 
                     */
                    bool EventDetailHasBeenSet() const;

                    /**
                     * 获取Host Compromise Event Process Tree (JSON format, unique to WeDetect)
                     * @return ExceptionPstree Host Compromise Event Process Tree (JSON format, unique to WeDetect)
                     * 
                     */
                    std::string GetExceptionPstree() const;

                    /**
                     * 设置Host Compromise Event Process Tree (JSON format, unique to WeDetect)
                     * @param _exceptionPstree Host Compromise Event Process Tree (JSON format, unique to WeDetect)
                     * 
                     */
                    void SetExceptionPstree(const std::string& _exceptionPstree);

                    /**
                     * 判断参数 ExceptionPstree 是否已赋值
                     * @return ExceptionPstree 是否已赋值
                     * 
                     */
                    bool ExceptionPstreeHasBeenSet() const;

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

                private:

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * CVE ID
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * Vulnerability Event ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host name
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Private IP address
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 0: Attack Attempt (WeDetect); 1: Successful Attack Attempt (WeDetect); 2: RASP Defense Event
                     */
                    uint64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Attack source IP address
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * City of the attack source IP address
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Attack source port
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<uint64_t> m_sourcePort;
                    bool m_sourcePortHasBeenSet;

                    /**
                     * Event Creation Time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update Event Time
                     */
                    std::string m_mergeTime;
                    bool m_mergeTimeHasBeenSet;

                    /**
                     * Number of Occurrences
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Status. 0: Pending; 1: Defended; 2: Processed; 3: Ignored; 4: Deleted
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * ONLINE OFFLINE
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * Vulnerability Description Information
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Fixing suggestion
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * Attack Payload
                     */
                    std::string m_networkPayload;
                    bool m_networkPayloadHasBeenSet;

                    /**
                     * Associated Process PID
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Associated Process Main Class Name
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * Stack Information (Unique for RASP)
                     */
                    std::string m_stackTrace;
                    bool m_stackTraceHasBeenSet;

                    /**
                     * Vulnerability ID-Related Event Details (JSON array format, unique to RASP)
                     */
                    std::string m_eventDetail;
                    bool m_eventDetailHasBeenSet;

                    /**
                     * Host Compromise Event Process Tree (JSON format, unique to WeDetect)
                     */
                    std::string m_exceptionPstree;
                    bool m_exceptionPstreeHasBeenSet;

                    /**
                     * Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEEVENTDETAIL_H_
