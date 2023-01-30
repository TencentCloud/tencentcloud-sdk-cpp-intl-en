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
                     * 获取Image ID
                     * @return ImageID Image ID
                     */
                    std::string GetImageID() const;

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取Image name
                     * @return ImageName Image name
                     */
                    std::string GetImageName() const;

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Image size
                     * @return Size Image size
                     */
                    uint64_t GetSize() const;

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Number of associated servers
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostCnt Number of associated servers
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetHostCnt() const;

                    /**
                     * 判断参数 HostCnt 是否已赋值
                     * @return HostCnt 是否已赋值
                     */
                    bool HostCntHasBeenSet() const;

                    /**
                     * 获取Number of associated containers
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerCnt Number of associated containers
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 判断参数 ContainerCnt 是否已赋值
                     * @return ContainerCnt 是否已赋值
                     */
                    bool ContainerCntHasBeenSet() const;

                    /**
                     * 获取Last scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanTime Last scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetScanTime() const;

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulCnt Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetVulCnt() const;

                    /**
                     * 判断参数 VulCnt 是否已赋值
                     * @return VulCnt 是否已赋值
                     */
                    bool VulCntHasBeenSet() const;

                    /**
                     * 获取Number of risky behaviors
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskCnt Number of risky behaviors
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     */
                    bool RiskCntHasBeenSet() const;

                    /**
                     * 获取Number of sensitive data items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SensitiveInfoCnt Number of sensitive data items
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetSensitiveInfoCnt() const;

                    /**
                     * 判断参数 SensitiveInfoCnt 是否已赋值
                     * @return SensitiveInfoCnt 是否已赋值
                     */
                    bool SensitiveInfoCntHasBeenSet() const;

                    /**
                     * 获取Whether it is a trusted image
                     * @return IsTrustImage Whether it is a trusted image
                     */
                    bool GetIsTrustImage() const;

                    /**
                     * 判断参数 IsTrustImage 是否已赋值
                     * @return IsTrustImage 是否已赋值
                     */
                    bool IsTrustImageHasBeenSet() const;

                    /**
                     * 获取Image system
                     * @return OsName Image system
                     */
                    std::string GetOsName() const;

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取Image scan error in the agent
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AgentError Image scan error in the agent
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAgentError() const;

                    /**
                     * 判断参数 AgentError 是否已赋值
                     * @return AgentError 是否已赋值
                     */
                    bool AgentErrorHasBeenSet() const;

                    /**
                     * 获取Image scan error on the backend
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanError Image scan error on the backend
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetScanError() const;

                    /**
                     * 判断参数 ScanError 是否已赋值
                     * @return ScanError 是否已赋值
                     */
                    bool ScanErrorHasBeenSet() const;

                    /**
                     * 获取System architecture
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Architecture System architecture
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取Author
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Author Author
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAuthor() const;

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取Build history
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BuildHistory Build history
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetBuildHistory() const;

                    /**
                     * 判断参数 BuildHistory 是否已赋值
                     * @return BuildHistory 是否已赋值
                     */
                    bool BuildHistoryHasBeenSet() const;

                    /**
                     * 获取Trojan scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanVirusProgress Trojan scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetScanVirusProgress() const;

                    /**
                     * 判断参数 ScanVirusProgress 是否已赋值
                     * @return ScanVirusProgress 是否已赋值
                     */
                    bool ScanVirusProgressHasBeenSet() const;

                    /**
                     * 获取Vulnerability scan progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanVulProgress Vulnerability scan progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetScanVulProgress() const;

                    /**
                     * 判断参数 ScanVulProgress 是否已赋值
                     * @return ScanVulProgress 是否已赋值
                     */
                    bool ScanVulProgressHasBeenSet() const;

                    /**
                     * 获取Sensitive data scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanRiskProgress Sensitive data scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetScanRiskProgress() const;

                    /**
                     * 判断参数 ScanRiskProgress 是否已赋值
                     * @return ScanRiskProgress 是否已赋值
                     */
                    bool ScanRiskProgressHasBeenSet() const;

                    /**
                     * 获取Trojan scan error
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanVirusError Trojan scan error
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetScanVirusError() const;

                    /**
                     * 判断参数 ScanVirusError 是否已赋值
                     * @return ScanVirusError 是否已赋值
                     */
                    bool ScanVirusErrorHasBeenSet() const;

                    /**
                     * 获取Vulnerability scan error
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanVulError Vulnerability scan error
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetScanVulError() const;

                    /**
                     * 判断参数 ScanVulError 是否已赋值
                     * @return ScanVulError 是否已赋值
                     */
                    bool ScanVulErrorHasBeenSet() const;

                    /**
                     * 获取Sensitive data error
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanRiskError Sensitive data error
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetScanRiskError() const;

                    /**
                     * 判断参数 ScanRiskError 是否已赋值
                     * @return ScanRiskError 是否已赋值
                     */
                    bool ScanRiskErrorHasBeenSet() const;

                    /**
                     * 获取Image scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanStatus Image scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取Number of viruses and trojans
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VirusCnt Number of viruses and trojans
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetVirusCnt() const;

                    /**
                     * 判断参数 VirusCnt 是否已赋值
                     * @return VirusCnt 是否已赋值
                     */
                    bool VirusCntHasBeenSet() const;

                    /**
                     * 获取Image scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Image scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Remaining scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RemainScanTime Remaining scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetRemainScanTime() const;

                    /**
                     * 判断参数 RemainScanTime 是否已赋值
                     * @return RemainScanTime 是否已赋值
                     */
                    bool RemainScanTimeHasBeenSet() const;

                    /**
                     * 获取Valid values: `1` (licensed); `0` (unlicensed).
                     * @return IsAuthorized Valid values: `1` (licensed); `0` (unlicensed).
                     */
                    int64_t GetIsAuthorized() const;

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     */
                    bool IsAuthorizedHasBeenSet() const;

                private:

                    /**
                     * Image ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Image size
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Number of associated servers
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_hostCnt;
                    bool m_hostCntHasBeenSet;

                    /**
                     * Number of associated containers
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * Last scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vulCnt;
                    bool m_vulCntHasBeenSet;

                    /**
                     * Number of risky behaviors
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * Number of sensitive data items
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_sensitiveInfoCnt;
                    bool m_sensitiveInfoCntHasBeenSet;

                    /**
                     * Whether it is a trusted image
                     */
                    bool m_isTrustImage;
                    bool m_isTrustImageHasBeenSet;

                    /**
                     * Image system
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * Image scan error in the agent
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_agentError;
                    bool m_agentErrorHasBeenSet;

                    /**
                     * Image scan error on the backend
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanError;
                    bool m_scanErrorHasBeenSet;

                    /**
                     * System architecture
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * Author
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * Build history
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_buildHistory;
                    bool m_buildHistoryHasBeenSet;

                    /**
                     * Trojan scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scanVirusProgress;
                    bool m_scanVirusProgressHasBeenSet;

                    /**
                     * Vulnerability scan progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scanVulProgress;
                    bool m_scanVulProgressHasBeenSet;

                    /**
                     * Sensitive data scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scanRiskProgress;
                    bool m_scanRiskProgressHasBeenSet;

                    /**
                     * Trojan scan error
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanVirusError;
                    bool m_scanVirusErrorHasBeenSet;

                    /**
                     * Vulnerability scan error
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanVulError;
                    bool m_scanVulErrorHasBeenSet;

                    /**
                     * Sensitive data error
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanRiskError;
                    bool m_scanRiskErrorHasBeenSet;

                    /**
                     * Image scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * Number of viruses and trojans
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_virusCnt;
                    bool m_virusCntHasBeenSet;

                    /**
                     * Image scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Remaining scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_remainScanTime;
                    bool m_remainScanTimeHasBeenSet;

                    /**
                     * Valid values: `1` (licensed); `0` (unlicensed).
                     */
                    int64_t m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEDETAILRESPONSE_H_
