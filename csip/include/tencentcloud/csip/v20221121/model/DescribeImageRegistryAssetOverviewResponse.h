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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIMAGEREGISTRYASSETOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIMAGEREGISTRYASSETOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeImageRegistryAssetOverview response structure.
                */
                class DescribeImageRegistryAssetOverviewResponse : public AbstractModel
                {
                public:
                    DescribeImageRegistryAssetOverviewResponse();
                    ~DescribeImageRegistryAssetOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Total number of images</p>
                     * @return ImageCnt <p>Total number of images</p>
                     * 
                     */
                    uint64_t GetImageCnt() const;

                    /**
                     * 判断参数 ImageCnt 是否已赋值
                     * @return ImageCnt 是否已赋值
                     * 
                     */
                    bool ImageCntHasBeenSet() const;

                    /**
                     * 获取<p>Scanned image count</p>
                     * @return ImageScannedCnt <p>Scanned image count</p>
                     * 
                     */
                    uint64_t GetImageScannedCnt() const;

                    /**
                     * 判断参数 ImageScannedCnt 是否已赋值
                     * @return ImageScannedCnt 是否已赋值
                     * 
                     */
                    bool ImageScannedCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of components</p>
                     * @return ComponentCnt <p>Number of components</p>
                     * 
                     */
                    uint64_t GetComponentCnt() const;

                    /**
                     * 判断参数 ComponentCnt 是否已赋值
                     * @return ComponentCnt 是否已赋值
                     * 
                     */
                    bool ComponentCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of vulnerabilities</p>
                     * @return VulCnt <p>Number of vulnerabilities</p>
                     * 
                     */
                    uint64_t GetVulCnt() const;

                    /**
                     * 判断参数 VulCnt 是否已赋值
                     * @return VulCnt 是否已赋值
                     * 
                     */
                    bool VulCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of trojans</p>
                     * @return VirusCnt <p>Number of trojans</p>
                     * 
                     */
                    uint64_t GetVirusCnt() const;

                    /**
                     * 判断参数 VirusCnt 是否已赋值
                     * @return VirusCnt 是否已赋值
                     * 
                     */
                    bool VirusCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of sensitive information entries.</p>
                     * @return SensitiveCnt <p>Number of sensitive information entries.</p>
                     * 
                     */
                    uint64_t GetSensitiveCnt() const;

                    /**
                     * 判断参数 SensitiveCnt 是否已赋值
                     * @return SensitiveCnt 是否已赋值
                     * 
                     */
                    bool SensitiveCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of scheduled scan configurations</p>
                     * @return TimedScanTaskConfigCnt <p>Number of scheduled scan configurations</p>
                     * 
                     */
                    uint64_t GetTimedScanTaskConfigCnt() const;

                    /**
                     * 判断参数 TimedScanTaskConfigCnt 是否已赋值
                     * @return TimedScanTaskConfigCnt 是否已赋值
                     * 
                     */
                    bool TimedScanTaskConfigCntHasBeenSet() const;

                    /**
                     * 获取<p>Total quota</p>
                     * @return TotalQuota <p>Total quota</p>
                     * 
                     */
                    uint64_t GetTotalQuota() const;

                    /**
                     * 判断参数 TotalQuota 是否已赋值
                     * @return TotalQuota 是否已赋值
                     * 
                     */
                    bool TotalQuotaHasBeenSet() const;

                    /**
                     * 获取<p>Used quota</p>
                     * @return UsedQuota <p>Used quota</p>
                     * 
                     */
                    uint64_t GetUsedQuota() const;

                    /**
                     * 判断参数 UsedQuota 是否已赋值
                     * @return UsedQuota 是否已赋值
                     * 
                     */
                    bool UsedQuotaHasBeenSet() const;

                    /**
                     * 获取<p>Remaining quota</p>
                     * @return RemainingQuota <p>Remaining quota</p>
                     * 
                     */
                    uint64_t GetRemainingQuota() const;

                    /**
                     * 判断参数 RemainingQuota 是否已赋值
                     * @return RemainingQuota 是否已赋值
                     * 
                     */
                    bool RemainingQuotaHasBeenSet() const;

                    /**
                     * 获取<p>Trial use quota</p>
                     * @return TrialQuota <p>Trial use quota</p>
                     * 
                     */
                    uint64_t GetTrialQuota() const;

                    /**
                     * 判断参数 TrialQuota 是否已赋值
                     * @return TrialQuota 是否已赋值
                     * 
                     */
                    bool TrialQuotaHasBeenSet() const;

                private:

                    /**
                     * <p>Total number of images</p>
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * <p>Scanned image count</p>
                     */
                    uint64_t m_imageScannedCnt;
                    bool m_imageScannedCntHasBeenSet;

                    /**
                     * <p>Number of components</p>
                     */
                    uint64_t m_componentCnt;
                    bool m_componentCntHasBeenSet;

                    /**
                     * <p>Number of vulnerabilities</p>
                     */
                    uint64_t m_vulCnt;
                    bool m_vulCntHasBeenSet;

                    /**
                     * <p>Number of trojans</p>
                     */
                    uint64_t m_virusCnt;
                    bool m_virusCntHasBeenSet;

                    /**
                     * <p>Number of sensitive information entries.</p>
                     */
                    uint64_t m_sensitiveCnt;
                    bool m_sensitiveCntHasBeenSet;

                    /**
                     * <p>Number of scheduled scan configurations</p>
                     */
                    uint64_t m_timedScanTaskConfigCnt;
                    bool m_timedScanTaskConfigCntHasBeenSet;

                    /**
                     * <p>Total quota</p>
                     */
                    uint64_t m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * <p>Used quota</p>
                     */
                    uint64_t m_usedQuota;
                    bool m_usedQuotaHasBeenSet;

                    /**
                     * <p>Remaining quota</p>
                     */
                    uint64_t m_remainingQuota;
                    bool m_remainingQuotaHasBeenSet;

                    /**
                     * <p>Trial use quota</p>
                     */
                    uint64_t m_trialQuota;
                    bool m_trialQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIMAGEREGISTRYASSETOVERVIEWRESPONSE_H_
