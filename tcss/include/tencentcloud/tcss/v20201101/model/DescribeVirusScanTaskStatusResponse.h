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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANTASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANTASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeVirusScanTaskStatus response structure.
                */
                class DescribeVirusScanTaskStatusResponse : public AbstractModel
                {
                public:
                    DescribeVirusScanTaskStatusResponse();
                    ~DescribeVirusScanTaskStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of scanned containers
                     * @return ContainerTotal Number of scanned containers
                     */
                    uint64_t GetContainerTotal() const;

                    /**
                     * 判断参数 ContainerTotal 是否已赋值
                     * @return ContainerTotal 是否已赋值
                     */
                    bool ContainerTotalHasBeenSet() const;

                    /**
                     * 获取Number of containers at risk
                     * @return RiskContainerCnt Number of containers at risk
                     */
                    uint64_t GetRiskContainerCnt() const;

                    /**
                     * 判断参数 RiskContainerCnt 是否已赋值
                     * @return RiskContainerCnt 是否已赋值
                     */
                    bool RiskContainerCntHasBeenSet() const;

                    /**
                     * 获取Scan task status:
`SCAN_NONE`: None. 
`SCAN_SCANNING`: Scanning.
`SCAN_FINISH`: Scanned. 
`SCAN_TIMEOUT`: Scan timed out.
`SCAN_CANCELING`: Canceling.
`SCAN_CANCELED`: Canceled.
                     * @return Status Scan task status:
`SCAN_NONE`: None. 
`SCAN_SCANNING`: Scanning.
`SCAN_FINISH`: Scanned. 
`SCAN_TIMEOUT`: Scan timed out.
`SCAN_CANCELING`: Canceling.
`SCAN_CANCELED`: Canceled.
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Scanning progress
                     * @return Schedule Scanning progress
                     */
                    uint64_t GetSchedule() const;

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取Number of scanned containers
                     * @return ContainerScanCnt Number of scanned containers
                     */
                    uint64_t GetContainerScanCnt() const;

                    /**
                     * 判断参数 ContainerScanCnt 是否已赋值
                     * @return ContainerScanCnt 是否已赋值
                     */
                    bool ContainerScanCntHasBeenSet() const;

                    /**
                     * 获取Number of risks
                     * @return RiskCnt Number of risks
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     */
                    bool RiskCntHasBeenSet() const;

                    /**
                     * 获取Remaining scan time
                     * @return LeftSeconds Remaining scan time
                     */
                    uint64_t GetLeftSeconds() const;

                    /**
                     * 判断参数 LeftSeconds 是否已赋值
                     * @return LeftSeconds 是否已赋值
                     */
                    bool LeftSecondsHasBeenSet() const;

                    /**
                     * 获取Scan start time
                     * @return StartTime Scan start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Scan end time
                     * @return EndTime Scan end time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Scan type. Valid values: `CYCLE` (periodic scan); `MANUAL` (manual scan).
                     * @return ScanType Scan type. Valid values: `CYCLE` (periodic scan); `MANUAL` (manual scan).
                     */
                    std::string GetScanType() const;

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     */
                    bool ScanTypeHasBeenSet() const;

                private:

                    /**
                     * Number of scanned containers
                     */
                    uint64_t m_containerTotal;
                    bool m_containerTotalHasBeenSet;

                    /**
                     * Number of containers at risk
                     */
                    uint64_t m_riskContainerCnt;
                    bool m_riskContainerCntHasBeenSet;

                    /**
                     * Scan task status:
`SCAN_NONE`: None. 
`SCAN_SCANNING`: Scanning.
`SCAN_FINISH`: Scanned. 
`SCAN_TIMEOUT`: Scan timed out.
`SCAN_CANCELING`: Canceling.
`SCAN_CANCELED`: Canceled.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Scanning progress
                     */
                    uint64_t m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * Number of scanned containers
                     */
                    uint64_t m_containerScanCnt;
                    bool m_containerScanCntHasBeenSet;

                    /**
                     * Number of risks
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * Remaining scan time
                     */
                    uint64_t m_leftSeconds;
                    bool m_leftSecondsHasBeenSet;

                    /**
                     * Scan start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Scan end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Scan type. Valid values: `CYCLE` (periodic scan); `MANUAL` (manual scan).
                     */
                    std::string m_scanType;
                    bool m_scanTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANTASKSTATUSRESPONSE_H_
