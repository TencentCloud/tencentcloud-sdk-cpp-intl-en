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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYASSETSCANREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYASSETSCANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyAssetScan request structure.
                */
                class ModifyAssetScanRequest : public AbstractModel
                {
                public:
                    ModifyAssetScanRequest();
                    ~ModifyAssetScanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scan range. 1: port; 2: port + vulnerability scan
                     * @return ScanRange Scan range. 1: port; 2: port + vulnerability scan
                     */
                    int64_t GetScanRange() const;

                    /**
                     * 设置Scan range. 1: port; 2: port + vulnerability scan
                     * @param ScanRange Scan range. 1: port; 2: port + vulnerability scan
                     */
                    void SetScanRange(const int64_t& _scanRange);

                    /**
                     * 判断参数 ScanRange 是否已赋值
                     * @return ScanRange 是否已赋值
                     */
                    bool ScanRangeHasBeenSet() const;

                    /**
                     * 获取Scan mode: 'heavy', 'medium', 'light'
                     * @return ScanDeep Scan mode: 'heavy', 'medium', 'light'
                     */
                    std::string GetScanDeep() const;

                    /**
                     * 设置Scan mode: 'heavy', 'medium', 'light'
                     * @param ScanDeep Scan mode: 'heavy', 'medium', 'light'
                     */
                    void SetScanDeep(const std::string& _scanDeep);

                    /**
                     * 判断参数 ScanDeep 是否已赋值
                     * @return ScanDeep 是否已赋值
                     */
                    bool ScanDeepHasBeenSet() const;

                    /**
                     * 获取Scan type. 1: scan now; 2: periodic scan
                     * @return RangeType Scan type. 1: scan now; 2: periodic scan
                     */
                    int64_t GetRangeType() const;

                    /**
                     * 设置Scan type. 1: scan now; 2: periodic scan
                     * @param RangeType Scan type. 1: scan now; 2: periodic scan
                     */
                    void SetRangeType(const int64_t& _rangeType);

                    /**
                     * 判断参数 RangeType 是否已赋值
                     * @return RangeType 是否已赋值
                     */
                    bool RangeTypeHasBeenSet() const;

                    /**
                     * 获取Scheduled task time, required when RangeType is 2
                     * @return ScanPeriod Scheduled task time, required when RangeType is 2
                     */
                    std::string GetScanPeriod() const;

                    /**
                     * 设置Scheduled task time, required when RangeType is 2
                     * @param ScanPeriod Scheduled task time, required when RangeType is 2
                     */
                    void SetScanPeriod(const std::string& _scanPeriod);

                    /**
                     * 判断参数 ScanPeriod 是否已赋值
                     * @return ScanPeriod 是否已赋值
                     */
                    bool ScanPeriodHasBeenSet() const;

                    /**
                     * 获取Scans this field now and passes the filtered IPs
                     * @return ScanFilterIp Scans this field now and passes the filtered IPs
                     */
                    std::vector<std::string> GetScanFilterIp() const;

                    /**
                     * 设置Scans this field now and passes the filtered IPs
                     * @param ScanFilterIp Scans this field now and passes the filtered IPs
                     */
                    void SetScanFilterIp(const std::vector<std::string>& _scanFilterIp);

                    /**
                     * 判断参数 ScanFilterIp 是否已赋值
                     * @return ScanFilterIp 是否已赋值
                     */
                    bool ScanFilterIpHasBeenSet() const;

                    /**
                     * 获取1: all; 2: single
                     * @return ScanType 1: all; 2: single
                     */
                    int64_t GetScanType() const;

                    /**
                     * 设置1: all; 2: single
                     * @param ScanType 1: all; 2: single
                     */
                    void SetScanType(const int64_t& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     */
                    bool ScanTypeHasBeenSet() const;

                private:

                    /**
                     * Scan range. 1: port; 2: port + vulnerability scan
                     */
                    int64_t m_scanRange;
                    bool m_scanRangeHasBeenSet;

                    /**
                     * Scan mode: 'heavy', 'medium', 'light'
                     */
                    std::string m_scanDeep;
                    bool m_scanDeepHasBeenSet;

                    /**
                     * Scan type. 1: scan now; 2: periodic scan
                     */
                    int64_t m_rangeType;
                    bool m_rangeTypeHasBeenSet;

                    /**
                     * Scheduled task time, required when RangeType is 2
                     */
                    std::string m_scanPeriod;
                    bool m_scanPeriodHasBeenSet;

                    /**
                     * Scans this field now and passes the filtered IPs
                     */
                    std::vector<std::string> m_scanFilterIp;
                    bool m_scanFilterIpHasBeenSet;

                    /**
                     * 1: all; 2: single
                     */
                    int64_t m_scanType;
                    bool m_scanTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYASSETSCANREQUEST_H_
