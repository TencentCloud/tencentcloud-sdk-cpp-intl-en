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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RECONCILIATIONSTRATEGYINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RECONCILIATIONSTRATEGYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Offline integration reconciliation Alarm rule.
                */
                class ReconciliationStrategyInfo : public AbstractModel
                {
                public:
                    ReconciliationStrategyInfo();
                    ~ReconciliationStrategyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Offline Integration Task Reconciliation Alarms

reconciliationFailure: Alarm when offline reconciliation task fails

reconciliationOvertime: Alarm when offline reconciliation task runs overtime

reconciliationMismatch: Alarm when the number of mismatched records in reconciliation exceeds the threshold
                     * @return RuleType Offline Integration Task Reconciliation Alarms

reconciliationFailure: Alarm when offline reconciliation task fails

reconciliationOvertime: Alarm when offline reconciliation task runs overtime

reconciliationMismatch: Alarm when the number of mismatched records in reconciliation exceeds the threshold
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Offline Integration Task Reconciliation Alarms

reconciliationFailure: Alarm when offline reconciliation task fails

reconciliationOvertime: Alarm when offline reconciliation task runs overtime

reconciliationMismatch: Alarm when the number of mismatched records in reconciliation exceeds the threshold
                     * @param _ruleType Offline Integration Task Reconciliation Alarms

reconciliationFailure: Alarm when offline reconciliation task fails

reconciliationOvertime: Alarm when offline reconciliation task runs overtime

reconciliationMismatch: Alarm when the number of mismatched records in reconciliation exceeds the threshold
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Reconciliation Mismatch Threshold - Required when RuleType = reconciliationMismatch. Specifies the threshold for the number of mismatched records in reconciliation. No default value.
                     * @return MismatchCount Reconciliation Mismatch Threshold - Required when RuleType = reconciliationMismatch. Specifies the threshold for the number of mismatched records in reconciliation. No default value.
                     * 
                     */
                    uint64_t GetMismatchCount() const;

                    /**
                     * 设置Reconciliation Mismatch Threshold - Required when RuleType = reconciliationMismatch. Specifies the threshold for the number of mismatched records in reconciliation. No default value.
                     * @param _mismatchCount Reconciliation Mismatch Threshold - Required when RuleType = reconciliationMismatch. Specifies the threshold for the number of mismatched records in reconciliation. No default value.
                     * 
                     */
                    void SetMismatchCount(const uint64_t& _mismatchCount);

                    /**
                     * 判断参数 MismatchCount 是否已赋值
                     * @return MismatchCount 是否已赋值
                     * 
                     */
                    bool MismatchCountHasBeenSet() const;

                    /**
                     * 获取Task run timeout threshold for reconciliation: hr, defaults to 0.
                     * @return Hour Task run timeout threshold for reconciliation: hr, defaults to 0.
                     * 
                     */
                    int64_t GetHour() const;

                    /**
                     * 设置Task run timeout threshold for reconciliation: hr, defaults to 0.
                     * @param _hour Task run timeout threshold for reconciliation: hr, defaults to 0.
                     * 
                     */
                    void SetHour(const int64_t& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取Reconciliation task timeout threshold: minutes, defaults to 1.
                     * @return Min Reconciliation task timeout threshold: minutes, defaults to 1.
                     * 
                     */
                    int64_t GetMin() const;

                    /**
                     * 设置Reconciliation task timeout threshold: minutes, defaults to 1.
                     * @param _min Reconciliation task timeout threshold: minutes, defaults to 1.
                     * 
                     */
                    void SetMin(const int64_t& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                private:

                    /**
                     * Offline Integration Task Reconciliation Alarms

reconciliationFailure: Alarm when offline reconciliation task fails

reconciliationOvertime: Alarm when offline reconciliation task runs overtime

reconciliationMismatch: Alarm when the number of mismatched records in reconciliation exceeds the threshold
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Reconciliation Mismatch Threshold - Required when RuleType = reconciliationMismatch. Specifies the threshold for the number of mismatched records in reconciliation. No default value.
                     */
                    uint64_t m_mismatchCount;
                    bool m_mismatchCountHasBeenSet;

                    /**
                     * Task run timeout threshold for reconciliation: hr, defaults to 0.
                     */
                    int64_t m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * Reconciliation task timeout threshold: minutes, defaults to 1.
                     */
                    int64_t m_min;
                    bool m_minHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RECONCILIATIONSTRATEGYINFO_H_
