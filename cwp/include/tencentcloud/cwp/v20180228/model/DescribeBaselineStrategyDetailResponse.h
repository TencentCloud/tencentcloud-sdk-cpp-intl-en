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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINESTRATEGYDETAILRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINESTRATEGYDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeBaselineStrategyDetail response structure.
                */
                class DescribeBaselineStrategyDetailResponse : public AbstractModel
                {
                public:
                    DescribeBaselineStrategyDetailResponse();
                    ~DescribeBaselineStrategyDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy scan pass rate
                     * @return PassRate Policy scan pass rate
                     * 
                     */
                    uint64_t GetPassRate() const;

                    /**
                     * 判断参数 PassRate 是否已赋值
                     * @return PassRate 是否已赋值
                     * 
                     */
                    bool PassRateHasBeenSet() const;

                    /**
                     * 获取Policy name
                     * @return StrategyName Policy name
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取Policy scan cycle (days)
                     * @return ScanCycle Policy scan cycle (days)
                     * 
                     */
                    std::string GetScanCycle() const;

                    /**
                     * 判断参数 ScanCycle 是否已赋值
                     * @return ScanCycle 是否已赋值
                     * 
                     */
                    bool ScanCycleHasBeenSet() const;

                    /**
                     * 获取Regular scan time. The scan task is triggered at this time.
                     * @return ScanAt Regular scan time. The scan task is triggered at this time.
                     * 
                     */
                    std::string GetScanAt() const;

                    /**
                     * 判断参数 ScanAt 是否已赋值
                     * @return ScanAt 是否已赋值
                     * 
                     */
                    bool ScanAtHasBeenSet() const;

                    /**
                     * 获取Whether all servers are scanned: 1: yes; 0 :no. If the value is 1, all Professional Edition hosts are scanned.
                     * @return IsGlobal Whether all servers are scanned: 1: yes; 0 :no. If the value is 1, all Professional Edition hosts are scanned.
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取Machine type:
cvm: Tencent Cloud Virtual Machine
bm: bare metal server
ecm: edge computing host
Lightweight Application Server
Hybrid cloud machine
                     * @return MachineType Machine type:
cvm: Tencent Cloud Virtual Machine
bm: bare metal server
ecm: edge computing host
Lightweight Application Server
Hybrid cloud machine
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取Host region
                     * @return Region Host region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取IDs of all user hosts under this policy
                     * @return Quuids IDs of all user hosts under this policy
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取User baseline IDs under this policy
                     * @return CategoryIds User baseline IDs under this policy
                     * 
                     */
                    std::vector<std::string> GetCategoryIds() const;

                    /**
                     * 判断参数 CategoryIds 是否已赋值
                     * @return CategoryIds 是否已赋值
                     * 
                     */
                    bool CategoryIdsHasBeenSet() const;

                    /**
                     * 获取1 means scanned, 0 means not scanned
                     * @return IfScanned 1 means scanned, 0 means not scanned
                     * 
                     */
                    uint64_t GetIfScanned() const;

                    /**
                     * 判断参数 IfScanned 是否已赋值
                     * @return IfScanned 是否已赋值
                     * 
                     */
                    bool IfScannedHasBeenSet() const;

                private:

                    /**
                     * Policy scan pass rate
                     */
                    uint64_t m_passRate;
                    bool m_passRateHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * Policy scan cycle (days)
                     */
                    std::string m_scanCycle;
                    bool m_scanCycleHasBeenSet;

                    /**
                     * Regular scan time. The scan task is triggered at this time.
                     */
                    std::string m_scanAt;
                    bool m_scanAtHasBeenSet;

                    /**
                     * Whether all servers are scanned: 1: yes; 0 :no. If the value is 1, all Professional Edition hosts are scanned.
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Machine type:
cvm: Tencent Cloud Virtual Machine
bm: bare metal server
ecm: edge computing host
Lightweight Application Server
Hybrid cloud machine
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Host region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * IDs of all user hosts under this policy
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * User baseline IDs under this policy
                     */
                    std::vector<std::string> m_categoryIds;
                    bool m_categoryIdsHasBeenSet;

                    /**
                     * 1 means scanned, 0 means not scanned
                     */
                    uint64_t m_ifScanned;
                    bool m_ifScannedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINESTRATEGYDETAILRESPONSE_H_
