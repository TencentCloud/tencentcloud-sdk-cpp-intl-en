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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBASELINESTRATEGYREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBASELINESTRATEGYREQUEST_H_

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
                * CreateBaselineStrategy request structure.
                */
                class CreateBaselineStrategyRequest : public AbstractModel
                {
                public:
                    CreateBaselineStrategyRequest();
                    ~CreateBaselineStrategyRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Check cycle, indicating the number of days between checks. Example: 2, indicating that the check is carried out every 2 days.
                     * @return ScanCycle Check cycle, indicating the number of days between checks. Example: 2, indicating that the check is carried out every 2 days.
                     * 
                     */
                    uint64_t GetScanCycle() const;

                    /**
                     * 设置Check cycle, indicating the number of days between checks. Example: 2, indicating that the check is carried out every 2 days.
                     * @param _scanCycle Check cycle, indicating the number of days between checks. Example: 2, indicating that the check is carried out every 2 days.
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
                     * 获取Time for a periodic check. The scan task is issued at this time. Example: "22:00", indicating that the task is issued at 22:00.
                     * @return ScanAt Time for a periodic check. The scan task is issued at this time. Example: "22:00", indicating that the task is issued at 22:00.
                     * 
                     */
                    std::string GetScanAt() const;

                    /**
                     * 设置Time for a periodic check. The scan task is issued at this time. Example: "22:00", indicating that the task is issued at 22:00.
                     * @param _scanAt Time for a periodic check. The scan task is issued at this time. Example: "22:00", indicating that the task is issued at 22:00.
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
                     * 获取Array of selected baseline IDs under this policy. Example: [1,3,5,7]
                     * @return CategoryIds Array of selected baseline IDs under this policy. Example: [1,3,5,7]
                     * 
                     */
                    std::vector<uint64_t> GetCategoryIds() const;

                    /**
                     * 设置Array of selected baseline IDs under this policy. Example: [1,3,5,7]
                     * @param _categoryIds Array of selected baseline IDs under this policy. Example: [1,3,5,7]
                     * 
                     */
                    void SetCategoryIds(const std::vector<uint64_t>& _categoryIds);

                    /**
                     * 判断参数 CategoryIds 是否已赋值
                     * @return CategoryIds 是否已赋值
                     * 
                     */
                    bool CategoryIdsHasBeenSet() const;

                    /**
                     * 获取Whether all servers are scanned. 1: yes; 0: no. If the value is 1, all Professional Edition hosts are scanned.
                     * @return IsGlobal Whether all servers are scanned. 1: yes; 0: no. If the value is 1, all Professional Edition hosts are scanned.
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置Whether all servers are scanned. 1: yes; 0: no. If the value is 1, all Professional Edition hosts are scanned.
                     * @param _isGlobal Whether all servers are scanned. 1: yes; 0: no. If the value is 1, all Professional Edition hosts are scanned.
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
                     * 获取Cloud host type:
CVM: virtual machine
BM: bare metal server
ECM: edge computing machine
LH: Lighthouse 
Other: hybrid cloud machine
                     * @return MachineType Cloud host type:
CVM: virtual machine
BM: bare metal server
ECM: edge computing machine
LH: Lighthouse 
Other: hybrid cloud machine
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Cloud host type:
CVM: virtual machine
BM: bare metal server
ECM: edge computing machine
LH: Lighthouse 
Other: hybrid cloud machine
                     * @param _machineType Cloud host type:
CVM: virtual machine
BM: bare metal server
ECM: edge computing machine
LH: Lighthouse 
Other: hybrid cloud machine
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
                     * 获取Host region. Example: "ap-guangzhou"
                     * @return RegionCode Host region. Example: "ap-guangzhou"
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置Host region. Example: "ap-guangzhou"
                     * @param _regionCode Host region. Example: "ap-guangzhou"
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
                     * 获取Host ID array. Example: ["quuid1","quuid2"]
                     * @return Quuids Host ID array. Example: ["quuid1","quuid2"]
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置Host ID array. Example: ["quuid1","quuid2"]
                     * @param _quuids Host ID array. Example: ["quuid1","quuid2"]
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
                     * Policy name
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * Check cycle, indicating the number of days between checks. Example: 2, indicating that the check is carried out every 2 days.
                     */
                    uint64_t m_scanCycle;
                    bool m_scanCycleHasBeenSet;

                    /**
                     * Time for a periodic check. The scan task is issued at this time. Example: "22:00", indicating that the task is issued at 22:00.
                     */
                    std::string m_scanAt;
                    bool m_scanAtHasBeenSet;

                    /**
                     * Array of selected baseline IDs under this policy. Example: [1,3,5,7]
                     */
                    std::vector<uint64_t> m_categoryIds;
                    bool m_categoryIdsHasBeenSet;

                    /**
                     * Whether all servers are scanned. 1: yes; 0: no. If the value is 1, all Professional Edition hosts are scanned.
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Cloud host type:
CVM: virtual machine
BM: bare metal server
ECM: edge computing machine
LH: Lighthouse 
Other: hybrid cloud machine
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Host region. Example: "ap-guangzhou"
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * Host ID array. Example: ["quuid1","quuid2"]
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBASELINESTRATEGYREQUEST_H_
