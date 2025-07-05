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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_IPACCESSCONTROLITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_IPACCESSCONTROLITEM_H_

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
                * IP Blocklist/Allowlist
                */
                class IpAccessControlItem : public AbstractModel
                {
                public:
                    IpAccessControlItem();
                    ~IpAccessControlItem() = default;
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
                     * 获取Action
                     * @return ActionType Action
                     * 
                     */
                    uint64_t GetActionType() const;

                    /**
                     * 设置Action
                     * @param _actionType Action
                     * 
                     */
                    void SetActionType(const uint64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取ip
                     * @return Ip ip
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置ip
                     * @param _ip ip
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
                     * 获取Source.
                     * @return Source Source.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Source.
                     * @param _source Source.
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
                     * 获取Update Timestamp

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TsVersion Update Timestamp

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTsVersion() const;

                    /**
                     * 设置Update Timestamp

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tsVersion Update Timestamp

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Expiration Timestamp
                     * @return ValidTs Expiration Timestamp
                     * 
                     */
                    uint64_t GetValidTs() const;

                    /**
                     * 设置Expiration Timestamp
                     * @param _validTs Expiration Timestamp
                     * 
                     */
                    void SetValidTs(const uint64_t& _validTs);

                    /**
                     * 判断参数 ValidTs 是否已赋值
                     * @return ValidTs 是否已赋值
                     * 
                     */
                    bool ValidTsHasBeenSet() const;

                    /**
                     * 获取Effective status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ValidStatus Effective status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetValidStatus() const;

                    /**
                     * 设置Effective status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _validStatus Effective status.
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

                    /**
                     * 获取55000001
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId 55000001
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置55000001
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleId 55000001
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
                     * 获取IP list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IpList IP list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置IP list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ipList IP list.
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
                     * 获取Rule creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Rule creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Rule creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Rule creation time

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
                     * 获取Periodic task type.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CronType Periodic task type.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCronType() const;

                    /**
                     * 设置Periodic task type.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cronType Periodic task type.

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
                     * 获取Details of scheduled task configuration.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobDateTime Details of scheduled task configuration.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置Details of scheduled task configuration.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobDateTime Details of scheduled task configuration.

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

                private:

                    /**
                     * MongoDB Table Auto-increment ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Action
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * ip
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Source.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Update Timestamp

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_tsVersion;
                    bool m_tsVersionHasBeenSet;

                    /**
                     * Expiration Timestamp
                     */
                    uint64_t m_validTs;
                    bool m_validTsHasBeenSet;

                    /**
                     * Effective status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_validStatus;
                    bool m_validStatusHasBeenSet;

                    /**
                     * 55000001
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * IP list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * Rule creation time

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
                     * Periodic task type.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cronType;
                    bool m_cronTypeHasBeenSet;

                    /**
                     * Details of scheduled task configuration.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_IPACCESSCONTROLITEM_H_
