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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PRIVILEGEEVENTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PRIVILEGEEVENTINFO_H_

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
                * Local privilege escalation data
                */
                class PrivilegeEventInfo : public AbstractModel
                {
                public:
                    PrivilegeEventInfo();
                    ~PrivilegeEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data ID
                     * @return Id Data ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Data ID
                     * @param _id Data ID
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
                     * 获取Yunjing ID
                     * @return Uuid Yunjing ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Yunjing ID
                     * @param _uuid Yunjing ID
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
                     * 获取Execute commands
                     * @return CmdLine Execute commands
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置Execute commands
                     * @param _cmdLine Execute commands
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
                     * 获取Username
                     * @return UserName Username
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username
                     * @param _userName Username
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
                     * 获取User group
                     * @return UserGroup User group
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置User group
                     * @param _userGroup User group
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
                     * 获取Process file permission
                     * @return ProcFilePrivilege Process file permission
                     * 
                     */
                    std::string GetProcFilePrivilege() const;

                    /**
                     * 设置Process file permission
                     * @param _procFilePrivilege Process file permission
                     * 
                     */
                    void SetProcFilePrivilege(const std::string& _procFilePrivilege);

                    /**
                     * 判断参数 ProcFilePrivilege 是否已赋值
                     * @return ProcFilePrivilege 是否已赋值
                     * 
                     */
                    bool ProcFilePrivilegeHasBeenSet() const;

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
                     * 获取Parent process username
                     * @return ParentProcUser Parent process username
                     * 
                     */
                    std::string GetParentProcUser() const;

                    /**
                     * 设置Parent process username
                     * @param _parentProcUser Parent process username
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
                     * 获取Process tree json pid: process ID; exe: file path; account: groups and users to which the process belongs; cmdline: execute commands; ssh_service: SSH service IP; ssh_source: log-in source
                     * @return PsTree Process tree json pid: process ID; exe: file path; account: groups and users to which the process belongs; cmdline: execute commands; ssh_service: SSH service IP; ssh_source: log-in source
                     * 
                     */
                    std::string GetPsTree() const;

                    /**
                     * 设置Process tree json pid: process ID; exe: file path; account: groups and users to which the process belongs; cmdline: execute commands; ssh_service: SSH service IP; ssh_source: log-in source
                     * @param _psTree Process tree json pid: process ID; exe: file path; account: groups and users to which the process belongs; cmdline: execute commands; ssh_service: SSH service IP; ssh_source: log-in source
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
                     * 获取Machine name
                     * @return MachineName Machine name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Machine name
                     * @param _machineName Machine name
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
                     * 获取Hazard description information
                     * @return HarmDescribe Hazard description information
                     * 
                     */
                    std::string GetHarmDescribe() const;

                    /**
                     * 设置Hazard description information
                     * @param _harmDescribe Hazard description information
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
                     * 获取Permission list (Separate multiple items with |.)
                     * @return NewCaps Permission list (Separate multiple items with |.)
                     * 
                     */
                    std::string GetNewCaps() const;

                    /**
                     * 设置Permission list (Separate multiple items with |.)
                     * @param _newCaps Permission list (Separate multiple items with |.)
                     * 
                     */
                    void SetNewCaps(const std::string& _newCaps);

                    /**
                     * 判断参数 NewCaps 是否已赋值
                     * @return NewCaps 是否已赋值
                     * 
                     */
                    bool NewCapsHasBeenSet() const;

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
                     * Data ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Yunjing ID
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
                     * Execute commands
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * Username
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * User group
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * Process file permission
                     */
                    std::string m_procFilePrivilege;
                    bool m_procFilePrivilegeHasBeenSet;

                    /**
                     * Parent process name
                     */
                    std::string m_parentProcName;
                    bool m_parentProcNameHasBeenSet;

                    /**
                     * Parent process username
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
                     * Process tree json pid: process ID; exe: file path; account: groups and users to which the process belongs; cmdline: execute commands; ssh_service: SSH service IP; ssh_source: log-in source
                     */
                    std::string m_psTree;
                    bool m_psTreeHasBeenSet;

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
                     * Machine name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Recommended solution
                     */
                    std::string m_suggestScheme;
                    bool m_suggestSchemeHasBeenSet;

                    /**
                     * Hazard description information
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
                     * Permission list (Separate multiple items with |.)
                     */
                    std::string m_newCaps;
                    bool m_newCapsHasBeenSet;

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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PRIVILEGEEVENTINFO_H_
