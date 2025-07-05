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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGESCANSETTINGRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGESCANSETTINGRESPONSE_H_

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
                * DescribeAssetImageScanSetting response structure.
                */
                class DescribeAssetImageScanSettingResponse : public AbstractModel
                {
                public:
                    DescribeAssetImageScanSettingResponse();
                    ~DescribeAssetImageScanSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Switch
                     * @return Enable Switch
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Scan time, which is a complete time and parsed as hour/minute/second in time zone 0 on the backend.
                     * @return ScanTime Scan time, which is a complete time and parsed as hour/minute/second in time zone 0 on the backend.
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取Scan interval
                     * @return ScanPeriod Scan interval
                     * 
                     */
                    uint64_t GetScanPeriod() const;

                    /**
                     * 判断参数 ScanPeriod 是否已赋值
                     * @return ScanPeriod 是否已赋值
                     * 
                     */
                    bool ScanPeriodHasBeenSet() const;

                    /**
                     * 获取Trojan scan
                     * @return ScanVirus Trojan scan
                     * 
                     */
                    bool GetScanVirus() const;

                    /**
                     * 判断参数 ScanVirus 是否已赋值
                     * @return ScanVirus 是否已赋值
                     * 
                     */
                    bool ScanVirusHasBeenSet() const;

                    /**
                     * 获取Sensitive data scan
                     * @return ScanRisk Sensitive data scan
                     * 
                     */
                    bool GetScanRisk() const;

                    /**
                     * 判断参数 ScanRisk 是否已赋值
                     * @return ScanRisk 是否已赋值
                     * 
                     */
                    bool ScanRiskHasBeenSet() const;

                    /**
                     * 获取Vulnerability scan
                     * @return ScanVul Vulnerability scan
                     * 
                     */
                    bool GetScanVul() const;

                    /**
                     * 判断参数 ScanVul 是否已赋值
                     * @return ScanVul 是否已赋值
                     * 
                     */
                    bool ScanVulHasBeenSet() const;

                    /**
                     * 获取Scan of all images
                     * @return All Scan of all images
                     * @deprecated
                     */
                    bool GetAll() const;

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * @deprecated
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取Scan of specified images
                     * @return Images Scan of specified images
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                private:

                    /**
                     * Switch
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Scan time, which is a complete time and parsed as hour/minute/second in time zone 0 on the backend.
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * Scan interval
                     */
                    uint64_t m_scanPeriod;
                    bool m_scanPeriodHasBeenSet;

                    /**
                     * Trojan scan
                     */
                    bool m_scanVirus;
                    bool m_scanVirusHasBeenSet;

                    /**
                     * Sensitive data scan
                     */
                    bool m_scanRisk;
                    bool m_scanRiskHasBeenSet;

                    /**
                     * Vulnerability scan
                     */
                    bool m_scanVul;
                    bool m_scanVulHasBeenSet;

                    /**
                     * Scan of all images
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * Scan of specified images
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGESCANSETTINGRESPONSE_H_
