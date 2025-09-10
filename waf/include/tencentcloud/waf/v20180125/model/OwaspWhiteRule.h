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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_OWASPWHITERULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_OWASPWHITERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/Strategy.h>
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
                * Rule engine allowlist.
                */
                class OwaspWhiteRule : public AbstractModel
                {
                public:
                    OwaspWhiteRule();
                    ~OwaspWhiteRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID of the allowlist.
                     * @return RuleId Rule ID of the allowlist.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Rule ID of the allowlist.
                     * @param _ruleId Rule ID of the allowlist.
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
                     * 获取Rule Name
                     * @return Name Rule Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule Name
                     * @param _name Rule Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取ID list of allowlisted rules.
                     * @return Ids ID list of allowlisted rules.
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置ID list of allowlisted rules.
                     * @param _ids ID list of allowlisted rules.
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取Allowlist rule state. valid values: 0 (disabled), 1 (enabled).
                     * @return Status Allowlist rule state. valid values: 0 (disabled), 1 (enabled).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Allowlist rule state. valid values: 0 (disabled), 1 (enabled).
                     * @param _status Allowlist rule state. valid values: 0 (disabled), 1 (enabled).
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Allowlist type. valid values: 0 (allowlisting by specific rule ID), 1 (allowlisting by rule type).
                     * @return Type Allowlist type. valid values: 0 (allowlisting by specific rule ID), 1 (allowlisting by rule type).
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Allowlist type. valid values: 0 (allowlisting by specific rule ID), 1 (allowlisting by rule type).
                     * @param _type Allowlist type. valid values: 0 (allowlisting by specific rule ID), 1 (allowlisting by rule type).
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Rule-Based matching policy list.
                     * @return Strategies Rule-Based matching policy list.
                     * 
                     */
                    std::vector<Strategy> GetStrategies() const;

                    /**
                     * 设置Rule-Based matching policy list.
                     * @param _strategies Rule-Based matching policy list.
                     * 
                     */
                    void SetStrategies(const std::vector<Strategy>& _strategies);

                    /**
                     * 判断参数 Strategies 是否已赋值
                     * @return Strategies 是否已赋值
                     * 
                     */
                    bool StrategiesHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Modification time
                     * @return UpdateTime Modification time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Modification time
                     * @param _updateTime Modification time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Scheduled task type
                     * @return JobType Scheduled task type
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置Scheduled task type
                     * @param _jobType Scheduled task type
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
                     * 获取Scheduled task configuration
                     * @return JobDateTime Scheduled task configuration
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置Scheduled task configuration
                     * @param _jobDateTime Scheduled task configuration
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
                     * 获取Periodic task granularity.
                     * @return CronType Periodic task granularity.
                     * 
                     */
                    std::string GetCronType() const;

                    /**
                     * 设置Periodic task granularity.
                     * @param _cronType Periodic task granularity.
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
                     * 获取Whether there is currently valid.
                     * @return ValidStatus Whether there is currently valid.
                     * 
                     */
                    bool GetValidStatus() const;

                    /**
                     * 设置Whether there is currently valid.
                     * @param _validStatus Whether there is currently valid.
                     * 
                     */
                    void SetValidStatus(const bool& _validStatus);

                    /**
                     * 判断参数 ValidStatus 是否已赋值
                     * @return ValidStatus 是否已赋值
                     * 
                     */
                    bool ValidStatusHasBeenSet() const;

                private:

                    /**
                     * Rule ID of the allowlist.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * ID list of allowlisted rules.
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * Allowlist rule state. valid values: 0 (disabled), 1 (enabled).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Allowlist type. valid values: 0 (allowlisting by specific rule ID), 1 (allowlisting by rule type).
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Rule-Based matching policy list.
                     */
                    std::vector<Strategy> m_strategies;
                    bool m_strategiesHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Scheduled task type
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * Scheduled task configuration
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                    /**
                     * Periodic task granularity.
                     */
                    std::string m_cronType;
                    bool m_cronTypeHasBeenSet;

                    /**
                     * Whether there is currently valid.
                     */
                    bool m_validStatus;
                    bool m_validStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_OWASPWHITERULE_H_
