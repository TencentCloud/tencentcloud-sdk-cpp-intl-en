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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANSETTINGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANSETTINGREQUEST_H_

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
                * CreateAssetImageScanSetting request structure.
                */
                class CreateAssetImageScanSettingRequest : public AbstractModel
                {
                public:
                    CreateAssetImageScanSettingRequest();
                    ~CreateAssetImageScanSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Switch
                     * @return Enable Switch
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Switch
                     * @param Enable Switch
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Scan time
                     * @return ScanTime Scan time
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置Scan time
                     * @param ScanTime Scan time
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取Scan cycle
                     * @return ScanPeriod Scan cycle
                     */
                    uint64_t GetScanPeriod() const;

                    /**
                     * 设置Scan cycle
                     * @param ScanPeriod Scan cycle
                     */
                    void SetScanPeriod(const uint64_t& _scanPeriod);

                    /**
                     * 判断参数 ScanPeriod 是否已赋值
                     * @return ScanPeriod 是否已赋值
                     */
                    bool ScanPeriodHasBeenSet() const;

                    /**
                     * 获取Trojan scan
                     * @return ScanVirus Trojan scan
                     */
                    bool GetScanVirus() const;

                    /**
                     * 设置Trojan scan
                     * @param ScanVirus Trojan scan
                     */
                    void SetScanVirus(const bool& _scanVirus);

                    /**
                     * 判断参数 ScanVirus 是否已赋值
                     * @return ScanVirus 是否已赋值
                     */
                    bool ScanVirusHasBeenSet() const;

                    /**
                     * 获取Sensitive data scan
                     * @return ScanRisk Sensitive data scan
                     */
                    bool GetScanRisk() const;

                    /**
                     * 设置Sensitive data scan
                     * @param ScanRisk Sensitive data scan
                     */
                    void SetScanRisk(const bool& _scanRisk);

                    /**
                     * 判断参数 ScanRisk 是否已赋值
                     * @return ScanRisk 是否已赋值
                     */
                    bool ScanRiskHasBeenSet() const;

                    /**
                     * 获取Vulnerability scan
                     * @return ScanVul Vulnerability scan
                     */
                    bool GetScanVul() const;

                    /**
                     * 设置Vulnerability scan
                     * @param ScanVul Vulnerability scan
                     */
                    void SetScanVul(const bool& _scanVul);

                    /**
                     * 判断参数 ScanVul 是否已赋值
                     * @return ScanVul 是否已赋值
                     */
                    bool ScanVulHasBeenSet() const;

                    /**
                     * 获取All images
                     * @return All All images
                     */
                    bool GetAll() const;

                    /**
                     * 设置All images
                     * @param All All images
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取Custom image
                     * @return Images Custom image
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置Custom image
                     * @param Images Custom image
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     */
                    bool ImagesHasBeenSet() const;

                private:

                    /**
                     * Switch
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Scan time
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * Scan cycle
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
                     * All images
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * Custom image
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANSETTINGREQUEST_H_
