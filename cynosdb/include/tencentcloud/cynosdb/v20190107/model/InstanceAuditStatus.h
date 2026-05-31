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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITSTATUS_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/AuditInstanceInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/DeliverSummary.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 
                */
                class InstanceAuditStatus : public AbstractModel
                {
                public:
                    InstanceAuditStatus();
                    ~InstanceAuditStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return InstanceId 
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置
                     * @param _instanceId 
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
                     * 获取
                     * @return AuditStatus 
                     * 
                     */
                    std::string GetAuditStatus() const;

                    /**
                     * 设置
                     * @param _auditStatus 
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
                     * 获取Specifies the log retention period.
                     * @return LogExpireDay Specifies the log retention period.
                     * 
                     */
                    uint64_t GetLogExpireDay() const;

                    /**
                     * 设置Specifies the log retention period.
                     * @param _logExpireDay Specifies the log retention period.
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
                     * 获取High-Frequency storage duration.
                     * @return HighLogExpireDay High-Frequency storage duration.
                     * 
                     */
                    uint64_t GetHighLogExpireDay() const;

                    /**
                     * 设置High-Frequency storage duration.
                     * @param _highLogExpireDay High-Frequency storage duration.
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
                     * 获取Specifies the duration of low-frequency storage.
                     * @return LowLogExpireDay Specifies the duration of low-frequency storage.
                     * 
                     */
                    uint64_t GetLowLogExpireDay() const;

                    /**
                     * 设置Specifies the duration of low-frequency storage.
                     * @param _lowLogExpireDay Specifies the duration of low-frequency storage.
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
                     * 获取Specifies the log storage volume.
                     * @return BillingAmount Specifies the log storage volume.
                     * 
                     */
                    double GetBillingAmount() const;

                    /**
                     * 设置Specifies the log storage volume.
                     * @param _billingAmount Specifies the log storage volume.
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
                     * 获取Specifies the high-frequency storage volume.
                     * @return HighRealStorage Specifies the high-frequency storage volume.
                     * 
                     */
                    double GetHighRealStorage() const;

                    /**
                     * 设置Specifies the high-frequency storage volume.
                     * @param _highRealStorage Specifies the high-frequency storage volume.
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
                     * 获取Specifies the infrequent access storage size.
                     * @return LowRealStorage Specifies the infrequent access storage size.
                     * 
                     */
                    double GetLowRealStorage() const;

                    /**
                     * 设置Specifies the infrequent access storage size.
                     * @param _lowRealStorage Specifies the infrequent access storage size.
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
                     * 获取Specifies whether it is a full audit. true - indicates a full audit.
                     * @return AuditAll Specifies whether it is a full audit. true - indicates a full audit.
                     * 
                     */
                    bool GetAuditAll() const;

                    /**
                     * 设置Specifies whether it is a full audit. true - indicates a full audit.
                     * @param _auditAll Specifies whether it is a full audit. true - indicates a full audit.
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
                     * 获取Specifies the audit activation time.
                     * @return CreateAt Specifies the audit activation time.
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置Specifies the audit activation time.
                     * @param _createAt Specifies the audit activation time.
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
                     * 获取Instance-Related information.
                     * @return InstanceInfo Instance-Related information.
                     * 
                     */
                    AuditInstanceInfo GetInstanceInfo() const;

                    /**
                     * 设置Instance-Related information.
                     * @param _instanceInfo Instance-Related information.
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
                     * 获取Specifies the total storage capacity.
                     * @return RealStorage Specifies the total storage capacity.
                     * 
                     */
                    double GetRealStorage() const;

                    /**
                     * 设置Specifies the total storage capacity.
                     * @param _realStorage Specifies the total storage capacity.
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
                     * 获取The rule template applied to the instance.
                     * @return RuleTemplateIds The rule template applied to the instance.
                     * 
                     */
                    std::vector<std::string> GetRuleTemplateIds() const;

                    /**
                     * 设置The rule template applied to the instance.
                     * @param _ruleTemplateIds The rule template applied to the instance.
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
                     * 获取Specifies whether to enable log delivery: ON, OFF.
                     * @return Deliver Specifies whether to enable log delivery: ON, OFF.
                     * 
                     */
                    std::string GetDeliver() const;

                    /**
                     * 设置Specifies whether to enable log delivery: ON, OFF.
                     * @param _deliver Specifies whether to enable log delivery: ON, OFF.
                     * 
                     */
                    void SetDeliver(const std::string& _deliver);

                    /**
                     * 判断参数 Deliver 是否已赋值
                     * @return Deliver 是否已赋值
                     * 
                     */
                    bool DeliverHasBeenSet() const;

                    /**
                     * 获取Log shipping type.
                     * @return DeliverSummary Log shipping type.
                     * 
                     */
                    std::vector<DeliverSummary> GetDeliverSummary() const;

                    /**
                     * 设置Log shipping type.
                     * @param _deliverSummary Log shipping type.
                     * 
                     */
                    void SetDeliverSummary(const std::vector<DeliverSummary>& _deliverSummary);

                    /**
                     * 判断参数 DeliverSummary 是否已赋值
                     * @return DeliverSummary 是否已赋值
                     * 
                     */
                    bool DeliverSummaryHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * Specifies the log retention period.
                     */
                    uint64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * High-Frequency storage duration.
                     */
                    uint64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                    /**
                     * Specifies the duration of low-frequency storage.
                     */
                    uint64_t m_lowLogExpireDay;
                    bool m_lowLogExpireDayHasBeenSet;

                    /**
                     * Specifies the log storage volume.
                     */
                    double m_billingAmount;
                    bool m_billingAmountHasBeenSet;

                    /**
                     * Specifies the high-frequency storage volume.
                     */
                    double m_highRealStorage;
                    bool m_highRealStorageHasBeenSet;

                    /**
                     * Specifies the infrequent access storage size.
                     */
                    double m_lowRealStorage;
                    bool m_lowRealStorageHasBeenSet;

                    /**
                     * Specifies whether it is a full audit. true - indicates a full audit.
                     */
                    bool m_auditAll;
                    bool m_auditAllHasBeenSet;

                    /**
                     * Specifies the audit activation time.
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * Instance-Related information.
                     */
                    AuditInstanceInfo m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                    /**
                     * Specifies the total storage capacity.
                     */
                    double m_realStorage;
                    bool m_realStorageHasBeenSet;

                    /**
                     * The rule template applied to the instance.
                     */
                    std::vector<std::string> m_ruleTemplateIds;
                    bool m_ruleTemplateIdsHasBeenSet;

                    /**
                     * Specifies whether to enable log delivery: ON, OFF.
                     */
                    std::string m_deliver;
                    bool m_deliverHasBeenSet;

                    /**
                     * Log shipping type.
                     */
                    std::vector<DeliverSummary> m_deliverSummary;
                    bool m_deliverSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITSTATUS_H_
