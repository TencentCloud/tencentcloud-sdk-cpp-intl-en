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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_REVERSESHELL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_REVERSESHELL_H_

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
                * Reverse Shell data
                */
                class ReverseShell : public AbstractModel
                {
                public:
                    ReverseShell();
                    ~ReverseShell() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID primary key
                     * @return Id ID primary key
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置ID primary key
                     * @param _id ID primary key
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
                     * 获取CWPP UUID
                     * @return Uuid CWPP UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWPP UUID
                     * @param _uuid CWPP UUID
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
                     * 获取Server ID
                     * @return Quuid Server ID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Server ID
                     * @param _quuid Server ID
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
                     * 获取Host private IP address
                     * @return Hostip Host private IP address
                     * 
                     */
                    std::string GetHostip() const;

                    /**
                     * 设置Host private IP address
                     * @param _hostip Host private IP address
                     * 
                     */
                    void SetHostip(const std::string& _hostip);

                    /**
                     * 判断参数 Hostip 是否已赋值
                     * @return Hostip 是否已赋值
                     * 
                     */
                    bool HostipHasBeenSet() const;

                    /**
                     * 获取Target IP
                     * @return DstIp Target IP
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置Target IP
                     * @param _dstIp Target IP
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

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
                     * 获取Process path
                     * @return FullPath Process path
                     * 
                     */
                    std::string GetFullPath() const;

                    /**
                     * 设置Process path
                     * @param _fullPath Process path
                     * 
                     */
                    void SetFullPath(const std::string& _fullPath);

                    /**
                     * 判断参数 FullPath 是否已赋值
                     * @return FullPath 是否已赋值
                     * 
                     */
                    bool FullPathHasBeenSet() const;

                    /**
                     * 获取Command details
                     * @return CmdLine Command details
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置Command details
                     * @param _cmdLine Command details
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
                     * 获取Executing user
                     * @return UserName Executing user
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Executing user
                     * @param _userName Executing user
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Executing user group
                     * @return UserGroup Executing user group
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置Executing user group
                     * @param _userGroup Executing user group
                     * 
                     */
                    void SetUserGroup(const std::string& _userGroup);

                    /**
                     * 判断参数 UserGroup 是否已赋值
                     * @return UserGroup 是否已赋值
                     * 
                     */
                    bool UserGroupHasBeenSet() const;

                    /**
                     * 获取Parent process name
                     * @return ParentProcName Parent process name
                     * 
                     */
                    std::string GetParentProcName() const;

                    /**
                     * 设置Parent process name
                     * @param _parentProcName Parent process name
                     * 
                     */
                    void SetParentProcName(const std::string& _parentProcName);

                    /**
                     * 判断参数 ParentProcName 是否已赋值
                     * @return ParentProcName 是否已赋值
                     * 
                     */
                    bool ParentProcNameHasBeenSet() const;

                    /**
                     * 获取Parent process user
                     * @return ParentProcUser Parent process user
                     * 
                     */
                    std::string GetParentProcUser() const;

                    /**
                     * 设置Parent process user
                     * @param _parentProcUser Parent process user
                     * 
                     */
                    void SetParentProcUser(const std::string& _parentProcUser);

                    /**
                     * 判断参数 ParentProcUser 是否已赋值
                     * @return ParentProcUser 是否已赋值
                     * 
                     */
                    bool ParentProcUserHasBeenSet() const;

                    /**
                     * 获取Parent process user group
                     * @return ParentProcGroup Parent process user group
                     * 
                     */
                    std::string GetParentProcGroup() const;

                    /**
                     * 设置Parent process user group
                     * @param _parentProcGroup Parent process user group
                     * 
                     */
                    void SetParentProcGroup(const std::string& _parentProcGroup);

                    /**
                     * 判断参数 ParentProcGroup 是否已赋值
                     * @return ParentProcGroup 是否已赋值
                     * 
                     */
                    bool ParentProcGroupHasBeenSet() const;

                    /**
                     * 获取Parent process path
                     * @return ParentProcPath Parent process path
                     * 
                     */
                    std::string GetParentProcPath() const;

                    /**
                     * 设置Parent process path
                     * @param _parentProcPath Parent process path
                     * 
                     */
                    void SetParentProcPath(const std::string& _parentProcPath);

                    /**
                     * 判断参数 ParentProcPath 是否已赋值
                     * @return ParentProcPath 是否已赋值
                     * 
                     */
                    bool ParentProcPathHasBeenSet() const;

                    /**
                     * 获取Processing status: 0 - pending; 2 - allowlisted; 3 - processed; 4 - ignored
                     * @return Status Processing status: 0 - pending; 2 - allowlisted; 3 - processed; 4 - ignored
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Processing status: 0 - pending; 2 - allowlisted; 3 - processed; 4 - ignored
                     * @param _status Processing status: 0 - pending; 2 - allowlisted; 3 - processed; 4 - ignored
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
                     * 获取Occurrence time
                     * @return CreateTime Occurrence time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Occurrence time
                     * @param _createTime Occurrence time
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
                     * 获取Server name
                     * @return MachineName Server name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Server name
                     * @param _machineName Server name
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
                     * 获取Process tree
                     * @return ProcTree Process tree
                     * 
                     */
                    std::string GetProcTree() const;

                    /**
                     * 设置Process tree
                     * @param _procTree Process tree
                     * 
                     */
                    void SetProcTree(const std::string& _procTree);

                    /**
                     * 判断参数 ProcTree 是否已赋值
                     * @return ProcTree 是否已赋值
                     * 
                     */
                    bool ProcTreeHasBeenSet() const;

                    /**
                     * 获取Detection method: 0: behavior analysis; 1 command feature detection
                     * @return DetectBy Detection method: 0: behavior analysis; 1 command feature detection
                     * 
                     */
                    uint64_t GetDetectBy() const;

                    /**
                     * 设置Detection method: 0: behavior analysis; 1 command feature detection
                     * @param _detectBy Detection method: 0: behavior analysis; 1 command feature detection
                     * 
                     */
                    void SetDetectBy(const uint64_t& _detectBy);

                    /**
                     * 判断参数 DetectBy 是否已赋值
                     * @return DetectBy 是否已赋值
                     * 
                     */
                    bool DetectByHasBeenSet() const;

                    /**
                     * 获取 Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineExtraInfo  Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置 Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineExtraInfo  Host Additional Information
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
                     * 获取Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Pid Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pid Process ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Threat level: 0 - medium-risk; 1 - high-risk
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskLevel Threat level: 0 - medium-risk; 1 - high-risk
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置Threat level: 0 - medium-risk; 1 - high-risk
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _riskLevel Threat level: 0 - medium-risk; 1 - high-risk
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRiskLevel(const uint64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                private:

                    /**
                     * ID primary key
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * CWPP UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Server ID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host private IP address
                     */
                    std::string m_hostip;
                    bool m_hostipHasBeenSet;

                    /**
                     * Target IP
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * Target port
                     */
                    uint64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * Process name
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Process path
                     */
                    std::string m_fullPath;
                    bool m_fullPathHasBeenSet;

                    /**
                     * Command details
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * Executing user
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Executing user group
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * Parent process name
                     */
                    std::string m_parentProcName;
                    bool m_parentProcNameHasBeenSet;

                    /**
                     * Parent process user
                     */
                    std::string m_parentProcUser;
                    bool m_parentProcUserHasBeenSet;

                    /**
                     * Parent process user group
                     */
                    std::string m_parentProcGroup;
                    bool m_parentProcGroupHasBeenSet;

                    /**
                     * Parent process path
                     */
                    std::string m_parentProcPath;
                    bool m_parentProcPathHasBeenSet;

                    /**
                     * Processing status: 0 - pending; 2 - allowlisted; 3 - processed; 4 - ignored
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Occurrence time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Server name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Process tree
                     */
                    std::string m_procTree;
                    bool m_procTreeHasBeenSet;

                    /**
                     * Detection method: 0: behavior analysis; 1 command feature detection
                     */
                    uint64_t m_detectBy;
                    bool m_detectByHasBeenSet;

                    /**
                     *  Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Threat level: 0 - medium-risk; 1 - high-risk
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_REVERSESHELL_H_
