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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYDETAILRESPONSE_H_

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
                * DescribeAssetImageRegistryDetail response structure.
                */
                class DescribeAssetImageRegistryDetailResponse : public AbstractModel
                {
                public:
                    DescribeAssetImageRegistryDetailResponse();
                    ~DescribeAssetImageRegistryDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Image digest
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageDigest Image digest
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Image address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageRepoAddress Image address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageRepoAddress() const;

                    /**
                     * 判断参数 ImageRepoAddress 是否已赋值
                     * @return ImageRepoAddress 是否已赋值
                     * 
                     */
                    bool ImageRepoAddressHasBeenSet() const;

                    /**
                     * 获取Image type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegistryType Image type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取Repository name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageName Repository name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Image tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageTag Image tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 判断参数 ImageTag 是否已赋值
                     * @return ImageTag 是否已赋值
                     * 
                     */
                    bool ImageTagHasBeenSet() const;

                    /**
                     * 获取Scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanTime Scan time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanStatus Scanning status
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulCnt Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of viruses and trojans
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VirusCnt Number of viruses and trojans
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of risky behaviors
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskCnt Number of risky behaviors
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of sensitive data items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SentiveInfoCnt Number of sensitive data items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    uint64_t GetSentiveInfoCnt() const;

                    /**
                     * 判断参数 SentiveInfoCnt 是否已赋值
                     * @return SentiveInfoCnt 是否已赋值
                     * @deprecated
                     */
                    bool SentiveInfoCntHasBeenSet() const;

                    /**
                     * 获取Image system
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OsName Image system
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Trojan scan error
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanVirusError Trojan scan error
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Vulnerability scan error
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanVulError Vulnerability scan error
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Layer file information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LayerInfo Layer file information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLayerInfo() const;

                    /**
                     * 判断参数 LayerInfo 是否已赋值
                     * @return LayerInfo 是否已赋值
                     * 
                     */
                    bool LayerInfoHasBeenSet() const;

                    /**
                     * 获取Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Namespace
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Namespace Namespace
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取High-risk scan error
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanRiskError High-risk scan error
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Trojan scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanVirusProgress Trojan scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Vulnerability scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanVulProgress Vulnerability scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Sensitive data scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanRiskProgress Sensitive data scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Remaining scan time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanRemainTime Remaining scan time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetScanRemainTime() const;

                    /**
                     * 判断参数 ScanRemainTime 是否已赋值
                     * @return ScanRemainTime 是否已赋值
                     * 
                     */
                    bool ScanRemainTimeHasBeenSet() const;

                    /**
                     * 获取CVE scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CveStatus CVE scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCveStatus() const;

                    /**
                     * 判断参数 CveStatus 是否已赋值
                     * @return CveStatus 是否已赋值
                     * 
                     */
                    bool CveStatusHasBeenSet() const;

                    /**
                     * 获取High-risk scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskStatus High-risk scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRiskStatus() const;

                    /**
                     * 判断参数 RiskStatus 是否已赋值
                     * @return RiskStatus 是否已赋值
                     * 
                     */
                    bool RiskStatusHasBeenSet() const;

                    /**
                     * 获取Trojan scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VirusStatus Trojan scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVirusStatus() const;

                    /**
                     * 判断参数 VirusStatus 是否已赋值
                     * @return VirusStatus 是否已赋值
                     * 
                     */
                    bool VirusStatusHasBeenSet() const;

                    /**
                     * 获取Overall progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Progress Overall progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Licensing status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsAuthorized Licensing status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsAuthorized() const;

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     * 
                     */
                    bool IsAuthorizedHasBeenSet() const;

                    /**
                     * 获取Image size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageSize Image size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetImageSize() const;

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageId Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Image region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegistryRegion Image region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     * 
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取Image creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageCreateTime Image creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageCreateTime() const;

                    /**
                     * 判断参数 ImageCreateTime 是否已赋值
                     * @return ImageCreateTime 是否已赋值
                     * 
                     */
                    bool ImageCreateTimeHasBeenSet() const;

                private:

                    /**
                     * Image digest
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageDigest;
                    bool m_imageDigestHasBeenSet;

                    /**
                     * Image address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageRepoAddress;
                    bool m_imageRepoAddressHasBeenSet;

                    /**
                     * Image type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * Repository name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Image tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * Scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * Scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vulCnt;
                    bool m_vulCntHasBeenSet;

                    /**
                     * Number of viruses and trojans
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_virusCnt;
                    bool m_virusCntHasBeenSet;

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
                    uint64_t m_sentiveInfoCnt;
                    bool m_sentiveInfoCntHasBeenSet;

                    /**
                     * Image system
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

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
                     * Layer file information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_layerInfo;
                    bool m_layerInfoHasBeenSet;

                    /**
                     * Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Namespace
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * High-risk scan error
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanRiskError;
                    bool m_scanRiskErrorHasBeenSet;

                    /**
                     * Trojan scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scanVirusProgress;
                    bool m_scanVirusProgressHasBeenSet;

                    /**
                     * Vulnerability scanning progress
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
                     * Remaining scan time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scanRemainTime;
                    bool m_scanRemainTimeHasBeenSet;

                    /**
                     * CVE scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cveStatus;
                    bool m_cveStatusHasBeenSet;

                    /**
                     * High-risk scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                    /**
                     * Trojan scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_virusStatus;
                    bool m_virusStatusHasBeenSet;

                    /**
                     * Overall progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Licensing status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                    /**
                     * Image size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Image region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * Image creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageCreateTime;
                    bool m_imageCreateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYDETAILRESPONSE_H_
