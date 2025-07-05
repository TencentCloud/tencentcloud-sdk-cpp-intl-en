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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_STRATEGY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_STRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Baseline security user policy information
                */
                class Strategy : public AbstractModel
                {
                public:
                    Strategy();
                    ~Strategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StrategyName Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _strategyName Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StrategyId Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _strategyId Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Total number of baseline detection items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleCount Total number of baseline detection items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRuleCount() const;

                    /**
                     * 设置Total number of baseline detection items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleCount Total number of baseline detection items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleCount(const uint64_t& _ruleCount);

                    /**
                     * 判断参数 RuleCount 是否已赋值
                     * @return RuleCount 是否已赋值
                     * 
                     */
                    bool RuleCountHasBeenSet() const;

                    /**
                     * 获取Number of Hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostCount Number of Hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetHostCount() const;

                    /**
                     * 设置Number of Hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostCount Number of Hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostCount(const uint64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取Scan cycle
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanCycle Scan cycle
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetScanCycle() const;

                    /**
                     * 设置Scan cycle
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanCycle Scan cycle
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanCycle(const uint64_t& _scanCycle);

                    /**
                     * 判断参数 ScanCycle 是否已赋值
                     * @return ScanCycle 是否已赋值
                     * 
                     */
                    bool ScanCycleHasBeenSet() const;

                    /**
                     * 获取Scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanAt Scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScanAt() const;

                    /**
                     * 设置Scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanAt Scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanAt(const std::string& _scanAt);

                    /**
                     * 判断参数 ScanAt 是否已赋值
                     * @return ScanAt 是否已赋值
                     * 
                     */
                    bool ScanAtHasBeenSet() const;

                    /**
                     * 获取Available or not?
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enabled Available or not?
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEnabled() const;

                    /**
                     * 设置Available or not?
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enabled Available or not?
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnabled(const uint64_t& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Pass rate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PassRate Pass rate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPassRate() const;

                    /**
                     * 设置Pass rate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _passRate Pass rate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPassRate(const uint64_t& _passRate);

                    /**
                     * 判断参数 PassRate 是否已赋值
                     * @return PassRate 是否已赋值
                     * 
                     */
                    bool PassRateHasBeenSet() const;

                    /**
                     * 获取Baseline ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CategoryIds Baseline ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCategoryIds() const;

                    /**
                     * 设置Baseline ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _categoryIds Baseline ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCategoryIds(const std::string& _categoryIds);

                    /**
                     * 判断参数 CategoryIds 是否已赋值
                     * @return CategoryIds 是否已赋值
                     * 
                     */
                    bool CategoryIdsHasBeenSet() const;

                    /**
                     * 获取Whether a default policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsDefault Whether a default policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsDefault() const;

                    /**
                     * 设置Whether a default policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isDefault Whether a default policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsDefault(const uint64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Total number of baseline detection items
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                    /**
                     * Number of Hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * Scan cycle
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scanCycle;
                    bool m_scanCycleHasBeenSet;

                    /**
                     * Scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanAt;
                    bool m_scanAtHasBeenSet;

                    /**
                     * Available or not?
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Pass rate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_passRate;
                    bool m_passRateHasBeenSet;

                    /**
                     * Baseline ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_categoryIds;
                    bool m_categoryIdsHasBeenSet;

                    /**
                     * Whether a default policy
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_STRATEGY_H_
