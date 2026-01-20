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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEDBAUDITSTATUS_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEDBAUDITSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AuditInstanceInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Instance audit details.
                */
                class InstanceDbAuditStatus : public AbstractModel
                {
                public:
                    InstanceDbAuditStatus();
                    ~InstanceDbAuditStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Audit status. ON - Audit is enabled, OFF - Audit is disabled.
                     * @return AuditStatus Audit status. ON - Audit is enabled, OFF - Audit is disabled.
                     * 
                     */
                    std::string GetAuditStatus() const;

                    /**
                     * 设置Audit status. ON - Audit is enabled, OFF - Audit is disabled.
                     * @param _auditStatus Audit status. ON - Audit is enabled, OFF - Audit is disabled.
                     * 
                     */
                    void SetAuditStatus(const std::string& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values: 0 - No task; 1 - Enabling audit; 2 - Disabling audit.
                     * @return AuditTask Task status. Valid values: 0 - No task; 1 - Enabling audit; 2 - Disabling audit.
                     * 
                     */
                    uint64_t GetAuditTask() const;

                    /**
                     * 设置Task status. Valid values: 0 - No task; 1 - Enabling audit; 2 - Disabling audit.
                     * @param _auditTask Task status. Valid values: 0 - No task; 1 - Enabling audit; 2 - Disabling audit.
                     * 
                     */
                    void SetAuditTask(const uint64_t& _auditTask);

                    /**
                     * 判断参数 AuditTask 是否已赋值
                     * @return AuditTask 是否已赋值
                     * 
                     */
                    bool AuditTaskHasBeenSet() const;

                    /**
                     * 获取Log retention period. Valid values:7 - One week;30 - One month;90 - Three months;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     * @return LogExpireDay Log retention period. Valid values:7 - One week;30 - One month;90 - Three months;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     * 
                     */
                    uint64_t GetLogExpireDay() const;

                    /**
                     * 设置Log retention period. Valid values:7 - One week;30 - One month;90 - Three months;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     * @param _logExpireDay Log retention period. Valid values:7 - One week;30 - One month;90 - Three months;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     * 
                     */
                    void SetLogExpireDay(const uint64_t& _logExpireDay);

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取High-frequency storage period. Valid values:3 - 3 days;7 - One week;30 - One month;90 - Three months;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     * @return HighLogExpireDay High-frequency storage period. Valid values:3 - 3 days;7 - One week;30 - One month;90 - Three months;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     * 
                     */
                    uint64_t GetHighLogExpireDay() const;

                    /**
                     * 设置High-frequency storage period. Valid values:3 - 3 days;7 - One week;30 - One month;90 - Three months;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     * @param _highLogExpireDay High-frequency storage period. Valid values:3 - 3 days;7 - One week;30 - One month;90 - Three months;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     * 
                     */
                    void SetHighLogExpireDay(const uint64_t& _highLogExpireDay);

                    /**
                     * 判断参数 HighLogExpireDay 是否已赋值
                     * @return HighLogExpireDay 是否已赋值
                     * 
                     */
                    bool HighLogExpireDayHasBeenSet() const;

                    /**
                     * 获取Low-frequency storage period (in days). This equals the log retention period minus the high-frequency storage period.
                     * @return LowLogExpireDay Low-frequency storage period (in days). This equals the log retention period minus the high-frequency storage period.
                     * 
                     */
                    uint64_t GetLowLogExpireDay() const;

                    /**
                     * 设置Low-frequency storage period (in days). This equals the log retention period minus the high-frequency storage period.
                     * @param _lowLogExpireDay Low-frequency storage period (in days). This equals the log retention period minus the high-frequency storage period.
                     * 
                     */
                    void SetLowLogExpireDay(const uint64_t& _lowLogExpireDay);

                    /**
                     * 判断参数 LowLogExpireDay 是否已赋值
                     * @return LowLogExpireDay 是否已赋值
                     * 
                     */
                    bool LowLogExpireDayHasBeenSet() const;

                    /**
                     * 获取Log storage volume (in GB).
                     * @return BillingAmount Log storage volume (in GB).
                     * 
                     */
                    double GetBillingAmount() const;

                    /**
                     * 设置Log storage volume (in GB).
                     * @param _billingAmount Log storage volume (in GB).
                     * 
                     */
                    void SetBillingAmount(const double& _billingAmount);

                    /**
                     * 判断参数 BillingAmount 是否已赋值
                     * @return BillingAmount 是否已赋值
                     * 
                     */
                    bool BillingAmountHasBeenSet() const;

                    /**
                     * 获取High-frequency storage volume (in GB).
                     * @return HighRealStorage High-frequency storage volume (in GB).
                     * 
                     */
                    double GetHighRealStorage() const;

                    /**
                     * 设置High-frequency storage volume (in GB).
                     * @param _highRealStorage High-frequency storage volume (in GB).
                     * 
                     */
                    void SetHighRealStorage(const double& _highRealStorage);

                    /**
                     * 判断参数 HighRealStorage 是否已赋值
                     * @return HighRealStorage 是否已赋值
                     * 
                     */
                    bool HighRealStorageHasBeenSet() const;

                    /**
                     * 获取Low-frequency storage volume (in GB).
                     * @return LowRealStorage Low-frequency storage volume (in GB).
                     * 
                     */
                    double GetLowRealStorage() const;

                    /**
                     * 设置Low-frequency storage volume (in GB).
                     * @param _lowRealStorage Low-frequency storage volume (in GB).
                     * 
                     */
                    void SetLowRealStorage(const double& _lowRealStorage);

                    /**
                     * 判断参数 LowRealStorage 是否已赋值
                     * @return LowRealStorage 是否已赋值
                     * 
                     */
                    bool LowRealStorageHasBeenSet() const;

                    /**
                     * 获取Whether full audit is enabled. true - Full audit.
                     * @return AuditAll Whether full audit is enabled. true - Full audit.
                     * 
                     */
                    bool GetAuditAll() const;

                    /**
                     * 设置Whether full audit is enabled. true - Full audit.
                     * @param _auditAll Whether full audit is enabled. true - Full audit.
                     * 
                     */
                    void SetAuditAll(const bool& _auditAll);

                    /**
                     * 判断参数 AuditAll 是否已赋值
                     * @return AuditAll 是否已赋值
                     * 
                     */
                    bool AuditAllHasBeenSet() const;

                    /**
                     * 获取Time when the audit service was activated.
                     * @return CreateAt Time when the audit service was activated.
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置Time when the audit service was activated.
                     * @param _createAt Time when the audit service was activated.
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取Related information about the instance.
                     * @return InstanceInfo Related information about the instance.
                     * 
                     */
                    AuditInstanceInfo GetInstanceInfo() const;

                    /**
                     * 设置Related information about the instance.
                     * @param _instanceInfo Related information about the instance.
                     * 
                     */
                    void SetInstanceInfo(const AuditInstanceInfo& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                    /**
                     * 获取Total storage volume (in GB).
                     * @return RealStorage Total storage volume (in GB).
                     * 
                     */
                    double GetRealStorage() const;

                    /**
                     * 设置Total storage volume (in GB).
                     * @param _realStorage Total storage volume (in GB).
                     * 
                     */
                    void SetRealStorage(const double& _realStorage);

                    /**
                     * 判断参数 RealStorage 是否已赋值
                     * @return RealStorage 是否已赋值
                     * 
                     */
                    bool RealStorageHasBeenSet() const;

                    /**
                     * 获取Whether an audit policy is configured.
                     * @return OldRule Whether an audit policy is configured.
                     * 
                     */
                    bool GetOldRule() const;

                    /**
                     * 设置Whether an audit policy is configured.
                     * @param _oldRule Whether an audit policy is configured.
                     * 
                     */
                    void SetOldRule(const bool& _oldRule);

                    /**
                     * 判断参数 OldRule 是否已赋值
                     * @return OldRule 是否已赋值
                     * 
                     */
                    bool OldRuleHasBeenSet() const;

                    /**
                     * 获取Rule template applied to the instance.
                     * @return RuleTemplateIds Rule template applied to the instance.
                     * 
                     */
                    std::vector<std::string> GetRuleTemplateIds() const;

                    /**
                     * 设置Rule template applied to the instance.
                     * @param _ruleTemplateIds Rule template applied to the instance.
                     * 
                     */
                    void SetRuleTemplateIds(const std::vector<std::string>& _ruleTemplateIds);

                    /**
                     * 判断参数 RuleTemplateIds 是否已赋值
                     * @return RuleTemplateIds 是否已赋值
                     * 
                     */
                    bool RuleTemplateIdsHasBeenSet() const;

                    /**
                     * 获取Trial status.
                     * @return TrialStatus Trial status.
                     * 
                     */
                    std::string GetTrialStatus() const;

                    /**
                     * 设置Trial status.
                     * @param _trialStatus Trial status.
                     * 
                     */
                    void SetTrialStatus(const std::string& _trialStatus);

                    /**
                     * 判断参数 TrialStatus 是否已赋值
                     * @return TrialStatus 是否已赋值
                     * 
                     */
                    bool TrialStatusHasBeenSet() const;

                    /**
                     * 获取Trial start time.
                     * @return TrialStartTime Trial start time.
                     * 
                     */
                    int64_t GetTrialStartTime() const;

                    /**
                     * 设置Trial start time.
                     * @param _trialStartTime Trial start time.
                     * 
                     */
                    void SetTrialStartTime(const int64_t& _trialStartTime);

                    /**
                     * 判断参数 TrialStartTime 是否已赋值
                     * @return TrialStartTime 是否已赋值
                     * 
                     */
                    bool TrialStartTimeHasBeenSet() const;

                    /**
                     * 获取Trial duration.
                     * @return TrialDuration Trial duration.
                     * 
                     */
                    int64_t GetTrialDuration() const;

                    /**
                     * 设置Trial duration.
                     * @param _trialDuration Trial duration.
                     * 
                     */
                    void SetTrialDuration(const int64_t& _trialDuration);

                    /**
                     * 判断参数 TrialDuration 是否已赋值
                     * @return TrialDuration 是否已赋值
                     * 
                     */
                    bool TrialDurationHasBeenSet() const;

                    /**
                     * 获取Trial end time.
                     * @return TrialCloseTime Trial end time.
                     * 
                     */
                    int64_t GetTrialCloseTime() const;

                    /**
                     * 设置Trial end time.
                     * @param _trialCloseTime Trial end time.
                     * 
                     */
                    void SetTrialCloseTime(const int64_t& _trialCloseTime);

                    /**
                     * 判断参数 TrialCloseTime 是否已赋值
                     * @return TrialCloseTime 是否已赋值
                     * 
                     */
                    bool TrialCloseTimeHasBeenSet() const;

                    /**
                     * 获取Log query time limit during the trial period.
                     * @return TrialDescribeLogHours Log query time limit during the trial period.
                     * 
                     */
                    int64_t GetTrialDescribeLogHours() const;

                    /**
                     * 设置Log query time limit during the trial period.
                     * @param _trialDescribeLogHours Log query time limit during the trial period.
                     * 
                     */
                    void SetTrialDescribeLogHours(const int64_t& _trialDescribeLogHours);

                    /**
                     * 判断参数 TrialDescribeLogHours 是否已赋值
                     * @return TrialDescribeLogHours 是否已赋值
                     * 
                     */
                    bool TrialDescribeLogHoursHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Audit status. ON - Audit is enabled, OFF - Audit is disabled.
                     */
                    std::string m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * Task status. Valid values: 0 - No task; 1 - Enabling audit; 2 - Disabling audit.
                     */
                    uint64_t m_auditTask;
                    bool m_auditTaskHasBeenSet;

                    /**
                     * Log retention period. Valid values:7 - One week;30 - One month;90 - Three months;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     */
                    uint64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * High-frequency storage period. Valid values:3 - 3 days;7 - One week;30 - One month;90 - Three months;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     */
                    uint64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                    /**
                     * Low-frequency storage period (in days). This equals the log retention period minus the high-frequency storage period.
                     */
                    uint64_t m_lowLogExpireDay;
                    bool m_lowLogExpireDayHasBeenSet;

                    /**
                     * Log storage volume (in GB).
                     */
                    double m_billingAmount;
                    bool m_billingAmountHasBeenSet;

                    /**
                     * High-frequency storage volume (in GB).
                     */
                    double m_highRealStorage;
                    bool m_highRealStorageHasBeenSet;

                    /**
                     * Low-frequency storage volume (in GB).
                     */
                    double m_lowRealStorage;
                    bool m_lowRealStorageHasBeenSet;

                    /**
                     * Whether full audit is enabled. true - Full audit.
                     */
                    bool m_auditAll;
                    bool m_auditAllHasBeenSet;

                    /**
                     * Time when the audit service was activated.
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * Related information about the instance.
                     */
                    AuditInstanceInfo m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                    /**
                     * Total storage volume (in GB).
                     */
                    double m_realStorage;
                    bool m_realStorageHasBeenSet;

                    /**
                     * Whether an audit policy is configured.
                     */
                    bool m_oldRule;
                    bool m_oldRuleHasBeenSet;

                    /**
                     * Rule template applied to the instance.
                     */
                    std::vector<std::string> m_ruleTemplateIds;
                    bool m_ruleTemplateIdsHasBeenSet;

                    /**
                     * Trial status.
                     */
                    std::string m_trialStatus;
                    bool m_trialStatusHasBeenSet;

                    /**
                     * Trial start time.
                     */
                    int64_t m_trialStartTime;
                    bool m_trialStartTimeHasBeenSet;

                    /**
                     * Trial duration.
                     */
                    int64_t m_trialDuration;
                    bool m_trialDurationHasBeenSet;

                    /**
                     * Trial end time.
                     */
                    int64_t m_trialCloseTime;
                    bool m_trialCloseTimeHasBeenSet;

                    /**
                     * Log query time limit during the trial period.
                     */
                    int64_t m_trialDescribeLogHours;
                    bool m_trialDescribeLogHoursHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEDBAUDITSTATUS_H_
