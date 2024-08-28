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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYPROTECTIONSTATRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYPROTECTIONSTATRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeSecurityProtectionStat response structure.
                */
                class DescribeSecurityProtectionStatResponse : public AbstractModel
                {
                public:
                    DescribeSecurityProtectionStatResponse();
                    ~DescribeSecurityProtectionStatResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取0: asset not paid; 1: agent not installed; 2: Pro or Ultimate Edition for some assets; 3: Pro or Ultimate Edition for all assets.
                     * @return AssetManageStat 0: asset not paid; 1: agent not installed; 2: Pro or Ultimate Edition for some assets; 3: Pro or Ultimate Edition for all assets.
                     * 
                     */
                    uint64_t GetAssetManageStat() const;

                    /**
                     * 判断参数 AssetManageStat 是否已赋值
                     * @return AssetManageStat 是否已赋值
                     * 
                     */
                    bool AssetManageStatHasBeenSet() const;

                    /**
                     * 获取0: never scanned or asset not paid; 1: vulnerability risk found; 2: no risk.
                     * @return VulManageStat 0: never scanned or asset not paid; 1: vulnerability risk found; 2: no risk.
                     * 
                     */
                    uint64_t GetVulManageStat() const;

                    /**
                     * 判断参数 VulManageStat 是否已赋值
                     * @return VulManageStat 是否已赋值
                     * 
                     */
                    bool VulManageStatHasBeenSet() const;

                    /**
                     * 获取0: never scanned or asset not paid; 1: baseline risk found; 2: no risk.
                     * @return SecureBasicLineStat 0: never scanned or asset not paid; 1: baseline risk found; 2: no risk.
                     * 
                     */
                    uint64_t GetSecureBasicLineStat() const;

                    /**
                     * 判断参数 SecureBasicLineStat 是否已赋值
                     * @return SecureBasicLineStat 是否已赋值
                     * 
                     */
                    bool SecureBasicLineStatHasBeenSet() const;

                    /**
                     * 获取0: never scanned or asset not paid; 1: scanned and malicious files found; 2: scanned but isolation protection disabled; 3: scanned, protection enabled, and no risk found.
                     * @return MalwareScanStat 0: never scanned or asset not paid; 1: scanned and malicious files found; 2: scanned but isolation protection disabled; 3: scanned, protection enabled, and no risk found.
                     * 
                     */
                    uint64_t GetMalwareScanStat() const;

                    /**
                     * 判断参数 MalwareScanStat 是否已赋值
                     * @return MalwareScanStat 是否已赋值
                     * 
                     */
                    bool MalwareScanStatHasBeenSet() const;

                    /**
                     * 获取Enabling status of password cracking prevention. 0: disabled or asset not paid; 1: enabled; 2: events pending fixing found.
                     * @return DefenseBruteAttackStat Enabling status of password cracking prevention. 0: disabled or asset not paid; 1: enabled; 2: events pending fixing found.
                     * 
                     */
                    uint64_t GetDefenseBruteAttackStat() const;

                    /**
                     * 判断参数 DefenseBruteAttackStat 是否已赋值
                     * @return DefenseBruteAttackStat 是否已赋值
                     * 
                     */
                    bool DefenseBruteAttackStatHasBeenSet() const;

                    /**
                     * 获取Core file monitoring. 0: disabled (asset not paid); 1: enabled.
                     * @return FileTamperStat Core file monitoring. 0: disabled (asset not paid); 1: enabled.
                     * 
                     */
                    uint64_t GetFileTamperStat() const;

                    /**
                     * 判断参数 FileTamperStat 是否已赋值
                     * @return FileTamperStat 是否已赋值
                     * 
                     */
                    bool FileTamperStatHasBeenSet() const;

                    /**
                     * 获取Web page tamper prevention. 0: disabled; 1: enabled.
                     * @return WebPageStat Web page tamper prevention. 0: disabled; 1: enabled.
                     * 
                     */
                    uint64_t GetWebPageStat() const;

                    /**
                     * 判断参数 WebPageStat 是否已赋值
                     * @return WebPageStat 是否已赋值
                     * 
                     */
                    bool WebPageStatHasBeenSet() const;

                    /**
                     * 获取Abnormal log-in. 0: unfixed risks found; 1: no risk and allowlist not configured; 2: no risk and allowlist configured.
                     * @return LoginLogStat Abnormal log-in. 0: unfixed risks found; 1: no risk and allowlist not configured; 2: no risk and allowlist configured.
                     * 
                     */
                    uint64_t GetLoginLogStat() const;

                    /**
                     * 判断参数 LoginLogStat 是否已赋值
                     * @return LoginLogStat 是否已赋值
                     * 
                     */
                    bool LoginLogStatHasBeenSet() const;

                    /**
                     * 获取Password cracking risk detection. 0: unfixed risks found; 1: no risk with detection in progress.
                     * @return DiscoverBruteAttackStat Password cracking risk detection. 0: unfixed risks found; 1: no risk with detection in progress.
                     * 
                     */
                    uint64_t GetDiscoverBruteAttackStat() const;

                    /**
                     * 判断参数 DiscoverBruteAttackStat 是否已赋值
                     * @return DiscoverBruteAttackStat 是否已赋值
                     * 
                     */
                    bool DiscoverBruteAttackStatHasBeenSet() const;

                    /**
                     * 获取Malicious request. 0: no asset in Pro or Ultimate Edition; 1: unfixed malicious request risks found; 2: paid assets found with no risk.
                     * @return MaliciousRequestStat Malicious request. 0: no asset in Pro or Ultimate Edition; 1: unfixed malicious request risks found; 2: paid assets found with no risk.
                     * 
                     */
                    uint64_t GetMaliciousRequestStat() const;

                    /**
                     * 判断参数 MaliciousRequestStat 是否已赋值
                     * @return MaliciousRequestStat 是否已赋值
                     * 
                     */
                    bool MaliciousRequestStatHasBeenSet() const;

                    /**
                     * 获取Local privilege escalation. 0: no asset in Pro or Ultimate Edition; 1: unfixed risks found; 2: paid assets found with no risk.
                     * @return PrivilegeStat Local privilege escalation. 0: no asset in Pro or Ultimate Edition; 1: unfixed risks found; 2: paid assets found with no risk.
                     * 
                     */
                    uint64_t GetPrivilegeStat() const;

                    /**
                     * 判断参数 PrivilegeStat 是否已赋值
                     * @return PrivilegeStat 是否已赋值
                     * 
                     */
                    bool PrivilegeStatHasBeenSet() const;

                    /**
                     * 获取Reverse shell. 0: no asset in Pro or Ultimate Edition; 1: unfixed risks found; 2: paid assets found with no risk.
                     * @return ReverseShellStat Reverse shell. 0: no asset in Pro or Ultimate Edition; 1: unfixed risks found; 2: paid assets found with no risk.
                     * 
                     */
                    uint64_t GetReverseShellStat() const;

                    /**
                     * 判断参数 ReverseShellStat 是否已赋值
                     * @return ReverseShellStat 是否已赋值
                     * 
                     */
                    bool ReverseShellStatHasBeenSet() const;

                    /**
                     * 获取Expert service. 0: disabled; 1: enabled.
                     * @return ExpertServiceStat Expert service. 0: disabled; 1: enabled.
                     * 
                     */
                    uint64_t GetExpertServiceStat() const;

                    /**
                     * 判断参数 ExpertServiceStat 是否已赋值
                     * @return ExpertServiceStat 是否已赋值
                     * 
                     */
                    bool ExpertServiceStatHasBeenSet() const;

                    /**
                     * 获取Log analysis. 0: disabled; 1: enabled.
                     * @return LogAnalysisStat Log analysis. 0: disabled; 1: enabled.
                     * 
                     */
                    uint64_t GetLogAnalysisStat() const;

                    /**
                     * 判断参数 LogAnalysisStat 是否已赋值
                     * @return LogAnalysisStat 是否已赋值
                     * 
                     */
                    bool LogAnalysisStatHasBeenSet() const;

                    /**
                     * 获取Security alarm. 0: disabled (for all assets); 1: enabled (for at least one asset).
                     * @return WarningSetStat Security alarm. 0: disabled (for all assets); 1: enabled (for at least one asset).
                     * 
                     */
                    uint64_t GetWarningSetStat() const;

                    /**
                     * 判断参数 WarningSetStat 是否已赋值
                     * @return WarningSetStat 是否已赋值
                     * 
                     */
                    bool WarningSetStatHasBeenSet() const;

                    /**
                     * 获取High-risk command. 0: no asset in Pro or Ultimate Edition; 1: unfixed risks found; 2: paid assets found with no risk.
                     * @return EventBashStat High-risk command. 0: no asset in Pro or Ultimate Edition; 1: unfixed risks found; 2: paid assets found with no risk.
                     * 
                     */
                    uint64_t GetEventBashStat() const;

                    /**
                     * 判断参数 EventBashStat 是否已赋值
                     * @return EventBashStat 是否已赋值
                     * 
                     */
                    bool EventBashStatHasBeenSet() const;

                private:

                    /**
                     * 0: asset not paid; 1: agent not installed; 2: Pro or Ultimate Edition for some assets; 3: Pro or Ultimate Edition for all assets.
                     */
                    uint64_t m_assetManageStat;
                    bool m_assetManageStatHasBeenSet;

                    /**
                     * 0: never scanned or asset not paid; 1: vulnerability risk found; 2: no risk.
                     */
                    uint64_t m_vulManageStat;
                    bool m_vulManageStatHasBeenSet;

                    /**
                     * 0: never scanned or asset not paid; 1: baseline risk found; 2: no risk.
                     */
                    uint64_t m_secureBasicLineStat;
                    bool m_secureBasicLineStatHasBeenSet;

                    /**
                     * 0: never scanned or asset not paid; 1: scanned and malicious files found; 2: scanned but isolation protection disabled; 3: scanned, protection enabled, and no risk found.
                     */
                    uint64_t m_malwareScanStat;
                    bool m_malwareScanStatHasBeenSet;

                    /**
                     * Enabling status of password cracking prevention. 0: disabled or asset not paid; 1: enabled; 2: events pending fixing found.
                     */
                    uint64_t m_defenseBruteAttackStat;
                    bool m_defenseBruteAttackStatHasBeenSet;

                    /**
                     * Core file monitoring. 0: disabled (asset not paid); 1: enabled.
                     */
                    uint64_t m_fileTamperStat;
                    bool m_fileTamperStatHasBeenSet;

                    /**
                     * Web page tamper prevention. 0: disabled; 1: enabled.
                     */
                    uint64_t m_webPageStat;
                    bool m_webPageStatHasBeenSet;

                    /**
                     * Abnormal log-in. 0: unfixed risks found; 1: no risk and allowlist not configured; 2: no risk and allowlist configured.
                     */
                    uint64_t m_loginLogStat;
                    bool m_loginLogStatHasBeenSet;

                    /**
                     * Password cracking risk detection. 0: unfixed risks found; 1: no risk with detection in progress.
                     */
                    uint64_t m_discoverBruteAttackStat;
                    bool m_discoverBruteAttackStatHasBeenSet;

                    /**
                     * Malicious request. 0: no asset in Pro or Ultimate Edition; 1: unfixed malicious request risks found; 2: paid assets found with no risk.
                     */
                    uint64_t m_maliciousRequestStat;
                    bool m_maliciousRequestStatHasBeenSet;

                    /**
                     * Local privilege escalation. 0: no asset in Pro or Ultimate Edition; 1: unfixed risks found; 2: paid assets found with no risk.
                     */
                    uint64_t m_privilegeStat;
                    bool m_privilegeStatHasBeenSet;

                    /**
                     * Reverse shell. 0: no asset in Pro or Ultimate Edition; 1: unfixed risks found; 2: paid assets found with no risk.
                     */
                    uint64_t m_reverseShellStat;
                    bool m_reverseShellStatHasBeenSet;

                    /**
                     * Expert service. 0: disabled; 1: enabled.
                     */
                    uint64_t m_expertServiceStat;
                    bool m_expertServiceStatHasBeenSet;

                    /**
                     * Log analysis. 0: disabled; 1: enabled.
                     */
                    uint64_t m_logAnalysisStat;
                    bool m_logAnalysisStatHasBeenSet;

                    /**
                     * Security alarm. 0: disabled (for all assets); 1: enabled (for at least one asset).
                     */
                    uint64_t m_warningSetStat;
                    bool m_warningSetStatHasBeenSet;

                    /**
                     * High-risk command. 0: no asset in Pro or Ultimate Edition; 1: unfixed risks found; 2: paid assets found with no risk.
                     */
                    uint64_t m_eventBashStat;
                    bool m_eventBashStatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYPROTECTIONSTATRESPONSE_H_
