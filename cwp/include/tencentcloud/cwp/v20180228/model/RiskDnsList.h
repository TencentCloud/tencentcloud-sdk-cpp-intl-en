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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSLIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSLIST_H_

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
                * Malicious request list
                */
                class RiskDnsList : public AbstractModel
                {
                public:
                    RiskDnsList();
                    ~RiskDnsList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取External access domain name
                     * @return Url External access domain name
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置External access domain name
                     * @param _url External access domain name
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Access count
                     * @return AccessCount Access count
                     * 
                     */
                    uint64_t GetAccessCount() const;

                    /**
                     * 设置Access count
                     * @param _accessCount Access count
                     * 
                     */
                    void SetAccessCount(const uint64_t& _accessCount);

                    /**
                     * 判断参数 AccessCount 是否已赋值
                     * @return AccessCount 是否已赋值
                     * 
                     */
                    bool AccessCountHasBeenSet() const;

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
                     * 获取Whether the rule is global. 0: no; 1: yes.
                     * @return GlobalRuleId Whether the rule is global. 0: no; 1: yes.
                     * 
                     */
                    uint64_t GetGlobalRuleId() const;

                    /**
                     * 设置Whether the rule is global. 0: no; 1: yes.
                     * @param _globalRuleId Whether the rule is global. 0: no; 1: yes.
                     * 
                     */
                    void SetGlobalRuleId(const uint64_t& _globalRuleId);

                    /**
                     * 判断参数 GlobalRuleId 是否已赋值
                     * @return GlobalRuleId 是否已赋值
                     * 
                     */
                    bool GlobalRuleIdHasBeenSet() const;

                    /**
                     * 获取User rule ID
                     * @return UserRuleId User rule ID
                     * 
                     */
                    uint64_t GetUserRuleId() const;

                    /**
                     * 设置User rule ID
                     * @param _userRuleId User rule ID
                     * 
                     */
                    void SetUserRuleId(const uint64_t& _userRuleId);

                    /**
                     * 判断参数 UserRuleId 是否已赋值
                     * @return UserRuleId 是否已赋值
                     * 
                     */
                    bool UserRuleIdHasBeenSet() const;

                    /**
                     * 获取Status. 0: pending; 2: added to allowlist; 3: untrusted; 4: processed; 5: ignored.
                     * @return Status Status. 0: pending; 2: added to allowlist; 3: untrusted; 4: processed; 5: ignored.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status. 0: pending; 2: added to allowlist; 3: untrusted; 4: processed; 5: ignored.
                     * @param _status Status. 0: pending; 2: added to allowlist; 3: untrusted; 4: processed; 5: ignored.
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
                     * 获取First access time
                     * @return CreateTime First access time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置First access time
                     * @param _createTime First access time
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
                     * 获取Last access Time
                     * @return MergeTime Last access Time
                     * 
                     */
                    std::string GetMergeTime() const;

                    /**
                     * 设置Last access Time
                     * @param _mergeTime Last access Time
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
                     * 获取Unique QUUID
                     * @return Quuid Unique QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Unique QUUID
                     * @param _quuid Unique QUUID
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
                     * 获取Alias
                     * @return Alias Alias
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Alias
                     * @param _alias Alias
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
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
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
                     * 获取Unique ID
                     * @return Id Unique ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Unique ID
                     * @param _id Unique ID
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
                     * 获取Reference
                     * @return Reference Reference
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置Reference
                     * @param _reference Reference
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
                     * 获取Process ID
                     * @return Pid Process ID
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置Process ID
                     * @param _pid Process ID
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取UUID
                     * @return Uuid UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置UUID
                     * @param _uuid UUID
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
                     * 获取Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineWanIp Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineWanIp Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Host online status. OFFLINE: offline; ONLINE: online; UNKNOWN: unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineStatus Host online status. OFFLINE: offline; ONLINE: online; UNKNOWN: unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置Host online status. OFFLINE: offline; ONLINE: online; UNKNOWN: unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineStatus Host online status. OFFLINE: offline; ONLINE: online; UNKNOWN: unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineStatus(const std::string& _machineStatus);

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     * 
                     */
                    bool MachineStatusHasBeenSet() const;

                private:

                    /**
                     * External access domain name
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Access count
                     */
                    uint64_t m_accessCount;
                    bool m_accessCountHasBeenSet;

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
                     * Whether the rule is global. 0: no; 1: yes.
                     */
                    uint64_t m_globalRuleId;
                    bool m_globalRuleIdHasBeenSet;

                    /**
                     * User rule ID
                     */
                    uint64_t m_userRuleId;
                    bool m_userRuleIdHasBeenSet;

                    /**
                     * Status. 0: pending; 2: added to allowlist; 3: untrusted; 4: processed; 5: ignored.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * First access time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last access Time
                     */
                    std::string m_mergeTime;
                    bool m_mergeTimeHasBeenSet;

                    /**
                     * Unique QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Alias
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Unique ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Reference
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * Command line
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * Process ID
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Recommended solution
                     */
                    std::string m_suggestScheme;
                    bool m_suggestSchemeHasBeenSet;

                    /**
                     * Tag Features
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * Host online status. OFFLINE: offline; ONLINE: online; UNKNOWN: unknown.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSLIST_H_
