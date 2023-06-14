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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBETCSSSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBETCSSSUMMARYRESPONSE_H_

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
                * DescribeTcssSummary response structure.
                */
                class DescribeTcssSummaryResponse : public AbstractModel
                {
                public:
                    DescribeTcssSummaryResponse();
                    ~DescribeTcssSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of images
                     * @return ImageCnt Total number of images
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
                     * 获取Number of scanned images
                     * @return ScannedImageCnt Number of scanned images
                     * 
                     */
                    uint64_t GetScannedImageCnt() const;

                    /**
                     * 判断参数 ScannedImageCnt 是否已赋值
                     * @return ScannedImageCnt 是否已赋值
                     * 
                     */
                    bool ScannedImageCntHasBeenSet() const;

                    /**
                     * 获取Number of images to be scanned
                     * @return UnScannedImageCnt Number of images to be scanned
                     * 
                     */
                    uint64_t GetUnScannedImageCnt() const;

                    /**
                     * 判断参数 UnScannedImageCnt 是否已赋值
                     * @return UnScannedImageCnt 是否已赋值
                     * 
                     */
                    bool UnScannedImageCntHasBeenSet() const;

                    /**
                     * 获取Number of local images
                     * @return LocalImageCnt Number of local images
                     * 
                     */
                    uint64_t GetLocalImageCnt() const;

                    /**
                     * 判断参数 LocalImageCnt 是否已赋值
                     * @return LocalImageCnt 是否已赋值
                     * 
                     */
                    bool LocalImageCntHasBeenSet() const;

                    /**
                     * 获取Number of repository images
                     * @return RepositoryImageCnt Number of repository images
                     * 
                     */
                    uint64_t GetRepositoryImageCnt() const;

                    /**
                     * 判断参数 RepositoryImageCnt 是否已赋值
                     * @return RepositoryImageCnt 是否已赋值
                     * 
                     */
                    bool RepositoryImageCntHasBeenSet() const;

                    /**
                     * 获取Number of local images at risk
                     * @return RiskLocalImageCnt Number of local images at risk
                     * 
                     */
                    uint64_t GetRiskLocalImageCnt() const;

                    /**
                     * 判断参数 RiskLocalImageCnt 是否已赋值
                     * @return RiskLocalImageCnt 是否已赋值
                     * 
                     */
                    bool RiskLocalImageCntHasBeenSet() const;

                    /**
                     * 获取Number of repository images at risk
                     * @return RiskRepositoryImageCnt Number of repository images at risk
                     * 
                     */
                    uint64_t GetRiskRepositoryImageCnt() const;

                    /**
                     * 判断参数 RiskRepositoryImageCnt 是否已赋值
                     * @return RiskRepositoryImageCnt 是否已赋值
                     * 
                     */
                    bool RiskRepositoryImageCntHasBeenSet() const;

                    /**
                     * 获取Number of containers
                     * @return ContainerCnt Number of containers
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
                     * 获取Number of containers at risk
                     * @return RiskContainerCnt Number of containers at risk
                     * 
                     */
                    uint64_t GetRiskContainerCnt() const;

                    /**
                     * 判断参数 RiskContainerCnt 是否已赋值
                     * @return RiskContainerCnt 是否已赋值
                     * 
                     */
                    bool RiskContainerCntHasBeenSet() const;

                    /**
                     * 获取Number of clusters
                     * @return ClusterCnt Number of clusters
                     * 
                     */
                    uint64_t GetClusterCnt() const;

                    /**
                     * 判断参数 ClusterCnt 是否已赋值
                     * @return ClusterCnt 是否已赋值
                     * 
                     */
                    bool ClusterCntHasBeenSet() const;

                    /**
                     * 获取Number of clusters at risk
                     * @return RiskClusterCnt Number of clusters at risk
                     * 
                     */
                    uint64_t GetRiskClusterCnt() const;

                    /**
                     * 判断参数 RiskClusterCnt 是否已赋值
                     * @return RiskClusterCnt 是否已赋值
                     * 
                     */
                    bool RiskClusterCntHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities to be scanned
                     * @return UnScannedVulCnt Number of vulnerabilities to be scanned
                     * 
                     */
                    uint64_t GetUnScannedVulCnt() const;

                    /**
                     * 判断参数 UnScannedVulCnt 是否已赋值
                     * @return UnScannedVulCnt 是否已赋值
                     * 
                     */
                    bool UnScannedVulCntHasBeenSet() const;

                    /**
                     * 获取Number of risk vulnerabilities
                     * @return RiskVulCnt Number of risk vulnerabilities
                     * 
                     */
                    uint64_t GetRiskVulCnt() const;

                    /**
                     * 判断参数 RiskVulCnt 是否已赋值
                     * @return RiskVulCnt 是否已赋值
                     * 
                     */
                    bool RiskVulCntHasBeenSet() const;

                    /**
                     * 获取Number of security baseline items to be scanned
                     * @return UnScannedBaseLineCnt Number of security baseline items to be scanned
                     * 
                     */
                    uint64_t GetUnScannedBaseLineCnt() const;

                    /**
                     * 判断参数 UnScannedBaseLineCnt 是否已赋值
                     * @return UnScannedBaseLineCnt 是否已赋值
                     * 
                     */
                    bool UnScannedBaseLineCntHasBeenSet() const;

                    /**
                     * 获取Number of security baseline risks
                     * @return RiskBaseLineCnt Number of security baseline risks
                     * 
                     */
                    uint64_t GetRiskBaseLineCnt() const;

                    /**
                     * 判断参数 RiskBaseLineCnt 是否已赋值
                     * @return RiskBaseLineCnt 是否已赋值
                     * 
                     */
                    bool RiskBaseLineCntHasBeenSet() const;

                    /**
                     * 获取Number of pending (high-risk) events at runtime
                     * @return RuntimeUnhandleEventCnt Number of pending (high-risk) events at runtime
                     * 
                     */
                    uint64_t GetRuntimeUnhandleEventCnt() const;

                    /**
                     * 判断参数 RuntimeUnhandleEventCnt 是否已赋值
                     * @return RuntimeUnhandleEventCnt 是否已赋值
                     * 
                     */
                    bool RuntimeUnhandleEventCntHasBeenSet() const;

                    /**
                     * 获取Number of clusters to be scanned
                     * @return UnScannedClusterCnt Number of clusters to be scanned
                     * 
                     */
                    uint64_t GetUnScannedClusterCnt() const;

                    /**
                     * 判断参数 UnScannedClusterCnt 是否已赋值
                     * @return UnScannedClusterCnt 是否已赋值
                     * 
                     */
                    bool UnScannedClusterCntHasBeenSet() const;

                    /**
                     * 获取Whether images are scanned
                     * @return ScanImageStatus Whether images are scanned
                     * 
                     */
                    bool GetScanImageStatus() const;

                    /**
                     * 判断参数 ScanImageStatus 是否已赋值
                     * @return ScanImageStatus 是否已赋值
                     * 
                     */
                    bool ScanImageStatusHasBeenSet() const;

                    /**
                     * 获取Whether clusters are scanned
                     * @return ScanClusterStatus Whether clusters are scanned
                     * 
                     */
                    bool GetScanClusterStatus() const;

                    /**
                     * 判断参数 ScanClusterStatus 是否已赋值
                     * @return ScanClusterStatus 是否已赋值
                     * 
                     */
                    bool ScanClusterStatusHasBeenSet() const;

                    /**
                     * 获取Whether baseline items are scanned
                     * @return ScanBaseLineStatus Whether baseline items are scanned
                     * 
                     */
                    bool GetScanBaseLineStatus() const;

                    /**
                     * 判断参数 ScanBaseLineStatus 是否已赋值
                     * @return ScanBaseLineStatus 是否已赋值
                     * 
                     */
                    bool ScanBaseLineStatusHasBeenSet() const;

                    /**
                     * 获取Whether vulnerabilities are scanned for
                     * @return ScanVulStatus Whether vulnerabilities are scanned for
                     * 
                     */
                    bool GetScanVulStatus() const;

                    /**
                     * 判断参数 ScanVulStatus 是否已赋值
                     * @return ScanVulStatus 是否已赋值
                     * 
                     */
                    bool ScanVulStatusHasBeenSet() const;

                    /**
                     * 获取Number of images affected by vulnerabilities
                     * @return VulRiskImageCnt Number of images affected by vulnerabilities
                     * 
                     */
                    uint64_t GetVulRiskImageCnt() const;

                    /**
                     * 判断参数 VulRiskImageCnt 是否已赋值
                     * @return VulRiskImageCnt 是否已赋值
                     * 
                     */
                    bool VulRiskImageCntHasBeenSet() const;

                private:

                    /**
                     * Total number of images
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * Number of scanned images
                     */
                    uint64_t m_scannedImageCnt;
                    bool m_scannedImageCntHasBeenSet;

                    /**
                     * Number of images to be scanned
                     */
                    uint64_t m_unScannedImageCnt;
                    bool m_unScannedImageCntHasBeenSet;

                    /**
                     * Number of local images
                     */
                    uint64_t m_localImageCnt;
                    bool m_localImageCntHasBeenSet;

                    /**
                     * Number of repository images
                     */
                    uint64_t m_repositoryImageCnt;
                    bool m_repositoryImageCntHasBeenSet;

                    /**
                     * Number of local images at risk
                     */
                    uint64_t m_riskLocalImageCnt;
                    bool m_riskLocalImageCntHasBeenSet;

                    /**
                     * Number of repository images at risk
                     */
                    uint64_t m_riskRepositoryImageCnt;
                    bool m_riskRepositoryImageCntHasBeenSet;

                    /**
                     * Number of containers
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * Number of containers at risk
                     */
                    uint64_t m_riskContainerCnt;
                    bool m_riskContainerCntHasBeenSet;

                    /**
                     * Number of clusters
                     */
                    uint64_t m_clusterCnt;
                    bool m_clusterCntHasBeenSet;

                    /**
                     * Number of clusters at risk
                     */
                    uint64_t m_riskClusterCnt;
                    bool m_riskClusterCntHasBeenSet;

                    /**
                     * Number of vulnerabilities to be scanned
                     */
                    uint64_t m_unScannedVulCnt;
                    bool m_unScannedVulCntHasBeenSet;

                    /**
                     * Number of risk vulnerabilities
                     */
                    uint64_t m_riskVulCnt;
                    bool m_riskVulCntHasBeenSet;

                    /**
                     * Number of security baseline items to be scanned
                     */
                    uint64_t m_unScannedBaseLineCnt;
                    bool m_unScannedBaseLineCntHasBeenSet;

                    /**
                     * Number of security baseline risks
                     */
                    uint64_t m_riskBaseLineCnt;
                    bool m_riskBaseLineCntHasBeenSet;

                    /**
                     * Number of pending (high-risk) events at runtime
                     */
                    uint64_t m_runtimeUnhandleEventCnt;
                    bool m_runtimeUnhandleEventCntHasBeenSet;

                    /**
                     * Number of clusters to be scanned
                     */
                    uint64_t m_unScannedClusterCnt;
                    bool m_unScannedClusterCntHasBeenSet;

                    /**
                     * Whether images are scanned
                     */
                    bool m_scanImageStatus;
                    bool m_scanImageStatusHasBeenSet;

                    /**
                     * Whether clusters are scanned
                     */
                    bool m_scanClusterStatus;
                    bool m_scanClusterStatusHasBeenSet;

                    /**
                     * Whether baseline items are scanned
                     */
                    bool m_scanBaseLineStatus;
                    bool m_scanBaseLineStatusHasBeenSet;

                    /**
                     * Whether vulnerabilities are scanned for
                     */
                    bool m_scanVulStatus;
                    bool m_scanVulStatusHasBeenSet;

                    /**
                     * Number of images affected by vulnerabilities
                     */
                    uint64_t m_vulRiskImageCnt;
                    bool m_vulRiskImageCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBETCSSSUMMARYRESPONSE_H_
