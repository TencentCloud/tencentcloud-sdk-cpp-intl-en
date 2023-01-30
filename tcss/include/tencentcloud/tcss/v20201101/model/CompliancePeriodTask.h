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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPERIODTASK_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPERIODTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/CompliancePeriodTaskRule.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceBenchmarkStandard.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Information of a scheduled task of the compliance baseline check
                */
                class CompliancePeriodTask : public AbstractModel
                {
                public:
                    CompliancePeriodTask();
                    ~CompliancePeriodTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scheduled task ID
                     * @return PeriodTaskId Scheduled task ID
                     */
                    uint64_t GetPeriodTaskId() const;

                    /**
                     * 设置Scheduled task ID
                     * @param PeriodTaskId Scheduled task ID
                     */
                    void SetPeriodTaskId(const uint64_t& _periodTaskId);

                    /**
                     * 判断参数 PeriodTaskId 是否已赋值
                     * @return PeriodTaskId 是否已赋值
                     */
                    bool PeriodTaskIdHasBeenSet() const;

                    /**
                     * 获取Asset type
`ASSET_CONTAINER`: Container.
`ASSET_IMAGE`: Image.
`ASSET_HOST`: Server.
`ASSET_K8S`: K8s asset.
                     * @return AssetType Asset type
`ASSET_CONTAINER`: Container.
`ASSET_IMAGE`: Image.
`ASSET_HOST`: Server.
`ASSET_K8S`: K8s asset.
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type
`ASSET_CONTAINER`: Container.
`ASSET_IMAGE`: Image.
`ASSET_HOST`: Server.
`ASSET_K8S`: K8s asset.
                     * @param AssetType Asset type
`ASSET_CONTAINER`: Container.
`ASSET_IMAGE`: Image.
`ASSET_HOST`: Server.
`ASSET_K8S`: K8s asset.
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取Last trigger time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastTriggerTime Last trigger time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLastTriggerTime() const;

                    /**
                     * 设置Last trigger time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param LastTriggerTime Last trigger time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastTriggerTime(const std::string& _lastTriggerTime);

                    /**
                     * 判断参数 LastTriggerTime 是否已赋值
                     * @return LastTriggerTime 是否已赋值
                     */
                    bool LastTriggerTimeHasBeenSet() const;

                    /**
                     * 获取Total number of check items
                     * @return TotalPolicyItemCount Total number of check items
                     */
                    uint64_t GetTotalPolicyItemCount() const;

                    /**
                     * 设置Total number of check items
                     * @param TotalPolicyItemCount Total number of check items
                     */
                    void SetTotalPolicyItemCount(const uint64_t& _totalPolicyItemCount);

                    /**
                     * 判断参数 TotalPolicyItemCount 是否已赋值
                     * @return TotalPolicyItemCount 是否已赋值
                     */
                    bool TotalPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取Cycle settings
                     * @return PeriodRule Cycle settings
                     */
                    CompliancePeriodTaskRule GetPeriodRule() const;

                    /**
                     * 设置Cycle settings
                     * @param PeriodRule Cycle settings
                     */
                    void SetPeriodRule(const CompliancePeriodTaskRule& _periodRule);

                    /**
                     * 判断参数 PeriodRule 是否已赋值
                     * @return PeriodRule 是否已赋值
                     */
                    bool PeriodRuleHasBeenSet() const;

                    /**
                     * 获取List of compliance standards
                     * @return BenchmarkStandardSet List of compliance standards
                     */
                    std::vector<ComplianceBenchmarkStandard> GetBenchmarkStandardSet() const;

                    /**
                     * 设置List of compliance standards
                     * @param BenchmarkStandardSet List of compliance standards
                     */
                    void SetBenchmarkStandardSet(const std::vector<ComplianceBenchmarkStandard>& _benchmarkStandardSet);

                    /**
                     * 判断参数 BenchmarkStandardSet 是否已赋值
                     * @return BenchmarkStandardSet 是否已赋值
                     */
                    bool BenchmarkStandardSetHasBeenSet() const;

                private:

                    /**
                     * Scheduled task ID
                     */
                    uint64_t m_periodTaskId;
                    bool m_periodTaskIdHasBeenSet;

                    /**
                     * Asset type
`ASSET_CONTAINER`: Container.
`ASSET_IMAGE`: Image.
`ASSET_HOST`: Server.
`ASSET_K8S`: K8s asset.
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Last trigger time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastTriggerTime;
                    bool m_lastTriggerTimeHasBeenSet;

                    /**
                     * Total number of check items
                     */
                    uint64_t m_totalPolicyItemCount;
                    bool m_totalPolicyItemCountHasBeenSet;

                    /**
                     * Cycle settings
                     */
                    CompliancePeriodTaskRule m_periodRule;
                    bool m_periodRuleHasBeenSet;

                    /**
                     * List of compliance standards
                     */
                    std::vector<ComplianceBenchmarkStandard> m_benchmarkStandardSet;
                    bool m_benchmarkStandardSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPERIODTASK_H_
