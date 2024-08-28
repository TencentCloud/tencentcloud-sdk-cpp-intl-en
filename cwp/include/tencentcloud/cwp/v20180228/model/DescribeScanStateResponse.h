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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANSTATERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANSTATERESPONSE_H_

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
                * DescribeScanState response structure.
                */
                class DescribeScanStateResponse : public AbstractModel
                {
                public:
                    DescribeScanStateResponse();
                    ~DescribeScanStateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取0 - never scanned; 1 - scan in progress; 2 - scan completed; 3 - stop in progress; 4 - stop completed
                     * @return ScanState 0 - never scanned; 1 - scan in progress; 2 - scan completed; 3 - stop in progress; 4 - stop completed
                     * 
                     */
                    uint64_t GetScanState() const;

                    /**
                     * 判断参数 ScanState 是否已赋值
                     * @return ScanState 是否已赋值
                     * 
                     */
                    bool ScanStateHasBeenSet() const;

                    /**
                     * 获取Scan progress
                     * @return Schedule Scan progress
                     * 
                     */
                    uint64_t GetSchedule() const;

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     * 
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Vulnerability ID of task scan
                     * @return VulId Vulnerability ID of task scan
                     * 
                     */
                    std::vector<uint64_t> GetVulId() const;

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取0 - one-click detection; 1 - regular detection
                     * @return Type 0 - one-click detection; 1 - regular detection
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
                     * 获取Scan start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanBeginTime Scan start time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of vulnerabilities scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskEventCount Number of vulnerabilities scanned
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
                     * 获取Scan end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanEndTime Scan end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 判断参数 ScanEndTime 是否已赋值
                     * @return ScanEndTime 是否已赋值
                     * 
                     */
                    bool ScanEndTimeHasBeenSet() const;

                private:

                    /**
                     * 0 - never scanned; 1 - scan in progress; 2 - scan completed; 3 - stop in progress; 4 - stop completed
                     */
                    uint64_t m_scanState;
                    bool m_scanStateHasBeenSet;

                    /**
                     * Scan progress
                     */
                    uint64_t m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * Task ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Vulnerability ID of task scan
                     */
                    std::vector<uint64_t> m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 0 - one-click detection; 1 - regular detection
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Scan start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanBeginTime;
                    bool m_scanBeginTimeHasBeenSet;

                    /**
                     * Number of vulnerabilities scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_riskEventCount;
                    bool m_riskEventCountHasBeenSet;

                    /**
                     * Scan end time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANSTATERESPONSE_H_
