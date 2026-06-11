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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMONITORCONFIGRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMONITORCONFIGRESPONSE_H_

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
                * DescribeVirusMonitorConfig response structure.
                */
                class DescribeVirusMonitorConfigResponse : public AbstractModel
                {
                public:
                    DescribeVirusMonitorConfigResponse();
                    ~DescribeVirusMonitorConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Real-Time Monitoring Enabled
                     * @return EnableScan Real-Time Monitoring Enabled
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
                     * 获取true: Including Path; false: Excluding Path
                     * @return IsIncludePath true: Including Path; false: Excluding Path
                     * 
                     */
                    bool GetIsIncludePath() const;

                    /**
                     * 判断参数 IsIncludePath 是否已赋值
                     * @return IsIncludePath 是否已赋值
                     * 
                     */
                    bool IsIncludePathHasBeenSet() const;

                    /**
                     * 获取Custom Excluded or Scanned Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanPath Custom Excluded or Scanned Address
Note: This field may return null, indicating that no valid values can be obtained.
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
SCAN_PATH_ALL: All paths
SCAN_PATH_DEFAULT: Default path
SCAN_PATH_USER_DEFINE: User-defined path

                     * @return ScanPathMode Scan path mode:
SCAN_PATH_ALL: All paths
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

                private:

                    /**
                     * Real-Time Monitoring Enabled
                     */
                    bool m_enableScan;
                    bool m_enableScanHasBeenSet;

                    /**
                     * true: Including Path; false: Excluding Path
                     */
                    bool m_isIncludePath;
                    bool m_isIncludePathHasBeenSet;

                    /**
                     * Custom Excluded or Scanned Address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_scanPath;
                    bool m_scanPathHasBeenSet;

                    /**
                     * Scan path mode:
SCAN_PATH_ALL: All paths
SCAN_PATH_DEFAULT: Default path
SCAN_PATH_USER_DEFINE: User-defined path

                     */
                    std::string m_scanPathMode;
                    bool m_scanPathModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMONITORCONFIGRESPONSE_H_
