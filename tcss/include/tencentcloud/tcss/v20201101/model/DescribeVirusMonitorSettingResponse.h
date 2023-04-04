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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMONITORSETTINGRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMONITORSETTINGRESPONSE_H_

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
                * DescribeVirusMonitorSetting response structure.
                */
                class DescribeVirusMonitorSettingResponse : public AbstractModel
                {
                public:
                    DescribeVirusMonitorSettingResponse();
                    ~DescribeVirusMonitorSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to enable real-time monitoring
                     * @return EnableScan Whether to enable real-time monitoring
                     */
                    bool GetEnableScan() const;

                    /**
                     * 判断参数 EnableScan 是否已赋值
                     * @return EnableScan 是否已赋值
                     */
                    bool EnableScanHasBeenSet() const;

                    /**
                     * 获取Scan all paths
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanPathAll Scan all paths
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetScanPathAll() const;

                    /**
                     * 判断参数 ScanPathAll 是否已赋值
                     * @return ScanPathAll 是否已赋值
                     */
                    bool ScanPathAllHasBeenSet() const;

                    /**
                     * 获取Valid when `ScanPathAll` is `true`. Valid values of `ScanPathAll`: `0` (scan the following paths); `1` (scan all paths except the following).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanPathType Valid when `ScanPathAll` is `true`. Valid values of `ScanPathAll`: `0` (scan the following paths); `1` (scan all paths except the following).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetScanPathType() const;

                    /**
                     * 判断参数 ScanPathType 是否已赋值
                     * @return ScanPathType 是否已赋值
                     */
                    bool ScanPathTypeHasBeenSet() const;

                    /**
                     * 获取Specified path to be excluded or scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanPath Specified path to be excluded or scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetScanPath() const;

                    /**
                     * 判断参数 ScanPath 是否已赋值
                     * @return ScanPath 是否已赋值
                     */
                    bool ScanPathHasBeenSet() const;

                    /**
                     * 获取Path scanning mode: 
`SCAN_PATH_ALL`: Scan all paths
`SCAN_PATH_DEFAULT`: Scan the default path
`SCAN_PATH_USER_DEFINE`: Scan the custom path

                     * @return ScanPathMode Path scanning mode: 
`SCAN_PATH_ALL`: Scan all paths
`SCAN_PATH_DEFAULT`: Scan the default path
`SCAN_PATH_USER_DEFINE`: Scan the custom path

                     */
                    std::string GetScanPathMode() const;

                    /**
                     * 判断参数 ScanPathMode 是否已赋值
                     * @return ScanPathMode 是否已赋值
                     */
                    bool ScanPathModeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable real-time monitoring
                     */
                    bool m_enableScan;
                    bool m_enableScanHasBeenSet;

                    /**
                     * Scan all paths
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_scanPathAll;
                    bool m_scanPathAllHasBeenSet;

                    /**
                     * Valid when `ScanPathAll` is `true`. Valid values of `ScanPathAll`: `0` (scan the following paths); `1` (scan all paths except the following).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scanPathType;
                    bool m_scanPathTypeHasBeenSet;

                    /**
                     * Specified path to be excluded or scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_scanPath;
                    bool m_scanPathHasBeenSet;

                    /**
                     * Path scanning mode: 
`SCAN_PATH_ALL`: Scan all paths
`SCAN_PATH_DEFAULT`: Scan the default path
`SCAN_PATH_USER_DEFINE`: Scan the custom path

                     */
                    std::string m_scanPathMode;
                    bool m_scanPathModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMONITORSETTINGRESPONSE_H_
