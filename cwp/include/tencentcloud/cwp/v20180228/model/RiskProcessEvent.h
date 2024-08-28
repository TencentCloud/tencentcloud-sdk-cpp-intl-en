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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RISKPROCESSEVENT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RISKPROCESSEVENT_H_

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
                * Abnormal Process Event
                */
                class RiskProcessEvent : public AbstractModel
                {
                public:
                    RiskProcessEvent();
                    ~RiskProcessEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event ID
                     * @return EventId Event ID
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置Event ID
                     * @param _eventId Event ID
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Host name
                     * @return HostName Host name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name
                     * @param _hostName Host name
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Host IP
                     * @return HostIp Host IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Host IP
                     * @param _hostIp Host IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Public IP address
                     * @return WanIp Public IP address
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置Public IP address
                     * @param _wanIp Public IP address
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取Process ID
                     * @return ProcessId Process ID
                     * 
                     */
                    int64_t GetProcessId() const;

                    /**
                     * 设置Process ID
                     * @param _processId Process ID
                     * 
                     */
                    void SetProcessId(const int64_t& _processId);

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取File path
                     * @return FilePath File path
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置File path
                     * @param _filePath File path
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取Executed commands
                     * @return CmdLine Executed commands
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置Executed commands
                     * @param _cmdLine Executed commands
                     * 
                     */
                    void SetCmdLine(const std::string& _cmdLine);

                    /**
                     * 判断参数 CmdLine 是否已赋值
                     * @return CmdLine 是否已赋值
                     * 
                     */
                    bool CmdLineHasBeenSet() const;

                    /**
                     * 获取Process startup time
                     * @return StartTime Process startup time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Process startup time
                     * @param _startTime Process startup time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Last detection time
                     * @return DetectTime Last detection time
                     * 
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置Last detection time
                     * @param _detectTime Last detection time
                     * 
                     */
                    void SetDetectTime(const std::string& _detectTime);

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     * 
                     */
                    bool DetectTimeHasBeenSet() const;

                    /**
                     * 获取Virus name
                     * @return VirusName Virus name
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置Virus name
                     * @param _virusName Virus name
                     * 
                     */
                    void SetVirusName(const std::string& _virusName);

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取Trojan detection platform [1: Cloud search engine |2:TAV | 3: Binary Ai | 4: Abnormal behavior | 5: threat intelligence]
                     * @return CheckPlatform Trojan detection platform [1: Cloud search engine |2:TAV | 3: Binary Ai | 4: Abnormal behavior | 5: threat intelligence]
                     * 
                     */
                    std::vector<std::string> GetCheckPlatform() const;

                    /**
                     * 设置Trojan detection platform [1: Cloud search engine |2:TAV | 3: Binary Ai | 4: Abnormal behavior | 5: threat intelligence]
                     * @param _checkPlatform Trojan detection platform [1: Cloud search engine |2:TAV | 3: Binary Ai | 4: Abnormal behavior | 5: threat intelligence]
                     * 
                     */
                    void SetCheckPlatform(const std::vector<std::string>& _checkPlatform);

                    /**
                     * 判断参数 CheckPlatform 是否已赋值
                     * @return CheckPlatform 是否已赋值
                     * 
                     */
                    bool CheckPlatformHasBeenSet() const;

                    /**
                     * 获取Virus tag
                     * @return VirusTags Virus tag
                     * 
                     */
                    std::vector<std::string> GetVirusTags() const;

                    /**
                     * 设置Virus tag
                     * @param _virusTags Virus tag
                     * 
                     */
                    void SetVirusTags(const std::vector<std::string>& _virusTags);

                    /**
                     * 判断参数 VirusTags 是否已赋值
                     * @return VirusTags 是否已赋值
                     * 
                     */
                    bool VirusTagsHasBeenSet() const;

                    /**
                     * 获取Threat description
                     * @return ThreatDesc Threat description
                     * 
                     */
                    std::string GetThreatDesc() const;

                    /**
                     * 设置Threat description
                     * @param _threatDesc Threat description
                     * 
                     */
                    void SetThreatDesc(const std::string& _threatDesc);

                    /**
                     * 判断参数 ThreatDesc 是否已赋值
                     * @return ThreatDesc 是否已赋值
                     * 
                     */
                    bool ThreatDescHasBeenSet() const;

                    /**
                     * 获取Recommended solution
                     * @return SuggestSolution Recommended solution
                     * 
                     */
                    std::string GetSuggestSolution() const;

                    /**
                     * 设置Recommended solution
                     * @param _suggestSolution Recommended solution
                     * 
                     */
                    void SetSuggestSolution(const std::string& _suggestSolution);

                    /**
                     * 判断参数 SuggestSolution 是否已赋值
                     * @return SuggestSolution 是否已赋值
                     * 
                     */
                    bool SuggestSolutionHasBeenSet() const;

                    /**
                     * 获取Reference link
                     * @return ReferenceLink Reference link
                     * 
                     */
                    std::string GetReferenceLink() const;

                    /**
                     * 设置Reference link
                     * @param _referenceLink Reference link
                     * 
                     */
                    void SetReferenceLink(const std::string& _referenceLink);

                    /**
                     * 判断参数 ReferenceLink 是否已赋值
                     * @return ReferenceLink 是否已赋值
                     * 
                     */
                    bool ReferenceLinkHasBeenSet() const;

                    /**
                     * 获取Processing Status [0 Pending; 1 Processed; 2 Scanning; 3 Scanned; 4 Exited; 5 Ignore]
                     * @return HandleStatus Processing Status [0 Pending; 1 Processed; 2 Scanning; 3 Scanned; 4 Exited; 5 Ignore]
                     * 
                     */
                    int64_t GetHandleStatus() const;

                    /**
                     * 设置Processing Status [0 Pending; 1 Processed; 2 Scanning; 3 Scanned; 4 Exited; 5 Ignore]
                     * @param _handleStatus Processing Status [0 Pending; 1 Processed; 2 Scanning; 3 Scanned; 4 Exited; 5 Ignore]
                     * 
                     */
                    void SetHandleStatus(const int64_t& _handleStatus);

                    /**
                     * 判断参数 HandleStatus 是否已赋值
                     * @return HandleStatus 是否已赋值
                     * 
                     */
                    bool HandleStatusHasBeenSet() const;

                    /**
                     * 获取Host Online Status
                     * @return OnlineStatus Host Online Status
                     * 
                     */
                    int64_t GetOnlineStatus() const;

                    /**
                     * 设置Host Online Status
                     * @param _onlineStatus Host Online Status
                     * 
                     */
                    void SetOnlineStatus(const int64_t& _onlineStatus);

                    /**
                     * 判断参数 OnlineStatus 是否已赋值
                     * @return OnlineStatus 是否已赋值
                     * 
                     */
                    bool OnlineStatusHasBeenSet() const;

                    /**
                     * 获取Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineExtraInfo Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineExtraInfo Additional information
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

                private:

                    /**
                     * Event ID
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Host name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Host IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * Process ID
                     */
                    int64_t m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * File path
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * Executed commands
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * Process startup time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Last detection time
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * Virus name
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * Trojan detection platform [1: Cloud search engine |2:TAV | 3: Binary Ai | 4: Abnormal behavior | 5: threat intelligence]
                     */
                    std::vector<std::string> m_checkPlatform;
                    bool m_checkPlatformHasBeenSet;

                    /**
                     * Virus tag
                     */
                    std::vector<std::string> m_virusTags;
                    bool m_virusTagsHasBeenSet;

                    /**
                     * Threat description
                     */
                    std::string m_threatDesc;
                    bool m_threatDescHasBeenSet;

                    /**
                     * Recommended solution
                     */
                    std::string m_suggestSolution;
                    bool m_suggestSolutionHasBeenSet;

                    /**
                     * Reference link
                     */
                    std::string m_referenceLink;
                    bool m_referenceLinkHasBeenSet;

                    /**
                     * Processing Status [0 Pending; 1 Processed; 2 Scanning; 3 Scanned; 4 Exited; 5 Ignore]
                     */
                    int64_t m_handleStatus;
                    bool m_handleStatusHasBeenSet;

                    /**
                     * Host Online Status
                     */
                    int64_t m_onlineStatus;
                    bool m_onlineStatusHasBeenSet;

                    /**
                     * Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RISKPROCESSEVENT_H_
