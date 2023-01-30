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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSMONITORSETTINGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSMONITORSETTINGREQUEST_H_

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
                * ModifyVirusMonitorSetting request structure.
                */
                class ModifyVirusMonitorSettingRequest : public AbstractModel
                {
                public:
                    ModifyVirusMonitorSettingRequest();
                    ~ModifyVirusMonitorSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to enable scheduled scan
                     * @return EnableScan Whether to enable scheduled scan
                     */
                    bool GetEnableScan() const;

                    /**
                     * 设置Whether to enable scheduled scan
                     * @param EnableScan Whether to enable scheduled scan
                     */
                    void SetEnableScan(const bool& _enableScan);

                    /**
                     * 判断参数 EnableScan 是否已赋值
                     * @return EnableScan 是否已赋值
                     */
                    bool EnableScanHasBeenSet() const;

                    /**
                     * 获取Scan all paths
                     * @return ScanPathAll Scan all paths
                     */
                    bool GetScanPathAll() const;

                    /**
                     * 设置Scan all paths
                     * @param ScanPathAll Scan all paths
                     */
                    void SetScanPathAll(const bool& _scanPathAll);

                    /**
                     * 判断参数 ScanPathAll 是否已赋值
                     * @return ScanPathAll 是否已赋值
                     */
                    bool ScanPathAllHasBeenSet() const;

                    /**
                     * 获取Valid when `ScanPathAll` is `true`. Valid values of `ScanPathAll`: `0` (scan the following paths); `1` (scan all paths except the following; the scope cannot be greater than `1`).
                     * @return ScanPathType Valid when `ScanPathAll` is `true`. Valid values of `ScanPathAll`: `0` (scan the following paths); `1` (scan all paths except the following; the scope cannot be greater than `1`).
                     */
                    uint64_t GetScanPathType() const;

                    /**
                     * 设置Valid when `ScanPathAll` is `true`. Valid values of `ScanPathAll`: `0` (scan the following paths); `1` (scan all paths except the following; the scope cannot be greater than `1`).
                     * @param ScanPathType Valid when `ScanPathAll` is `true`. Valid values of `ScanPathAll`: `0` (scan the following paths); `1` (scan all paths except the following; the scope cannot be greater than `1`).
                     */
                    void SetScanPathType(const uint64_t& _scanPathType);

                    /**
                     * 判断参数 ScanPathType 是否已赋值
                     * @return ScanPathType 是否已赋值
                     */
                    bool ScanPathTypeHasBeenSet() const;

                    /**
                     * 获取Specified path to be excluded or scanned
                     * @return ScanPath Specified path to be excluded or scanned
                     */
                    std::vector<std::string> GetScanPath() const;

                    /**
                     * 设置Specified path to be excluded or scanned
                     * @param ScanPath Specified path to be excluded or scanned
                     */
                    void SetScanPath(const std::vector<std::string>& _scanPath);

                    /**
                     * 判断参数 ScanPath 是否已赋值
                     * @return ScanPath 是否已赋值
                     */
                    bool ScanPathHasBeenSet() const;

                private:

                    /**
                     * Whether to enable scheduled scan
                     */
                    bool m_enableScan;
                    bool m_enableScanHasBeenSet;

                    /**
                     * Scan all paths
                     */
                    bool m_scanPathAll;
                    bool m_scanPathAllHasBeenSet;

                    /**
                     * Valid when `ScanPathAll` is `true`. Valid values of `ScanPathAll`: `0` (scan the following paths); `1` (scan all paths except the following; the scope cannot be greater than `1`).
                     */
                    uint64_t m_scanPathType;
                    bool m_scanPathTypeHasBeenSet;

                    /**
                     * Specified path to be excluded or scanned
                     */
                    std::vector<std::string> m_scanPath;
                    bool m_scanPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSMONITORSETTINGREQUEST_H_
