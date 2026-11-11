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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULSCANSTATUS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULSCANSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Vulnerability scanning status of a host
                */
                class HostVulScanStatus : public AbstractModel
                {
                public:
                    HostVulScanStatus();
                    ~HostVulScanStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether vulnerability scanning has been initiated
Enumeration values:
true: Vulnerability scanning initiated
false: vulnerability scanning not initiated
                     * @return HasScanned Whether vulnerability scanning has been initiated
Enumeration values:
true: Vulnerability scanning initiated
false: vulnerability scanning not initiated
                     * 
                     */
                    bool GetHasScanned() const;

                    /**
                     * 设置Whether vulnerability scanning has been initiated
Enumeration values:
true: Vulnerability scanning initiated
false: vulnerability scanning not initiated
                     * @param _hasScanned Whether vulnerability scanning has been initiated
Enumeration values:
true: Vulnerability scanning initiated
false: vulnerability scanning not initiated
                     * 
                     */
                    void SetHasScanned(const bool& _hasScanned);

                    /**
                     * 判断参数 HasScanned 是否已赋值
                     * @return HasScanned 是否已赋值
                     * 
                     */
                    bool HasScannedHasBeenSet() const;

                    /**
                     * 获取If it is the first vulnerability scanning judgment scenario
Enumeration values:
true: is in the first-time vulnerability scanning judgment scenario
false: not in the first vulnerability scanning judgment scenario
                     * @return IsFirstScan If it is the first vulnerability scanning judgment scenario
Enumeration values:
true: is in the first-time vulnerability scanning judgment scenario
false: not in the first vulnerability scanning judgment scenario
                     * 
                     */
                    bool GetIsFirstScan() const;

                    /**
                     * 设置If it is the first vulnerability scanning judgment scenario
Enumeration values:
true: is in the first-time vulnerability scanning judgment scenario
false: not in the first vulnerability scanning judgment scenario
                     * @param _isFirstScan If it is the first vulnerability scanning judgment scenario
Enumeration values:
true: is in the first-time vulnerability scanning judgment scenario
false: not in the first vulnerability scanning judgment scenario
                     * 
                     */
                    void SetIsFirstScan(const bool& _isFirstScan);

                    /**
                     * 判断参数 IsFirstScan 是否已赋值
                     * @return IsFirstScan 是否已赋值
                     * 
                     */
                    bool IsFirstScanHasBeenSet() const;

                    /**
                     * 获取Status of the last scan task
Enumeration values:
SCANNING: scan in progress
SUCCESS: Scan successful
PARTIAL_FAILED: Partial scan failure
ALL_FAILED: All scans failed
STOPPED: Stop scanning
                     * @return ScanTaskStatus Status of the last scan task
Enumeration values:
SCANNING: scan in progress
SUCCESS: Scan successful
PARTIAL_FAILED: Partial scan failure
ALL_FAILED: All scans failed
STOPPED: Stop scanning
                     * 
                     */
                    std::string GetScanTaskStatus() const;

                    /**
                     * 设置Status of the last scan task
Enumeration values:
SCANNING: scan in progress
SUCCESS: Scan successful
PARTIAL_FAILED: Partial scan failure
ALL_FAILED: All scans failed
STOPPED: Stop scanning
                     * @param _scanTaskStatus Status of the last scan task
Enumeration values:
SCANNING: scan in progress
SUCCESS: Scan successful
PARTIAL_FAILED: Partial scan failure
ALL_FAILED: All scans failed
STOPPED: Stop scanning
                     * 
                     */
                    void SetScanTaskStatus(const std::string& _scanTaskStatus);

                    /**
                     * 判断参数 ScanTaskStatus 是否已赋值
                     * @return ScanTaskStatus 是否已赋值
                     * 
                     */
                    bool ScanTaskStatusHasBeenSet() const;

                    /**
                     * 获取Business status of the page
Enumeration values:
NEVER_SCANNED: Never scanned for vulnerabilities
SCANNING: scan in progress
FIRST_SCAN_FAILED: Vulnerability scanning failed for the first time
FIRST_SCAN_HAS_FIXABLE_VUL: First scan complete, fixable vulnerabilities exist
FIRST_SCAN_NO_FIXABLE_VUL: First scan completed. Vulnerabilities exist but none can be fixed.
FIRST_SCAN_NO_VUL: First scan complete, no vulnerabilities
SCANNED_HAS_FIXABLE_VUL: Not the first scan, fixable vulnerabilities exist
SCANNED_NO_FIXABLE_VUL: Not the first scan. Vulnerabilities exist but none can be fixed.
SCANNED_NO_VUL: Not the first scan, no vulnerabilities
                     * @return ScanScene Business status of the page
Enumeration values:
NEVER_SCANNED: Never scanned for vulnerabilities
SCANNING: scan in progress
FIRST_SCAN_FAILED: Vulnerability scanning failed for the first time
FIRST_SCAN_HAS_FIXABLE_VUL: First scan complete, fixable vulnerabilities exist
FIRST_SCAN_NO_FIXABLE_VUL: First scan completed. Vulnerabilities exist but none can be fixed.
FIRST_SCAN_NO_VUL: First scan complete, no vulnerabilities
SCANNED_HAS_FIXABLE_VUL: Not the first scan, fixable vulnerabilities exist
SCANNED_NO_FIXABLE_VUL: Not the first scan. Vulnerabilities exist but none can be fixed.
SCANNED_NO_VUL: Not the first scan, no vulnerabilities
                     * 
                     */
                    std::string GetScanScene() const;

                    /**
                     * 设置Business status of the page
Enumeration values:
NEVER_SCANNED: Never scanned for vulnerabilities
SCANNING: scan in progress
FIRST_SCAN_FAILED: Vulnerability scanning failed for the first time
FIRST_SCAN_HAS_FIXABLE_VUL: First scan complete, fixable vulnerabilities exist
FIRST_SCAN_NO_FIXABLE_VUL: First scan completed. Vulnerabilities exist but none can be fixed.
FIRST_SCAN_NO_VUL: First scan complete, no vulnerabilities
SCANNED_HAS_FIXABLE_VUL: Not the first scan, fixable vulnerabilities exist
SCANNED_NO_FIXABLE_VUL: Not the first scan. Vulnerabilities exist but none can be fixed.
SCANNED_NO_VUL: Not the first scan, no vulnerabilities
                     * @param _scanScene Business status of the page
Enumeration values:
NEVER_SCANNED: Never scanned for vulnerabilities
SCANNING: scan in progress
FIRST_SCAN_FAILED: Vulnerability scanning failed for the first time
FIRST_SCAN_HAS_FIXABLE_VUL: First scan complete, fixable vulnerabilities exist
FIRST_SCAN_NO_FIXABLE_VUL: First scan completed. Vulnerabilities exist but none can be fixed.
FIRST_SCAN_NO_VUL: First scan complete, no vulnerabilities
SCANNED_HAS_FIXABLE_VUL: Not the first scan, fixable vulnerabilities exist
SCANNED_NO_FIXABLE_VUL: Not the first scan. Vulnerabilities exist but none can be fixed.
SCANNED_NO_VUL: Not the first scan, no vulnerabilities
                     * 
                     */
                    void SetScanScene(const std::string& _scanScene);

                    /**
                     * 判断参数 ScanScene 是否已赋值
                     * @return ScanScene 是否已赋值
                     * 
                     */
                    bool ScanSceneHasBeenSet() const;

                    /**
                     * 获取Last scan time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
Returns an empty string if unscanned.
                     * @return LatestScanTime Last scan time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
Returns an empty string if unscanned.
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置Last scan time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
Returns an empty string if unscanned.
                     * @param _latestScanTime Last scan time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
Returns an empty string if unscanned.
                     * 
                     */
                    void SetLatestScanTime(const std::string& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取Current total count of pending vulnerabilities
Contains common host vulnerabilities and pending risks of the latest Windows KB.
                     * @return TotalVulCount Current total count of pending vulnerabilities
Contains common host vulnerabilities and pending risks of the latest Windows KB.
                     * 
                     */
                    int64_t GetTotalVulCount() const;

                    /**
                     * 设置Current total count of pending vulnerabilities
Contains common host vulnerabilities and pending risks of the latest Windows KB.
                     * @param _totalVulCount Current total count of pending vulnerabilities
Contains common host vulnerabilities and pending risks of the latest Windows KB.
                     * 
                     */
                    void SetTotalVulCount(const int64_t& _totalVulCount);

                    /**
                     * 判断参数 TotalVulCount 是否已赋值
                     * @return TotalVulCount 是否已赋值
                     * 
                     */
                    bool TotalVulCountHasBeenSet() const;

                    /**
                     * 获取Current number of fixable vulnerabilities
Contains ordinary host vulnerabilities that support one-click repair and the latest pending Windows KB risks.
                     * @return FixableVulCount Current number of fixable vulnerabilities
Contains ordinary host vulnerabilities that support one-click repair and the latest pending Windows KB risks.
                     * 
                     */
                    int64_t GetFixableVulCount() const;

                    /**
                     * 设置Current number of fixable vulnerabilities
Contains ordinary host vulnerabilities that support one-click repair and the latest pending Windows KB risks.
                     * @param _fixableVulCount Current number of fixable vulnerabilities
Contains ordinary host vulnerabilities that support one-click repair and the latest pending Windows KB risks.
                     * 
                     */
                    void SetFixableVulCount(const int64_t& _fixableVulCount);

                    /**
                     * 判断参数 FixableVulCount 是否已赋值
                     * @return FixableVulCount 是否已赋值
                     * 
                     */
                    bool FixableVulCountHasBeenSet() const;

                    /**
                     * 获取Current number of repairable emergency vulnerabilities
Urgent vulnerabilities are prioritized for categorization: urgent vulnerabilities are only counted into this field and no longer included in the Linux software vulnerability count.
                     * @return FixableEmergencyCount Current number of repairable emergency vulnerabilities
Urgent vulnerabilities are prioritized for categorization: urgent vulnerabilities are only counted into this field and no longer included in the Linux software vulnerability count.
                     * 
                     */
                    int64_t GetFixableEmergencyCount() const;

                    /**
                     * 设置Current number of repairable emergency vulnerabilities
Urgent vulnerabilities are prioritized for categorization: urgent vulnerabilities are only counted into this field and no longer included in the Linux software vulnerability count.
                     * @param _fixableEmergencyCount Current number of repairable emergency vulnerabilities
Urgent vulnerabilities are prioritized for categorization: urgent vulnerabilities are only counted into this field and no longer included in the Linux software vulnerability count.
                     * 
                     */
                    void SetFixableEmergencyCount(const int64_t& _fixableEmergencyCount);

                    /**
                     * 判断参数 FixableEmergencyCount 是否已赋值
                     * @return FixableEmergencyCount 是否已赋值
                     * 
                     */
                    bool FixableEmergencyCountHasBeenSet() const;

                    /**
                     * 获取Current number of repairable Linux software vulnerabilities
Only non-emergency Linux software vulnerabilities are counted.
                     * @return FixableLinuxVulCount Current number of repairable Linux software vulnerabilities
Only non-emergency Linux software vulnerabilities are counted.
                     * 
                     */
                    int64_t GetFixableLinuxVulCount() const;

                    /**
                     * 设置Current number of repairable Linux software vulnerabilities
Only non-emergency Linux software vulnerabilities are counted.
                     * @param _fixableLinuxVulCount Current number of repairable Linux software vulnerabilities
Only non-emergency Linux software vulnerabilities are counted.
                     * 
                     */
                    void SetFixableLinuxVulCount(const int64_t& _fixableLinuxVulCount);

                    /**
                     * 判断参数 FixableLinuxVulCount 是否已赋值
                     * @return FixableLinuxVulCount 是否已赋值
                     * 
                     */
                    bool FixableLinuxVulCountHasBeenSet() const;

                    /**
                     * 获取Number of currently repairable patches for Windows systems
Statistics of the latest pending Windows KB risks.
                     * @return FixableWindowVulCount Number of currently repairable patches for Windows systems
Statistics of the latest pending Windows KB risks.
                     * 
                     */
                    int64_t GetFixableWindowVulCount() const;

                    /**
                     * 设置Number of currently repairable patches for Windows systems
Statistics of the latest pending Windows KB risks.
                     * @param _fixableWindowVulCount Number of currently repairable patches for Windows systems
Statistics of the latest pending Windows KB risks.
                     * 
                     */
                    void SetFixableWindowVulCount(const int64_t& _fixableWindowVulCount);

                    /**
                     * 判断参数 FixableWindowVulCount 是否已赋值
                     * @return FixableWindowVulCount 是否已赋值
                     * 
                     */
                    bool FixableWindowVulCountHasBeenSet() const;

                private:

                    /**
                     * Whether vulnerability scanning has been initiated
Enumeration values:
true: Vulnerability scanning initiated
false: vulnerability scanning not initiated
                     */
                    bool m_hasScanned;
                    bool m_hasScannedHasBeenSet;

                    /**
                     * If it is the first vulnerability scanning judgment scenario
Enumeration values:
true: is in the first-time vulnerability scanning judgment scenario
false: not in the first vulnerability scanning judgment scenario
                     */
                    bool m_isFirstScan;
                    bool m_isFirstScanHasBeenSet;

                    /**
                     * Status of the last scan task
Enumeration values:
SCANNING: scan in progress
SUCCESS: Scan successful
PARTIAL_FAILED: Partial scan failure
ALL_FAILED: All scans failed
STOPPED: Stop scanning
                     */
                    std::string m_scanTaskStatus;
                    bool m_scanTaskStatusHasBeenSet;

                    /**
                     * Business status of the page
Enumeration values:
NEVER_SCANNED: Never scanned for vulnerabilities
SCANNING: scan in progress
FIRST_SCAN_FAILED: Vulnerability scanning failed for the first time
FIRST_SCAN_HAS_FIXABLE_VUL: First scan complete, fixable vulnerabilities exist
FIRST_SCAN_NO_FIXABLE_VUL: First scan completed. Vulnerabilities exist but none can be fixed.
FIRST_SCAN_NO_VUL: First scan complete, no vulnerabilities
SCANNED_HAS_FIXABLE_VUL: Not the first scan, fixable vulnerabilities exist
SCANNED_NO_FIXABLE_VUL: Not the first scan. Vulnerabilities exist but none can be fixed.
SCANNED_NO_VUL: Not the first scan, no vulnerabilities
                     */
                    std::string m_scanScene;
                    bool m_scanSceneHasBeenSet;

                    /**
                     * Last scan time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
Returns an empty string if unscanned.
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * Current total count of pending vulnerabilities
Contains common host vulnerabilities and pending risks of the latest Windows KB.
                     */
                    int64_t m_totalVulCount;
                    bool m_totalVulCountHasBeenSet;

                    /**
                     * Current number of fixable vulnerabilities
Contains ordinary host vulnerabilities that support one-click repair and the latest pending Windows KB risks.
                     */
                    int64_t m_fixableVulCount;
                    bool m_fixableVulCountHasBeenSet;

                    /**
                     * Current number of repairable emergency vulnerabilities
Urgent vulnerabilities are prioritized for categorization: urgent vulnerabilities are only counted into this field and no longer included in the Linux software vulnerability count.
                     */
                    int64_t m_fixableEmergencyCount;
                    bool m_fixableEmergencyCountHasBeenSet;

                    /**
                     * Current number of repairable Linux software vulnerabilities
Only non-emergency Linux software vulnerabilities are counted.
                     */
                    int64_t m_fixableLinuxVulCount;
                    bool m_fixableLinuxVulCountHasBeenSet;

                    /**
                     * Number of currently repairable patches for Windows systems
Statistics of the latest pending Windows KB risks.
                     */
                    int64_t m_fixableWindowVulCount;
                    bool m_fixableWindowVulCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULSCANSTATUS_H_
