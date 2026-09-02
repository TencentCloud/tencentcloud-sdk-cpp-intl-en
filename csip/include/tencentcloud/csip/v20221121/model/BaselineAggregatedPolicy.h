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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDPOLICY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineRiskLevelStatistic.h>
#include <tencentcloud/csip/v20221121/model/BaselineAggregatedCategory.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Baseline policy aggregation results, for summary display of the current scan pass/fail status by policy dimension.
                */
                class BaselineAggregatedPolicy : public AbstractModel
                {
                public:
                    BaselineAggregatedPolicy();
                    ~BaselineAggregatedPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Parent category ID of the system policy (only for aggregation when PolicyType=SYSTEM; 0 for custom policy).</p>
                     * @return ParentCategoryID <p>Parent category ID of the system policy (only for aggregation when PolicyType=SYSTEM; 0 for custom policy).</p>
                     * 
                     */
                    uint64_t GetParentCategoryID() const;

                    /**
                     * 设置<p>Parent category ID of the system policy (only for aggregation when PolicyType=SYSTEM; 0 for custom policy).</p>
                     * @param _parentCategoryID <p>Parent category ID of the system policy (only for aggregation when PolicyType=SYSTEM; 0 for custom policy).</p>
                     * 
                     */
                    void SetParentCategoryID(const uint64_t& _parentCategoryID);

                    /**
                     * 判断参数 ParentCategoryID 是否已赋值
                     * @return ParentCategoryID 是否已赋值
                     * 
                     */
                    bool ParentCategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>List of baseline policy IDs involved in this aggregation.</p>
                     * @return PolicyID <p>List of baseline policy IDs involved in this aggregation.</p>
                     * 
                     */
                    std::vector<uint64_t> GetPolicyID() const;

                    /**
                     * 设置<p>List of baseline policy IDs involved in this aggregation.</p>
                     * @param _policyID <p>List of baseline policy IDs involved in this aggregation.</p>
                     * 
                     */
                    void SetPolicyID(const std::vector<uint64_t>& _policyID);

                    /**
                     * 判断参数 PolicyID 是否已赋值
                     * @return PolicyID 是否已赋值
                     * 
                     */
                    bool PolicyIDHasBeenSet() const;

                    /**
                     * 获取<p>Policy Name (custom policy is user input, and system policy is a built-in classification name).</p>
                     * @return Name <p>Policy Name (custom policy is user input, and system policy is a built-in classification name).</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Policy Name (custom policy is user input, and system policy is a built-in classification name).</p>
                     * @param _name <p>Policy Name (custom policy is user input, and system policy is a built-in classification name).</p>
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
                     * 获取<p>Policy description.</p>
                     * @return Description <p>Policy description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Policy description.</p>
                     * @param _description <p>Policy description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Number of detection items configured in the policy.</p>
                     * @return ConfItemCount <p>Number of detection items configured in the policy.</p>
                     * 
                     */
                    uint64_t GetConfItemCount() const;

                    /**
                     * 设置<p>Number of detection items configured in the policy.</p>
                     * @param _confItemCount <p>Number of detection items configured in the policy.</p>
                     * 
                     */
                    void SetConfItemCount(const uint64_t& _confItemCount);

                    /**
                     * 判断参数 ConfItemCount 是否已赋值
                     * @return ConfItemCount 是否已赋值
                     * 
                     */
                    bool ConfItemCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of detection items with a result of PASS under this policy.</p>
                     * @return PassItemCount <p>Number of detection items with a result of PASS under this policy.</p>
                     * 
                     */
                    uint64_t GetPassItemCount() const;

                    /**
                     * 设置<p>Number of detection items with a result of PASS under this policy.</p>
                     * @param _passItemCount <p>Number of detection items with a result of PASS under this policy.</p>
                     * 
                     */
                    void SetPassItemCount(const uint64_t& _passItemCount);

                    /**
                     * 判断参数 PassItemCount 是否已赋值
                     * @return PassItemCount 是否已赋值
                     * 
                     */
                    bool PassItemCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of detection items with result NOT_PASS under this policy.</p>
                     * @return NotPassItemCount <p>Number of detection items with result NOT_PASS under this policy.</p>
                     * 
                     */
                    uint64_t GetNotPassItemCount() const;

                    /**
                     * 设置<p>Number of detection items with result NOT_PASS under this policy.</p>
                     * @param _notPassItemCount <p>Number of detection items with result NOT_PASS under this policy.</p>
                     * 
                     */
                    void SetNotPassItemCount(const uint64_t& _notPassItemCount);

                    /**
                     * 判断参数 NotPassItemCount 是否已赋值
                     * @return NotPassItemCount 是否已赋值
                     * 
                     */
                    bool NotPassItemCountHasBeenSet() const;

                    /**
                     * 获取<p>Distribution statistics of detection failed items by risk level (LOW/MEDIUM/HIGH/CRITICAL).</p>
                     * @return NotPassItemRiskLevelStatistic <p>Distribution statistics of detection failed items by risk level (LOW/MEDIUM/HIGH/CRITICAL).</p>
                     * 
                     */
                    std::vector<BaselineRiskLevelStatistic> GetNotPassItemRiskLevelStatistic() const;

                    /**
                     * 设置<p>Distribution statistics of detection failed items by risk level (LOW/MEDIUM/HIGH/CRITICAL).</p>
                     * @param _notPassItemRiskLevelStatistic <p>Distribution statistics of detection failed items by risk level (LOW/MEDIUM/HIGH/CRITICAL).</p>
                     * 
                     */
                    void SetNotPassItemRiskLevelStatistic(const std::vector<BaselineRiskLevelStatistic>& _notPassItemRiskLevelStatistic);

                    /**
                     * 判断参数 NotPassItemRiskLevelStatistic 是否已赋值
                     * @return NotPassItemRiskLevelStatistic 是否已赋值
                     * 
                     */
                    bool NotPassItemRiskLevelStatisticHasBeenSet() const;

                    /**
                     * 获取<p>Passing rate of the last scan of this policy, unit: percentage (0-100), rounded to two decimal places.</p>
                     * @return PassRate <p>Passing rate of the last scan of this policy, unit: percentage (0-100), rounded to two decimal places.</p>
                     * 
                     */
                    double GetPassRate() const;

                    /**
                     * 设置<p>Passing rate of the last scan of this policy, unit: percentage (0-100), rounded to two decimal places.</p>
                     * @param _passRate <p>Passing rate of the last scan of this policy, unit: percentage (0-100), rounded to two decimal places.</p>
                     * 
                     */
                    void SetPassRate(const double& _passRate);

                    /**
                     * 判断参数 PassRate 是否已赋值
                     * @return PassRate 是否已赋值
                     * 
                     */
                    bool PassRateHasBeenSet() const;

                    /**
                     * 获取<p>Scanning result statistics details of each subcategory under this policy.</p>
                     * @return CategoryStatistic <p>Scanning result statistics details of each subcategory under this policy.</p>
                     * 
                     */
                    std::vector<BaselineAggregatedCategory> GetCategoryStatistic() const;

                    /**
                     * 设置<p>Scanning result statistics details of each subcategory under this policy.</p>
                     * @param _categoryStatistic <p>Scanning result statistics details of each subcategory under this policy.</p>
                     * 
                     */
                    void SetCategoryStatistic(const std::vector<BaselineAggregatedCategory>& _categoryStatistic);

                    /**
                     * 判断参数 CategoryStatistic 是否已赋值
                     * @return CategoryStatistic 是否已赋值
                     * 
                     */
                    bool CategoryStatisticHasBeenSet() const;

                    /**
                     * 获取<p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     * @return PolicyType <p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置<p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     * @param _policyType <p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取<p>Detect asset major category, case-sensitive host baseline and container cluster baseline. Parameter values:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     * @return CheckAssetType <p>Detect asset major category, case-sensitive host baseline and container cluster baseline. Parameter values:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     * 
                     */
                    std::string GetCheckAssetType() const;

                    /**
                     * 设置<p>Detect asset major category, case-sensitive host baseline and container cluster baseline. Parameter values:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     * @param _checkAssetType <p>Detect asset major category, case-sensitive host baseline and container cluster baseline. Parameter values:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     * 
                     */
                    void SetCheckAssetType(const std::string& _checkAssetType);

                    /**
                     * 判断参数 CheckAssetType 是否已赋值
                     * @return CheckAssetType 是否已赋值
                     * 
                     */
                    bool CheckAssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether the baseline category has been scanned</p>
                     * @return Scanned <p>Whether the baseline category has been scanned</p>
                     * 
                     */
                    bool GetScanned() const;

                    /**
                     * 设置<p>Whether the baseline category has been scanned</p>
                     * @param _scanned <p>Whether the baseline category has been scanned</p>
                     * 
                     */
                    void SetScanned(const bool& _scanned);

                    /**
                     * 判断参数 Scanned 是否已赋值
                     * @return Scanned 是否已赋值
                     * 
                     */
                    bool ScannedHasBeenSet() const;

                private:

                    /**
                     * <p>Parent category ID of the system policy (only for aggregation when PolicyType=SYSTEM; 0 for custom policy).</p>
                     */
                    uint64_t m_parentCategoryID;
                    bool m_parentCategoryIDHasBeenSet;

                    /**
                     * <p>List of baseline policy IDs involved in this aggregation.</p>
                     */
                    std::vector<uint64_t> m_policyID;
                    bool m_policyIDHasBeenSet;

                    /**
                     * <p>Policy Name (custom policy is user input, and system policy is a built-in classification name).</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Policy description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Number of detection items configured in the policy.</p>
                     */
                    uint64_t m_confItemCount;
                    bool m_confItemCountHasBeenSet;

                    /**
                     * <p>Number of detection items with a result of PASS under this policy.</p>
                     */
                    uint64_t m_passItemCount;
                    bool m_passItemCountHasBeenSet;

                    /**
                     * <p>Number of detection items with result NOT_PASS under this policy.</p>
                     */
                    uint64_t m_notPassItemCount;
                    bool m_notPassItemCountHasBeenSet;

                    /**
                     * <p>Distribution statistics of detection failed items by risk level (LOW/MEDIUM/HIGH/CRITICAL).</p>
                     */
                    std::vector<BaselineRiskLevelStatistic> m_notPassItemRiskLevelStatistic;
                    bool m_notPassItemRiskLevelStatisticHasBeenSet;

                    /**
                     * <p>Passing rate of the last scan of this policy, unit: percentage (0-100), rounded to two decimal places.</p>
                     */
                    double m_passRate;
                    bool m_passRateHasBeenSet;

                    /**
                     * <p>Scanning result statistics details of each subcategory under this policy.</p>
                     */
                    std::vector<BaselineAggregatedCategory> m_categoryStatistic;
                    bool m_categoryStatisticHasBeenSet;

                    /**
                     * <p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * <p>Detect asset major category, case-sensitive host baseline and container cluster baseline. Parameter values:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     */
                    std::string m_checkAssetType;
                    bool m_checkAssetTypeHasBeenSet;

                    /**
                     * <p>Whether the baseline category has been scanned</p>
                     */
                    bool m_scanned;
                    bool m_scannedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDPOLICY_H_
