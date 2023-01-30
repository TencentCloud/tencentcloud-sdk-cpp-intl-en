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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYSCANSTATUSONEKEYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYSCANSTATUSONEKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageProgress.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetImageRegistryScanStatusOneKey response structure.
                */
                class DescribeAssetImageRegistryScanStatusOneKeyResponse : public AbstractModel
                {
                public:
                    DescribeAssetImageRegistryScanStatusOneKeyResponse();
                    ~DescribeAssetImageRegistryScanStatusOneKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of images
                     * @return ImageTotal Number of images
                     */
                    uint64_t GetImageTotal() const;

                    /**
                     * 判断参数 ImageTotal 是否已赋值
                     * @return ImageTotal 是否已赋值
                     */
                    bool ImageTotalHasBeenSet() const;

                    /**
                     * 获取Number of scanned images
                     * @return ImageScanCnt Number of scanned images
                     */
                    uint64_t GetImageScanCnt() const;

                    /**
                     * 判断参数 ImageScanCnt 是否已赋值
                     * @return ImageScanCnt 是否已赋值
                     */
                    bool ImageScanCntHasBeenSet() const;

                    /**
                     * 获取Scanning progress list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageStatus Scanning progress list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ImageProgress> GetImageStatus() const;

                    /**
                     * 判断参数 ImageStatus 是否已赋值
                     * @return ImageStatus 是否已赋值
                     */
                    bool ImageStatusHasBeenSet() const;

                    /**
                     * 获取Number of successfully scanned images
                     * @return SuccessCount Number of successfully scanned images
                     */
                    uint64_t GetSuccessCount() const;

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取Number of risks
                     * @return RiskCount Number of risks
                     */
                    uint64_t GetRiskCount() const;

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取Scanning progress
                     * @return Schedule Scanning progress
                     */
                    uint64_t GetSchedule() const;

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取Scanning status
                     * @return Status Scanning status
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Remaining scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanRemainTime Remaining scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetScanRemainTime() const;

                    /**
                     * 判断参数 ScanRemainTime 是否已赋值
                     * @return ScanRemainTime 是否已赋值
                     */
                    bool ScanRemainTimeHasBeenSet() const;

                private:

                    /**
                     * Number of images
                     */
                    uint64_t m_imageTotal;
                    bool m_imageTotalHasBeenSet;

                    /**
                     * Number of scanned images
                     */
                    uint64_t m_imageScanCnt;
                    bool m_imageScanCntHasBeenSet;

                    /**
                     * Scanning progress list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ImageProgress> m_imageStatus;
                    bool m_imageStatusHasBeenSet;

                    /**
                     * Number of successfully scanned images
                     */
                    uint64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * Number of risks
                     */
                    uint64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * Scanning progress
                     */
                    uint64_t m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * Scanning status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Remaining scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scanRemainTime;
                    bool m_scanRemainTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYSCANSTATUSONEKEYRESPONSE_H_
