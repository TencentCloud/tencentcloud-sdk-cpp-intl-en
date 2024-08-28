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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_REVERSESHELLEVENTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_REVERSESHELLEVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Reverse Shell data details
                */
                class ReverseShellEventInfo : public AbstractModel
                {
                public:
                    ReverseShellEventInfo();
                    ~ReverseShellEventInfo() = default;
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
                     * 获取Yunjing UUID
                     * @return Uuid Yunjing UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Yunjing UUID
                     * @param _uuid Yunjing UUID
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
                     * 获取Host ID
                     * @return Quuid Host ID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host ID
                     * @param _quuid Host ID
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
                     * @return HostIp Host private IP address
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Host private IP address
                     * @param _hostIp Host private IP address
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
                     * 获取User for execution
                     * @return UserName User for execution
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置User for execution
                     * @param _userName User for execution
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
                     * 获取User group for execution
                     * @return UserGroup User group for execution
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置User group for execution
                     * @param _userGroup User group for execution
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
                     * 获取Processing status: 0: pending; 2: allowlisted; 3: processed; 4: ignored
                     * @return Status Processing status: 0: pending; 2: allowlisted; 3: processed; 4: ignored
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Processing status: 0: pending; 2: allowlisted; 3: processed; 4: ignored
                     * @param _status Processing status: 0: pending; 2: allowlisted; 3: processed; 4: ignored
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
                     * 获取Host name
                     * @return MachineName Host name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Host name
                     * @param _machineName Host name
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
                     * 获取Detection method
                     * @return DetectBy Detection method
                     * 
                     */
                    uint64_t GetDetectBy() const;

                    /**
                     * 设置Detection method
                     * @param _detectBy Detection method
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
                     * 获取Process tree json; pid: process ID; exe: file path; account: groups and users to which the process belongs; cmdline: execute commands; ssh_service: ssh service IP, ssh_source: log-in source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PsTree Process tree json; pid: process ID; exe: file path; account: groups and users to which the process belongs; cmdline: execute commands; ssh_service: ssh service IP, ssh_source: log-in source
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPsTree() const;

                    /**
                     * 设置Process tree json; pid: process ID; exe: file path; account: groups and users to which the process belongs; cmdline: execute commands; ssh_service: ssh service IP, ssh_source: log-in source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _psTree Process tree json; pid: process ID; exe: file path; account: groups and users to which the process belongs; cmdline: execute commands; ssh_service: ssh service IP, ssh_source: log-in source
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPsTree(const std::string& _psTree);

                    /**
                     * 判断参数 PsTree 是否已赋值
                     * @return PsTree 是否已赋值
                     * 
                     */
                    bool PsTreeHasBeenSet() const;

                    /**
                     * 获取Recommended solution
                     * @return SuggestScheme Recommended solution
                     * 
                     */
                    std::string GetSuggestScheme() const;

                    /**
                     * 设置Recommended solution
                     * @param _suggestScheme Recommended solution
                     * 
                     */
                    void SetSuggestScheme(const std::string& _suggestScheme);

                    /**
                     * 判断参数 SuggestScheme 是否已赋值
                     * @return SuggestScheme 是否已赋值
                     * 
                     */
                    bool SuggestSchemeHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return HarmDescribe Description
                     * 
                     */
                    std::string GetHarmDescribe() const;

                    /**
                     * 设置Description
                     * @param _harmDescribe Description
                     * 
                     */
                    void SetHarmDescribe(const std::string& _harmDescribe);

                    /**
                     * 判断参数 HarmDescribe 是否已赋值
                     * @return HarmDescribe 是否已赋值
                     * 
                     */
                    bool HarmDescribeHasBeenSet() const;

                    /**
                     * 获取Tag
                     * @return Tags Tag
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Tag
                     * @param _tags Tag
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
                     * 获取Reference link
                     * @return References Reference link
                     * 
                     */
                    std::vector<std::string> GetReferences() const;

                    /**
                     * 设置Reference link
                     * @param _references Reference link
                     * 
                     */
                    void SetReferences(const std::vector<std::string>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取Host public IP address
                     * @return MachineWanIp Host public IP address
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Host public IP address
                     * @param _machineWanIp Host public IP address
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取Host online status: OFFLINE; ONLINE
                     * @return MachineStatus Host online status: OFFLINE; ONLINE
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置Host online status: OFFLINE; ONLINE
                     * @param _machineStatus Host online status: OFFLINE; ONLINE
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
                     * 获取Processing time
                     * @return ModifyTime Processing time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Processing time
                     * @param _modifyTime Processing time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * ID primary key
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Yunjing UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Host ID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host private IP address
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

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
                     * User for execution
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * User group for execution
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
                     * Processing status: 0: pending; 2: allowlisted; 3: processed; 4: ignored
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Occurrence time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Host name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Detection method
                     */
                    uint64_t m_detectBy;
                    bool m_detectByHasBeenSet;

                    /**
                     * Process tree json; pid: process ID; exe: file path; account: groups and users to which the process belongs; cmdline: execute commands; ssh_service: ssh service IP, ssh_source: log-in source
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_psTree;
                    bool m_psTreeHasBeenSet;

                    /**
                     * Recommended solution
                     */
                    std::string m_suggestScheme;
                    bool m_suggestSchemeHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_harmDescribe;
                    bool m_harmDescribeHasBeenSet;

                    /**
                     * Tag
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Reference link
                     */
                    std::vector<std::string> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * Host public IP address
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * Host online status: OFFLINE; ONLINE
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * Processing time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_REVERSESHELLEVENTINFO_H_
