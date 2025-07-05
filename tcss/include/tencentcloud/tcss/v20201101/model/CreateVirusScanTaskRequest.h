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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVIRUSSCANTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVIRUSSCANTASKREQUEST_H_

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
                * CreateVirusScanTask request structure.
                */
                class CreateVirusScanTaskRequest : public AbstractModel
                {
                public:
                    CreateVirusScanTaskRequest();
                    ~CreateVirusScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to scan all paths
                     * @return ScanPathAll Whether to scan all paths
                     * 
                     */
                    bool GetScanPathAll() const;

                    /**
                     * 设置Whether to scan all paths
                     * @param _scanPathAll Whether to scan all paths
                     * 
                     */
                    void SetScanPathAll(const bool& _scanPathAll);

                    /**
                     * 判断参数 ScanPathAll 是否已赋值
                     * @return ScanPathAll 是否已赋值
                     * 
                     */
                    bool ScanPathAllHasBeenSet() const;

                    /**
                     * 获取Scanning scope. Valid values: `0` (container); `1` (server).
                     * @return ScanRangeType Scanning scope. Valid values: `0` (container); `1` (server).
                     * 
                     */
                    uint64_t GetScanRangeType() const;

                    /**
                     * 设置Scanning scope. Valid values: `0` (container); `1` (server).
                     * @param _scanRangeType Scanning scope. Valid values: `0` (container); `1` (server).
                     * 
                     */
                    void SetScanRangeType(const uint64_t& _scanRangeType);

                    /**
                     * 判断参数 ScanRangeType 是否已赋值
                     * @return ScanRangeType 是否已赋值
                     * 
                     */
                    bool ScanRangeTypeHasBeenSet() const;

                    /**
                     * 获取Valid values: `true` (all); `false` (specified).
                     * @return ScanRangeAll Valid values: `true` (all); `false` (specified).
                     * 
                     */
                    bool GetScanRangeAll() const;

                    /**
                     * 设置Valid values: `true` (all); `false` (specified).
                     * @param _scanRangeAll Valid values: `true` (all); `false` (specified).
                     * 
                     */
                    void SetScanRangeAll(const bool& _scanRangeAll);

                    /**
                     * 判断参数 ScanRangeAll 是否已赋值
                     * @return ScanRangeAll 是否已赋值
                     * 
                     */
                    bool ScanRangeAllHasBeenSet() const;

                    /**
                     * 获取Timeout period in hours
                     * @return Timeout Timeout period in hours
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置Timeout period in hours
                     * @param _timeout Timeout period in hours
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Valid when `ScanPathAll` is `false`. Valid values: `0` (scan the following paths); `1` (scan all paths except the following).
                     * @return ScanPathType Valid when `ScanPathAll` is `false`. Valid values: `0` (scan the following paths); `1` (scan all paths except the following).
                     * 
                     */
                    uint64_t GetScanPathType() const;

                    /**
                     * 设置Valid when `ScanPathAll` is `false`. Valid values: `0` (scan the following paths); `1` (scan all paths except the following).
                     * @param _scanPathType Valid when `ScanPathAll` is `false`. Valid values: `0` (scan the following paths); `1` (scan all paths except the following).
                     * 
                     */
                    void SetScanPathType(const uint64_t& _scanPathType);

                    /**
                     * 判断参数 ScanPathType 是否已赋值
                     * @return ScanPathType 是否已赋值
                     * 
                     */
                    bool ScanPathTypeHasBeenSet() const;

                    /**
                     * 获取ID of the specified container or server to be scanned, which is based on `ScanRangeType`.
                     * @return ScanIds ID of the specified container or server to be scanned, which is based on `ScanRangeType`.
                     * 
                     */
                    std::vector<std::string> GetScanIds() const;

                    /**
                     * 设置ID of the specified container or server to be scanned, which is based on `ScanRangeType`.
                     * @param _scanIds ID of the specified container or server to be scanned, which is based on `ScanRangeType`.
                     * 
                     */
                    void SetScanIds(const std::vector<std::string>& _scanIds);

                    /**
                     * 判断参数 ScanIds 是否已赋值
                     * @return ScanIds 是否已赋值
                     * 
                     */
                    bool ScanIdsHasBeenSet() const;

                    /**
                     * 获取Specified path to be excluded or scanned
                     * @return ScanPath Specified path to be excluded or scanned
                     * 
                     */
                    std::vector<std::string> GetScanPath() const;

                    /**
                     * 设置Specified path to be excluded or scanned
                     * @param _scanPath Specified path to be excluded or scanned
                     * 
                     */
                    void SetScanPath(const std::vector<std::string>& _scanPath);

                    /**
                     * 判断参数 ScanPath 是否已赋值
                     * @return ScanPath 是否已赋值
                     * 
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

                     * 
                     */
                    std::string GetScanPathMode() const;

                    /**
                     * 设置Path scanning mode: 
`SCAN_PATH_ALL`: Scan all paths
`SCAN_PATH_DEFAULT`: Scan the default path
`SCAN_PATH_USER_DEFINE`: Scan the custom path

                     * @param _scanPathMode Path scanning mode: 
`SCAN_PATH_ALL`: Scan all paths
`SCAN_PATH_DEFAULT`: Scan the default path
`SCAN_PATH_USER_DEFINE`: Scan the custom path

                     * 
                     */
                    void SetScanPathMode(const std::string& _scanPathMode);

                    /**
                     * 判断参数 ScanPathMode 是否已赋值
                     * @return ScanPathMode 是否已赋值
                     * 
                     */
                    bool ScanPathModeHasBeenSet() const;

                private:

                    /**
                     * Whether to scan all paths
                     */
                    bool m_scanPathAll;
                    bool m_scanPathAllHasBeenSet;

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
                     * Timeout period in hours
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Valid when `ScanPathAll` is `false`. Valid values: `0` (scan the following paths); `1` (scan all paths except the following).
                     */
                    uint64_t m_scanPathType;
                    bool m_scanPathTypeHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVIRUSSCANTASKREQUEST_H_
