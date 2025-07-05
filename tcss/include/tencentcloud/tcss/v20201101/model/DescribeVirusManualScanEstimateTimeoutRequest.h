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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMANUALSCANESTIMATETIMEOUTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMANUALSCANESTIMATETIMEOUTREQUEST_H_

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
                * DescribeVirusManualScanEstimateTimeout request structure.
                */
                class DescribeVirusManualScanEstimateTimeoutRequest : public AbstractModel
                {
                public:
                    DescribeVirusManualScanEstimateTimeoutRequest();
                    ~DescribeVirusManualScanEstimateTimeoutRequest() = default;
                    std::string ToJsonString() const;


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

                private:

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMANUALSCANESTIMATETIMEOUTREQUEST_H_
