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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGESCANSTATUSRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGESCANSTATUSRESPONSE_H_

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
                * DescribeAssetImageScanStatus response structure.
                */
                class DescribeAssetImageScanStatusResponse : public AbstractModel
                {
                public:
                    DescribeAssetImageScanStatusResponse();
                    ~DescribeAssetImageScanStatusResponse() = default;
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
                     * 获取Scanning progress, the value of which is calculated as `ImageScanCnt`/`ImageTotal` * 100.
                     * @return Schedule Scanning progress, the value of which is calculated as `ImageScanCnt`/`ImageTotal` * 100.
                     */
                    uint64_t GetSchedule() const;

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     */
                    bool ScheduleHasBeenSet() const;

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
                     * 获取Remaining scan time
                     * @return LeftSeconds Remaining scan time
                     */
                    uint64_t GetLeftSeconds() const;

                    /**
                     * 判断参数 LeftSeconds 是否已赋值
                     * @return LeftSeconds 是否已赋值
                     */
                    bool LeftSecondsHasBeenSet() const;

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
                     * Scanning status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Scanning progress, the value of which is calculated as `ImageScanCnt`/`ImageTotal` * 100.
                     */
                    uint64_t m_schedule;
                    bool m_scheduleHasBeenSet;

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
                     * Remaining scan time
                     */
                    uint64_t m_leftSeconds;
                    bool m_leftSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGESCANSTATUSRESPONSE_H_
