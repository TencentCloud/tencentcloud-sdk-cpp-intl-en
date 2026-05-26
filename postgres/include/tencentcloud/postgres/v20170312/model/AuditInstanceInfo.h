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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITINSTANCEINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DeliverSummary.h>
#include <tencentcloud/postgres/v20170312/model/LogInstanceInfo.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Audit instance info
                */
                class AuditInstanceInfo : public AbstractModel
                {
                public:
                    AuditInstanceInfo();
                    ~AuditInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Instance ID</p>
                     * @return InstanceId <p>Instance ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID</p>
                     * @param _instanceId <p>Instance ID</p>
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
                     * 获取<p>Enabled</p><p>Enumeration value:</p><ul><li>OFF: Off</li><li>ON: On</li></ul>
                     * @return AuditStatus <p>Enabled</p><p>Enumeration value:</p><ul><li>OFF: Off</li><li>ON: On</li></ul>
                     * 
                     */
                    std::string GetAuditStatus() const;

                    /**
                     * 设置<p>Enabled</p><p>Enumeration value:</p><ul><li>OFF: Off</li><li>ON: On</li></ul>
                     * @param _auditStatus <p>Enabled</p><p>Enumeration value:</p><ul><li>OFF: Off</li><li>ON: On</li></ul>
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
                     * 获取<p>Log storage validity period</p><p>Unit: day</p>
                     * @return LogExpireDay <p>Log storage validity period</p><p>Unit: day</p>
                     * 
                     */
                    uint64_t GetLogExpireDay() const;

                    /**
                     * 设置<p>Log storage validity period</p><p>Unit: day</p>
                     * @param _logExpireDay <p>Log storage validity period</p><p>Unit: day</p>
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
                     * 获取<p>Hot storage period</p><p>Unit: day</p>
                     * @return HotLogExpireDay <p>Hot storage period</p><p>Unit: day</p>
                     * 
                     */
                    uint64_t GetHotLogExpireDay() const;

                    /**
                     * 设置<p>Hot storage period</p><p>Unit: day</p>
                     * @param _hotLogExpireDay <p>Hot storage period</p><p>Unit: day</p>
                     * 
                     */
                    void SetHotLogExpireDay(const uint64_t& _hotLogExpireDay);

                    /**
                     * 判断参数 HotLogExpireDay 是否已赋值
                     * @return HotLogExpireDay 是否已赋值
                     * 
                     */
                    bool HotLogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>Cold storage period</p><p>Unit: day</p>
                     * @return ColdLogExpireDay <p>Cold storage period</p><p>Unit: day</p>
                     * 
                     */
                    uint64_t GetColdLogExpireDay() const;

                    /**
                     * 设置<p>Cold storage period</p><p>Unit: day</p>
                     * @param _coldLogExpireDay <p>Cold storage period</p><p>Unit: day</p>
                     * 
                     */
                    void SetColdLogExpireDay(const uint64_t& _coldLogExpireDay);

                    /**
                     * 判断参数 ColdLogExpireDay 是否已赋值
                     * @return ColdLogExpireDay 是否已赋值
                     * 
                     */
                    bool ColdLogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>Hot storage size</p><p>Unit: MB</p>
                     * @return HotLogSize <p>Hot storage size</p><p>Unit: MB</p>
                     * 
                     */
                    double GetHotLogSize() const;

                    /**
                     * 设置<p>Hot storage size</p><p>Unit: MB</p>
                     * @param _hotLogSize <p>Hot storage size</p><p>Unit: MB</p>
                     * 
                     */
                    void SetHotLogSize(const double& _hotLogSize);

                    /**
                     * 判断参数 HotLogSize 是否已赋值
                     * @return HotLogSize 是否已赋值
                     * 
                     */
                    bool HotLogSizeHasBeenSet() const;

                    /**
                     * 获取<p>Cold storage size</p><p>Unit: MB</p>
                     * @return ColdLogSize <p>Cold storage size</p><p>Unit: MB</p>
                     * 
                     */
                    double GetColdLogSize() const;

                    /**
                     * 设置<p>Cold storage size</p><p>Unit: MB</p>
                     * @param _coldLogSize <p>Cold storage size</p><p>Unit: MB</p>
                     * 
                     */
                    void SetColdLogSize(const double& _coldLogSize);

                    /**
                     * 判断参数 ColdLogSize 是否已赋值
                     * @return ColdLogSize 是否已赋值
                     * 
                     */
                    bool ColdLogSizeHasBeenSet() const;

                    /**
                     * 获取<p>Start time</p>
                     * @return CreateTime <p>Start time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Start time</p>
                     * @param _createTime <p>Start time</p>
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
                     * 获取<p>Delivery status</p>
                     * @return Deliver <p>Delivery status</p>
                     * 
                     */
                    std::string GetDeliver() const;

                    /**
                     * 设置<p>Delivery status</p>
                     * @param _deliver <p>Delivery status</p>
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
                     * 获取<p>Shipping information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeliverSummary <p>Shipping information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DeliverSummary> GetDeliverSummary() const;

                    /**
                     * 设置<p>Shipping information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _deliverSummary <p>Shipping information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeliverSummary(const std::vector<DeliverSummary>& _deliverSummary);

                    /**
                     * 判断参数 DeliverSummary 是否已赋值
                     * @return DeliverSummary 是否已赋值
                     * 
                     */
                    bool DeliverSummaryHasBeenSet() const;

                    /**
                     * 获取<p>Instance information</p>
                     * @return InstanceInfo <p>Instance information</p>
                     * 
                     */
                    LogInstanceInfo GetInstanceInfo() const;

                    /**
                     * 设置<p>Instance information</p>
                     * @param _instanceInfo <p>Instance information</p>
                     * 
                     */
                    void SetInstanceInfo(const LogInstanceInfo& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Enabled</p><p>Enumeration value:</p><ul><li>OFF: Off</li><li>ON: On</li></ul>
                     */
                    std::string m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * <p>Log storage validity period</p><p>Unit: day</p>
                     */
                    uint64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * <p>Hot storage period</p><p>Unit: day</p>
                     */
                    uint64_t m_hotLogExpireDay;
                    bool m_hotLogExpireDayHasBeenSet;

                    /**
                     * <p>Cold storage period</p><p>Unit: day</p>
                     */
                    uint64_t m_coldLogExpireDay;
                    bool m_coldLogExpireDayHasBeenSet;

                    /**
                     * <p>Hot storage size</p><p>Unit: MB</p>
                     */
                    double m_hotLogSize;
                    bool m_hotLogSizeHasBeenSet;

                    /**
                     * <p>Cold storage size</p><p>Unit: MB</p>
                     */
                    double m_coldLogSize;
                    bool m_coldLogSizeHasBeenSet;

                    /**
                     * <p>Start time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Delivery status</p>
                     */
                    std::string m_deliver;
                    bool m_deliverHasBeenSet;

                    /**
                     * <p>Shipping information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DeliverSummary> m_deliverSummary;
                    bool m_deliverSummaryHasBeenSet;

                    /**
                     * <p>Instance information</p>
                     */
                    LogInstanceInfo m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITINSTANCEINFO_H_
