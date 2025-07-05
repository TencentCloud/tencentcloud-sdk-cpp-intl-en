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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENREGIONMACHINES_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENREGIONMACHINES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ScreenMachine.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 3D image of the host on the large screen
                */
                class ScreenRegionMachines : public AbstractModel
                {
                public:
                    ScreenRegionMachines();
                    ~ScreenRegionMachines() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取All regions
                     * @return Region All regions
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置All regions
                     * @param _region All regions
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Region description in Chinese
                     * @return RegionName Region description in Chinese
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region description in Chinese
                     * @param _regionName Region description in Chinese
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Host list
                     * @return Machines Host list
                     * 
                     */
                    std::vector<ScreenMachine> GetMachines() const;

                    /**
                     * 设置Host list
                     * @param _machines Host list
                     * 
                     */
                    void SetMachines(const std::vector<ScreenMachine>& _machines);

                    /**
                     * 判断参数 Machines 是否已赋值
                     * @return Machines 是否已赋值
                     * 
                     */
                    bool MachinesHasBeenSet() const;

                    /**
                     * 获取Total number of hosts in this region
                     * @return TotalCount Total number of hosts in this region
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total number of hosts in this region
                     * @param _totalCount Total number of hosts in this region
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Number of risky hosts
                     * @return RiskCnt Number of risky hosts
                     * 
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 设置Number of risky hosts
                     * @param _riskCnt Number of risky hosts
                     * 
                     */
                    void SetRiskCnt(const uint64_t& _riskCnt);

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     * 
                     */
                    bool RiskCntHasBeenSet() const;

                    /**
                     * 获取Number of potentially risky hosts
                     * @return AttackCnt Number of potentially risky hosts
                     * 
                     */
                    uint64_t GetAttackCnt() const;

                    /**
                     * 设置Number of potentially risky hosts
                     * @param _attackCnt Number of potentially risky hosts
                     * 
                     */
                    void SetAttackCnt(const uint64_t& _attackCnt);

                    /**
                     * 判断参数 AttackCnt 是否已赋值
                     * @return AttackCnt 是否已赋值
                     * 
                     */
                    bool AttackCntHasBeenSet() const;

                    /**
                     * 获取Number of risk-free hosts
                     * @return SafetyCnt Number of risk-free hosts
                     * 
                     */
                    uint64_t GetSafetyCnt() const;

                    /**
                     * 设置Number of risk-free hosts
                     * @param _safetyCnt Number of risk-free hosts
                     * 
                     */
                    void SetSafetyCnt(const uint64_t& _safetyCnt);

                    /**
                     * 判断参数 SafetyCnt 是否已赋值
                     * @return SafetyCnt 是否已赋值
                     * 
                     */
                    bool SafetyCntHasBeenSet() const;

                    /**
                     * 获取Number of hosts in offline/uninstalled status
                     * @return UnAgentOfflineCnt Number of hosts in offline/uninstalled status
                     * 
                     */
                    uint64_t GetUnAgentOfflineCnt() const;

                    /**
                     * 设置Number of hosts in offline/uninstalled status
                     * @param _unAgentOfflineCnt Number of hosts in offline/uninstalled status
                     * 
                     */
                    void SetUnAgentOfflineCnt(const uint64_t& _unAgentOfflineCnt);

                    /**
                     * 判断参数 UnAgentOfflineCnt 是否已赋值
                     * @return UnAgentOfflineCnt 是否已赋值
                     * 
                     */
                    bool UnAgentOfflineCntHasBeenSet() const;

                    /**
                     * 获取Number of hosts that are omitted from displaying. When it is equal to 0, no hosts are omitted.
                     * @return IgnoreCnt Number of hosts that are omitted from displaying. When it is equal to 0, no hosts are omitted.
                     * 
                     */
                    uint64_t GetIgnoreCnt() const;

                    /**
                     * 设置Number of hosts that are omitted from displaying. When it is equal to 0, no hosts are omitted.
                     * @param _ignoreCnt Number of hosts that are omitted from displaying. When it is equal to 0, no hosts are omitted.
                     * 
                     */
                    void SetIgnoreCnt(const uint64_t& _ignoreCnt);

                    /**
                     * 判断参数 IgnoreCnt 是否已赋值
                     * @return IgnoreCnt 是否已赋值
                     * 
                     */
                    bool IgnoreCntHasBeenSet() const;

                private:

                    /**
                     * All regions
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Region description in Chinese
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Host list
                     */
                    std::vector<ScreenMachine> m_machines;
                    bool m_machinesHasBeenSet;

                    /**
                     * Total number of hosts in this region
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Number of risky hosts
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * Number of potentially risky hosts
                     */
                    uint64_t m_attackCnt;
                    bool m_attackCntHasBeenSet;

                    /**
                     * Number of risk-free hosts
                     */
                    uint64_t m_safetyCnt;
                    bool m_safetyCntHasBeenSet;

                    /**
                     * Number of hosts in offline/uninstalled status
                     */
                    uint64_t m_unAgentOfflineCnt;
                    bool m_unAgentOfflineCntHasBeenSet;

                    /**
                     * Number of hosts that are omitted from displaying. When it is equal to 0, no hosts are omitted.
                     */
                    uint64_t m_ignoreCnt;
                    bool m_ignoreCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENREGIONMACHINES_H_
