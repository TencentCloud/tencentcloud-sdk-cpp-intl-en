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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPEREVENT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPEREVENT_H_

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
                * Core file monitoring event
                */
                class FileTamperEvent : public AbstractModel
                {
                public:
                    FileTamperEvent();
                    ~FileTamperEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Machine Name
                     * @return HostName Machine Name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Machine Name
                     * @param _hostName Machine Name
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
                     * 获取Machine IP
                     * @return HostIp Machine IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Machine IP
                     * @param _hostIp Machine IP
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
                     * 获取Last occurrence time
                     * @return ModifyTime Last occurrence time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Last occurrence time
                     * @param _modifyTime Last occurrence time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

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
                     * 获取cvm id
                     * @return Quuid cvm id
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置cvm id
                     * @param _quuid cvm id
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
                     * 获取Event Type/Action. 0 - Alarm
                     * @return Type Event Type/Action. 0 - Alarm
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Event Type/Action. 0 - Alarm
                     * @param _type Event Type/Action. 0 - Alarm
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
                     * 获取Process path
                     * @return ProcessExe Process path
                     * 
                     */
                    std::string GetProcessExe() const;

                    /**
                     * 设置Process path
                     * @param _processExe Process path
                     * 
                     */
                    void SetProcessExe(const std::string& _processExe);

                    /**
                     * 判断参数 ProcessExe 是否已赋值
                     * @return ProcessExe 是否已赋值
                     * 
                     */
                    bool ProcessExeHasBeenSet() const;

                    /**
                     * 获取Process parameter
                     * @return ProcessArgv Process parameter
                     * 
                     */
                    std::string GetProcessArgv() const;

                    /**
                     * 设置Process parameter
                     * @param _processArgv Process parameter
                     * 
                     */
                    void SetProcessArgv(const std::string& _processArgv);

                    /**
                     * 判断参数 ProcessArgv 是否已赋值
                     * @return ProcessArgv 是否已赋值
                     * 
                     */
                    bool ProcessArgvHasBeenSet() const;

                    /**
                     * 获取Target file path
                     * @return Target Target file path
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Target file path
                     * @param _target Target file path
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取Processing Status. 0 - Pending; 1 - Allowlisted; 2 - Deleted; 3 - Ignored; 4 - Manually Processed
                     * @return Status Processing Status. 0 - Pending; 1 - Allowlisted; 2 - Deleted; 3 - Ignored; 4 - Manually Processed
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Processing Status. 0 - Pending; 1 - Allowlisted; 2 - Deleted; 3 - Ignored; 4 - Manually Processed
                     * @param _status Processing Status. 0 - Pending; 1 - Allowlisted; 2 - Deleted; 3 - Ignored; 4 - Manually Processed
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
                     * 获取Event Occurrences
                     * @return EventCount Event Occurrences
                     * 
                     */
                    uint64_t GetEventCount() const;

                    /**
                     * 设置Event Occurrences
                     * @param _eventCount Event Occurrences
                     * 
                     */
                    void SetEventCount(const uint64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleId Rule ID
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule name
                     * @return RuleName Rule name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
                     * @param _ruleName Rule name
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Event Details: JSON Format
                     * @return Pstree Event Details: JSON Format
                     * 
                     */
                    std::string GetPstree() const;

                    /**
                     * 设置Event Details: JSON Format
                     * @param _pstree Event Details: JSON Format
                     * 
                     */
                    void SetPstree(const std::string& _pstree);

                    /**
                     * 判断参数 Pstree 是否已赋值
                     * @return Pstree 是否已赋值
                     * 
                     */
                    bool PstreeHasBeenSet() const;

                    /**
                     * 获取Rule Type. 0 - System Rule; 1 - Custom Rule
                     * @return RuleCategory Rule Type. 0 - System Rule; 1 - Custom Rule
                     * 
                     */
                    uint64_t GetRuleCategory() const;

                    /**
                     * 设置Rule Type. 0 - System Rule; 1 - Custom Rule
                     * @param _ruleCategory Rule Type. 0 - System Rule; 1 - Custom Rule
                     * 
                     */
                    void SetRuleCategory(const uint64_t& _ruleCategory);

                    /**
                     * 判断参数 RuleCategory 是否已赋值
                     * @return RuleCategory 是否已赋值
                     * 
                     */
                    bool RuleCategoryHasBeenSet() const;

                    /**
                     * 获取Host Online Information: ONLINE, OFFLINE
                     * @return MachineStatus Host Online Information: ONLINE, OFFLINE
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置Host Online Information: ONLINE, OFFLINE
                     * @param _machineStatus Host Online Information: ONLINE, OFFLINE
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
                     * 获取Severity description
                     * @return Description Severity description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Severity description
                     * @param _description Severity description
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
                     * 获取Remediation Suggestions
                     * @return Suggestion Remediation Suggestions
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Remediation Suggestions
                     * @param _suggestion Remediation Suggestions
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

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
                     * 获取Process permission
                     * @return ExePermission Process permission
                     * 
                     */
                    std::string GetExePermission() const;

                    /**
                     * 设置Process permission
                     * @param _exePermission Process permission
                     * 
                     */
                    void SetExePermission(const std::string& _exePermission);

                    /**
                     * 判断参数 ExePermission 是否已赋值
                     * @return ExePermission 是否已赋值
                     * 
                     */
                    bool ExePermissionHasBeenSet() const;

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
                     * 获取Process name
                     * @return ExeMd5 Process name
                     * 
                     */
                    std::string GetExeMd5() const;

                    /**
                     * 设置Process name
                     * @param _exeMd5 Process name
                     * 
                     */
                    void SetExeMd5(const std::string& _exeMd5);

                    /**
                     * 判断参数 ExeMd5 是否已赋值
                     * @return ExeMd5 是否已赋值
                     * 
                     */
                    bool ExeMd5HasBeenSet() const;

                    /**
                     * 获取Process File Size
                     * @return ExeSize Process File Size
                     * 
                     */
                    uint64_t GetExeSize() const;

                    /**
                     * 设置Process File Size
                     * @param _exeSize Process File Size
                     * 
                     */
                    void SetExeSize(const uint64_t& _exeSize);

                    /**
                     * 判断参数 ExeSize 是否已赋值
                     * @return ExeSize 是否已赋值
                     * 
                     */
                    bool ExeSizeHasBeenSet() const;

                    /**
                     * 获取Process Execution Duration
                     * @return ExeTime Process Execution Duration
                     * 
                     */
                    uint64_t GetExeTime() const;

                    /**
                     * 设置Process Execution Duration
                     * @param _exeTime Process Execution Duration
                     * 
                     */
                    void SetExeTime(const uint64_t& _exeTime);

                    /**
                     * 判断参数 ExeTime 是否已赋值
                     * @return ExeTime 是否已赋值
                     * 
                     */
                    bool ExeTimeHasBeenSet() const;

                    /**
                     * 获取Target file size
                     * @return TargetSize Target file size
                     * 
                     */
                    uint64_t GetTargetSize() const;

                    /**
                     * 设置Target file size
                     * @param _targetSize Target file size
                     * 
                     */
                    void SetTargetSize(const uint64_t& _targetSize);

                    /**
                     * 判断参数 TargetSize 是否已赋值
                     * @return TargetSize 是否已赋值
                     * 
                     */
                    bool TargetSizeHasBeenSet() const;

                    /**
                     * 获取Target File Permissions
                     * @return TargetPermission Target File Permissions
                     * 
                     */
                    std::string GetTargetPermission() const;

                    /**
                     * 设置Target File Permissions
                     * @param _targetPermission Target File Permissions
                     * 
                     */
                    void SetTargetPermission(const std::string& _targetPermission);

                    /**
                     * 判断参数 TargetPermission 是否已赋值
                     * @return TargetPermission 是否已赋值
                     * 
                     */
                    bool TargetPermissionHasBeenSet() const;

                    /**
                     * 获取Target File Update Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetModifyTime Target File Update Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetModifyTime() const;

                    /**
                     * 设置Target File Update Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetModifyTime Target File Update Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetModifyTime(const std::string& _targetModifyTime);

                    /**
                     * 判断参数 TargetModifyTime 是否已赋值
                     * @return TargetModifyTime 是否已赋值
                     * 
                     */
                    bool TargetModifyTimeHasBeenSet() const;

                    /**
                     * 获取Target File Creation Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetCreatTime Target File Creation Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetCreatTime() const;

                    /**
                     * 设置Target File Creation Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetCreatTime Target File Creation Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetCreatTime(const std::string& _targetCreatTime);

                    /**
                     * 判断参数 TargetCreatTime 是否已赋值
                     * @return TargetCreatTime 是否已赋值
                     * 
                     */
                    bool TargetCreatTimeHasBeenSet() const;

                    /**
                     * 获取Process PID
                     * @return ExePid Process PID
                     * 
                     */
                    uint64_t GetExePid() const;

                    /**
                     * 设置Process PID
                     * @param _exePid Process PID
                     * 
                     */
                    void SetExePid(const uint64_t& _exePid);

                    /**
                     * 判断参数 ExePid 是否已赋值
                     * @return ExePid 是否已赋值
                     * 
                     */
                    bool ExePidHasBeenSet() const;

                    /**
                     * 获取File name
                     * @return TargetName File name
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置File name
                     * @param _targetName File name
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取Reference link
                     * @return Reference Reference link
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置Reference link
                     * @param _reference Reference link
                     * 
                     */
                    void SetReference(const std::string& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取Risk Level. 0: None; 1: High-Risk; 2: Medium-Risk; 3: Low-Risk
                     * @return Level Risk Level. 0: None; 1: High-Risk; 2: Medium-Risk; 3: Low-Risk
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Risk Level. 0: None; 1: High-Risk; 2: Medium-Risk; 3: Low-Risk
                     * @param _level Risk Level. 0: None; 1: High-Risk; 2: Medium-Risk; 3: Low-Risk
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Process name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExeName Process name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExeName() const;

                    /**
                     * 设置Process name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _exeName Process name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExeName(const std::string& _exeName);

                    /**
                     * 判断参数 ExeName 是否已赋值
                     * @return ExeName 是否已赋值
                     * 
                     */
                    bool ExeNameHasBeenSet() const;

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
                     * 获取File threat behavior
<li>read: read file</li>
<li>write: modify file</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileAction File threat behavior
<li>read: read file</li>
<li>write: modify file</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileAction() const;

                    /**
                     * 设置File threat behavior
<li>read: read file</li>
<li>write: modify file</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileAction File threat behavior
<li>read: read file</li>
<li>write: modify file</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFileAction(const std::string& _fileAction);

                    /**
                     * 判断参数 FileAction 是否已赋值
                     * @return FileAction 是否已赋值
                     * 
                     */
                    bool FileActionHasBeenSet() const;

                private:

                    /**
                     * Machine Name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Machine IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Occurrence time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last occurrence time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Event ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * cvm id
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Event Type/Action. 0 - Alarm
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Process path
                     */
                    std::string m_processExe;
                    bool m_processExeHasBeenSet;

                    /**
                     * Process parameter
                     */
                    std::string m_processArgv;
                    bool m_processArgvHasBeenSet;

                    /**
                     * Target file path
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * Processing Status. 0 - Pending; 1 - Allowlisted; 2 - Deleted; 3 - Ignored; 4 - Manually Processed
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Event Occurrences
                     */
                    uint64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * Rule ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Event Details: JSON Format
                     */
                    std::string m_pstree;
                    bool m_pstreeHasBeenSet;

                    /**
                     * Rule Type. 0 - System Rule; 1 - Custom Rule
                     */
                    uint64_t m_ruleCategory;
                    bool m_ruleCategoryHasBeenSet;

                    /**
                     * Host Online Information: ONLINE, OFFLINE
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * Severity description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Remediation Suggestions
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Private IP address
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Process permission
                     */
                    std::string m_exePermission;
                    bool m_exePermissionHasBeenSet;

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
                     * Process name
                     */
                    std::string m_exeMd5;
                    bool m_exeMd5HasBeenSet;

                    /**
                     * Process File Size
                     */
                    uint64_t m_exeSize;
                    bool m_exeSizeHasBeenSet;

                    /**
                     * Process Execution Duration
                     */
                    uint64_t m_exeTime;
                    bool m_exeTimeHasBeenSet;

                    /**
                     * Target file size
                     */
                    uint64_t m_targetSize;
                    bool m_targetSizeHasBeenSet;

                    /**
                     * Target File Permissions
                     */
                    std::string m_targetPermission;
                    bool m_targetPermissionHasBeenSet;

                    /**
                     * Target File Update Time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetModifyTime;
                    bool m_targetModifyTimeHasBeenSet;

                    /**
                     * Target File Creation Time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetCreatTime;
                    bool m_targetCreatTimeHasBeenSet;

                    /**
                     * Process PID
                     */
                    uint64_t m_exePid;
                    bool m_exePidHasBeenSet;

                    /**
                     * File name
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * Reference link
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * Risk Level. 0: None; 1: High-Risk; 2: Medium-Risk; 3: Low-Risk
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Process name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_exeName;
                    bool m_exeNameHasBeenSet;

                    /**
                     *  Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * File threat behavior
<li>read: read file</li>
<li>write: modify file</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileAction;
                    bool m_fileActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPEREVENT_H_
