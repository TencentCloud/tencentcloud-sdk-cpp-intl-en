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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_UPDATEBASELINESTRATEGYREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_UPDATEBASELINESTRATEGYREQUEST_H_

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
                * UpdateBaselineStrategy request structure.
                */
                class UpdateBaselineStrategyRequest : public AbstractModel
                {
                public:
                    UpdateBaselineStrategyRequest();
                    ~UpdateBaselineStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy ID
                     * @return StrategyId Policy ID
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置Policy ID
                     * @param _strategyId Policy ID
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
                     * 获取Policy name
                     * @return StrategyName Policy name
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Policy name
                     * @param _strategyName Policy name
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
                     * 获取Detection period
                     * @return ScanCycle Detection period
                     * 
                     */
                    uint64_t GetScanCycle() const;

                    /**
                     * 设置Detection period
                     * @param _scanCycle Detection period
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
                     * 获取Time when routine detection scans are triggered.
                     * @return ScanAt Time when routine detection scans are triggered.
                     * 
                     */
                    std::string GetScanAt() const;

                    /**
                     * 设置Time when routine detection scans are triggered.
                     * @param _scanAt Time when routine detection scans are triggered.
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
                     * 获取Array of baseline IDs selected under this policy
                     * @return CategoryIds Array of baseline IDs selected under this policy
                     * 
                     */
                    std::vector<std::string> GetCategoryIds() const;

                    /**
                     * 设置Array of baseline IDs selected under this policy
                     * @param _categoryIds Array of baseline IDs selected under this policy
                     * 
                     */
                    void SetCategoryIds(const std::vector<std::string>& _categoryIds);

                    /**
                     * 判断参数 CategoryIds 是否已赋值
                     * @return CategoryIds 是否已赋值
                     * 
                     */
                    bool CategoryIdsHasBeenSet() const;

                    /**
                     * 获取Whether all servers are scanned: 1: yes; 0 :no. If the value is 1, all Professional Edition hosts are scanned.
                     * @return IsGlobal Whether all servers are scanned: 1: yes; 0 :no. If the value is 1, all Professional Edition hosts are scanned.
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置Whether all servers are scanned: 1: yes; 0 :no. If the value is 1, all Professional Edition hosts are scanned.
                     * @param _isGlobal Whether all servers are scanned: 1: yes; 0 :no. If the value is 1, all Professional Edition hosts are scanned.
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取CVM type:
cvm: Tencent Cloud Virtual Machine
bm: bare metal
ecm: edge computing host
lh: Tencent Cloud Lighthouse
other: hybrid cloud machine
                     * @return MachineType CVM type:
cvm: Tencent Cloud Virtual Machine
bm: bare metal
ecm: edge computing host
lh: Tencent Cloud Lighthouse
other: hybrid cloud machine
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置CVM type:
cvm: Tencent Cloud Virtual Machine
bm: bare metal
ecm: edge computing host
lh: Tencent Cloud Lighthouse
other: hybrid cloud machine
                     * @param _machineType CVM type:
cvm: Tencent Cloud Virtual Machine
bm: bare metal
ecm: edge computing host
lh: Tencent Cloud Lighthouse
other: hybrid cloud machine
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取Host region ap-guangzhou
                     * @return RegionCode Host region ap-guangzhou
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置Host region ap-guangzhou
                     * @param _regionCode Host region ap-guangzhou
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取Host ID array
                     * @return Quuids Host ID array
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置Host ID array
                     * @param _quuids Host ID array
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                private:

                    /**
                     * Policy ID
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * Detection period
                     */
                    uint64_t m_scanCycle;
                    bool m_scanCycleHasBeenSet;

                    /**
                     * Time when routine detection scans are triggered.
                     */
                    std::string m_scanAt;
                    bool m_scanAtHasBeenSet;

                    /**
                     * Array of baseline IDs selected under this policy
                     */
                    std::vector<std::string> m_categoryIds;
                    bool m_categoryIdsHasBeenSet;

                    /**
                     * Whether all servers are scanned: 1: yes; 0 :no. If the value is 1, all Professional Edition hosts are scanned.
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * CVM type:
cvm: Tencent Cloud Virtual Machine
bm: bare metal
ecm: edge computing host
lh: Tencent Cloud Lighthouse
other: hybrid cloud machine
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Host region ap-guangzhou
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * Host ID array
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_UPDATEBASELINESTRATEGYREQUEST_H_
