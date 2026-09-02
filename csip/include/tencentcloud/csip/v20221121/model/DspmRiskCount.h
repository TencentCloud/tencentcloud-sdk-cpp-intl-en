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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKCOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm risk statistics count
                */
                class DspmRiskCount : public AbstractModel
                {
                public:
                    DspmRiskCount();
                    ~DspmRiskCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of Pending Risks
                     * @return UnprocessedRisk Number of Pending Risks
                     * 
                     */
                    int64_t GetUnprocessedRisk() const;

                    /**
                     * 设置Number of Pending Risks
                     * @param _unprocessedRisk Number of Pending Risks
                     * 
                     */
                    void SetUnprocessedRisk(const int64_t& _unprocessedRisk);

                    /**
                     * 判断参数 UnprocessedRisk 是否已赋值
                     * @return UnprocessedRisk 是否已赋值
                     * 
                     */
                    bool UnprocessedRiskHasBeenSet() const;

                    /**
                     * 获取Configuration risk count
                     * @return ConfigurationRisk Configuration risk count
                     * @deprecated
                     */
                    int64_t GetConfigurationRisk() const;

                    /**
                     * 设置Configuration risk count
                     * @param _configurationRisk Configuration risk count
                     * @deprecated
                     */
                    void SetConfigurationRisk(const int64_t& _configurationRisk);

                    /**
                     * 判断参数 ConfigurationRisk 是否已赋值
                     * @return ConfigurationRisk 是否已赋值
                     * @deprecated
                     */
                    bool ConfigurationRiskHasBeenSet() const;

                    /**
                     * 获取Baseline risk count
                     * @return BaselineDeviation Baseline risk count
                     * @deprecated
                     */
                    int64_t GetBaselineDeviation() const;

                    /**
                     * 设置Baseline risk count
                     * @param _baselineDeviation Baseline risk count
                     * @deprecated
                     */
                    void SetBaselineDeviation(const int64_t& _baselineDeviation);

                    /**
                     * 判断参数 BaselineDeviation 是否已赋值
                     * @return BaselineDeviation 是否已赋值
                     * @deprecated
                     */
                    bool BaselineDeviationHasBeenSet() const;

                    /**
                     * 获取Number of leakage risks
                     * @return LeakDetection Number of leakage risks
                     * @deprecated
                     */
                    int64_t GetLeakDetection() const;

                    /**
                     * 设置Number of leakage risks
                     * @param _leakDetection Number of leakage risks
                     * @deprecated
                     */
                    void SetLeakDetection(const int64_t& _leakDetection);

                    /**
                     * 判断参数 LeakDetection 是否已赋值
                     * @return LeakDetection 是否已赋值
                     * @deprecated
                     */
                    bool LeakDetectionHasBeenSet() const;

                    /**
                     * 获取Number of SQL abnormal behavior risks
                     * @return SQLBehaviorAnomaly Number of SQL abnormal behavior risks
                     * 
                     */
                    int64_t GetSQLBehaviorAnomaly() const;

                    /**
                     * 设置Number of SQL abnormal behavior risks
                     * @param _sQLBehaviorAnomaly Number of SQL abnormal behavior risks
                     * 
                     */
                    void SetSQLBehaviorAnomaly(const int64_t& _sQLBehaviorAnomaly);

                    /**
                     * 判断参数 SQLBehaviorAnomaly 是否已赋值
                     * @return SQLBehaviorAnomaly 是否已赋值
                     * 
                     */
                    bool SQLBehaviorAnomalyHasBeenSet() const;

                    /**
                     * 获取Number of permission exception risks
                     * @return PermissionAnomaly Number of permission exception risks
                     * 
                     */
                    int64_t GetPermissionAnomaly() const;

                    /**
                     * 设置Number of permission exception risks
                     * @param _permissionAnomaly Number of permission exception risks
                     * 
                     */
                    void SetPermissionAnomaly(const int64_t& _permissionAnomaly);

                    /**
                     * 判断参数 PermissionAnomaly 是否已赋值
                     * @return PermissionAnomaly 是否已赋值
                     * 
                     */
                    bool PermissionAnomalyHasBeenSet() const;

                    /**
                     * 获取Number of login behavior anomaly risks
                     * @return LoginBehaviorAnomaly Number of login behavior anomaly risks
                     * 
                     */
                    int64_t GetLoginBehaviorAnomaly() const;

                    /**
                     * 设置Number of login behavior anomaly risks
                     * @param _loginBehaviorAnomaly Number of login behavior anomaly risks
                     * 
                     */
                    void SetLoginBehaviorAnomaly(const int64_t& _loginBehaviorAnomaly);

                    /**
                     * 判断参数 LoginBehaviorAnomaly 是否已赋值
                     * @return LoginBehaviorAnomaly 是否已赋值
                     * 
                     */
                    bool LoginBehaviorAnomalyHasBeenSet() const;

                    /**
                     * 获取Number of attack surface risks
                     * @return AttackSurfaceRisk Number of attack surface risks
                     * 
                     */
                    int64_t GetAttackSurfaceRisk() const;

                    /**
                     * 设置Number of attack surface risks
                     * @param _attackSurfaceRisk Number of attack surface risks
                     * 
                     */
                    void SetAttackSurfaceRisk(const int64_t& _attackSurfaceRisk);

                    /**
                     * 判断参数 AttackSurfaceRisk 是否已赋值
                     * @return AttackSurfaceRisk 是否已赋值
                     * 
                     */
                    bool AttackSurfaceRiskHasBeenSet() const;

                    /**
                     * 获取Number of sensitive operations on the account
                     * @return AccountSensitiveOperation Number of sensitive operations on the account
                     * 
                     */
                    int64_t GetAccountSensitiveOperation() const;

                    /**
                     * 设置Number of sensitive operations on the account
                     * @param _accountSensitiveOperation Number of sensitive operations on the account
                     * 
                     */
                    void SetAccountSensitiveOperation(const int64_t& _accountSensitiveOperation);

                    /**
                     * 判断参数 AccountSensitiveOperation 是否已赋值
                     * @return AccountSensitiveOperation 是否已赋值
                     * 
                     */
                    bool AccountSensitiveOperationHasBeenSet() const;

                    /**
                     * 获取Pending alarm count
                     * @return UnprocessedAlarm Pending alarm count
                     * 
                     */
                    int64_t GetUnprocessedAlarm() const;

                    /**
                     * 设置Pending alarm count
                     * @param _unprocessedAlarm Pending alarm count
                     * 
                     */
                    void SetUnprocessedAlarm(const int64_t& _unprocessedAlarm);

                    /**
                     * 判断参数 UnprocessedAlarm 是否已赋值
                     * @return UnprocessedAlarm 是否已赋值
                     * 
                     */
                    bool UnprocessedAlarmHasBeenSet() const;

                    /**
                     * 获取Newly-added event alarm
                     * @return NumOfNewAlarmEvent Newly-added event alarm
                     * 
                     */
                    int64_t GetNumOfNewAlarmEvent() const;

                    /**
                     * 设置Newly-added event alarm
                     * @param _numOfNewAlarmEvent Newly-added event alarm
                     * 
                     */
                    void SetNumOfNewAlarmEvent(const int64_t& _numOfNewAlarmEvent);

                    /**
                     * 判断参数 NumOfNewAlarmEvent 是否已赋值
                     * @return NumOfNewAlarmEvent 是否已赋值
                     * 
                     */
                    bool NumOfNewAlarmEventHasBeenSet() const;

                    /**
                     * 获取Newly-added configuration risk
                     * @return NumOfNewConfigRisk Newly-added configuration risk
                     * 
                     */
                    int64_t GetNumOfNewConfigRisk() const;

                    /**
                     * 设置Newly-added configuration risk
                     * @param _numOfNewConfigRisk Newly-added configuration risk
                     * 
                     */
                    void SetNumOfNewConfigRisk(const int64_t& _numOfNewConfigRisk);

                    /**
                     * 判断参数 NumOfNewConfigRisk 是否已赋值
                     * @return NumOfNewConfigRisk 是否已赋值
                     * 
                     */
                    bool NumOfNewConfigRiskHasBeenSet() const;

                private:

                    /**
                     * Number of Pending Risks
                     */
                    int64_t m_unprocessedRisk;
                    bool m_unprocessedRiskHasBeenSet;

                    /**
                     * Configuration risk count
                     */
                    int64_t m_configurationRisk;
                    bool m_configurationRiskHasBeenSet;

                    /**
                     * Baseline risk count
                     */
                    int64_t m_baselineDeviation;
                    bool m_baselineDeviationHasBeenSet;

                    /**
                     * Number of leakage risks
                     */
                    int64_t m_leakDetection;
                    bool m_leakDetectionHasBeenSet;

                    /**
                     * Number of SQL abnormal behavior risks
                     */
                    int64_t m_sQLBehaviorAnomaly;
                    bool m_sQLBehaviorAnomalyHasBeenSet;

                    /**
                     * Number of permission exception risks
                     */
                    int64_t m_permissionAnomaly;
                    bool m_permissionAnomalyHasBeenSet;

                    /**
                     * Number of login behavior anomaly risks
                     */
                    int64_t m_loginBehaviorAnomaly;
                    bool m_loginBehaviorAnomalyHasBeenSet;

                    /**
                     * Number of attack surface risks
                     */
                    int64_t m_attackSurfaceRisk;
                    bool m_attackSurfaceRiskHasBeenSet;

                    /**
                     * Number of sensitive operations on the account
                     */
                    int64_t m_accountSensitiveOperation;
                    bool m_accountSensitiveOperationHasBeenSet;

                    /**
                     * Pending alarm count
                     */
                    int64_t m_unprocessedAlarm;
                    bool m_unprocessedAlarmHasBeenSet;

                    /**
                     * Newly-added event alarm
                     */
                    int64_t m_numOfNewAlarmEvent;
                    bool m_numOfNewAlarmEventHasBeenSet;

                    /**
                     * Newly-added configuration risk
                     */
                    int64_t m_numOfNewConfigRisk;
                    bool m_numOfNewConfigRiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKCOUNT_H_
