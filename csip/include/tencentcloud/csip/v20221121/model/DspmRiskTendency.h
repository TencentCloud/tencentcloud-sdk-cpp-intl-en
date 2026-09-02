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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKTENDENCY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKTENDENCY_H_

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
                * Dspm risk trend.
                */
                class DspmRiskTendency : public AbstractModel
                {
                public:
                    DspmRiskTendency();
                    ~DspmRiskTendency() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Date
                     * @return Date Date
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Date
                     * @param _date Date
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Number of unmanaged accounts
                     * @return UncontrolledAccount Number of unmanaged accounts
                     * 
                     */
                    int64_t GetUncontrolledAccount() const;

                    /**
                     * 设置Number of unmanaged accounts
                     * @param _uncontrolledAccount Number of unmanaged accounts
                     * 
                     */
                    void SetUncontrolledAccount(const int64_t& _uncontrolledAccount);

                    /**
                     * 判断参数 UncontrolledAccount 是否已赋值
                     * @return UncontrolledAccount 是否已赋值
                     * 
                     */
                    bool UncontrolledAccountHasBeenSet() const;

                    /**
                     * 获取Number of configuration risks
                     * @return ConfigurationRisk Number of configuration risks
                     * @deprecated
                     */
                    int64_t GetConfigurationRisk() const;

                    /**
                     * 设置Number of configuration risks
                     * @param _configurationRisk Number of configuration risks
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
                     * @return BaselineRisk Baseline risk count
                     * @deprecated
                     */
                    int64_t GetBaselineRisk() const;

                    /**
                     * 设置Baseline risk count
                     * @param _baselineRisk Baseline risk count
                     * @deprecated
                     */
                    void SetBaselineRisk(const int64_t& _baselineRisk);

                    /**
                     * 判断参数 BaselineRisk 是否已赋值
                     * @return BaselineRisk 是否已赋值
                     * @deprecated
                     */
                    bool BaselineRiskHasBeenSet() const;

                    /**
                     * 获取Number of leakage risks
                     * @return LeakDetectionRisk Number of leakage risks
                     * @deprecated
                     */
                    int64_t GetLeakDetectionRisk() const;

                    /**
                     * 设置Number of leakage risks
                     * @param _leakDetectionRisk Number of leakage risks
                     * @deprecated
                     */
                    void SetLeakDetectionRisk(const int64_t& _leakDetectionRisk);

                    /**
                     * 判断参数 LeakDetectionRisk 是否已赋值
                     * @return LeakDetectionRisk 是否已赋值
                     * @deprecated
                     */
                    bool LeakDetectionRiskHasBeenSet() const;

                    /**
                     * 获取Number of SQL behavior anomaly risks
                     * @return SQLBehaviorAnomaly Number of SQL behavior anomaly risks
                     * 
                     */
                    int64_t GetSQLBehaviorAnomaly() const;

                    /**
                     * 设置Number of SQL behavior anomaly risks
                     * @param _sQLBehaviorAnomaly Number of SQL behavior anomaly risks
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
                     * 获取Number of permission abnormal risks
                     * @return PermissionAnomaly Number of permission abnormal risks
                     * 
                     */
                    int64_t GetPermissionAnomaly() const;

                    /**
                     * 设置Number of permission abnormal risks
                     * @param _permissionAnomaly Number of permission abnormal risks
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
                     * 获取Number of sensitive operations for the account
                     * @return AccountSensitiveOperation Number of sensitive operations for the account
                     * 
                     */
                    int64_t GetAccountSensitiveOperation() const;

                    /**
                     * 设置Number of sensitive operations for the account
                     * @param _accountSensitiveOperation Number of sensitive operations for the account
                     * 
                     */
                    void SetAccountSensitiveOperation(const int64_t& _accountSensitiveOperation);

                    /**
                     * 判断参数 AccountSensitiveOperation 是否已赋值
                     * @return AccountSensitiveOperation 是否已赋值
                     * 
                     */
                    bool AccountSensitiveOperationHasBeenSet() const;

                private:

                    /**
                     * Date
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Number of unmanaged accounts
                     */
                    int64_t m_uncontrolledAccount;
                    bool m_uncontrolledAccountHasBeenSet;

                    /**
                     * Number of configuration risks
                     */
                    int64_t m_configurationRisk;
                    bool m_configurationRiskHasBeenSet;

                    /**
                     * Baseline risk count
                     */
                    int64_t m_baselineRisk;
                    bool m_baselineRiskHasBeenSet;

                    /**
                     * Number of leakage risks
                     */
                    int64_t m_leakDetectionRisk;
                    bool m_leakDetectionRiskHasBeenSet;

                    /**
                     * Number of SQL behavior anomaly risks
                     */
                    int64_t m_sQLBehaviorAnomaly;
                    bool m_sQLBehaviorAnomalyHasBeenSet;

                    /**
                     * Number of permission abnormal risks
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
                     * Number of sensitive operations for the account
                     */
                    int64_t m_accountSensitiveOperation;
                    bool m_accountSensitiveOperationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKTENDENCY_H_
