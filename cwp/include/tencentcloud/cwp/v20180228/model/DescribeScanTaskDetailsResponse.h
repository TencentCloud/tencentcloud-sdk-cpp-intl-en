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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANTASKDETAILSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANTASKDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ScanTaskDetails.h>
#include <tencentcloud/cwp/v20180228/model/VulDetailInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeScanTaskDetails response structure.
                */
                class DescribeScanTaskDetailsResponse : public AbstractModel
                {
                public:
                    DescribeScanTaskDetailsResponse();
                    ~DescribeScanTaskDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of scan task information
                     * @return ScanTaskDetailList List of scan task information
                     * 
                     */
                    std::vector<ScanTaskDetails> GetScanTaskDetailList() const;

                    /**
                     * 判断参数 ScanTaskDetailList 是否已赋值
                     * @return ScanTaskDetailList 是否已赋值
                     * 
                     */
                    bool ScanTaskDetailListHasBeenSet() const;

                    /**
                     * 获取Total number
                     * @return TotalCount Total number
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Total number of scanned machines
                     * @return ScanMachineCount Total number of scanned machines
                     * 
                     */
                    uint64_t GetScanMachineCount() const;

                    /**
                     * 判断参数 ScanMachineCount 是否已赋值
                     * @return ScanMachineCount 是否已赋值
                     * 
                     */
                    bool ScanMachineCountHasBeenSet() const;

                    /**
                     * 获取Number of machines with risks detected
                     * @return RiskMachineCount Number of machines with risks detected
                     * 
                     */
                    uint64_t GetRiskMachineCount() const;

                    /**
                     * 判断参数 RiskMachineCount 是否已赋值
                     * @return RiskMachineCount 是否已赋值
                     * 
                     */
                    bool RiskMachineCountHasBeenSet() const;

                    /**
                     * 获取Scan start time
                     * @return ScanBeginTime Scan start time
                     * 
                     */
                    std::string GetScanBeginTime() const;

                    /**
                     * 判断参数 ScanBeginTime 是否已赋值
                     * @return ScanBeginTime 是否已赋值
                     * 
                     */
                    bool ScanBeginTimeHasBeenSet() const;

                    /**
                     * 获取Scan end time
                     * @return ScanEndTime Scan end time
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 判断参数 ScanEndTime 是否已赋值
                     * @return ScanEndTime 是否已赋值
                     * 
                     */
                    bool ScanEndTimeHasBeenSet() const;

                    /**
                     * 获取Scan time
                     * @return ScanTime Scan time
                     * 
                     */
                    uint64_t GetScanTime() const;

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取Scan progress
                     * @return ScanProgress Scan progress
                     * 
                     */
                    uint64_t GetScanProgress() const;

                    /**
                     * 判断参数 ScanProgress 是否已赋值
                     * @return ScanProgress 是否已赋值
                     * 
                     */
                    bool ScanProgressHasBeenSet() const;

                    /**
                     * 获取Remaining scan time
                     * @return ScanLeftTime Remaining scan time
                     * 
                     */
                    uint64_t GetScanLeftTime() const;

                    /**
                     * 判断参数 ScanLeftTime 是否已赋值
                     * @return ScanLeftTime 是否已赋值
                     * 
                     */
                    bool ScanLeftTimeHasBeenSet() const;

                    /**
                     * 获取Scan content
                     * @return ScanContent Scan content
                     * 
                     */
                    std::vector<std::string> GetScanContent() const;

                    /**
                     * 判断参数 ScanContent 是否已赋值
                     * @return ScanContent 是否已赋值
                     * 
                     */
                    bool ScanContentHasBeenSet() const;

                    /**
                     * 获取Vulnerability information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulInfo Vulnerability information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<VulDetailInfo> GetVulInfo() const;

                    /**
                     * 判断参数 VulInfo 是否已赋值
                     * @return VulInfo 是否已赋值
                     * 
                     */
                    bool VulInfoHasBeenSet() const;

                    /**
                     * 获取Number of risk events
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskEventCount Number of risk events
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRiskEventCount() const;

                    /**
                     * 判断参数 RiskEventCount 是否已赋值
                     * @return RiskEventCount 是否已赋值
                     * 
                     */
                    bool RiskEventCountHasBeenSet() const;

                    /**
                     * 获取0: one-click scan; 1: scheduled scan.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type 0: one-click scan; 1: scheduled scan.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Whether all tasks are being stopped. true: yes.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StoppingAll Whether all tasks are being stopped. true: yes.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetStoppingAll() const;

                    /**
                     * 判断参数 StoppingAll 是否已赋值
                     * @return StoppingAll 是否已赋值
                     * 
                     */
                    bool StoppingAllHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulCount Number of vulnerabilities scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                private:

                    /**
                     * List of scan task information
                     */
                    std::vector<ScanTaskDetails> m_scanTaskDetailList;
                    bool m_scanTaskDetailListHasBeenSet;

                    /**
                     * Total number
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Total number of scanned machines
                     */
                    uint64_t m_scanMachineCount;
                    bool m_scanMachineCountHasBeenSet;

                    /**
                     * Number of machines with risks detected
                     */
                    uint64_t m_riskMachineCount;
                    bool m_riskMachineCountHasBeenSet;

                    /**
                     * Scan start time
                     */
                    std::string m_scanBeginTime;
                    bool m_scanBeginTimeHasBeenSet;

                    /**
                     * Scan end time
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * Scan time
                     */
                    uint64_t m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * Scan progress
                     */
                    uint64_t m_scanProgress;
                    bool m_scanProgressHasBeenSet;

                    /**
                     * Remaining scan time
                     */
                    uint64_t m_scanLeftTime;
                    bool m_scanLeftTimeHasBeenSet;

                    /**
                     * Scan content
                     */
                    std::vector<std::string> m_scanContent;
                    bool m_scanContentHasBeenSet;

                    /**
                     * Vulnerability information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VulDetailInfo> m_vulInfo;
                    bool m_vulInfoHasBeenSet;

                    /**
                     * Number of risk events
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_riskEventCount;
                    bool m_riskEventCountHasBeenSet;

                    /**
                     * 0: one-click scan; 1: scheduled scan.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether all tasks are being stopped. true: yes.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_stoppingAll;
                    bool m_stoppingAllHasBeenSet;

                    /**
                     * Number of vulnerabilities scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANTASKDETAILSRESPONSE_H_
