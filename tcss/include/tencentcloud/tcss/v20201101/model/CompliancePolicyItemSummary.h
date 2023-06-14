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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPOLICYITEMSUMMARY_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPOLICYITEMSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Aggregated information of a check item
                */
                class CompliancePolicyItemSummary : public AbstractModel
                {
                public:
                    CompliancePolicyItemSummary();
                    ~CompliancePolicyItemSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of the customer check item
                     * @return CustomerPolicyItemId Unique ID of the customer check item
                     * 
                     */
                    uint64_t GetCustomerPolicyItemId() const;

                    /**
                     * 设置Unique ID of the customer check item
                     * @param _customerPolicyItemId Unique ID of the customer check item
                     * 
                     */
                    void SetCustomerPolicyItemId(const uint64_t& _customerPolicyItemId);

                    /**
                     * 判断参数 CustomerPolicyItemId 是否已赋值
                     * @return CustomerPolicyItemId 是否已赋值
                     * 
                     */
                    bool CustomerPolicyItemIdHasBeenSet() const;

                    /**
                     * 获取Original ID of the check item
                     * @return BasePolicyItemId Original ID of the check item
                     * 
                     */
                    uint64_t GetBasePolicyItemId() const;

                    /**
                     * 设置Original ID of the check item
                     * @param _basePolicyItemId Original ID of the check item
                     * 
                     */
                    void SetBasePolicyItemId(const uint64_t& _basePolicyItemId);

                    /**
                     * 判断参数 BasePolicyItemId 是否已赋值
                     * @return BasePolicyItemId 是否已赋值
                     * 
                     */
                    bool BasePolicyItemIdHasBeenSet() const;

                    /**
                     * 获取Check item name
                     * @return Name Check item name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Check item name
                     * @param _name Check item name
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
                     * 获取Category of the check item, which is an enumerated string.
                     * @return Category Category of the check item, which is an enumerated string.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Category of the check item, which is an enumerated string.
                     * @param _category Category of the check item, which is an enumerated string.
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Compliance standard
                     * @return BenchmarkStandardName Compliance standard
                     * 
                     */
                    std::string GetBenchmarkStandardName() const;

                    /**
                     * 设置Compliance standard
                     * @param _benchmarkStandardName Compliance standard
                     * 
                     */
                    void SetBenchmarkStandardName(const std::string& _benchmarkStandardName);

                    /**
                     * 判断参数 BenchmarkStandardName 是否已赋值
                     * @return BenchmarkStandardName 是否已赋值
                     * 
                     */
                    bool BenchmarkStandardNameHasBeenSet() const;

                    /**
                     * 获取Severity. Valid values: `RISK_CRITICAL`, `RISK_HIGH`, `RISK_MEDIUM`, `RISK_LOW`, `RISK_NOTICE`.
                     * @return RiskLevel Severity. Valid values: `RISK_CRITICAL`, `RISK_HIGH`, `RISK_MEDIUM`, `RISK_LOW`, `RISK_NOTICE`.
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置Severity. Valid values: `RISK_CRITICAL`, `RISK_HIGH`, `RISK_MEDIUM`, `RISK_LOW`, `RISK_NOTICE`.
                     * @param _riskLevel Severity. Valid values: `RISK_CRITICAL`, `RISK_HIGH`, `RISK_MEDIUM`, `RISK_LOW`, `RISK_NOTICE`.
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Asset type of the check item
                     * @return AssetType Asset type of the check item
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type of the check item
                     * @param _assetType Asset type of the check item
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
                     * 获取Check status

`CHECK_INIT`: To be checked.

`CHECK_RUNNING`: Checking.

`CHECK_FINISHED`: Checked.

`CHECK_FAILED`: Check failed.
                     * @return CheckStatus Check status

`CHECK_INIT`: To be checked.

`CHECK_RUNNING`: Checking.

`CHECK_FINISHED`: Checked.

`CHECK_FAILED`: Check failed.
                     * 
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置Check status

`CHECK_INIT`: To be checked.

`CHECK_RUNNING`: Checking.

`CHECK_FINISHED`: Checked.

`CHECK_FAILED`: Check failed.
                     * @param _checkStatus Check status

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
                     * 获取Check result. Valid values: `RESULT_PASSED`: Passed.

`RESULT_FAILED`: Failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckResult Check result. Valid values: `RESULT_PASSED`: Passed.

`RESULT_FAILED`: Failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCheckResult() const;

                    /**
                     * 设置Check result. Valid values: `RESULT_PASSED`: Passed.

`RESULT_FAILED`: Failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _checkResult Check result. Valid values: `RESULT_PASSED`: Passed.

`RESULT_FAILED`: Failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCheckResult(const std::string& _checkResult);

                    /**
                     * 判断参数 CheckResult 是否已赋值
                     * @return CheckResult 是否已赋值
                     * 
                     */
                    bool CheckResultHasBeenSet() const;

                    /**
                     * 获取Number of assets that passed the check
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PassedAssetCount Number of assets that passed the check
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPassedAssetCount() const;

                    /**
                     * 设置Number of assets that passed the check
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _passedAssetCount Number of assets that passed the check
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailedAssetCount Number of assets that failed the check
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFailedAssetCount() const;

                    /**
                     * 设置Number of assets that failed the check
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _failedAssetCount Number of assets that failed the check
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Allowed item ID of the check item. If it exists and is not `0`, the check item is ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WhitelistId Allowed item ID of the check item. If it exists and is not `0`, the check item is ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWhitelistId() const;

                    /**
                     * 设置Allowed item ID of the check item. If it exists and is not `0`, the check item is ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _whitelistId Allowed item ID of the check item. If it exists and is not `0`, the check item is ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWhitelistId(const uint64_t& _whitelistId);

                    /**
                     * 判断参数 WhitelistId 是否已赋值
                     * @return WhitelistId 是否已赋值
                     * 
                     */
                    bool WhitelistIdHasBeenSet() const;

                    /**
                     * 获取Handling suggestion
                     * @return FixSuggestion Handling suggestion
                     * 
                     */
                    std::string GetFixSuggestion() const;

                    /**
                     * 设置Handling suggestion
                     * @param _fixSuggestion Handling suggestion
                     * 
                     */
                    void SetFixSuggestion(const std::string& _fixSuggestion);

                    /**
                     * 判断参数 FixSuggestion 是否已赋值
                     * @return FixSuggestion 是否已赋值
                     * 
                     */
                    bool FixSuggestionHasBeenSet() const;

                    /**
                     * 获取Compliance standard ID
                     * @return BenchmarkStandardId Compliance standard ID
                     * 
                     */
                    uint64_t GetBenchmarkStandardId() const;

                    /**
                     * 设置Compliance standard ID
                     * @param _benchmarkStandardId Compliance standard ID
                     * 
                     */
                    void SetBenchmarkStandardId(const uint64_t& _benchmarkStandardId);

                    /**
                     * 判断参数 BenchmarkStandardId 是否已赋值
                     * @return BenchmarkStandardId 是否已赋值
                     * 
                     */
                    bool BenchmarkStandardIdHasBeenSet() const;

                    /**
                     * 获取TCSS editions that support this check item
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ApplicableVersion TCSS editions that support this check item
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetApplicableVersion() const;

                    /**
                     * 设置TCSS editions that support this check item
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _applicableVersion TCSS editions that support this check item
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetApplicableVersion(const std::string& _applicableVersion);

                    /**
                     * 判断参数 ApplicableVersion 是否已赋值
                     * @return ApplicableVersion 是否已赋值
                     * 
                     */
                    bool ApplicableVersionHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the customer check item
                     */
                    uint64_t m_customerPolicyItemId;
                    bool m_customerPolicyItemIdHasBeenSet;

                    /**
                     * Original ID of the check item
                     */
                    uint64_t m_basePolicyItemId;
                    bool m_basePolicyItemIdHasBeenSet;

                    /**
                     * Check item name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Category of the check item, which is an enumerated string.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Compliance standard
                     */
                    std::string m_benchmarkStandardName;
                    bool m_benchmarkStandardNameHasBeenSet;

                    /**
                     * Severity. Valid values: `RISK_CRITICAL`, `RISK_HIGH`, `RISK_MEDIUM`, `RISK_LOW`, `RISK_NOTICE`.
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Asset type of the check item
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastCheckTime;
                    bool m_lastCheckTimeHasBeenSet;

                    /**
                     * Check status

`CHECK_INIT`: To be checked.

`CHECK_RUNNING`: Checking.

`CHECK_FINISHED`: Checked.

`CHECK_FAILED`: Check failed.
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * Check result. Valid values: `RESULT_PASSED`: Passed.

`RESULT_FAILED`: Failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_checkResult;
                    bool m_checkResultHasBeenSet;

                    /**
                     * Number of assets that passed the check
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_passedAssetCount;
                    bool m_passedAssetCountHasBeenSet;

                    /**
                     * Number of assets that failed the check
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_failedAssetCount;
                    bool m_failedAssetCountHasBeenSet;

                    /**
                     * Allowed item ID of the check item. If it exists and is not `0`, the check item is ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_whitelistId;
                    bool m_whitelistIdHasBeenSet;

                    /**
                     * Handling suggestion
                     */
                    std::string m_fixSuggestion;
                    bool m_fixSuggestionHasBeenSet;

                    /**
                     * Compliance standard ID
                     */
                    uint64_t m_benchmarkStandardId;
                    bool m_benchmarkStandardIdHasBeenSet;

                    /**
                     * TCSS editions that support this check item
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_applicableVersion;
                    bool m_applicableVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPOLICYITEMSUMMARY_H_
