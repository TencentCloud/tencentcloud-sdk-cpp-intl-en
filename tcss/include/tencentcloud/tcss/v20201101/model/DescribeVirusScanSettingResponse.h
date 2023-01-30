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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANSETTINGRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANSETTINGRESPONSE_H_

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
                * DescribeVirusScanSetting response structure.
                */
                class DescribeVirusScanSettingResponse : public AbstractModel
                {
                public:
                    DescribeVirusScanSettingResponse();
                    ~DescribeVirusScanSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to enable scheduled scan
                     * @return EnableScan Whether to enable scheduled scan
                     */
                    bool GetEnableScan() const;

                    /**
                     * 判断参数 EnableScan 是否已赋值
                     * @return EnableScan 是否已赋值
                     */
                    bool EnableScanHasBeenSet() const;

                    /**
                     * 获取Check cycle in days
                     * @return Cycle Check cycle in days
                     */
                    uint64_t GetCycle() const;

                    /**
                     * 判断参数 Cycle 是否已赋值
                     * @return Cycle 是否已赋值
                     */
                    bool CycleHasBeenSet() const;

                    /**
                     * 获取Scan start time
                     * @return BeginScanAt Scan start time
                     */
                    std::string GetBeginScanAt() const;

                    /**
                     * 判断参数 BeginScanAt 是否已赋值
                     * @return BeginScanAt 是否已赋值
                     */
                    bool BeginScanAtHasBeenSet() const;

                    /**
                     * 获取Scan all paths
                     * @return ScanPathAll Scan all paths
                     */
                    bool GetScanPathAll() const;

                    /**
                     * 判断参数 ScanPathAll 是否已赋值
                     * @return ScanPathAll 是否已赋值
                     */
                    bool ScanPathAllHasBeenSet() const;

                    /**
                     * 获取Valid when `ScanPathAll` is `true`. Valid values of `ScanPathAll`: `0` (scan the following paths); `1` (scan all paths except the following).
                     * @return ScanPathType Valid when `ScanPathAll` is `true`. Valid values of `ScanPathAll`: `0` (scan the following paths); `1` (scan all paths except the following).
                     */
                    uint64_t GetScanPathType() const;

                    /**
                     * 判断参数 ScanPathType 是否已赋值
                     * @return ScanPathType 是否已赋值
                     */
                    bool ScanPathTypeHasBeenSet() const;

                    /**
                     * 获取Timeout period in hours
                     * @return Timeout Timeout period in hours
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Scanning scope. Valid values: `0` (container); `1` (server).
                     * @return ScanRangeType Scanning scope. Valid values: `0` (container); `1` (server).
                     */
                    uint64_t GetScanRangeType() const;

                    /**
                     * 判断参数 ScanRangeType 是否已赋值
                     * @return ScanRangeType 是否已赋值
                     */
                    bool ScanRangeTypeHasBeenSet() const;

                    /**
                     * 获取Valid values: `true` (all); `false` (specified).
                     * @return ScanRangeAll Valid values: `true` (all); `false` (specified).
                     */
                    bool GetScanRangeAll() const;

                    /**
                     * 判断参数 ScanRangeAll 是否已赋值
                     * @return ScanRangeAll 是否已赋值
                     */
                    bool ScanRangeAllHasBeenSet() const;

                    /**
                     * 获取ID of the specified container or server to be scanned, which is based on `ScanRangeType`.
                     * @return ScanIds ID of the specified container or server to be scanned, which is based on `ScanRangeType`.
                     */
                    std::vector<std::string> GetScanIds() const;

                    /**
                     * 判断参数 ScanIds 是否已赋值
                     * @return ScanIds 是否已赋值
                     */
                    bool ScanIdsHasBeenSet() const;

                    /**
                     * 获取Specified path to be excluded or scanned
                     * @return ScanPath Specified path to be excluded or scanned
                     */
                    std::vector<std::string> GetScanPath() const;

                    /**
                     * 判断参数 ScanPath 是否已赋值
                     * @return ScanPath 是否已赋值
                     */
                    bool ScanPathHasBeenSet() const;

                    /**
                     * 获取Timeout settings of quick check
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClickTimeout Timeout settings of quick check
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetClickTimeout() const;

                    /**
                     * 判断参数 ClickTimeout 是否已赋值
                     * @return ClickTimeout 是否已赋值
                     */
                    bool ClickTimeoutHasBeenSet() const;

                private:

                    /**
                     * Whether to enable scheduled scan
                     */
                    bool m_enableScan;
                    bool m_enableScanHasBeenSet;

                    /**
                     * Check cycle in days
                     */
                    uint64_t m_cycle;
                    bool m_cycleHasBeenSet;

                    /**
                     * Scan start time
                     */
                    std::string m_beginScanAt;
                    bool m_beginScanAtHasBeenSet;

                    /**
                     * Scan all paths
                     */
                    bool m_scanPathAll;
                    bool m_scanPathAllHasBeenSet;

                    /**
                     * Valid when `ScanPathAll` is `true`. Valid values of `ScanPathAll`: `0` (scan the following paths); `1` (scan all paths except the following).
                     */
                    uint64_t m_scanPathType;
                    bool m_scanPathTypeHasBeenSet;

                    /**
                     * Timeout period in hours
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Scanning scope. Valid values: `0` (container); `1` (server).
                     */
                    uint64_t m_scanRangeType;
                    bool m_scanRangeTypeHasBeenSet;

                    /**
                     * Valid values: `true` (all); `false` (specified).
                     */
                    bool m_scanRangeAll;
                    bool m_scanRangeAllHasBeenSet;

                    /**
                     * ID of the specified container or server to be scanned, which is based on `ScanRangeType`.
                     */
                    std::vector<std::string> m_scanIds;
                    bool m_scanIdsHasBeenSet;

                    /**
                     * Specified path to be excluded or scanned
                     */
                    std::vector<std::string> m_scanPath;
                    bool m_scanPathHasBeenSet;

                    /**
                     * Timeout settings of quick check
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_clickTimeout;
                    bool m_clickTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSCANSETTINGRESPONSE_H_
