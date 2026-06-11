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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEDETAILRESPONSE_H_

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
                * DescribeAssetImageDetail response structure.
                */
                class DescribeAssetImageDetailResponse : public AbstractModel
                {
                public:
                    DescribeAssetImageDetailResponse();
                    ~DescribeAssetImageDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Image ID.</p>
                     * @return ImageID <p>Image ID.</p>
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取<p>Image name.</p>
                     * @return ImageName <p>Image name.</p>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取<p>Image digests.</p>
                     * @return ImageDigest <p>Image digests.</p>
                     * 
                     */
                    std::string GetImageDigest() const;

                    /**
                     * 判断参数 ImageDigest 是否已赋值
                     * @return ImageDigest 是否已赋值
                     * 
                     */
                    bool ImageDigestHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Image size.</p>
                     * @return Size <p>Image size.</p>
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>Number of associated hosts (including normal nodes and super nodes).</p>
                     * @return HostCnt <p>Number of associated hosts (including normal nodes and super nodes).</p>
                     * 
                     */
                    uint64_t GetHostCnt() const;

                    /**
                     * 判断参数 HostCnt 是否已赋值
                     * @return HostCnt 是否已赋值
                     * 
                     */
                    bool HostCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of associated containers.</p>
                     * @return ContainerCnt <p>Number of associated containers.</p>
                     * 
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 判断参数 ContainerCnt 是否已赋值
                     * @return ContainerCnt 是否已赋值
                     * 
                     */
                    bool ContainerCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of super nodes.</p>
                     * @return SuperNodeCnt <p>Number of super nodes.</p>
                     * 
                     */
                    uint64_t GetSuperNodeCnt() const;

                    /**
                     * 判断参数 SuperNodeCnt 是否已赋值
                     * @return SuperNodeCnt 是否已赋值
                     * 
                     */
                    bool SuperNodeCntHasBeenSet() const;

                    /**
                     * 获取<p>Last scan time.</p>
                     * @return ScanTime <p>Last scan time.</p>
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
                     * 获取<p>Number of vulnerabilities.</p>
                     * @return VulCnt <p>Number of vulnerabilities.</p>
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
                     * 获取<p>Number of risky behaviors.</p>
                     * @return RiskCnt <p>Number of risky behaviors.</p>
                     * 
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     * 
                     */
                    bool RiskCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of sensitive information entries.</p>
                     * @return SensitiveInfoCnt <p>Number of sensitive information entries.</p>
                     * 
                     */
                    uint64_t GetSensitiveInfoCnt() const;

                    /**
                     * 判断参数 SensitiveInfoCnt 是否已赋值
                     * @return SensitiveInfoCnt 是否已赋值
                     * 
                     */
                    bool SensitiveInfoCntHasBeenSet() const;

                    /**
                     * 获取<p>Whether the image is trusted.</p>
                     * @return IsTrustImage <p>Whether the image is trusted.</p>
                     * 
                     */
                    bool GetIsTrustImage() const;

                    /**
                     * 判断参数 IsTrustImage 是否已赋值
                     * @return IsTrustImage 是否已赋值
                     * 
                     */
                    bool IsTrustImageHasBeenSet() const;

                    /**
                     * 获取<p>Image OS.</p>
                     * @return OsName <p>Image OS.</p>
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取<p>Agent image scan error.</p>
                     * @return AgentError <p>Agent image scan error.</p>
                     * 
                     */
                    std::string GetAgentError() const;

                    /**
                     * 判断参数 AgentError 是否已赋值
                     * @return AgentError 是否已赋值
                     * 
                     */
                    bool AgentErrorHasBeenSet() const;

                    /**
                     * 获取<p>Backend image scan error.</p>
                     * @return ScanError <p>Backend image scan error.</p>
                     * 
                     */
                    std::string GetScanError() const;

                    /**
                     * 判断参数 ScanError 是否已赋值
                     * @return ScanError 是否已赋值
                     * 
                     */
                    bool ScanErrorHasBeenSet() const;

                    /**
                     * 获取<p>System architecture.</p>
                     * @return Architecture <p>System architecture.</p>
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     * 
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取<p>Author.</p>
                     * @return Author <p>Author.</p>
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     * 
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取<p>Build history.</p>
                     * @return BuildHistory <p>Build history.</p>
                     * 
                     */
                    std::string GetBuildHistory() const;

                    /**
                     * 判断参数 BuildHistory 是否已赋值
                     * @return BuildHistory 是否已赋值
                     * 
                     */
                    bool BuildHistoryHasBeenSet() const;

                    /**
                     * 获取<p>Trojan scan progress.</p>
                     * @return ScanVirusProgress <p>Trojan scan progress.</p>
                     * 
                     */
                    uint64_t GetScanVirusProgress() const;

                    /**
                     * 判断参数 ScanVirusProgress 是否已赋值
                     * @return ScanVirusProgress 是否已赋值
                     * 
                     */
                    bool ScanVirusProgressHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability scan progress.</p>
                     * @return ScanVulProgress <p>Vulnerability scan progress.</p>
                     * 
                     */
                    uint64_t GetScanVulProgress() const;

                    /**
                     * 判断参数 ScanVulProgress 是否已赋值
                     * @return ScanVulProgress 是否已赋值
                     * 
                     */
                    bool ScanVulProgressHasBeenSet() const;

                    /**
                     * 获取<p>Sensitive information scan progress.</p>
                     * @return ScanRiskProgress <p>Sensitive information scan progress.</p>
                     * 
                     */
                    uint64_t GetScanRiskProgress() const;

                    /**
                     * 判断参数 ScanRiskProgress 是否已赋值
                     * @return ScanRiskProgress 是否已赋值
                     * 
                     */
                    bool ScanRiskProgressHasBeenSet() const;

                    /**
                     * 获取<p>Trojan scan error.</p>
                     * @return ScanVirusError <p>Trojan scan error.</p>
                     * 
                     */
                    std::string GetScanVirusError() const;

                    /**
                     * 判断参数 ScanVirusError 是否已赋值
                     * @return ScanVirusError 是否已赋值
                     * 
                     */
                    bool ScanVirusErrorHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability scan error.</p>
                     * @return ScanVulError <p>Vulnerability scan error.</p>
                     * 
                     */
                    std::string GetScanVulError() const;

                    /**
                     * 判断参数 ScanVulError 是否已赋值
                     * @return ScanVulError 是否已赋值
                     * 
                     */
                    bool ScanVulErrorHasBeenSet() const;

                    /**
                     * 获取<p>Sensitive information error.</p>
                     * @return ScanRiskError <p>Sensitive information error.</p>
                     * 
                     */
                    std::string GetScanRiskError() const;

                    /**
                     * 判断参数 ScanRiskError 是否已赋值
                     * @return ScanRiskError 是否已赋值
                     * 
                     */
                    bool ScanRiskErrorHasBeenSet() const;

                    /**
                     * 获取<p>Image scan status.</p>
                     * @return ScanStatus <p>Image scan status.</p>
                     * 
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取<p>Number of Trojans and viruses.</p>
                     * @return VirusCnt <p>Number of Trojans and viruses.</p>
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
                     * 获取<p>Image scan status.</p>
                     * @return Status <p>Image scan status.</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Remaining scan time.</p>
                     * @return RemainScanTime <p>Remaining scan time.</p>
                     * 
                     */
                    uint64_t GetRemainScanTime() const;

                    /**
                     * 判断参数 RemainScanTime 是否已赋值
                     * @return RemainScanTime 是否已赋值
                     * 
                     */
                    bool RemainScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>Whether authorization is performed. 1 indicates authorized and 0 indicates unauthorized.</p>
                     * @return IsAuthorized <p>Whether authorization is performed. 1 indicates authorized and 0 indicates unauthorized.</p>
                     * 
                     */
                    int64_t GetIsAuthorized() const;

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     * 
                     */
                    bool IsAuthorizedHasBeenSet() const;

                    /**
                     * 获取<p>Solution.</p>
                     * @return Solution <p>Solution.</p>
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取<p>Reason.</p>
                     * @return Reason <p>Reason.</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取<p>Repository digests.</p>
                     * @return RepoDigests <p>Repository digests.</p>
                     * 
                     */
                    std::vector<std::string> GetRepoDigests() const;

                    /**
                     * 判断参数 RepoDigests 是否已赋值
                     * @return RepoDigests 是否已赋值
                     * 
                     */
                    bool RepoDigestsHasBeenSet() const;

                private:

                    /**
                     * <p>Image ID.</p>
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * <p>Image name.</p>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * <p>Image digests.</p>
                     */
                    std::string m_imageDigest;
                    bool m_imageDigestHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Image size.</p>
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>Number of associated hosts (including normal nodes and super nodes).</p>
                     */
                    uint64_t m_hostCnt;
                    bool m_hostCntHasBeenSet;

                    /**
                     * <p>Number of associated containers.</p>
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * <p>Number of super nodes.</p>
                     */
                    uint64_t m_superNodeCnt;
                    bool m_superNodeCntHasBeenSet;

                    /**
                     * <p>Last scan time.</p>
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * <p>Number of vulnerabilities.</p>
                     */
                    uint64_t m_vulCnt;
                    bool m_vulCntHasBeenSet;

                    /**
                     * <p>Number of risky behaviors.</p>
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * <p>Number of sensitive information entries.</p>
                     */
                    uint64_t m_sensitiveInfoCnt;
                    bool m_sensitiveInfoCntHasBeenSet;

                    /**
                     * <p>Whether the image is trusted.</p>
                     */
                    bool m_isTrustImage;
                    bool m_isTrustImageHasBeenSet;

                    /**
                     * <p>Image OS.</p>
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * <p>Agent image scan error.</p>
                     */
                    std::string m_agentError;
                    bool m_agentErrorHasBeenSet;

                    /**
                     * <p>Backend image scan error.</p>
                     */
                    std::string m_scanError;
                    bool m_scanErrorHasBeenSet;

                    /**
                     * <p>System architecture.</p>
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * <p>Author.</p>
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * <p>Build history.</p>
                     */
                    std::string m_buildHistory;
                    bool m_buildHistoryHasBeenSet;

                    /**
                     * <p>Trojan scan progress.</p>
                     */
                    uint64_t m_scanVirusProgress;
                    bool m_scanVirusProgressHasBeenSet;

                    /**
                     * <p>Vulnerability scan progress.</p>
                     */
                    uint64_t m_scanVulProgress;
                    bool m_scanVulProgressHasBeenSet;

                    /**
                     * <p>Sensitive information scan progress.</p>
                     */
                    uint64_t m_scanRiskProgress;
                    bool m_scanRiskProgressHasBeenSet;

                    /**
                     * <p>Trojan scan error.</p>
                     */
                    std::string m_scanVirusError;
                    bool m_scanVirusErrorHasBeenSet;

                    /**
                     * <p>Vulnerability scan error.</p>
                     */
                    std::string m_scanVulError;
                    bool m_scanVulErrorHasBeenSet;

                    /**
                     * <p>Sensitive information error.</p>
                     */
                    std::string m_scanRiskError;
                    bool m_scanRiskErrorHasBeenSet;

                    /**
                     * <p>Image scan status.</p>
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * <p>Number of Trojans and viruses.</p>
                     */
                    uint64_t m_virusCnt;
                    bool m_virusCntHasBeenSet;

                    /**
                     * <p>Image scan status.</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Remaining scan time.</p>
                     */
                    uint64_t m_remainScanTime;
                    bool m_remainScanTimeHasBeenSet;

                    /**
                     * <p>Whether authorization is performed. 1 indicates authorized and 0 indicates unauthorized.</p>
                     */
                    int64_t m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                    /**
                     * <p>Solution.</p>
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * <p>Reason.</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * <p>Repository digests.</p>
                     */
                    std::vector<std::string> m_repoDigests;
                    bool m_repoDigestsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEDETAILRESPONSE_H_
