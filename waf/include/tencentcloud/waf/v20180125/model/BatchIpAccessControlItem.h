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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BATCHIPACCESSCONTROLITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BATCHIPACCESSCONTROLITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/JobDateTime.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Batch multi-domain blocklist/allowlist IP list
                */
                class BatchIpAccessControlItem : public AbstractModel
                {
                public:
                    BatchIpAccessControlItem();
                    ~BatchIpAccessControlItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MongoDB Table Auto-increment ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id MongoDB Table Auto-increment ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置MongoDB Table Auto-increment ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id MongoDB Table Auto-increment ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Blocklist 42 or allowlist 40
                     * @return ActionType Blocklist 42 or allowlist 40
                     * 
                     */
                    int64_t GetActionType() const;

                    /**
                     * 设置Blocklist 42 or allowlist 40
                     * @param _actionType Blocklist 42 or allowlist 40
                     * 
                     */
                    void SetActionType(const int64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取IP of the blocklist/allowlist
                     * @return Ip IP of the blocklist/allowlist
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP of the blocklist/allowlist
                     * @param _ip IP of the blocklist/allowlist
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Note Remarks
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Remarks
                     * @param _note Remarks
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取Path addition
                     * @return Source Path addition
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Path addition
                     * @param _source Path addition
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return TsVersion Modification time
                     * 
                     */
                    uint64_t GetTsVersion() const;

                    /**
                     * 设置Modification time
                     * @param _tsVersion Modification time
                     * 
                     */
                    void SetTsVersion(const uint64_t& _tsVersion);

                    /**
                     * 判断参数 TsVersion 是否已赋值
                     * @return TsVersion 是否已赋值
                     * 
                     */
                    bool TsVersionHasBeenSet() const;

                    /**
                     * 获取Timeout period
                     * @return ValidTs Timeout period
                     * 
                     */
                    int64_t GetValidTs() const;

                    /**
                     * 设置Timeout period
                     * @param _validTs Timeout period
                     * 
                     */
                    void SetValidTs(const int64_t& _validTs);

                    /**
                     * 判断参数 ValidTs 是否已赋值
                     * @return ValidTs 是否已赋值
                     * 
                     */
                    bool ValidTsHasBeenSet() const;

                    /**
                     * 获取Domain name list
                     * @return Hosts Domain name list
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置Domain name list
                     * @param _hosts Domain name list
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取55101145
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId 55101145
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置55101145
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleId 55101145
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IpList IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ipList IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Scheduled task type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobType Scheduled task type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置Scheduled task type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobType Scheduled task type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取Periodic task type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CronType Periodic task type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCronType() const;

                    /**
                     * 设置Periodic task type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cronType Periodic task type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCronType(const std::string& _cronType);

                    /**
                     * 判断参数 CronType 是否已赋值
                     * @return CronType 是否已赋值
                     * 
                     */
                    bool CronTypeHasBeenSet() const;

                    /**
                     * 获取Scheduled task configuration details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobDateTime Scheduled task configuration details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置Scheduled task configuration details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobDateTime Scheduled task configuration details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJobDateTime(const JobDateTime& _jobDateTime);

                    /**
                     * 判断参数 JobDateTime 是否已赋值
                     * @return JobDateTime 是否已赋值
                     * 
                     */
                    bool JobDateTimeHasBeenSet() const;

                    /**
                     * 获取Effective status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ValidStatus Effective status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetValidStatus() const;

                    /**
                     * 设置Effective status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _validStatus Effective status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValidStatus(const int64_t& _validStatus);

                    /**
                     * 判断参数 ValidStatus 是否已赋值
                     * @return ValidStatus 是否已赋值
                     * 
                     */
                    bool ValidStatusHasBeenSet() const;

                private:

                    /**
                     * MongoDB Table Auto-increment ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Blocklist 42 or allowlist 40
                     */
                    int64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * IP of the blocklist/allowlist
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Path addition
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Modification time
                     */
                    uint64_t m_tsVersion;
                    bool m_tsVersionHasBeenSet;

                    /**
                     * Timeout period
                     */
                    int64_t m_validTs;
                    bool m_validTsHasBeenSet;

                    /**
                     * Domain name list
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * 55101145
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Scheduled task type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * Periodic task type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cronType;
                    bool m_cronTypeHasBeenSet;

                    /**
                     * Scheduled task configuration details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                    /**
                     * Effective status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_validStatus;
                    bool m_validStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BATCHIPACCESSCONTROLITEM_H_
