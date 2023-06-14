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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSUMMARYRESPONSE_H_

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
                * DescribeVulSummary response structure.
                */
                class DescribeVulSummaryResponse : public AbstractModel
                {
                public:
                    DescribeVulSummaryResponse();
                    ~DescribeVulSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


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
                     * 获取Number of critical and high-risk vulnerabilities
                     * @return SeriousVulCount Number of critical and high-risk vulnerabilities
                     * 
                     */
                    int64_t GetSeriousVulCount() const;

                    /**
                     * 判断参数 SeriousVulCount 是否已赋值
                     * @return SeriousVulCount 是否已赋值
                     * 
                     */
                    bool SeriousVulCountHasBeenSet() const;

                    /**
                     * 获取Number of high-priority vulnerabilities
                     * @return SuggestVulCount Number of high-priority vulnerabilities
                     * 
                     */
                    int64_t GetSuggestVulCount() const;

                    /**
                     * 判断参数 SuggestVulCount 是否已赋值
                     * @return SuggestVulCount 是否已赋值
                     * 
                     */
                    bool SuggestVulCountHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities with POC or EXP
                     * @return PocExpLevelVulCount Number of vulnerabilities with POC or EXP
                     * 
                     */
                    int64_t GetPocExpLevelVulCount() const;

                    /**
                     * 判断参数 PocExpLevelVulCount 是否已赋值
                     * @return PocExpLevelVulCount 是否已赋值
                     * 
                     */
                    bool PocExpLevelVulCountHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities with remote EXP
                     * @return RemoteExpLevelVulCount Number of vulnerabilities with remote EXP
                     * 
                     */
                    int64_t GetRemoteExpLevelVulCount() const;

                    /**
                     * 判断参数 RemoteExpLevelVulCount 是否已赋值
                     * @return RemoteExpLevelVulCount 是否已赋值
                     * 
                     */
                    bool RemoteExpLevelVulCountHasBeenSet() const;

                    /**
                     * 获取Number of images on the latest version affected by critical or high-risk vulnerabilities
                     * @return SeriousVulNewestImageCount Number of images on the latest version affected by critical or high-risk vulnerabilities
                     * 
                     */
                    int64_t GetSeriousVulNewestImageCount() const;

                    /**
                     * 判断参数 SeriousVulNewestImageCount 是否已赋值
                     * @return SeriousVulNewestImageCount 是否已赋值
                     * 
                     */
                    bool SeriousVulNewestImageCountHasBeenSet() const;

                    /**
                     * 获取Number of high-priority system vulnerabilities
                     * @return SystemVulnerabilityFocusCount Number of high-priority system vulnerabilities
                     * 
                     */
                    int64_t GetSystemVulnerabilityFocusCount() const;

                    /**
                     * 判断参数 SystemVulnerabilityFocusCount 是否已赋值
                     * @return SystemVulnerabilityFocusCount 是否已赋值
                     * 
                     */
                    bool SystemVulnerabilityFocusCountHasBeenSet() const;

                    /**
                     * 获取Number of high-priority web vulnerabilities
                     * @return WebVulnerabilityFocusCount Number of high-priority web vulnerabilities
                     * 
                     */
                    int64_t GetWebVulnerabilityFocusCount() const;

                    /**
                     * 判断参数 WebVulnerabilityFocusCount 是否已赋值
                     * @return WebVulnerabilityFocusCount 是否已赋值
                     * 
                     */
                    bool WebVulnerabilityFocusCountHasBeenSet() const;

                    /**
                     * 获取Number of affected local images
                     * @return SeriousVulnerabilityLocalImageCount Number of affected local images
                     * 
                     */
                    int64_t GetSeriousVulnerabilityLocalImageCount() const;

                    /**
                     * 判断参数 SeriousVulnerabilityLocalImageCount 是否已赋值
                     * @return SeriousVulnerabilityLocalImageCount 是否已赋值
                     * 
                     */
                    bool SeriousVulnerabilityLocalImageCountHasBeenSet() const;

                    /**
                     * 获取Number of affected repository images
                     * @return SeriousVulnerabilityRegistryImageCount Number of affected repository images
                     * 
                     */
                    int64_t GetSeriousVulnerabilityRegistryImageCount() const;

                    /**
                     * 判断参数 SeriousVulnerabilityRegistryImageCount 是否已赋值
                     * @return SeriousVulnerabilityRegistryImageCount 是否已赋值
                     * 
                     */
                    bool SeriousVulnerabilityRegistryImageCountHasBeenSet() const;

                    /**
                     * 获取Number of emergency vulnerabilities
                     * @return EmergencyVulnerabilityCount Number of emergency vulnerabilities
                     * 
                     */
                    int64_t GetEmergencyVulnerabilityCount() const;

                    /**
                     * 判断参数 EmergencyVulnerabilityCount 是否已赋值
                     * @return EmergencyVulnerabilityCount 是否已赋值
                     * 
                     */
                    bool EmergencyVulnerabilityCountHasBeenSet() const;

                private:

                    /**
                     * Total number of vulnerabilities
                     */
                    int64_t m_vulTotalCount;
                    bool m_vulTotalCountHasBeenSet;

                    /**
                     * Number of critical and high-risk vulnerabilities
                     */
                    int64_t m_seriousVulCount;
                    bool m_seriousVulCountHasBeenSet;

                    /**
                     * Number of high-priority vulnerabilities
                     */
                    int64_t m_suggestVulCount;
                    bool m_suggestVulCountHasBeenSet;

                    /**
                     * Number of vulnerabilities with POC or EXP
                     */
                    int64_t m_pocExpLevelVulCount;
                    bool m_pocExpLevelVulCountHasBeenSet;

                    /**
                     * Number of vulnerabilities with remote EXP
                     */
                    int64_t m_remoteExpLevelVulCount;
                    bool m_remoteExpLevelVulCountHasBeenSet;

                    /**
                     * Number of images on the latest version affected by critical or high-risk vulnerabilities
                     */
                    int64_t m_seriousVulNewestImageCount;
                    bool m_seriousVulNewestImageCountHasBeenSet;

                    /**
                     * Number of high-priority system vulnerabilities
                     */
                    int64_t m_systemVulnerabilityFocusCount;
                    bool m_systemVulnerabilityFocusCountHasBeenSet;

                    /**
                     * Number of high-priority web vulnerabilities
                     */
                    int64_t m_webVulnerabilityFocusCount;
                    bool m_webVulnerabilityFocusCountHasBeenSet;

                    /**
                     * Number of affected local images
                     */
                    int64_t m_seriousVulnerabilityLocalImageCount;
                    bool m_seriousVulnerabilityLocalImageCountHasBeenSet;

                    /**
                     * Number of affected repository images
                     */
                    int64_t m_seriousVulnerabilityRegistryImageCount;
                    bool m_seriousVulnerabilityRegistryImageCountHasBeenSet;

                    /**
                     * Number of emergency vulnerabilities
                     */
                    int64_t m_emergencyVulnerabilityCount;
                    bool m_emergencyVulnerabilityCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSUMMARYRESPONSE_H_
