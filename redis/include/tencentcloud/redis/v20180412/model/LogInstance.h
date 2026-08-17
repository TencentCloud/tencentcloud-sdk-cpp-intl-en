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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_LOGINSTANCE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_LOGINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/DeliverSummary.h>
#include <tencentcloud/redis/v20180412/model/InstanceInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Instance
                */
                class LogInstance : public AbstractModel
                {
                public:
                    LogInstance();
                    ~LogInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
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
                     * 获取<p>Log status, create: creating; normal: enabled; close: turning off.</p>
                     * @return Status <p>Log status, create: creating; normal: enabled; close: turning off.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Log status, create: creating; normal: enabled; close: turning off.</p>
                     * @param _status <p>Log status, create: creating; normal: enabled; close: turning off.</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Is it possible to switch log query - Value: yes - allowed, no - not allowed. This parameter mainly controls migration of existing logs to the log platform for query usage. Only when the status is yes can you call the log API.</p>
                     * @return EnableQuery <p>Is it possible to switch log query - Value: yes - allowed, no - not allowed. This parameter mainly controls migration of existing logs to the log platform for query usage. Only when the status is yes can you call the log API.</p>
                     * 
                     */
                    std::string GetEnableQuery() const;

                    /**
                     * 设置<p>Is it possible to switch log query - Value: yes - allowed, no - not allowed. This parameter mainly controls migration of existing logs to the log platform for query usage. Only when the status is yes can you call the log API.</p>
                     * @param _enableQuery <p>Is it possible to switch log query - Value: yes - allowed, no - not allowed. This parameter mainly controls migration of existing logs to the log platform for query usage. Only when the status is yes can you call the log API.</p>
                     * 
                     */
                    void SetEnableQuery(const std::string& _enableQuery);

                    /**
                     * 判断参数 EnableQuery 是否已赋值
                     * @return EnableQuery 是否已赋值
                     * 
                     */
                    bool EnableQueryHasBeenSet() const;

                    /**
                     * 获取<p>Start time</p>
                     * @return CreateAt <p>Start time</p>
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置<p>Start time</p>
                     * @param _createAt <p>Start time</p>
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
                     * 获取<p>High frequency storage days</p>
                     * @return HighLogExpireDay <p>High frequency storage days</p>
                     * 
                     */
                    int64_t GetHighLogExpireDay() const;

                    /**
                     * 设置<p>High frequency storage days</p>
                     * @param _highLogExpireDay <p>High frequency storage days</p>
                     * 
                     */
                    void SetHighLogExpireDay(const int64_t& _highLogExpireDay);

                    /**
                     * 判断参数 HighLogExpireDay 是否已赋值
                     * @return HighLogExpireDay 是否已赋值
                     * 
                     */
                    bool HighLogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>Infrequent storage days</p>
                     * @return LowLogExpireDay <p>Infrequent storage days</p>
                     * 
                     */
                    int64_t GetLowLogExpireDay() const;

                    /**
                     * 设置<p>Infrequent storage days</p>
                     * @param _lowLogExpireDay <p>Infrequent storage days</p>
                     * 
                     */
                    void SetLowLogExpireDay(const int64_t& _lowLogExpireDay);

                    /**
                     * 判断参数 LowLogExpireDay 是否已赋值
                     * @return LowLogExpireDay 是否已赋值
                     * 
                     */
                    bool LowLogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>Total storage duration</p>
                     * @return LogExpireDay <p>Total storage duration</p>
                     * 
                     */
                    int64_t GetLogExpireDay() const;

                    /**
                     * 设置<p>Total storage duration</p>
                     * @param _logExpireDay <p>Total storage duration</p>
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
                     * 获取<p>High-frequency storage volume (in MB)</p>
                     * @return HighStorage <p>High-frequency storage volume (in MB)</p>
                     * 
                     */
                    double GetHighStorage() const;

                    /**
                     * 设置<p>High-frequency storage volume (in MB)</p>
                     * @param _highStorage <p>High-frequency storage volume (in MB)</p>
                     * 
                     */
                    void SetHighStorage(const double& _highStorage);

                    /**
                     * 判断参数 HighStorage 是否已赋值
                     * @return HighStorage 是否已赋值
                     * 
                     */
                    bool HighStorageHasBeenSet() const;

                    /**
                     * 获取<p>Infrequent access storage, unit: MB</p>
                     * @return LowStorage <p>Infrequent access storage, unit: MB</p>
                     * 
                     */
                    double GetLowStorage() const;

                    /**
                     * 设置<p>Infrequent access storage, unit: MB</p>
                     * @param _lowStorage <p>Infrequent access storage, unit: MB</p>
                     * 
                     */
                    void SetLowStorage(const double& _lowStorage);

                    /**
                     * 判断参数 LowStorage 是否已赋值
                     * @return LowStorage 是否已赋值
                     * 
                     */
                    bool LowStorageHasBeenSet() const;

                    /**
                     * 获取<p>Total storage</p>
                     * @return LogStorage <p>Total storage</p>
                     * 
                     */
                    double GetLogStorage() const;

                    /**
                     * 设置<p>Total storage</p>
                     * @param _logStorage <p>Total storage</p>
                     * 
                     */
                    void SetLogStorage(const double& _logStorage);

                    /**
                     * 判断参数 LogStorage 是否已赋值
                     * @return LogStorage 是否已赋值
                     * 
                     */
                    bool LogStorageHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable delivery: ON, OFF</p>
                     * @return Deliver <p>Whether to enable delivery: ON, OFF</p>
                     * 
                     */
                    std::string GetDeliver() const;

                    /**
                     * 设置<p>Whether to enable delivery: ON, OFF</p>
                     * @param _deliver <p>Whether to enable delivery: ON, OFF</p>
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
                     * 获取<p>Log shipping information</p>
                     * @return DeliverSummary <p>Log shipping information</p>
                     * 
                     */
                    std::vector<DeliverSummary> GetDeliverSummary() const;

                    /**
                     * 设置<p>Log shipping information</p>
                     * @param _deliverSummary <p>Log shipping information</p>
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
                     * 获取<p>Instance-related information on the business side varies according to business and returns different information.</p>
                     * @return InstanceInfo <p>Instance-related information on the business side varies according to business and returns different information.</p>
                     * 
                     */
                    InstanceInfo GetInstanceInfo() const;

                    /**
                     * 设置<p>Instance-related information on the business side varies according to business and returns different information.</p>
                     * @param _instanceInfo <p>Instance-related information on the business side varies according to business and returns different information.</p>
                     * 
                     */
                    void SetInstanceInfo(const InstanceInfo& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                    /**
                     * 获取<p>Audit sub-type.</p>
                     * @return LogSubType <p>Audit sub-type.</p>
                     * 
                     */
                    std::string GetLogSubType() const;

                    /**
                     * 设置<p>Audit sub-type.</p>
                     * @param _logSubType <p>Audit sub-type.</p>
                     * 
                     */
                    void SetLogSubType(const std::string& _logSubType);

                    /**
                     * 判断参数 LogSubType 是否已赋值
                     * @return LogSubType 是否已赋值
                     * 
                     */
                    bool LogSubTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Log status, create: creating; normal: enabled; close: turning off.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Is it possible to switch log query - Value: yes - allowed, no - not allowed. This parameter mainly controls migration of existing logs to the log platform for query usage. Only when the status is yes can you call the log API.</p>
                     */
                    std::string m_enableQuery;
                    bool m_enableQueryHasBeenSet;

                    /**
                     * <p>Start time</p>
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * <p>High frequency storage days</p>
                     */
                    int64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                    /**
                     * <p>Infrequent storage days</p>
                     */
                    int64_t m_lowLogExpireDay;
                    bool m_lowLogExpireDayHasBeenSet;

                    /**
                     * <p>Total storage duration</p>
                     */
                    int64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * <p>High-frequency storage volume (in MB)</p>
                     */
                    double m_highStorage;
                    bool m_highStorageHasBeenSet;

                    /**
                     * <p>Infrequent access storage, unit: MB</p>
                     */
                    double m_lowStorage;
                    bool m_lowStorageHasBeenSet;

                    /**
                     * <p>Total storage</p>
                     */
                    double m_logStorage;
                    bool m_logStorageHasBeenSet;

                    /**
                     * <p>Whether to enable delivery: ON, OFF</p>
                     */
                    std::string m_deliver;
                    bool m_deliverHasBeenSet;

                    /**
                     * <p>Log shipping information</p>
                     */
                    std::vector<DeliverSummary> m_deliverSummary;
                    bool m_deliverSummaryHasBeenSet;

                    /**
                     * <p>Instance-related information on the business side varies according to business and returns different information.</p>
                     */
                    InstanceInfo m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                    /**
                     * <p>Audit sub-type.</p>
                     */
                    std::string m_logSubType;
                    bool m_logSubTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_LOGINSTANCE_H_
