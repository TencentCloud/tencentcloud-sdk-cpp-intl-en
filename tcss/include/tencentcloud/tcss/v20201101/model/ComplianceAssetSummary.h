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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETSUMMARY_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/CompliancePeriodTaskRule.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Asset overview
                */
                class ComplianceAssetSummary : public AbstractModel
                {
                public:
                    ComplianceAssetSummary();
                    ~ComplianceAssetSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Asset type
                     * @return AssetType Asset type
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type
                     * @param _assetType Asset type
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取Whether it is the first check. This parameter is used together with `CheckStatus`.
                     * @return IsCustomerFirstCheck Whether it is the first check. This parameter is used together with `CheckStatus`.
                     * 
                     */
                    bool GetIsCustomerFirstCheck() const;

                    /**
                     * 设置Whether it is the first check. This parameter is used together with `CheckStatus`.
                     * @param _isCustomerFirstCheck Whether it is the first check. This parameter is used together with `CheckStatus`.
                     * 
                     */
                    void SetIsCustomerFirstCheck(const bool& _isCustomerFirstCheck);

                    /**
                     * 判断参数 IsCustomerFirstCheck 是否已赋值
                     * @return IsCustomerFirstCheck 是否已赋值
                     * 
                     */
                    bool IsCustomerFirstCheckHasBeenSet() const;

                    /**
                     * 获取Check status

`CHECK_UNINIT`: Feature not enabled.

`CHECK_INIT`: To be checked.

`CHECK_RUNNING`: Checking.

`CHECK_FINISHED`: Checked.

`CHECK_FAILED`: Check failed.
                     * @return CheckStatus Check status

`CHECK_UNINIT`: Feature not enabled.

`CHECK_INIT`: To be checked.

`CHECK_RUNNING`: Checking.

`CHECK_FINISHED`: Checked.

`CHECK_FAILED`: Check failed.
                     * 
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置Check status

`CHECK_UNINIT`: Feature not enabled.

`CHECK_INIT`: To be checked.

`CHECK_RUNNING`: Checking.

`CHECK_FINISHED`: Checked.

`CHECK_FAILED`: Check failed.
                     * @param _checkStatus Check status

`CHECK_UNINIT`: Feature not enabled.

`CHECK_INIT`: To be checked.

`CHECK_RUNNING`: Checking.

`CHECK_FINISHED`: Checked.

`CHECK_FAILED`: Check failed.
                     * 
                     */
                    void SetCheckStatus(const std::string& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取Check progress. Value range: 0-100. This field is valid only if the check is running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckProgress Check progress. Value range: 0-100. This field is valid only if the check is running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetCheckProgress() const;

                    /**
                     * 设置Check progress. Value range: 0-100. This field is valid only if the check is running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _checkProgress Check progress. Value range: 0-100. This field is valid only if the check is running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCheckProgress(const double& _checkProgress);

                    /**
                     * 判断参数 CheckProgress 是否已赋值
                     * @return CheckProgress 是否已赋值
                     * 
                     */
                    bool CheckProgressHasBeenSet() const;

                    /**
                     * 获取Number of check items that the asset passed
                     * @return PassedPolicyItemCount Number of check items that the asset passed
                     * 
                     */
                    uint64_t GetPassedPolicyItemCount() const;

                    /**
                     * 设置Number of check items that the asset passed
                     * @param _passedPolicyItemCount Number of check items that the asset passed
                     * 
                     */
                    void SetPassedPolicyItemCount(const uint64_t& _passedPolicyItemCount);

                    /**
                     * 判断参数 PassedPolicyItemCount 是否已赋值
                     * @return PassedPolicyItemCount 是否已赋值
                     * 
                     */
                    bool PassedPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取Number of check items that the asset failed
                     * @return FailedPolicyItemCount Number of check items that the asset failed
                     * 
                     */
                    uint64_t GetFailedPolicyItemCount() const;

                    /**
                     * 设置Number of check items that the asset failed
                     * @param _failedPolicyItemCount Number of check items that the asset failed
                     * 
                     */
                    void SetFailedPolicyItemCount(const uint64_t& _failedPolicyItemCount);

                    /**
                     * 判断参数 FailedPolicyItemCount 是否已赋值
                     * @return FailedPolicyItemCount 是否已赋值
                     * 
                     */
                    bool FailedPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取Number of critical check items that the asset failed
                     * @return FailedCriticalPolicyItemCount Number of critical check items that the asset failed
                     * 
                     */
                    uint64_t GetFailedCriticalPolicyItemCount() const;

                    /**
                     * 设置Number of critical check items that the asset failed
                     * @param _failedCriticalPolicyItemCount Number of critical check items that the asset failed
                     * 
                     */
                    void SetFailedCriticalPolicyItemCount(const uint64_t& _failedCriticalPolicyItemCount);

                    /**
                     * 判断参数 FailedCriticalPolicyItemCount 是否已赋值
                     * @return FailedCriticalPolicyItemCount 是否已赋值
                     * 
                     */
                    bool FailedCriticalPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取Number of high-risk check items that the asset failed
                     * @return FailedHighRiskPolicyItemCount Number of high-risk check items that the asset failed
                     * 
                     */
                    uint64_t GetFailedHighRiskPolicyItemCount() const;

                    /**
                     * 设置Number of high-risk check items that the asset failed
                     * @param _failedHighRiskPolicyItemCount Number of high-risk check items that the asset failed
                     * 
                     */
                    void SetFailedHighRiskPolicyItemCount(const uint64_t& _failedHighRiskPolicyItemCount);

                    /**
                     * 判断参数 FailedHighRiskPolicyItemCount 是否已赋值
                     * @return FailedHighRiskPolicyItemCount 是否已赋值
                     * 
                     */
                    bool FailedHighRiskPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取Number of medium-risk check items that the asset failed
                     * @return FailedMediumRiskPolicyItemCount Number of medium-risk check items that the asset failed
                     * 
                     */
                    uint64_t GetFailedMediumRiskPolicyItemCount() const;

                    /**
                     * 设置Number of medium-risk check items that the asset failed
                     * @param _failedMediumRiskPolicyItemCount Number of medium-risk check items that the asset failed
                     * 
                     */
                    void SetFailedMediumRiskPolicyItemCount(const uint64_t& _failedMediumRiskPolicyItemCount);

                    /**
                     * 判断参数 FailedMediumRiskPolicyItemCount 是否已赋值
                     * @return FailedMediumRiskPolicyItemCount 是否已赋值
                     * 
                     */
                    bool FailedMediumRiskPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取Number of low-risk check items that the asset failed
                     * @return FailedLowRiskPolicyItemCount Number of low-risk check items that the asset failed
                     * 
                     */
                    uint64_t GetFailedLowRiskPolicyItemCount() const;

                    /**
                     * 设置Number of low-risk check items that the asset failed
                     * @param _failedLowRiskPolicyItemCount Number of low-risk check items that the asset failed
                     * 
                     */
                    void SetFailedLowRiskPolicyItemCount(const uint64_t& _failedLowRiskPolicyItemCount);

                    /**
                     * 判断参数 FailedLowRiskPolicyItemCount 是否已赋值
                     * @return FailedLowRiskPolicyItemCount 是否已赋值
                     * 
                     */
                    bool FailedLowRiskPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取Number of prompt check items of the asset
                     * @return NoticePolicyItemCount Number of prompt check items of the asset
                     * 
                     */
                    uint64_t GetNoticePolicyItemCount() const;

                    /**
                     * 设置Number of prompt check items of the asset
                     * @param _noticePolicyItemCount Number of prompt check items of the asset
                     * 
                     */
                    void SetNoticePolicyItemCount(const uint64_t& _noticePolicyItemCount);

                    /**
                     * 判断参数 NoticePolicyItemCount 是否已赋值
                     * @return NoticePolicyItemCount 是否已赋值
                     * 
                     */
                    bool NoticePolicyItemCountHasBeenSet() const;

                    /**
                     * 获取Number of assets that passed the check
                     * @return PassedAssetCount Number of assets that passed the check
                     * 
                     */
                    uint64_t GetPassedAssetCount() const;

                    /**
                     * 设置Number of assets that passed the check
                     * @param _passedAssetCount Number of assets that passed the check
                     * 
                     */
                    void SetPassedAssetCount(const uint64_t& _passedAssetCount);

                    /**
                     * 判断参数 PassedAssetCount 是否已赋值
                     * @return PassedAssetCount 是否已赋值
                     * 
                     */
                    bool PassedAssetCountHasBeenSet() const;

                    /**
                     * 获取Number of assets that failed the check
                     * @return FailedAssetCount Number of assets that failed the check
                     * 
                     */
                    uint64_t GetFailedAssetCount() const;

                    /**
                     * 设置Number of assets that failed the check
                     * @param _failedAssetCount Number of assets that failed the check
                     * 
                     */
                    void SetFailedAssetCount(const uint64_t& _failedAssetCount);

                    /**
                     * 判断参数 FailedAssetCount 是否已赋值
                     * @return FailedAssetCount 是否已赋值
                     * 
                     */
                    bool FailedAssetCountHasBeenSet() const;

                    /**
                     * 获取Asset compliance rate. Value range: 0-100.
                     * @return AssetPassedRate Asset compliance rate. Value range: 0-100.
                     * 
                     */
                    double GetAssetPassedRate() const;

                    /**
                     * 设置Asset compliance rate. Value range: 0-100.
                     * @param _assetPassedRate Asset compliance rate. Value range: 0-100.
                     * 
                     */
                    void SetAssetPassedRate(const double& _assetPassedRate);

                    /**
                     * 判断参数 AssetPassedRate 是否已赋值
                     * @return AssetPassedRate 是否已赋值
                     * 
                     */
                    bool AssetPassedRateHasBeenSet() const;

                    /**
                     * 获取Number of assets that failed the check
                     * @return ScanFailedAssetCount Number of assets that failed the check
                     * 
                     */
                    uint64_t GetScanFailedAssetCount() const;

                    /**
                     * 设置Number of assets that failed the check
                     * @param _scanFailedAssetCount Number of assets that failed the check
                     * 
                     */
                    void SetScanFailedAssetCount(const uint64_t& _scanFailedAssetCount);

                    /**
                     * 判断参数 ScanFailedAssetCount 是否已赋值
                     * @return ScanFailedAssetCount 是否已赋值
                     * 
                     */
                    bool ScanFailedAssetCountHasBeenSet() const;

                    /**
                     * 获取Last check duration in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckCostTime Last check duration in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetCheckCostTime() const;

                    /**
                     * 设置Last check duration in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _checkCostTime Last check duration in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCheckCostTime(const double& _checkCostTime);

                    /**
                     * 判断参数 CheckCostTime 是否已赋值
                     * @return CheckCostTime 是否已赋值
                     * 
                     */
                    bool CheckCostTimeHasBeenSet() const;

                    /**
                     * 获取Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastCheckTime Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastCheckTime() const;

                    /**
                     * 设置Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastCheckTime Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastCheckTime(const std::string& _lastCheckTime);

                    /**
                     * 判断参数 LastCheckTime 是否已赋值
                     * @return LastCheckTime 是否已赋值
                     * 
                     */
                    bool LastCheckTimeHasBeenSet() const;

                    /**
                     * 获取Scheduled check rule
                     * @return PeriodRule Scheduled check rule
                     * 
                     */
                    CompliancePeriodTaskRule GetPeriodRule() const;

                    /**
                     * 设置Scheduled check rule
                     * @param _periodRule Scheduled check rule
                     * 
                     */
                    void SetPeriodRule(const CompliancePeriodTaskRule& _periodRule);

                    /**
                     * 判断参数 PeriodRule 是否已赋值
                     * @return PeriodRule 是否已赋值
                     * 
                     */
                    bool PeriodRuleHasBeenSet() const;

                    /**
                     * 获取Total number of enabled check items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OpenPolicyItemCount Total number of enabled check items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetOpenPolicyItemCount() const;

                    /**
                     * 设置Total number of enabled check items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _openPolicyItemCount Total number of enabled check items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOpenPolicyItemCount(const uint64_t& _openPolicyItemCount);

                    /**
                     * 判断参数 OpenPolicyItemCount 是否已赋值
                     * @return OpenPolicyItemCount 是否已赋值
                     * 
                     */
                    bool OpenPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取Total number of ignored check items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IgnoredPolicyItemCount Total number of ignored check items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIgnoredPolicyItemCount() const;

                    /**
                     * 设置Total number of ignored check items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ignoredPolicyItemCount Total number of ignored check items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIgnoredPolicyItemCount(const uint64_t& _ignoredPolicyItemCount);

                    /**
                     * 判断参数 IgnoredPolicyItemCount 是否已赋值
                     * @return IgnoredPolicyItemCount 是否已赋值
                     * 
                     */
                    bool IgnoredPolicyItemCountHasBeenSet() const;

                private:

                    /**
                     * Asset type
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Whether it is the first check. This parameter is used together with `CheckStatus`.
                     */
                    bool m_isCustomerFirstCheck;
                    bool m_isCustomerFirstCheckHasBeenSet;

                    /**
                     * Check status

`CHECK_UNINIT`: Feature not enabled.

`CHECK_INIT`: To be checked.

`CHECK_RUNNING`: Checking.

`CHECK_FINISHED`: Checked.

`CHECK_FAILED`: Check failed.
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * Check progress. Value range: 0-100. This field is valid only if the check is running.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_checkProgress;
                    bool m_checkProgressHasBeenSet;

                    /**
                     * Number of check items that the asset passed
                     */
                    uint64_t m_passedPolicyItemCount;
                    bool m_passedPolicyItemCountHasBeenSet;

                    /**
                     * Number of check items that the asset failed
                     */
                    uint64_t m_failedPolicyItemCount;
                    bool m_failedPolicyItemCountHasBeenSet;

                    /**
                     * Number of critical check items that the asset failed
                     */
                    uint64_t m_failedCriticalPolicyItemCount;
                    bool m_failedCriticalPolicyItemCountHasBeenSet;

                    /**
                     * Number of high-risk check items that the asset failed
                     */
                    uint64_t m_failedHighRiskPolicyItemCount;
                    bool m_failedHighRiskPolicyItemCountHasBeenSet;

                    /**
                     * Number of medium-risk check items that the asset failed
                     */
                    uint64_t m_failedMediumRiskPolicyItemCount;
                    bool m_failedMediumRiskPolicyItemCountHasBeenSet;

                    /**
                     * Number of low-risk check items that the asset failed
                     */
                    uint64_t m_failedLowRiskPolicyItemCount;
                    bool m_failedLowRiskPolicyItemCountHasBeenSet;

                    /**
                     * Number of prompt check items of the asset
                     */
                    uint64_t m_noticePolicyItemCount;
                    bool m_noticePolicyItemCountHasBeenSet;

                    /**
                     * Number of assets that passed the check
                     */
                    uint64_t m_passedAssetCount;
                    bool m_passedAssetCountHasBeenSet;

                    /**
                     * Number of assets that failed the check
                     */
                    uint64_t m_failedAssetCount;
                    bool m_failedAssetCountHasBeenSet;

                    /**
                     * Asset compliance rate. Value range: 0-100.
                     */
                    double m_assetPassedRate;
                    bool m_assetPassedRateHasBeenSet;

                    /**
                     * Number of assets that failed the check
                     */
                    uint64_t m_scanFailedAssetCount;
                    bool m_scanFailedAssetCountHasBeenSet;

                    /**
                     * Last check duration in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_checkCostTime;
                    bool m_checkCostTimeHasBeenSet;

                    /**
                     * Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastCheckTime;
                    bool m_lastCheckTimeHasBeenSet;

                    /**
                     * Scheduled check rule
                     */
                    CompliancePeriodTaskRule m_periodRule;
                    bool m_periodRuleHasBeenSet;

                    /**
                     * Total number of enabled check items
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_openPolicyItemCount;
                    bool m_openPolicyItemCountHasBeenSet;

                    /**
                     * Total number of ignored check items
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ignoredPolicyItemCount;
                    bool m_ignoredPolicyItemCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETSUMMARY_H_
