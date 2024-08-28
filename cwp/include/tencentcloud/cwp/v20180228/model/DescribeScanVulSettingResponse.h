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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANVULSETTINGRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANVULSETTINGRESPONSE_H_

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
                * DescribeScanVulSetting response structure.
                */
                class DescribeScanVulSettingResponse : public AbstractModel
                {
                public:
                    DescribeScanVulSettingResponse();
                    ~DescribeScanVulSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Vulnerability type: 1 - web-cms vulnerabilities; 2 - application vulnerabilities; 4 - Linux software vulnerabilities; 5 - Windows system vulnerabilities
                     * @return VulCategories Vulnerability type: 1 - web-cms vulnerabilities; 2 - application vulnerabilities; 4 - Linux software vulnerabilities; 5 - Windows system vulnerabilities
                     * 
                     */
                    std::string GetVulCategories() const;

                    /**
                     * 判断参数 VulCategories 是否已赋值
                     * @return VulCategories 是否已赋值
                     * 
                     */
                    bool VulCategoriesHasBeenSet() const;

                    /**
                     * 获取Severity level: 1 - low-risk; 2 - medium-risk; 3 - high-risk; 4 - critical (multiple selections are separated by English commas)
                     * @return VulLevels Severity level: 1 - low-risk; 2 - medium-risk; 3 - high-risk; 4 - critical (multiple selections are separated by English commas)
                     * 
                     */
                    std::string GetVulLevels() const;

                    /**
                     * 判断参数 VulLevels 是否已赋值
                     * @return VulLevels 是否已赋值
                     * 
                     */
                    bool VulLevelsHasBeenSet() const;

                    /**
                     * 获取Regular detection interval (days)
                     * @return TimerInterval Regular detection interval (days)
                     * 
                     */
                    uint64_t GetTimerInterval() const;

                    /**
                     * 判断参数 TimerInterval 是否已赋值
                     * @return TimerInterval 是否已赋值
                     * 
                     */
                    bool TimerIntervalHasBeenSet() const;

                    /**
                     * 获取Regular detection time, such as 00:00
                     * @return TimerTime Regular detection time, such as 00:00
                     * 
                     */
                    std::string GetTimerTime() const;

                    /**
                     * 判断参数 TimerTime 是否已赋值
                     * @return TimerTime 是否已赋值
                     * 
                     */
                    bool TimerTimeHasBeenSet() const;

                    /**
                     * 获取Whether an emergency vulnerability: 0 - no; 1 - yes
                     * @return VulEmergency Whether an emergency vulnerability: 0 - no; 1 - yes
                     * 
                     */
                    uint64_t GetVulEmergency() const;

                    /**
                     * 判断参数 VulEmergency 是否已赋值
                     * @return VulEmergency 是否已赋值
                     * 
                     */
                    bool VulEmergencyHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Whether enabled
                     * @return EnableScan Whether enabled
                     * 
                     */
                    uint64_t GetEnableScan() const;

                    /**
                     * 判断参数 EnableScan 是否已赋值
                     * @return EnableScan 是否已赋值
                     * 
                     */
                    bool EnableScanHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取One-click scan timeout duration, such as 1800 seconds
                     * @return ClickTimeout One-click scan timeout duration, such as 1800 seconds
                     * 
                     */
                    uint64_t GetClickTimeout() const;

                    /**
                     * 判断参数 ClickTimeout 是否已赋值
                     * @return ClickTimeout 是否已赋值
                     * 
                     */
                    bool ClickTimeoutHasBeenSet() const;

                    /**
                     * 获取If empty, scan hosts with all Professional, Premium, and General Discount editions by default; if not empty, only scan the selected hosts.
                     * @return Uuids If empty, scan hosts with all Professional, Premium, and General Discount editions by default; if not empty, only scan the selected hosts.
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                    /**
                     * 获取
                     * @return ScanMethod 
                     * 
                     */
                    uint64_t GetScanMethod() const;

                    /**
                     * 判断参数 ScanMethod 是否已赋值
                     * @return ScanMethod 是否已赋值
                     * 
                     */
                    bool ScanMethodHasBeenSet() const;

                private:

                    /**
                     * Vulnerability type: 1 - web-cms vulnerabilities; 2 - application vulnerabilities; 4 - Linux software vulnerabilities; 5 - Windows system vulnerabilities
                     */
                    std::string m_vulCategories;
                    bool m_vulCategoriesHasBeenSet;

                    /**
                     * Severity level: 1 - low-risk; 2 - medium-risk; 3 - high-risk; 4 - critical (multiple selections are separated by English commas)
                     */
                    std::string m_vulLevels;
                    bool m_vulLevelsHasBeenSet;

                    /**
                     * Regular detection interval (days)
                     */
                    uint64_t m_timerInterval;
                    bool m_timerIntervalHasBeenSet;

                    /**
                     * Regular detection time, such as 00:00
                     */
                    std::string m_timerTime;
                    bool m_timerTimeHasBeenSet;

                    /**
                     * Whether an emergency vulnerability: 0 - no; 1 - yes
                     */
                    uint64_t m_vulEmergency;
                    bool m_vulEmergencyHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Whether enabled
                     */
                    uint64_t m_enableScan;
                    bool m_enableScanHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * One-click scan timeout duration, such as 1800 seconds
                     */
                    uint64_t m_clickTimeout;
                    bool m_clickTimeoutHasBeenSet;

                    /**
                     * If empty, scan hosts with all Professional, Premium, and General Discount editions by default; if not empty, only scan the selected hosts.
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_scanMethod;
                    bool m_scanMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANVULSETTINGRESPONSE_H_
