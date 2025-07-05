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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSEVENT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSEVENT_H_

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
                * Malicious request event
                */
                class RiskDnsEvent : public AbstractModel
                {
                public:
                    RiskDnsEvent();
                    ~RiskDnsEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event ID
                     * @return Id Event ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Event ID
                     * @param _id Event ID
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
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID
                     * @param _policyId Policy ID
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Type of hit policy [-1: unknown|0: system|1: user]
                     * @return PolicyType Type of hit policy [-1: unknown|0: system|1: user]
                     * 
                     */
                    int64_t GetPolicyType() const;

                    /**
                     * 设置Type of hit policy [-1: unknown|0: system|1: user]
                     * @param _policyType Type of hit policy [-1: unknown|0: system|1: user]
                     * 
                     */
                    void SetPolicyType(const int64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取Name of hit policy
                     * @return PolicyName Name of hit policy
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Name of hit policy
                     * @param _policyName Name of hit policy
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Protection level [0: basic edition|1: professional edition|2: ultimate edition]
                     * @return ProtectLevel Protection level [0: basic edition|1: professional edition|2: ultimate edition]
                     * 
                     */
                    int64_t GetProtectLevel() const;

                    /**
                     * 设置Protection level [0: basic edition|1: professional edition|2: ultimate edition]
                     * @param _protectLevel Protection level [0: basic edition|1: professional edition|2: ultimate edition]
                     * 
                     */
                    void SetProtectLevel(const int64_t& _protectLevel);

                    /**
                     * 判断参数 ProtectLevel 是否已赋值
                     * @return ProtectLevel 是否已赋值
                     * 
                     */
                    bool ProtectLevelHasBeenSet() const;

                    /**
                     * 获取Server ID
                     * @return HostId Server ID
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置Server ID
                     * @param _hostId Server ID
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

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
                     * 获取Client ID
                     * @return AgentId Client ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置Client ID
                     * @param _agentId Client ID
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取Access domain name
                     * @return Domain Access domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Access domain name
                     * @param _domain Access domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Tag Features
                     * @return Tags Tag Features
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Tag Features
                     * @param _tags Tag Features
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Access count
                     * @return AccessCount Access count
                     * 
                     */
                    int64_t GetAccessCount() const;

                    /**
                     * 设置Access count
                     * @param _accessCount Access count
                     * 
                     */
                    void SetAccessCount(const int64_t& _accessCount);

                    /**
                     * 判断参数 AccessCount 是否已赋值
                     * @return AccessCount 是否已赋值
                     * 
                     */
                    bool AccessCountHasBeenSet() const;

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
                     * 获取Fixing solution
                     * @return SuggestSolution Fixing solution
                     * 
                     */
                    std::string GetSuggestSolution() const;

                    /**
                     * 设置Fixing solution
                     * @param _suggestSolution Fixing solution
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
                     * 获取Processing status [0: pending|2: allowlisted|3: untrusted status|4: processed|5: ignored]
                     * @return HandleStatus Processing status [0: pending|2: allowlisted|3: untrusted status|4: processed|5: ignored]
                     * 
                     */
                    int64_t GetHandleStatus() const;

                    /**
                     * 设置Processing status [0: pending|2: allowlisted|3: untrusted status|4: processed|5: ignored]
                     * @param _handleStatus Processing status [0: pending|2: allowlisted|3: untrusted status|4: processed|5: ignored]
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
                     * 获取Process ID
                     * @return Pid Process ID
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置Process ID
                     * @param _pid Process ID
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
                     * 获取Process name
                     * @return ProcessName Process name
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置Process name
                     * @param _processName Process name
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取Process MD5
                     * @return ProcessMd5 Process MD5
                     * 
                     */
                    std::string GetProcessMd5() const;

                    /**
                     * 设置Process MD5
                     * @param _processMd5 Process MD5
                     * 
                     */
                    void SetProcessMd5(const std::string& _processMd5);

                    /**
                     * 判断参数 ProcessMd5 是否已赋值
                     * @return ProcessMd5 是否已赋值
                     * 
                     */
                    bool ProcessMd5HasBeenSet() const;

                    /**
                     * 获取Command line
                     * @return CmdLine Command line
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置Command line
                     * @param _cmdLine Command line
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
                     * 获取First access time
                     * @return FirstTime First access time
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置First access time
                     * @param _firstTime First access time
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取Last access Time
                     * @return LastTime Last access Time
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置Last access Time
                     * @param _lastTime Last access Time
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取Host online status [OFFLINE: offline|ONLINE: online|UNKNOWN: unknown]
                     * @return HostStatus Host online status [OFFLINE: offline|ONLINE: online|UNKNOWN: unknown]
                     * 
                     */
                    std::string GetHostStatus() const;

                    /**
                     * 设置Host online status [OFFLINE: offline|ONLINE: online|UNKNOWN: unknown]
                     * @param _hostStatus Host online status [OFFLINE: offline|ONLINE: online|UNKNOWN: unknown]
                     * 
                     */
                    void SetHostStatus(const std::string& _hostStatus);

                    /**
                     * 判断参数 HostStatus 是否已赋值
                     * @return HostStatus 是否已赋值
                     * 
                     */
                    bool HostStatusHasBeenSet() const;

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
                     * 获取[1:CentOS|2:Debian|3:Gentoo|4:Redhat|5:Ubuntu|6:Windows|7:TencentOS|8:CoreOS|9:FreeBSD|10:SUSE]
                     * @return OsType [1:CentOS|2:Debian|3:Gentoo|4:Redhat|5:Ubuntu|6:Windows|7:TencentOS|8:CoreOS|9:FreeBSD|10:SUSE]
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置[1:CentOS|2:Debian|3:Gentoo|4:Redhat|5:Ubuntu|6:Windows|7:TencentOS|8:CoreOS|9:FreeBSD|10:SUSE]
                     * @param _osType [1:CentOS|2:Debian|3:Gentoo|4:Redhat|5:Ubuntu|6:Windows|7:TencentOS|8:CoreOS|9:FreeBSD|10:SUSE]
                     * 
                     */
                    void SetOsType(const int64_t& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                private:

                    /**
                     * Event ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Policy ID
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Type of hit policy [-1: unknown|0: system|1: user]
                     */
                    int64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * Name of hit policy
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Protection level [0: basic edition|1: professional edition|2: ultimate edition]
                     */
                    int64_t m_protectLevel;
                    bool m_protectLevelHasBeenSet;

                    /**
                     * Server ID
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

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
                     * Client ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * Access domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Tag Features
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Access count
                     */
                    int64_t m_accessCount;
                    bool m_accessCountHasBeenSet;

                    /**
                     * Threat description
                     */
                    std::string m_threatDesc;
                    bool m_threatDescHasBeenSet;

                    /**
                     * Fixing solution
                     */
                    std::string m_suggestSolution;
                    bool m_suggestSolutionHasBeenSet;

                    /**
                     * Reference link
                     */
                    std::string m_referenceLink;
                    bool m_referenceLinkHasBeenSet;

                    /**
                     * Processing status [0: pending|2: allowlisted|3: untrusted status|4: processed|5: ignored]
                     */
                    int64_t m_handleStatus;
                    bool m_handleStatusHasBeenSet;

                    /**
                     * Process ID
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Process name
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Process MD5
                     */
                    std::string m_processMd5;
                    bool m_processMd5HasBeenSet;

                    /**
                     * Command line
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * First access time
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * Last access Time
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * Host online status [OFFLINE: offline|ONLINE: online|UNKNOWN: unknown]
                     */
                    std::string m_hostStatus;
                    bool m_hostStatusHasBeenSet;

                    /**
                     * Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * [1:CentOS|2:Debian|3:Gentoo|4:Redhat|5:Ubuntu|6:Windows|7:TencentOS|8:CoreOS|9:FreeBSD|10:SUSE]
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSEVENT_H_
