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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULIMAGESUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULIMAGESUMMARYRESPONSE_H_

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
                * DescribeVulImageSummary response structure.
                */
                class DescribeVulImageSummaryResponse : public AbstractModel
                {
                public:
                    DescribeVulImageSummaryResponse();
                    ~DescribeVulImageSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of images affected by critical or high-risk vulnerabilities
                     * @return SeriousVulImageCount Number of images affected by critical or high-risk vulnerabilities
                     * 
                     */
                    int64_t GetSeriousVulImageCount() const;

                    /**
                     * 判断参数 SeriousVulImageCount 是否已赋值
                     * @return SeriousVulImageCount 是否已赋值
                     * 
                     */
                    bool SeriousVulImageCountHasBeenSet() const;

                    /**
                     * 获取Number of scanned images
                     * @return ScannedImageCount Number of scanned images
                     * 
                     */
                    int64_t GetScannedImageCount() const;

                    /**
                     * 判断参数 ScannedImageCount 是否已赋值
                     * @return ScannedImageCount 是否已赋值
                     * 
                     */
                    bool ScannedImageCountHasBeenSet() const;

                    /**
                     * 获取Total number of vulnerabilities
                     * @return VulTotalCount Total number of vulnerabilities
                     * 
                     */
                    int64_t GetVulTotalCount() const;

                    /**
                     * 判断参数 VulTotalCount 是否已赋值
                     * @return VulTotalCount 是否已赋值
                     * 
                     */
                    bool VulTotalCountHasBeenSet() const;

                    /**
                     * 获取Number of system vulnerabilities
                     * @return SysTemVulCount Number of system vulnerabilities
                     * 
                     */
                    int64_t GetSysTemVulCount() const;

                    /**
                     * 判断参数 SysTemVulCount 是否已赋值
                     * @return SysTemVulCount 是否已赋值
                     * 
                     */
                    bool SysTemVulCountHasBeenSet() const;

                    /**
                     * 获取Number of web application vulnerabilities
                     * @return WebVulCount Number of web application vulnerabilities
                     * 
                     */
                    int64_t GetWebVulCount() const;

                    /**
                     * 判断参数 WebVulCount 是否已赋值
                     * @return WebVulCount 是否已赋值
                     * 
                     */
                    bool WebVulCountHasBeenSet() const;

                    /**
                     * 获取Number of licensed images
                     * @return AllAuthorizedImageCount Number of licensed images
                     * 
                     */
                    int64_t GetAllAuthorizedImageCount() const;

                    /**
                     * 判断参数 AllAuthorizedImageCount 是否已赋值
                     * @return AllAuthorizedImageCount 是否已赋值
                     * 
                     */
                    bool AllAuthorizedImageCountHasBeenSet() const;

                    /**
                     * 获取Number of emergency vulnerabilities
                     * @return EmergencyVulCount Number of emergency vulnerabilities
                     * 
                     */
                    int64_t GetEmergencyVulCount() const;

                    /**
                     * 判断参数 EmergencyVulCount 是否已赋值
                     * @return EmergencyVulCount 是否已赋值
                     * 
                     */
                    bool EmergencyVulCountHasBeenSet() const;

                    /**
                     * 获取Total number of vulnerabilities that can be scanned for
                     * @return SupportVulTotalCount Total number of vulnerabilities that can be scanned for
                     * 
                     */
                    int64_t GetSupportVulTotalCount() const;

                    /**
                     * 判断参数 SupportVulTotalCount 是否已赋值
                     * @return SupportVulTotalCount 是否已赋值
                     * 
                     */
                    bool SupportVulTotalCountHasBeenSet() const;

                    /**
                     * 获取Vulnerability library update time
                     * @return VulLibraryUpdateTime Vulnerability library update time
                     * 
                     */
                    std::string GetVulLibraryUpdateTime() const;

                    /**
                     * 判断参数 VulLibraryUpdateTime 是否已赋值
                     * @return VulLibraryUpdateTime 是否已赋值
                     * 
                     */
                    bool VulLibraryUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Number of images affected by critical or high-risk vulnerabilities
                     */
                    int64_t m_seriousVulImageCount;
                    bool m_seriousVulImageCountHasBeenSet;

                    /**
                     * Number of scanned images
                     */
                    int64_t m_scannedImageCount;
                    bool m_scannedImageCountHasBeenSet;

                    /**
                     * Total number of vulnerabilities
                     */
                    int64_t m_vulTotalCount;
                    bool m_vulTotalCountHasBeenSet;

                    /**
                     * Number of system vulnerabilities
                     */
                    int64_t m_sysTemVulCount;
                    bool m_sysTemVulCountHasBeenSet;

                    /**
                     * Number of web application vulnerabilities
                     */
                    int64_t m_webVulCount;
                    bool m_webVulCountHasBeenSet;

                    /**
                     * Number of licensed images
                     */
                    int64_t m_allAuthorizedImageCount;
                    bool m_allAuthorizedImageCountHasBeenSet;

                    /**
                     * Number of emergency vulnerabilities
                     */
                    int64_t m_emergencyVulCount;
                    bool m_emergencyVulCountHasBeenSet;

                    /**
                     * Total number of vulnerabilities that can be scanned for
                     */
                    int64_t m_supportVulTotalCount;
                    bool m_supportVulTotalCountHasBeenSet;

                    /**
                     * Vulnerability library update time
                     */
                    std::string m_vulLibraryUpdateTime;
                    bool m_vulLibraryUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULIMAGESUMMARYRESPONSE_H_
