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
                     * @deprecated
                     */
                    uint64_t GetSentiveInfoCnt() const;

                    /**
                     * 设置Number of sensitive data items
                     * @param _sentiveInfoCnt Number of sensitive data items
                     * @deprecated
                     */
                    void SetSentiveInfoCnt(const uint64_t& _sentiveInfoCnt);

                    /**
                     * 判断参数 SentiveInfoCnt 是否已赋值
                     * @return SentiveInfoCnt 是否已赋值
                     * @deprecated
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
                     * @return ScanVirusError Trojan scan error
                     * 
                     */
                    std::string GetScanVirusError() const;

                    /**
                     * 设置Trojan scan error
                     * @param _scanVirusError Trojan scan error
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
                     * 获取Vulnerability scan error.
                     * @return ScanVulError Vulnerability scan error.
                     * 
                     */
                    std::string GetScanVulError() const;

                    /**
                     * 设置Vulnerability scan error.
                     * @param _scanVulError Vulnerability scan error.
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
                     * 获取High risk scan error
                     * @return ScanRiskError High risk scan error
                     * 
                     */
                    std::string GetScanRiskError() const;

                    /**
                     * 设置High risk scan error
                     * @param _scanRiskError High risk scan error
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
                     * 获取Sensitive information scan progress
                     * @return ScanVirusProgress Sensitive information scan progress
                     * 
                     */
                    uint64_t GetScanVirusProgress() const;

                    /**
                     * 设置Sensitive information scan progress
                     * @param _scanVirusProgress Sensitive information scan progress
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
                     * 获取Trojan scan progress.
                     * @return ScanVulProgress Trojan scan progress.
                     * 
                     */
                    uint64_t GetScanVulProgress() const;

                    /**
                     * 设置Trojan scan progress.
                     * @param _scanVulProgress Trojan scan progress.
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
                     * 获取Vulnerability scan progress.
                     * @return ScanRiskProgress Vulnerability scan progress.
                     * 
                     */
                    uint64_t GetScanRiskProgress() const;

                    /**
                     * 设置Vulnerability scan progress.
                     * @param _scanRiskProgress Vulnerability scan progress.
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
                     * 获取Remaining scan time (seconds)
                     * @return ScanRemainTime Remaining scan time (seconds)
                     * 
                     */
                    uint64_t GetScanRemainTime() const;

                    /**
                     * 设置Remaining scan time (seconds)
                     * @param _scanRemainTime Remaining scan time (seconds)
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
                     * 获取cve scan status
                     * @return CveStatus cve scan status
                     * 
                     */
                    std::string GetCveStatus() const;

                    /**
                     * 设置cve scan status
                     * @param _cveStatus cve scan status
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
                     * 获取High risk scan status
                     * @return RiskStatus High risk scan status
                     * 
                     */
                    std::string GetRiskStatus() const;

                    /**
                     * 设置High risk scan status
                     * @param _riskStatus High risk scan status
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
                     * 获取Trojan scan status
                     * @return VirusStatus Trojan scan status
                     * 
                     */
                    std::string GetVirusStatus() const;

                    /**
                     * 设置Trojan scan status
                     * @param _virusStatus Trojan scan status
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
                     * @return Progress Overall progress
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置Overall progress
                     * @param _progress Overall progress
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
                     * 获取Image ID.
                     * @return ImageId Image ID.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID.
                     * @param _imageId Image ID.
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
                     * 获取Image Creation Time
                     * @return ImageCreateTime Image Creation Time
                     * 
                     */
                    std::string GetImageCreateTime() const;

                    /**
                     * 设置Image Creation Time
                     * @param _imageCreateTime Image Creation Time
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
                     * 获取Whether the Latest Version of the Image
                     * @return IsLatestImage Whether the Latest Version of the Image
                     * 
                     */
                    bool GetIsLatestImage() const;

                    /**
                     * 设置Whether the Latest Version of the Image
                     * @param _isLatestImage Whether the Latest Version of the Image
                     * 
                     */
                    void SetIsLatestImage(const bool& _isLatestImage);

                    /**
                     * 判断参数 IsLatestImage 是否已赋值
                     * @return IsLatestImage 是否已赋值
                     * 
                     */
                    bool IsLatestImageHasBeenSet() const;

                    /**
                     * 获取
                     * @return LowLevelVulCnt 
                     * 
                     */
                    uint64_t GetLowLevelVulCnt() const;

                    /**
                     * 设置
                     * @param _lowLevelVulCnt 
                     * 
                     */
                    void SetLowLevelVulCnt(const uint64_t& _lowLevelVulCnt);

                    /**
                     * 判断参数 LowLevelVulCnt 是否已赋值
                     * @return LowLevelVulCnt 是否已赋值
                     * 
                     */
                    bool LowLevelVulCntHasBeenSet() const;

                    /**
                     * 获取
                     * @return MediumLevelVulCnt 
                     * 
                     */
                    uint64_t GetMediumLevelVulCnt() const;

                    /**
                     * 设置
                     * @param _mediumLevelVulCnt 
                     * 
                     */
                    void SetMediumLevelVulCnt(const uint64_t& _mediumLevelVulCnt);

                    /**
                     * 判断参数 MediumLevelVulCnt 是否已赋值
                     * @return MediumLevelVulCnt 是否已赋值
                     * 
                     */
                    bool MediumLevelVulCntHasBeenSet() const;

                    /**
                     * 获取
                     * @return HighLevelVulCnt 
                     * 
                     */
                    uint64_t GetHighLevelVulCnt() const;

                    /**
                     * 设置
                     * @param _highLevelVulCnt 
                     * 
                     */
                    void SetHighLevelVulCnt(const uint64_t& _highLevelVulCnt);

                    /**
                     * 判断参数 HighLevelVulCnt 是否已赋值
                     * @return HighLevelVulCnt 是否已赋值
                     * 
                     */
                    bool HighLevelVulCntHasBeenSet() const;

                    /**
                     * 获取
                     * @return CriticalLevelVulCnt 
                     * 
                     */
                    uint64_t GetCriticalLevelVulCnt() const;

                    /**
                     * 设置
                     * @param _criticalLevelVulCnt 
                     * 
                     */
                    void SetCriticalLevelVulCnt(const uint64_t& _criticalLevelVulCnt);

                    /**
                     * 判断参数 CriticalLevelVulCnt 是否已赋值
                     * @return CriticalLevelVulCnt 是否已赋值
                     * 
                     */
                    bool CriticalLevelVulCntHasBeenSet() const;

                    /**
                     * 获取
                     * @return ContainerCnt 
                     * 
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 设置
                     * @param _containerCnt 
                     * 
                     */
                    void SetContainerCnt(const uint64_t& _containerCnt);

                    /**
                     * 判断参数 ContainerCnt 是否已赋值
                     * @return ContainerCnt 是否已赋值
                     * 
                     */
                    bool ContainerCntHasBeenSet() const;

                    /**
                     * 获取
                     * @return ComponentCnt 
                     * 
                     */
                    uint64_t GetComponentCnt() const;

                    /**
                     * 设置
                     * @param _componentCnt 
                     * 
                     */
                    void SetComponentCnt(const uint64_t& _componentCnt);

                    /**
                     * 判断参数 ComponentCnt 是否已赋值
                     * @return ComponentCnt 是否已赋值
                     * 
                     */
                    bool ComponentCntHasBeenSet() const;

                    /**
                     * 获取
                     * @return IsRunning 
                     * 
                     */
                    bool GetIsRunning() const;

                    /**
                     * 设置
                     * @param _isRunning 
                     * 
                     */
                    void SetIsRunning(const bool& _isRunning);

                    /**
                     * 判断参数 IsRunning 是否已赋值
                     * @return IsRunning 是否已赋值
                     * 
                     */
                    bool IsRunningHasBeenSet() const;

                    /**
                     * 获取
                     * @return HasNeedFixVul 
                     * 
                     */
                    bool GetHasNeedFixVul() const;

                    /**
                     * 设置
                     * @param _hasNeedFixVul 
                     * 
                     */
                    void SetHasNeedFixVul(const bool& _hasNeedFixVul);

                    /**
                     * 判断参数 HasNeedFixVul 是否已赋值
                     * @return HasNeedFixVul 是否已赋值
                     * 
                     */
                    bool HasNeedFixVulHasBeenSet() const;

                    /**
                     * 获取Sensitive information
                     * @return SensitiveInfoCnt Sensitive information
                     * 
                     */
                    uint64_t GetSensitiveInfoCnt() const;

                    /**
                     * 设置Sensitive information
                     * @param _sensitiveInfoCnt Sensitive information
                     * 
                     */
                    void SetSensitiveInfoCnt(const uint64_t& _sensitiveInfoCnt);

                    /**
                     * 判断参数 SensitiveInfoCnt 是否已赋值
                     * @return SensitiveInfoCnt 是否已赋值
                     * 
                     */
                    bool SensitiveInfoCntHasBeenSet() const;

                    /**
                     * 获取
                     * @return RecommendedFix 
                     * 
                     */
                    bool GetRecommendedFix() const;

                    /**
                     * 设置
                     * @param _recommendedFix 
                     * 
                     */
                    void SetRecommendedFix(const bool& _recommendedFix);

                    /**
                     * 判断参数 RecommendedFix 是否已赋值
                     * @return RecommendedFix 是否已赋值
                     * 
                     */
                    bool RecommendedFixHasBeenSet() const;

                    /**
                     * 获取Solution
                     * @return Solution Solution
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置Solution
                     * @param _solution Solution
                     * 
                     */
                    void SetSolution(const std::string& _solution);

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
                     * 设置<p>Reason.</p>
                     * @param _reason <p>Reason.</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

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
                     */
                    std::string m_scanVirusError;
                    bool m_scanVirusErrorHasBeenSet;

                    /**
                     * Vulnerability scan error.
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
                     * High risk scan error
                     */
                    std::string m_scanRiskError;
                    bool m_scanRiskErrorHasBeenSet;

                    /**
                     * Sensitive information scan progress
                     */
                    uint64_t m_scanVirusProgress;
                    bool m_scanVirusProgressHasBeenSet;

                    /**
                     * Trojan scan progress.
                     */
                    uint64_t m_scanVulProgress;
                    bool m_scanVulProgressHasBeenSet;

                    /**
                     * Vulnerability scan progress.
                     */
                    uint64_t m_scanRiskProgress;
                    bool m_scanRiskProgressHasBeenSet;

                    /**
                     * Remaining scan time (seconds)
                     */
                    uint64_t m_scanRemainTime;
                    bool m_scanRemainTimeHasBeenSet;

                    /**
                     * cve scan status
                     */
                    std::string m_cveStatus;
                    bool m_cveStatusHasBeenSet;

                    /**
                     * High risk scan status
                     */
                    std::string m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                    /**
                     * Trojan scan status
                     */
                    std::string m_virusStatus;
                    bool m_virusStatusHasBeenSet;

                    /**
                     * Overall progress
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
                     * Image ID.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Image Creation Time
                     */
                    std::string m_imageCreateTime;
                    bool m_imageCreateTimeHasBeenSet;

                    /**
                     * Whether the Latest Version of the Image
                     */
                    bool m_isLatestImage;
                    bool m_isLatestImageHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_lowLevelVulCnt;
                    bool m_lowLevelVulCntHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_mediumLevelVulCnt;
                    bool m_mediumLevelVulCntHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_highLevelVulCnt;
                    bool m_highLevelVulCntHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_criticalLevelVulCnt;
                    bool m_criticalLevelVulCntHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_componentCnt;
                    bool m_componentCntHasBeenSet;

                    /**
                     * 
                     */
                    bool m_isRunning;
                    bool m_isRunningHasBeenSet;

                    /**
                     * 
                     */
                    bool m_hasNeedFixVul;
                    bool m_hasNeedFixVulHasBeenSet;

                    /**
                     * Sensitive information
                     */
                    uint64_t m_sensitiveInfoCnt;
                    bool m_sensitiveInfoCntHasBeenSet;

                    /**
                     * 
                     */
                    bool m_recommendedFix;
                    bool m_recommendedFixHasBeenSet;

                    /**
                     * Solution
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * <p>Reason.</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREPOINFO_H_
