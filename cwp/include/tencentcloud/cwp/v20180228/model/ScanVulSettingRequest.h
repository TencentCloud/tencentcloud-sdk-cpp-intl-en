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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULSETTINGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULSETTINGREQUEST_H_

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
                * ScanVulSetting request structure.
                */
                class ScanVulSettingRequest : public AbstractModel
                {
                public:
                    ScanVulSettingRequest();
                    ~ScanVulSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Regular detection interval (days)
                     * @return TimerInterval Regular detection interval (days)
                     * 
                     */
                    uint64_t GetTimerInterval() const;

                    /**
                     * 设置Regular detection interval (days)
                     * @param _timerInterval Regular detection interval (days)
                     * 
                     */
                    void SetTimerInterval(const uint64_t& _timerInterval);

                    /**
                     * 判断参数 TimerInterval 是否已赋值
                     * @return TimerInterval 是否已赋值
                     * 
                     */
                    bool TimerIntervalHasBeenSet() const;

                    /**
                     * 获取Vulnerability type. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability. Pass in the values in array format. Example: [1,2]
                     * @return VulCategories Vulnerability type. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability. Pass in the values in array format. Example: [1,2]
                     * 
                     */
                    std::vector<uint64_t> GetVulCategories() const;

                    /**
                     * 设置Vulnerability type. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability. Pass in the values in array format. Example: [1,2]
                     * @param _vulCategories Vulnerability type. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability. Pass in the values in array format. Example: [1,2]
                     * 
                     */
                    void SetVulCategories(const std::vector<uint64_t>& _vulCategories);

                    /**
                     * 判断参数 VulCategories 是否已赋值
                     * @return VulCategories 是否已赋值
                     * 
                     */
                    bool VulCategoriesHasBeenSet() const;

                    /**
                     * 获取Severity level. 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical. Pass in the values in array format. Example: [1,2,3]
                     * @return VulLevels Severity level. 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical. Pass in the values in array format. Example: [1,2,3]
                     * 
                     */
                    std::vector<uint64_t> GetVulLevels() const;

                    /**
                     * 设置Severity level. 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical. Pass in the values in array format. Example: [1,2,3]
                     * @param _vulLevels Severity level. 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical. Pass in the values in array format. Example: [1,2,3]
                     * 
                     */
                    void SetVulLevels(const std::vector<uint64_t>& _vulLevels);

                    /**
                     * 判断参数 VulLevels 是否已赋值
                     * @return VulLevels 是否已赋值
                     * 
                     */
                    bool VulLevelsHasBeenSet() const;

                    /**
                     * 获取Periodic detection time. Example: 02:10:50
                     * @return TimerTime Periodic detection time. Example: 02:10:50
                     * 
                     */
                    std::string GetTimerTime() const;

                    /**
                     * 设置Periodic detection time. Example: 02:10:50
                     * @param _timerTime Periodic detection time. Example: 02:10:50
                     * 
                     */
                    void SetTimerTime(const std::string& _timerTime);

                    /**
                     * 判断参数 TimerTime 是否已赋值
                     * @return TimerTime 是否已赋值
                     * 
                     */
                    bool TimerTimeHasBeenSet() const;

                    /**
                     * 获取Whether the vulnerability is an emergency vulnerability. 0: no; 1: yes.
                     * @return VulEmergency Whether the vulnerability is an emergency vulnerability. 0: no; 1: yes.
                     * 
                     */
                    uint64_t GetVulEmergency() const;

                    /**
                     * 设置Whether the vulnerability is an emergency vulnerability. 0: no; 1: yes.
                     * @param _vulEmergency Whether the vulnerability is an emergency vulnerability. 0: no; 1: yes.
                     * 
                     */
                    void SetVulEmergency(const uint64_t& _vulEmergency);

                    /**
                     * 判断参数 VulEmergency 是否已赋值
                     * @return VulEmergency 是否已赋值
                     * 
                     */
                    bool VulEmergencyHasBeenSet() const;

                    /**
                     * 获取Scan start time. Example: 00:00
                     * @return StartTime Scan start time. Example: 00:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Scan start time. Example: 00:00
                     * @param _startTime Scan start time. Example: 00:00
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Scan end time. Example: 08:00
                     * @return EndTime Scan end time. Example: 08:00
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Scan end time. Example: 08:00
                     * @param _endTime Scan end time. Example: 08:00
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Whether to enable scanning. 1: enable; 0: disable.
                     * @return EnableScan Whether to enable scanning. 1: enable; 0: disable.
                     * 
                     */
                    uint64_t GetEnableScan() const;

                    /**
                     * 设置Whether to enable scanning. 1: enable; 0: disable.
                     * @param _enableScan Whether to enable scanning. 1: enable; 0: disable.
                     * 
                     */
                    void SetEnableScan(const uint64_t& _enableScan);

                    /**
                     * 判断参数 EnableScan 是否已赋值
                     * @return EnableScan 是否已赋值
                     * 
                     */
                    bool EnableScanHasBeenSet() const;

                    /**
                     * 获取If empty, scan hosts with all Professional, Premium, and General Discount editions by default; if not empty, only scan the selected hosts.
                     * @return Uuids If empty, scan hosts with all Professional, Premium, and General Discount editions by default; if not empty, only scan the selected hosts.
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置If empty, scan hosts with all Professional, Premium, and General Discount editions by default; if not empty, only scan the selected hosts.
                     * @param _uuids If empty, scan hosts with all Professional, Premium, and General Discount editions by default; if not empty, only scan the selected hosts.
                     * 
                     */
                    void SetUuids(const std::vector<std::string>& _uuids);

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
                     * 设置
                     * @param _scanMethod 
                     * 
                     */
                    void SetScanMethod(const uint64_t& _scanMethod);

                    /**
                     * 判断参数 ScanMethod 是否已赋值
                     * @return ScanMethod 是否已赋值
                     * 
                     */
                    bool ScanMethodHasBeenSet() const;

                private:

                    /**
                     * Regular detection interval (days)
                     */
                    uint64_t m_timerInterval;
                    bool m_timerIntervalHasBeenSet;

                    /**
                     * Vulnerability type. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability. Pass in the values in array format. Example: [1,2]
                     */
                    std::vector<uint64_t> m_vulCategories;
                    bool m_vulCategoriesHasBeenSet;

                    /**
                     * Severity level. 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical. Pass in the values in array format. Example: [1,2,3]
                     */
                    std::vector<uint64_t> m_vulLevels;
                    bool m_vulLevelsHasBeenSet;

                    /**
                     * Periodic detection time. Example: 02:10:50
                     */
                    std::string m_timerTime;
                    bool m_timerTimeHasBeenSet;

                    /**
                     * Whether the vulnerability is an emergency vulnerability. 0: no; 1: yes.
                     */
                    uint64_t m_vulEmergency;
                    bool m_vulEmergencyHasBeenSet;

                    /**
                     * Scan start time. Example: 00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Scan end time. Example: 08:00
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Whether to enable scanning. 1: enable; 0: disable.
                     */
                    uint64_t m_enableScan;
                    bool m_enableScanHasBeenSet;

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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULSETTINGREQUEST_H_
