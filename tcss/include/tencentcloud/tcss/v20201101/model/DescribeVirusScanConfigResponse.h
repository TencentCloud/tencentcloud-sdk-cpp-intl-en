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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANCONFIGRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ScanRangeInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVirusScanConfig response structure.
                */
                class DescribeVirusScanConfigResponse : public AbstractModel
                {
                public:
                    DescribeVirusScanConfigResponse();
                    ~DescribeVirusScanConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Enable Regular Scanning
                     * @return EnableScan Enable Regular Scanning
                     * 
                     */
                    bool GetEnableScan() const;

                    /**
                     * 判断参数 EnableScan 是否已赋值
                     * @return EnableScan 是否已赋值
                     * 
                     */
                    bool EnableScanHasBeenSet() const;

                    /**
                     * 获取Detection Interval in Days
                     * @return Cycle Detection Interval in Days
                     * 
                     */
                    uint64_t GetCycle() const;

                    /**
                     * 判断参数 Cycle 是否已赋值
                     * @return Cycle 是否已赋值
                     * 
                     */
                    bool CycleHasBeenSet() const;

                    /**
                     * 获取Scan start time
                     * @return BeginScanAt Scan start time
                     * 
                     */
                    std::string GetBeginScanAt() const;

                    /**
                     * 判断参数 BeginScanAt 是否已赋值
                     * @return BeginScanAt 是否已赋值
                     * 
                     */
                    bool BeginScanAtHasBeenSet() const;

                    /**
                     * 获取Timeout Duration (Hours)
                     * @return Timeout Timeout Duration (Hours)
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取SCAN_NODE: Scanning node
SCAN CONTAINER
                     * @return ScanRangeType SCAN_NODE: Scanning node
SCAN CONTAINER
                     * 
                     */
                    std::string GetScanRangeType() const;

                    /**
                     * 判断参数 ScanRangeType 是否已赋值
                     * @return ScanRangeType 是否已赋值
                     * 
                     */
                    bool ScanRangeTypeHasBeenSet() const;

                    /**
                     * 获取Container ID or Node ID in Custom Scan Range 
                     * @return ScanIDs Container ID or Node ID in Custom Scan Range 
                     * 
                     */
                    std::vector<ScanRangeInfo> GetScanIDs() const;

                    /**
                     * 判断参数 ScanIDs 是否已赋值
                     * @return ScanIDs 是否已赋值
                     * 
                     */
                    bool ScanIDsHasBeenSet() const;

                    /**
                     * 获取Custom Excluded or Scanned Address
                     * @return ScanPath Custom Excluded or Scanned Address
                     * 
                     */
                    std::vector<std::string> GetScanPath() const;

                    /**
                     * 判断参数 ScanPath 是否已赋值
                     * @return ScanPath 是否已赋值
                     * 
                     */
                    bool ScanPathHasBeenSet() const;

                    /**
                     * 获取Scan path mode:
SCAN_PATH_ALL: All paths.
SCAN_PATH_DEFAULT: Default path
SCAN_PATH_USER_DEFINE: User-defined path

                     * @return ScanPathMode Scan path mode:
SCAN_PATH_ALL: All paths.
SCAN_PATH_DEFAULT: Default path
SCAN_PATH_USER_DEFINE: User-defined path

                     * 
                     */
                    std::string GetScanPathMode() const;

                    /**
                     * 判断参数 ScanPathMode 是否已赋值
                     * @return ScanPathMode 是否已赋值
                     * 
                     */
                    bool ScanPathModeHasBeenSet() const;

                    /**
                     * 获取true: including path
Default value: false. Excluded path.
                     * @return IsIncludePath true: including path
Default value: false. Excluded path.
                     * 
                     */
                    bool GetIsIncludePath() const;

                    /**
                     * 判断参数 IsIncludePath 是否已赋值
                     * @return IsIncludePath 是否已赋值
                     * 
                     */
                    bool IsIncludePathHasBeenSet() const;

                private:

                    /**
                     * Enable Regular Scanning
                     */
                    bool m_enableScan;
                    bool m_enableScanHasBeenSet;

                    /**
                     * Detection Interval in Days
                     */
                    uint64_t m_cycle;
                    bool m_cycleHasBeenSet;

                    /**
                     * Scan start time
                     */
                    std::string m_beginScanAt;
                    bool m_beginScanAtHasBeenSet;

                    /**
                     * Timeout Duration (Hours)
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * SCAN_NODE: Scanning node
SCAN CONTAINER
                     */
                    std::string m_scanRangeType;
                    bool m_scanRangeTypeHasBeenSet;

                    /**
                     * Container ID or Node ID in Custom Scan Range 
                     */
                    std::vector<ScanRangeInfo> m_scanIDs;
                    bool m_scanIDsHasBeenSet;

                    /**
                     * Custom Excluded or Scanned Address
                     */
                    std::vector<std::string> m_scanPath;
                    bool m_scanPathHasBeenSet;

                    /**
                     * Scan path mode:
SCAN_PATH_ALL: All paths.
SCAN_PATH_DEFAULT: Default path
SCAN_PATH_USER_DEFINE: User-defined path

                     */
                    std::string m_scanPathMode;
                    bool m_scanPathModeHasBeenSet;

                    /**
                     * true: including path
Default value: false. Excluded path.
                     */
                    bool m_isIncludePath;
                    bool m_isIncludePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANCONFIGRESPONSE_H_
