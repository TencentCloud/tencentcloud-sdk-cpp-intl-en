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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITINSTANCE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/AuditInstanceInfo.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Instance details
                */
                class AuditInstance : public AbstractModel
                {
                public:
                    AuditInstance();
                    ~AuditInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audit status. Valid values: `ON` (Enabled), `OFF` (Not enabled).
                     * @return AuditStatus Audit status. Valid values: `ON` (Enabled), `OFF` (Not enabled).
                     * 
                     */
                    std::string GetAuditStatus() const;

                    /**
                     * 设置Audit status. Valid values: `ON` (Enabled), `OFF` (Not enabled).
                     * @param _auditStatus Audit status. Valid values: `ON` (Enabled), `OFF` (Not enabled).
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
                     * 获取Audit log size. This parameter is only used for the free trial edition of Database Audit.
                     * @return BillingAmount Audit log size. This parameter is only used for the free trial edition of Database Audit.
                     * 
                     */
                    int64_t GetBillingAmount() const;

                    /**
                     * 设置Audit log size. This parameter is only used for the free trial edition of Database Audit.
                     * @param _billingAmount Audit log size. This parameter is only used for the free trial edition of Database Audit.
                     * 
                     */
                    void SetBillingAmount(const int64_t& _billingAmount);

                    /**
                     * 判断参数 BillingAmount 是否已赋值
                     * @return BillingAmount 是否已赋值
                     * 
                     */
                    bool BillingAmountHasBeenSet() const;

                    /**
                     * 获取Billing confirmation status. Valid values: `0` (Unconfirmed), `1` (Confirmed).
                     * @return BillingConfirmed Billing confirmation status. Valid values: `0` (Unconfirmed), `1` (Confirmed).
                     * 
                     */
                    int64_t GetBillingConfirmed() const;

                    /**
                     * 设置Billing confirmation status. Valid values: `0` (Unconfirmed), `1` (Confirmed).
                     * @param _billingConfirmed Billing confirmation status. Valid values: `0` (Unconfirmed), `1` (Confirmed).
                     * 
                     */
                    void SetBillingConfirmed(const int64_t& _billingConfirmed);

                    /**
                     * 判断参数 BillingConfirmed 是否已赋值
                     * @return BillingConfirmed 是否已赋值
                     * 
                     */
                    bool BillingConfirmedHasBeenSet() const;

                    /**
                     * 获取Infrequent access storage period
                     * @return ColdLogExpireDay Infrequent access storage period
                     * 
                     */
                    int64_t GetColdLogExpireDay() const;

                    /**
                     * 设置Infrequent access storage period
                     * @param _coldLogExpireDay Infrequent access storage period
                     * 
                     */
                    void SetColdLogExpireDay(const int64_t& _coldLogExpireDay);

                    /**
                     * 判断参数 ColdLogExpireDay 是否已赋值
                     * @return ColdLogExpireDay 是否已赋值
                     * 
                     */
                    bool ColdLogExpireDayHasBeenSet() const;

                    /**
                     * 获取Storage size of infrequently accessed logs in MB
                     * @return ColdLogSize Storage size of infrequently accessed logs in MB
                     * 
                     */
                    int64_t GetColdLogSize() const;

                    /**
                     * 设置Storage size of infrequently accessed logs in MB
                     * @param _coldLogSize Storage size of infrequently accessed logs in MB
                     * 
                     */
                    void SetColdLogSize(const int64_t& _coldLogSize);

                    /**
                     * 判断参数 ColdLogSize 是否已赋值
                     * @return ColdLogSize 是否已赋值
                     * 
                     */
                    bool ColdLogSizeHasBeenSet() const;

                    /**
                     * 获取Storage period of frequently accessed logs in days
                     * @return HotLogExpireDay Storage period of frequently accessed logs in days
                     * 
                     */
                    int64_t GetHotLogExpireDay() const;

                    /**
                     * 设置Storage period of frequently accessed logs in days
                     * @param _hotLogExpireDay Storage period of frequently accessed logs in days
                     * 
                     */
                    void SetHotLogExpireDay(const int64_t& _hotLogExpireDay);

                    /**
                     * 判断参数 HotLogExpireDay 是否已赋值
                     * @return HotLogExpireDay 是否已赋值
                     * 
                     */
                    bool HotLogExpireDayHasBeenSet() const;

                    /**
                     * 获取Storage size of frequently accessed logs in MB
                     * @return HotLogSize Storage size of frequently accessed logs in MB
                     * 
                     */
                    int64_t GetHotLogSize() const;

                    /**
                     * 设置Storage size of frequently accessed logs in MB
                     * @param _hotLogSize Storage size of frequently accessed logs in MB
                     * 
                     */
                    void SetHotLogSize(const int64_t& _hotLogSize);

                    /**
                     * 判断参数 HotLogSize 是否已赋值
                     * @return HotLogSize 是否已赋值
                     * 
                     */
                    bool HotLogSizeHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Log retention period in days, which is the sum of the frequent and infrequent access storage periods.
                     * @return LogExpireDay Log retention period in days, which is the sum of the frequent and infrequent access storage periods.
                     * 
                     */
                    int64_t GetLogExpireDay() const;

                    /**
                     * 设置Log retention period in days, which is the sum of the frequent and infrequent access storage periods.
                     * @param _logExpireDay Log retention period in days, which is the sum of the frequent and infrequent access storage periods.
                     * 
                     */
                    void SetLogExpireDay(const int64_t& _logExpireDay);

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取Instance creation time
                     * @return CreateTime Instance creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Instance creation time
                     * @param _createTime Instance creation time
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
                     * 获取Instance details
                     * @return InstanceInfo Instance details
                     * 
                     */
                    AuditInstanceInfo GetInstanceInfo() const;

                    /**
                     * 设置Instance details
                     * @param _instanceInfo Instance details
                     * 
                     */
                    void SetInstanceInfo(const AuditInstanceInfo& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                private:

                    /**
                     * Audit status. Valid values: `ON` (Enabled), `OFF` (Not enabled).
                     */
                    std::string m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * Audit log size. This parameter is only used for the free trial edition of Database Audit.
                     */
                    int64_t m_billingAmount;
                    bool m_billingAmountHasBeenSet;

                    /**
                     * Billing confirmation status. Valid values: `0` (Unconfirmed), `1` (Confirmed).
                     */
                    int64_t m_billingConfirmed;
                    bool m_billingConfirmedHasBeenSet;

                    /**
                     * Infrequent access storage period
                     */
                    int64_t m_coldLogExpireDay;
                    bool m_coldLogExpireDayHasBeenSet;

                    /**
                     * Storage size of infrequently accessed logs in MB
                     */
                    int64_t m_coldLogSize;
                    bool m_coldLogSizeHasBeenSet;

                    /**
                     * Storage period of frequently accessed logs in days
                     */
                    int64_t m_hotLogExpireDay;
                    bool m_hotLogExpireDayHasBeenSet;

                    /**
                     * Storage size of frequently accessed logs in MB
                     */
                    int64_t m_hotLogSize;
                    bool m_hotLogSizeHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Log retention period in days, which is the sum of the frequent and infrequent access storage periods.
                     */
                    int64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * Instance creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Instance details
                     */
                    AuditInstanceInfo m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITINSTANCE_H_
