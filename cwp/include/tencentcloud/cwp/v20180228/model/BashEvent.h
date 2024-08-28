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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASHEVENT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASHEVENT_H_

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
                * High-risk command data
                */
                class BashEvent : public AbstractModel
                {
                public:
                    BashEvent();
                    ~BashEvent() = default;
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
                     * 获取CWPP ID
                     * @return Uuid CWPP ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWPP ID
                     * @param _uuid CWPP ID
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
                     * 获取Username for execution
                     * @return User Username for execution
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Username for execution
                     * @param _user Username for execution
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Platform type
                     * @return Platform Platform type
                     * 
                     */
                    uint64_t GetPlatform() const;

                    /**
                     * 设置Platform type
                     * @param _platform Platform type
                     * 
                     */
                    void SetPlatform(const uint64_t& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取Executed commands
                     * @return BashCmd Executed commands
                     * 
                     */
                    std::string GetBashCmd() const;

                    /**
                     * 设置Executed commands
                     * @param _bashCmd Executed commands
                     * 
                     */
                    void SetBashCmd(const std::string& _bashCmd);

                    /**
                     * 判断参数 BashCmd 是否已赋值
                     * @return BashCmd 是否已赋值
                     * 
                     */
                    bool BashCmdHasBeenSet() const;

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
                     * 获取Rule level: 1 - high-risk 2 - medium-risk; 3 - low-risk
                     * @return RuleLevel Rule level: 1 - high-risk 2 - medium-risk; 3 - low-risk
                     * 
                     */
                    uint64_t GetRuleLevel() const;

                    /**
                     * 设置Rule level: 1 - high-risk 2 - medium-risk; 3 - low-risk
                     * @param _ruleLevel Rule level: 1 - high-risk 2 - medium-risk; 3 - low-risk
                     * 
                     */
                    void SetRuleLevel(const uint64_t& _ruleLevel);

                    /**
                     * 判断参数 RuleLevel 是否已赋值
                     * @return RuleLevel 是否已赋值
                     * 
                     */
                    bool RuleLevelHasBeenSet() const;

                    /**
                     * 获取Processing status: 0 - pending; 1 - processed; 2 - allowlisted; 3 - ignored
                     * @return Status Processing status: 0 - pending; 1 - processed; 2 - allowlisted; 3 - ignored
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Processing status: 0 - pending; 1 - processed; 2 - allowlisted; 3 - ignored
                     * @param _status Processing status: 0 - pending; 1 - processed; 2 - allowlisted; 3 - ignored
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
                     * 获取0: bash log; 1: real-time monitoring (thunder edition)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DetectBy 0: bash log; 1: real-time monitoring (thunder edition)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDetectBy() const;

                    /**
                     * 设置0: bash log; 1: real-time monitoring (thunder edition)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _detectBy 0: bash log; 1: real-time monitoring (thunder edition)
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Pid Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPid() const;

                    /**
                     * 设置Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pid Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPid(const std::string& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Process name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Exe Process name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExe() const;

                    /**
                     * 设置Process name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _exe Process name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExe(const std::string& _exe);

                    /**
                     * 判断参数 Exe 是否已赋值
                     * @return Exe 是否已赋值
                     * 
                     */
                    bool ExeHasBeenSet() const;

                    /**
                     * 获取Processing time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Processing time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Processing time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyTime Processing time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Rule category: 0 - system rule; 1 - user rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleCategory Rule category: 0 - system rule; 1 - user rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRuleCategory() const;

                    /**
                     * 设置Rule category: 0 - system rule; 1 - user rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleCategory Rule category: 0 - system rule; 1 - user rule
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Automatically generated regular expression\nNote: This field may return null, indicating that no valid values can be obtained.
                     * @return RegexBashCmd Automatically generated regular expression\nNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegexBashCmd() const;

                    /**
                     * 设置Automatically generated regular expression\nNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _regexBashCmd Automatically generated regular expression\nNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegexBashCmd(const std::string& _regexBashCmd);

                    /**
                     * 判断参数 RegexBashCmd 是否已赋值
                     * @return RegexBashCmd 是否已赋值
                     * 
                     */
                    bool RegexBashCmdHasBeenSet() const;

                    /**
                     * 获取Host HostName
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostName Host HostName
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host HostName
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostName Host HostName
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                private:

                    /**
                     * Data ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * CWPP ID
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
                     * Username for execution
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Platform type
                     */
                    uint64_t m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * Executed commands
                     */
                    std::string m_bashCmd;
                    bool m_bashCmdHasBeenSet;

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
                     * Rule level: 1 - high-risk 2 - medium-risk; 3 - low-risk
                     */
                    uint64_t m_ruleLevel;
                    bool m_ruleLevelHasBeenSet;

                    /**
                     * Processing status: 0 - pending; 1 - processed; 2 - allowlisted; 3 - ignored
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
                     * 0: bash log; 1: real-time monitoring (thunder edition)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_detectBy;
                    bool m_detectByHasBeenSet;

                    /**
                     * Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Process name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_exe;
                    bool m_exeHasBeenSet;

                    /**
                     * Processing time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Rule category: 0 - system rule; 1 - user rule
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ruleCategory;
                    bool m_ruleCategoryHasBeenSet;

                    /**
                     * Automatically generated regular expression\nNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regexBashCmd;
                    bool m_regexBashCmdHasBeenSet;

                    /**
                     * Host HostName
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASHEVENT_H_
