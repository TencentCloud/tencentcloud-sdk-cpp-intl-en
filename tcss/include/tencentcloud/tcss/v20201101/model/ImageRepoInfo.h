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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREPOINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREPOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * List of image repositories
                */
                class ImageRepoInfo : public AbstractModel
                {
                public:
                    ImageRepoInfo();
                    ~ImageRepoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image digest
                     * @return ImageDigest Image digest
                     * 
                     */
                    std::string GetImageDigest() const;

                    /**
                     * 设置Image digest
                     * @param _imageDigest Image digest
                     * 
                     */
                    void SetImageDigest(const std::string& _imageDigest);

                    /**
                     * 判断参数 ImageDigest 是否已赋值
                     * @return ImageDigest 是否已赋值
                     * 
                     */
                    bool ImageDigestHasBeenSet() const;

                    /**
                     * 获取Image repository address
                     * @return ImageRepoAddress Image repository address
                     * 
                     */
                    std::string GetImageRepoAddress() const;

                    /**
                     * 设置Image repository address
                     * @param _imageRepoAddress Image repository address
                     * 
                     */
                    void SetImageRepoAddress(const std::string& _imageRepoAddress);

                    /**
                     * 判断参数 ImageRepoAddress 是否已赋值
                     * @return ImageRepoAddress 是否已赋值
                     * 
                     */
                    bool ImageRepoAddressHasBeenSet() const;

                    /**
                     * 获取Repository type
                     * @return RegistryType Repository type
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置Repository type
                     * @param _registryType Repository type
                     * 
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取Image name
                     * @return ImageName Image name
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name
                     * @param _imageName Image name
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Image tag
                     * @return ImageTag Image tag
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置Image tag
                     * @param _imageTag Image tag
                     * 
                     */
                    void SetImageTag(const std::string& _imageTag);

                    /**
                     * 判断参数 ImageTag 是否已赋值
                     * @return ImageTag 是否已赋值
                     * 
                     */
                    bool ImageTagHasBeenSet() const;

                    /**
                     * 获取Image size
                     * @return ImageSize Image size
                     * 
                     */
                    uint64_t GetImageSize() const;

                    /**
                     * 设置Image size
                     * @param _imageSize Image size
                     * 
                     */
                    void SetImageSize(const uint64_t& _imageSize);

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取Last scan time
                     * @return ScanTime Last scan time
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置Last scan time
                     * @param _scanTime Last scan time
                     * 
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取Scanning status
                     * @return ScanStatus Scanning status
                     * 
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 设置Scanning status
                     * @param _scanStatus Scanning status
                     * 
                     */
                    void SetScanStatus(const std::string& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities
                     * @return VulCnt Number of vulnerabilities
                     * 
                     */
                    uint64_t GetVulCnt() const;

                    /**
                     * 设置Number of vulnerabilities
                     * @param _vulCnt Number of vulnerabilities
                     * 
                     */
                    void SetVulCnt(const uint64_t& _vulCnt);

                    /**
                     * 判断参数 VulCnt 是否已赋值
                     * @return VulCnt 是否已赋值
                     * 
                     */
                    bool VulCntHasBeenSet() const;

                    /**
                     * 获取Number of viruses and trojans
                     * @return VirusCnt Number of viruses and trojans
                     * 
                     */
                    uint64_t GetVirusCnt() const;

                    /**
                     * 设置Number of viruses and trojans
                     * @param _virusCnt Number of viruses and trojans
                     * 
                     */
                    void SetVirusCnt(const uint64_t& _virusCnt);

                    /**
                     * 判断参数 VirusCnt 是否已赋值
                     * @return VirusCnt 是否已赋值
                     * 
                     */
                    bool VirusCntHasBeenSet() const;

                    /**
                     * 获取Number of risky behaviors
                     * @return RiskCnt Number of risky behaviors
                     * 
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 设置Number of risky behaviors
                     * @param _riskCnt Number of risky behaviors
                     * 
                     */
                    void SetRiskCnt(const uint64_t& _riskCnt);

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     * 
                     */
                    bool RiskCntHasBeenSet() const;

                    /**
                     * 获取Number of sensitive data items
                     * @return SentiveInfoCnt Number of sensitive data items
                     * 
                     */
                    uint64_t GetSentiveInfoCnt() const;

                    /**
                     * 设置Number of sensitive data items
                     * @param _sentiveInfoCnt Number of sensitive data items
                     * 
                     */
                    void SetSentiveInfoCnt(const uint64_t& _sentiveInfoCnt);

                    /**
                     * 判断参数 SentiveInfoCnt 是否已赋值
                     * @return SentiveInfoCnt 是否已赋值
                     * 
                     */
                    bool SentiveInfoCntHasBeenSet() const;

                    /**
                     * 获取Whether it is a trusted image
                     * @return IsTrustImage Whether it is a trusted image
                     * 
                     */
                    bool GetIsTrustImage() const;

                    /**
                     * 设置Whether it is a trusted image
                     * @param _isTrustImage Whether it is a trusted image
                     * 
                     */
                    void SetIsTrustImage(const bool& _isTrustImage);

                    /**
                     * 判断参数 IsTrustImage 是否已赋值
                     * @return IsTrustImage 是否已赋值
                     * 
                     */
                    bool IsTrustImageHasBeenSet() const;

                    /**
                     * 获取Image system
                     * @return OsName Image system
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置Image system
                     * @param _osName Image system
                     * 
                     */
                    void SetOsName(const std::string& _osName);

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
                     * 设置Trojan scan error
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanVirusError Trojan scan error
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanVirusError(const std::string& _scanVirusError);

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
                     * 设置Vulnerability scan error
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanVulError Vulnerability scan error
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanVulError(const std::string& _scanVulError);

                    /**
                     * 判断参数 ScanVulError 是否已赋值
                     * @return ScanVulError 是否已赋值
                     * 
                     */
                    bool ScanVulErrorHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Namespace
                     * @return Namespace Namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace
                     * @param _namespace Namespace
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

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
                     * 设置High-risk scan error
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanRiskError High-risk scan error
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanRiskError(const std::string& _scanRiskError);

                    /**
                     * 判断参数 ScanRiskError 是否已赋值
                     * @return ScanRiskError 是否已赋值
                     * 
                     */
                    bool ScanRiskErrorHasBeenSet() const;

                    /**
                     * 获取Sensitive data scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanVirusProgress Sensitive data scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetScanVirusProgress() const;

                    /**
                     * 设置Sensitive data scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanVirusProgress Sensitive data scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanVirusProgress(const uint64_t& _scanVirusProgress);

                    /**
                     * 判断参数 ScanVirusProgress 是否已赋值
                     * @return ScanVirusProgress 是否已赋值
                     * 
                     */
                    bool ScanVirusProgressHasBeenSet() const;

                    /**
                     * 获取Trojan scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanVulProgress Trojan scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetScanVulProgress() const;

                    /**
                     * 设置Trojan scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanVulProgress Trojan scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanVulProgress(const uint64_t& _scanVulProgress);

                    /**
                     * 判断参数 ScanVulProgress 是否已赋值
                     * @return ScanVulProgress 是否已赋值
                     * 
                     */
                    bool ScanVulProgressHasBeenSet() const;

                    /**
                     * 获取Vulnerability scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanRiskProgress Vulnerability scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetScanRiskProgress() const;

                    /**
                     * 设置Vulnerability scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanRiskProgress Vulnerability scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanRiskProgress(const uint64_t& _scanRiskProgress);

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
                     * 设置Remaining scan time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanRemainTime Remaining scan time in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanRemainTime(const uint64_t& _scanRemainTime);

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
                     * 设置CVE scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cveStatus CVE scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCveStatus(const std::string& _cveStatus);

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
                     * 设置High-risk scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _riskStatus High-risk scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRiskStatus(const std::string& _riskStatus);

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
                     * 设置Trojan scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _virusStatus Trojan scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVirusStatus(const std::string& _virusStatus);

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
                     * 设置Overall progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _progress Overall progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Licensing status
                     * @return IsAuthorized Licensing status
                     * 
                     */
                    uint64_t GetIsAuthorized() const;

                    /**
                     * 设置Licensing status
                     * @param _isAuthorized Licensing status
                     * 
                     */
                    void SetIsAuthorized(const uint64_t& _isAuthorized);

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     * 
                     */
                    bool IsAuthorizedHasBeenSet() const;

                    /**
                     * 获取Repository region
                     * @return RegistryRegion Repository region
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置Repository region
                     * @param _registryRegion Repository region
                     * 
                     */
                    void SetRegistryRegion(const std::string& _registryRegion);

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     * 
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取List of IDs
                     * @return Id List of IDs
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置List of IDs
                     * @param _id List of IDs
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageId Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageId Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Image creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageCreateTime Image creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageCreateTime() const;

                    /**
                     * 设置Image creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageCreateTime Image creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImageCreateTime(const std::string& _imageCreateTime);

                    /**
                     * 判断参数 ImageCreateTime 是否已赋值
                     * @return ImageCreateTime 是否已赋值
                     * 
                     */
                    bool ImageCreateTimeHasBeenSet() const;

                    /**
                     * 获取Whether it is the latest image tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsLatestImage Whether it is the latest image tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsLatestImage() const;

                    /**
                     * 设置Whether it is the latest image tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isLatestImage Whether it is the latest image tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsLatestImage(const bool& _isLatestImage);

                    /**
                     * 判断参数 IsLatestImage 是否已赋值
                     * @return IsLatestImage 是否已赋值
                     * 
                     */
                    bool IsLatestImageHasBeenSet() const;

                private:

                    /**
                     * Image digest
                     */
                    std::string m_imageDigest;
                    bool m_imageDigestHasBeenSet;

                    /**
                     * Image repository address
                     */
                    std::string m_imageRepoAddress;
                    bool m_imageRepoAddressHasBeenSet;

                    /**
                     * Repository type
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Image tag
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * Image size
                     */
                    uint64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * Last scan time
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * Scanning status
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * Number of vulnerabilities
                     */
                    uint64_t m_vulCnt;
                    bool m_vulCntHasBeenSet;

                    /**
                     * Number of viruses and trojans
                     */
                    uint64_t m_virusCnt;
                    bool m_virusCntHasBeenSet;

                    /**
                     * Number of risky behaviors
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * Number of sensitive data items
                     */
                    uint64_t m_sentiveInfoCnt;
                    bool m_sentiveInfoCntHasBeenSet;

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
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Namespace
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
                     * Sensitive data scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scanVirusProgress;
                    bool m_scanVirusProgressHasBeenSet;

                    /**
                     * Trojan scanning progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scanVulProgress;
                    bool m_scanVulProgressHasBeenSet;

                    /**
                     * Vulnerability scanning progress
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
                     */
                    uint64_t m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                    /**
                     * Repository region
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * List of IDs
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Image creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageCreateTime;
                    bool m_imageCreateTimeHasBeenSet;

                    /**
                     * Whether it is the latest image tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isLatestImage;
                    bool m_isLatestImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREPOINFO_H_
