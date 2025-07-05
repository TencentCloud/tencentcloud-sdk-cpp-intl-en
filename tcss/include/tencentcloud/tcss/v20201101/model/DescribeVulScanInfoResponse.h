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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSCANINFORESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSCANINFORESPONSE_H_

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
                * DescribeVulScanInfo response structure.
                */
                class DescribeVulScanInfoResponse : public AbstractModel
                {
                public:
                    DescribeVulScanInfoResponse();
                    ~DescribeVulScanInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of local images scanned this time
                     * @return LocalImageScanCount Total number of local images scanned this time
                     * 
                     */
                    int64_t GetLocalImageScanCount() const;

                    /**
                     * 判断参数 LocalImageScanCount 是否已赋值
                     * @return LocalImageScanCount 是否已赋值
                     * 
                     */
                    bool LocalImageScanCountHasBeenSet() const;

                    /**
                     * 获取Number of ignored vulnerabilities
                     * @return IgnoreVulCount Number of ignored vulnerabilities
                     * 
                     */
                    int64_t GetIgnoreVulCount() const;

                    /**
                     * 判断参数 IgnoreVulCount 是否已赋值
                     * @return IgnoreVulCount 是否已赋值
                     * 
                     */
                    bool IgnoreVulCountHasBeenSet() const;

                    /**
                     * 获取Start time of the vulnerability scan
                     * @return ScanStartTime Start time of the vulnerability scan
                     * 
                     */
                    std::string GetScanStartTime() const;

                    /**
                     * 判断参数 ScanStartTime 是否已赋值
                     * @return ScanStartTime 是否已赋值
                     * 
                     */
                    bool ScanStartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the vulnerability scan
                     * @return ScanEndTime End time of the vulnerability scan
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 判断参数 ScanEndTime 是否已赋值
                     * @return ScanEndTime 是否已赋值
                     * 
                     */
                    bool ScanEndTimeHasBeenSet() const;

                    /**
                     * 获取Number of images found to be at risk
                     * @return FoundRiskImageCount Number of images found to be at risk
                     * 
                     */
                    int64_t GetFoundRiskImageCount() const;

                    /**
                     * 判断参数 FoundRiskImageCount 是否已赋值
                     * @return FoundRiskImageCount 是否已赋值
                     * 
                     */
                    bool FoundRiskImageCountHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities found in local images
                     * @return FoundVulCount Number of vulnerabilities found in local images
                     * 
                     */
                    int64_t GetFoundVulCount() const;

                    /**
                     * 判断参数 FoundVulCount 是否已赋值
                     * @return FoundVulCount 是否已赋值
                     * 
                     */
                    bool FoundVulCountHasBeenSet() const;

                    /**
                     * 获取Scanning progress
                     * @return ScanProgress Scanning progress
                     * 
                     */
                    double GetScanProgress() const;

                    /**
                     * 判断参数 ScanProgress 是否已赋值
                     * @return ScanProgress 是否已赋值
                     * 
                     */
                    bool ScanProgressHasBeenSet() const;

                    /**
                     * 获取Total number of repository images scanned this time
                     * @return RegistryImageScanCount Total number of repository images scanned this time
                     * 
                     */
                    int64_t GetRegistryImageScanCount() const;

                    /**
                     * 判断参数 RegistryImageScanCount 是否已赋值
                     * @return RegistryImageScanCount 是否已赋值
                     * 
                     */
                    bool RegistryImageScanCountHasBeenSet() const;

                    /**
                     * 获取ID of the last task to scan local images for vulnerabilities
                     * @return LocalTaskID ID of the last task to scan local images for vulnerabilities
                     * 
                     */
                    int64_t GetLocalTaskID() const;

                    /**
                     * 判断参数 LocalTaskID 是否已赋值
                     * @return LocalTaskID 是否已赋值
                     * 
                     */
                    bool LocalTaskIDHasBeenSet() const;

                    /**
                     * 获取Scanning status. Valid values: `NOT_SCAN` (not scanned); `SCANNING` (scanning); `SCANNED` (scanned); `CANCELED` (stopped).
                     * @return Status Scanning status. Valid values: `NOT_SCAN` (not scanned); `SCANNING` (scanning); `SCANNED` (scanned); `CANCELED` (stopped).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Remaining time in seconds
                     * @return RemainingTime Remaining time in seconds
                     * 
                     */
                    double GetRemainingTime() const;

                    /**
                     * 判断参数 RemainingTime 是否已赋值
                     * @return RemainingTime 是否已赋值
                     * 
                     */
                    bool RemainingTimeHasBeenSet() const;

                    /**
                     * 获取ID of the last task to scan repository images for vulnerabilities
                     * @return RegistryTaskID ID of the last task to scan repository images for vulnerabilities
                     * 
                     */
                    int64_t GetRegistryTaskID() const;

                    /**
                     * 判断参数 RegistryTaskID 是否已赋值
                     * @return RegistryTaskID 是否已赋值
                     * 
                     */
                    bool RegistryTaskIDHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities found in the repository
                     * @return RegistryFoundVulCount Number of vulnerabilities found in the repository
                     * 
                     */
                    int64_t GetRegistryFoundVulCount() const;

                    /**
                     * 判断参数 RegistryFoundVulCount 是否已赋值
                     * @return RegistryFoundVulCount 是否已赋值
                     * 
                     */
                    bool RegistryFoundVulCountHasBeenSet() const;

                private:

                    /**
                     * Total number of local images scanned this time
                     */
                    int64_t m_localImageScanCount;
                    bool m_localImageScanCountHasBeenSet;

                    /**
                     * Number of ignored vulnerabilities
                     */
                    int64_t m_ignoreVulCount;
                    bool m_ignoreVulCountHasBeenSet;

                    /**
                     * Start time of the vulnerability scan
                     */
                    std::string m_scanStartTime;
                    bool m_scanStartTimeHasBeenSet;

                    /**
                     * End time of the vulnerability scan
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * Number of images found to be at risk
                     */
                    int64_t m_foundRiskImageCount;
                    bool m_foundRiskImageCountHasBeenSet;

                    /**
                     * Number of vulnerabilities found in local images
                     */
                    int64_t m_foundVulCount;
                    bool m_foundVulCountHasBeenSet;

                    /**
                     * Scanning progress
                     */
                    double m_scanProgress;
                    bool m_scanProgressHasBeenSet;

                    /**
                     * Total number of repository images scanned this time
                     */
                    int64_t m_registryImageScanCount;
                    bool m_registryImageScanCountHasBeenSet;

                    /**
                     * ID of the last task to scan local images for vulnerabilities
                     */
                    int64_t m_localTaskID;
                    bool m_localTaskIDHasBeenSet;

                    /**
                     * Scanning status. Valid values: `NOT_SCAN` (not scanned); `SCANNING` (scanning); `SCANNED` (scanned); `CANCELED` (stopped).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Remaining time in seconds
                     */
                    double m_remainingTime;
                    bool m_remainingTimeHasBeenSet;

                    /**
                     * ID of the last task to scan repository images for vulnerabilities
                     */
                    int64_t m_registryTaskID;
                    bool m_registryTaskIDHasBeenSet;

                    /**
                     * Number of vulnerabilities found in the repository
                     */
                    int64_t m_registryFoundVulCount;
                    bool m_registryFoundVulCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSCANINFORESPONSE_H_
