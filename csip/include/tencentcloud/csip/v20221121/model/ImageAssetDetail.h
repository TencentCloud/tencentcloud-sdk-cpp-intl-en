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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSETDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSETDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Mirror asset detail
                */
                class ImageAssetDetail : public AbstractModel
                {
                public:
                    ImageAssetDetail();
                    ~ImageAssetDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Image digests.</p>
                     * @return ImageDigest <p>Image digests.</p>
                     * 
                     */
                    std::string GetImageDigest() const;

                    /**
                     * 设置<p>Image digests.</p>
                     * @param _imageDigest <p>Image digests.</p>
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
                     * 获取<p>Repository address</p>
                     * @return ImageRepoAddress <p>Repository address</p>
                     * 
                     */
                    std::string GetImageRepoAddress() const;

                    /**
                     * 设置<p>Repository address</p>
                     * @param _imageRepoAddress <p>Repository address</p>
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
                     * 获取<p>Repository type</p>
                     * @return RegistryType <p>Repository type</p>
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置<p>Repository type</p>
                     * @param _registryType <p>Repository type</p>
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
                     * 获取<p>Image name.</p>
                     * @return ImageName <p>Image name.</p>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置<p>Image name.</p>
                     * @param _imageName <p>Image name.</p>
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
                     * 获取<p>Image tag</p>
                     * @return ImageTag <p>Image tag</p>
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置<p>Image tag</p>
                     * @param _imageTag <p>Image tag</p>
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
                     * 获取<p>Last scan time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return LatestScanTime <p>Last scan time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置<p>Last scan time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _latestScanTime <p>Last scan time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetLatestScanTime(const std::string& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>Scan status</p><p>Enumeration values:</p><ul><li>0: Initial state</li><li>1: Issued</li><li>2: Scanning</li><li>3: Scan complete</li><li>4: Scan timeout</li><li>5: Scan failure</li></ul>
                     * @return ScanStatus <p>Scan status</p><p>Enumeration values:</p><ul><li>0: Initial state</li><li>1: Issued</li><li>2: Scanning</li><li>3: Scan complete</li><li>4: Scan timeout</li><li>5: Scan failure</li></ul>
                     * 
                     */
                    uint64_t GetScanStatus() const;

                    /**
                     * 设置<p>Scan status</p><p>Enumeration values:</p><ul><li>0: Initial state</li><li>1: Issued</li><li>2: Scanning</li><li>3: Scan complete</li><li>4: Scan timeout</li><li>5: Scan failure</li></ul>
                     * @param _scanStatus <p>Scan status</p><p>Enumeration values:</p><ul><li>0: Initial state</li><li>1: Issued</li><li>2: Scanning</li><li>3: Scan complete</li><li>4: Scan timeout</li><li>5: Scan failure</li></ul>
                     * 
                     */
                    void SetScanStatus(const uint64_t& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取<p>Number of vulnerabilities</p>
                     * @return VulCnt <p>Number of vulnerabilities</p>
                     * 
                     */
                    uint64_t GetVulCnt() const;

                    /**
                     * 设置<p>Number of vulnerabilities</p>
                     * @param _vulCnt <p>Number of vulnerabilities</p>
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
                     * 获取<p>Number of Trojans</p>
                     * @return VirusCnt <p>Number of Trojans</p>
                     * 
                     */
                    uint64_t GetVirusCnt() const;

                    /**
                     * 设置<p>Number of Trojans</p>
                     * @param _virusCnt <p>Number of Trojans</p>
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
                     * 获取<p>Number of sensitive information entries.</p>
                     * @return SensitiveCnt <p>Number of sensitive information entries.</p>
                     * 
                     */
                    uint64_t GetSensitiveCnt() const;

                    /**
                     * 设置<p>Number of sensitive information entries.</p>
                     * @param _sensitiveCnt <p>Number of sensitive information entries.</p>
                     * 
                     */
                    void SetSensitiveCnt(const uint64_t& _sensitiveCnt);

                    /**
                     * 判断参数 SensitiveCnt 是否已赋值
                     * @return SensitiveCnt 是否已赋值
                     * 
                     */
                    bool SensitiveCntHasBeenSet() const;

                    /**
                     * 获取<p>Repository instance id.</p>
                     * @return InstanceId <p>Repository instance id.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Repository instance id.</p>
                     * @param _instanceId <p>Repository instance id.</p>
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
                     * 获取<p>Image repository name</p>
                     * @return InstanceName <p>Image repository name</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Image repository name</p>
                     * @param _instanceName <p>Image repository name</p>
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
                     * 获取<p>Namespace.</p>
                     * @return Namespace <p>Namespace.</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>Namespace.</p>
                     * @param _namespace <p>Namespace.</p>
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
                     * 获取<p>Whether to authorize.</p>
                     * @return IsAuthorized <p>Whether to authorize.</p>
                     * 
                     */
                    uint64_t GetIsAuthorized() const;

                    /**
                     * 设置<p>Whether to authorize.</p>
                     * @param _isAuthorized <p>Whether to authorize.</p>
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
                     * 获取<p>Image size.</p>
                     * @return ImageSize <p>Image size.</p>
                     * 
                     */
                    uint64_t GetImageSize() const;

                    /**
                     * 设置<p>Image size.</p>
                     * @param _imageSize <p>Image size.</p>
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
                     * 获取<p>Image ID.</p>
                     * @return ImageId <p>Image ID.</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>Image ID.</p>
                     * @param _imageId <p>Image ID.</p>
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
                     * 获取<p>Repository region</p>
                     * @return RegistryRegion <p>Repository region</p>
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置<p>Repository region</p>
                     * @param _registryRegion <p>Repository region</p>
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
                     * 获取<p>Image creation time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return ImageCreateTime <p>Image creation time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetImageCreateTime() const;

                    /**
                     * 设置<p>Image creation time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _imageCreateTime <p>Image creation time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
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
                     * 获取<p>id</p>
                     * @return Id <p>id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>id</p>
                     * @param _id <p>id</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Account name associated with the mirror</p>
                     * @return OwnerAccountName <p>Account name associated with the mirror</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>Account name associated with the mirror</p>
                     * @param _ownerAccountName <p>Account name associated with the mirror</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>uin of the associated account of the mirror</p>
                     * @return OwnerUin <p>uin of the associated account of the mirror</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>uin of the associated account of the mirror</p>
                     * @param _ownerUin <p>uin of the associated account of the mirror</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>appid of the account associated with the mirror</p>
                     * @return OwnerAppId <p>appid of the account associated with the mirror</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>appid of the account associated with the mirror</p>
                     * @param _ownerAppId <p>appid of the account associated with the mirror</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of low-risk vulnerabilities</p>
                     * @return LowLevelVulCnt <p>Number of low-risk vulnerabilities</p>
                     * 
                     */
                    uint64_t GetLowLevelVulCnt() const;

                    /**
                     * 设置<p>Number of low-risk vulnerabilities</p>
                     * @param _lowLevelVulCnt <p>Number of low-risk vulnerabilities</p>
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
                     * 获取<p>Medium-risk vulnerability count</p>
                     * @return MediumLevelVulCnt <p>Medium-risk vulnerability count</p>
                     * 
                     */
                    uint64_t GetMediumLevelVulCnt() const;

                    /**
                     * 设置<p>Medium-risk vulnerability count</p>
                     * @param _mediumLevelVulCnt <p>Medium-risk vulnerability count</p>
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
                     * 获取<p>Number of high-risk vulnerabilities</p>
                     * @return HighLevelVulCnt <p>Number of high-risk vulnerabilities</p>
                     * 
                     */
                    uint64_t GetHighLevelVulCnt() const;

                    /**
                     * 设置<p>Number of high-risk vulnerabilities</p>
                     * @param _highLevelVulCnt <p>Number of high-risk vulnerabilities</p>
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
                     * 获取<p>Number of critical risk vulnerabilities</p>
                     * @return CriticalLevelVulCnt <p>Number of critical risk vulnerabilities</p>
                     * 
                     */
                    uint64_t GetCriticalLevelVulCnt() const;

                    /**
                     * 设置<p>Number of critical risk vulnerabilities</p>
                     * @param _criticalLevelVulCnt <p>Number of critical risk vulnerabilities</p>
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
                     * 获取<p>Number of low-risk trojans</p>
                     * @return LowLevelVirusCnt <p>Number of low-risk trojans</p>
                     * 
                     */
                    uint64_t GetLowLevelVirusCnt() const;

                    /**
                     * 设置<p>Number of low-risk trojans</p>
                     * @param _lowLevelVirusCnt <p>Number of low-risk trojans</p>
                     * 
                     */
                    void SetLowLevelVirusCnt(const uint64_t& _lowLevelVirusCnt);

                    /**
                     * 判断参数 LowLevelVirusCnt 是否已赋值
                     * @return LowLevelVirusCnt 是否已赋值
                     * 
                     */
                    bool LowLevelVirusCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of medium-risk trojans</p>
                     * @return MediumLevelVirusCnt <p>Number of medium-risk trojans</p>
                     * 
                     */
                    uint64_t GetMediumLevelVirusCnt() const;

                    /**
                     * 设置<p>Number of medium-risk trojans</p>
                     * @param _mediumLevelVirusCnt <p>Number of medium-risk trojans</p>
                     * 
                     */
                    void SetMediumLevelVirusCnt(const uint64_t& _mediumLevelVirusCnt);

                    /**
                     * 判断参数 MediumLevelVirusCnt 是否已赋值
                     * @return MediumLevelVirusCnt 是否已赋值
                     * 
                     */
                    bool MediumLevelVirusCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of high-risk trojans</p>
                     * @return HighLevelVirusCnt <p>Number of high-risk trojans</p>
                     * 
                     */
                    uint64_t GetHighLevelVirusCnt() const;

                    /**
                     * 设置<p>Number of high-risk trojans</p>
                     * @param _highLevelVirusCnt <p>Number of high-risk trojans</p>
                     * 
                     */
                    void SetHighLevelVirusCnt(const uint64_t& _highLevelVirusCnt);

                    /**
                     * 判断参数 HighLevelVirusCnt 是否已赋值
                     * @return HighLevelVirusCnt 是否已赋值
                     * 
                     */
                    bool HighLevelVirusCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of severe trojans</p>
                     * @return CriticalLevelVirusCnt <p>Number of severe trojans</p>
                     * 
                     */
                    uint64_t GetCriticalLevelVirusCnt() const;

                    /**
                     * 设置<p>Number of severe trojans</p>
                     * @param _criticalLevelVirusCnt <p>Number of severe trojans</p>
                     * 
                     */
                    void SetCriticalLevelVirusCnt(const uint64_t& _criticalLevelVirusCnt);

                    /**
                     * 判断参数 CriticalLevelVirusCnt 是否已赋值
                     * @return CriticalLevelVirusCnt 是否已赋值
                     * 
                     */
                    bool CriticalLevelVirusCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of emergency vulnerabilities</p>
                     * @return EmergencyVulCnt <p>Number of emergency vulnerabilities</p>
                     * 
                     */
                    uint64_t GetEmergencyVulCnt() const;

                    /**
                     * 设置<p>Number of emergency vulnerabilities</p>
                     * @param _emergencyVulCnt <p>Number of emergency vulnerabilities</p>
                     * 
                     */
                    void SetEmergencyVulCnt(const uint64_t& _emergencyVulCnt);

                    /**
                     * 判断参数 EmergencyVulCnt 是否已赋值
                     * @return EmergencyVulCnt 是否已赋值
                     * 
                     */
                    bool EmergencyVulCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of low-risk sensitive data items</p>
                     * @return LowLevelSensitiveCnt <p>Number of low-risk sensitive data items</p>
                     * 
                     */
                    uint64_t GetLowLevelSensitiveCnt() const;

                    /**
                     * 设置<p>Number of low-risk sensitive data items</p>
                     * @param _lowLevelSensitiveCnt <p>Number of low-risk sensitive data items</p>
                     * 
                     */
                    void SetLowLevelSensitiveCnt(const uint64_t& _lowLevelSensitiveCnt);

                    /**
                     * 判断参数 LowLevelSensitiveCnt 是否已赋值
                     * @return LowLevelSensitiveCnt 是否已赋值
                     * 
                     */
                    bool LowLevelSensitiveCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of medium-risk sensitive data items</p>
                     * @return MediumLevelSensitiveCnt <p>Number of medium-risk sensitive data items</p>
                     * 
                     */
                    uint64_t GetMediumLevelSensitiveCnt() const;

                    /**
                     * 设置<p>Number of medium-risk sensitive data items</p>
                     * @param _mediumLevelSensitiveCnt <p>Number of medium-risk sensitive data items</p>
                     * 
                     */
                    void SetMediumLevelSensitiveCnt(const uint64_t& _mediumLevelSensitiveCnt);

                    /**
                     * 判断参数 MediumLevelSensitiveCnt 是否已赋值
                     * @return MediumLevelSensitiveCnt 是否已赋值
                     * 
                     */
                    bool MediumLevelSensitiveCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of high-risk sensitive data items</p>
                     * @return HighLevelSensitiveCnt <p>Number of high-risk sensitive data items</p>
                     * 
                     */
                    uint64_t GetHighLevelSensitiveCnt() const;

                    /**
                     * 设置<p>Number of high-risk sensitive data items</p>
                     * @param _highLevelSensitiveCnt <p>Number of high-risk sensitive data items</p>
                     * 
                     */
                    void SetHighLevelSensitiveCnt(const uint64_t& _highLevelSensitiveCnt);

                    /**
                     * 判断参数 HighLevelSensitiveCnt 是否已赋值
                     * @return HighLevelSensitiveCnt 是否已赋值
                     * 
                     */
                    bool HighLevelSensitiveCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of critical sensitive data items</p>
                     * @return CriticalLevelSensitiveCnt <p>Number of critical sensitive data items</p>
                     * 
                     */
                    uint64_t GetCriticalLevelSensitiveCnt() const;

                    /**
                     * 设置<p>Number of critical sensitive data items</p>
                     * @param _criticalLevelSensitiveCnt <p>Number of critical sensitive data items</p>
                     * 
                     */
                    void SetCriticalLevelSensitiveCnt(const uint64_t& _criticalLevelSensitiveCnt);

                    /**
                     * 判断参数 CriticalLevelSensitiveCnt 是否已赋值
                     * @return CriticalLevelSensitiveCnt 是否已赋值
                     * 
                     */
                    bool CriticalLevelSensitiveCntHasBeenSet() const;

                private:

                    /**
                     * <p>Image digests.</p>
                     */
                    std::string m_imageDigest;
                    bool m_imageDigestHasBeenSet;

                    /**
                     * <p>Repository address</p>
                     */
                    std::string m_imageRepoAddress;
                    bool m_imageRepoAddressHasBeenSet;

                    /**
                     * <p>Repository type</p>
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * <p>Image name.</p>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * <p>Image tag</p>
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * <p>Last scan time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * <p>Scan status</p><p>Enumeration values:</p><ul><li>0: Initial state</li><li>1: Issued</li><li>2: Scanning</li><li>3: Scan complete</li><li>4: Scan timeout</li><li>5: Scan failure</li></ul>
                     */
                    uint64_t m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * <p>Number of vulnerabilities</p>
                     */
                    uint64_t m_vulCnt;
                    bool m_vulCntHasBeenSet;

                    /**
                     * <p>Number of Trojans</p>
                     */
                    uint64_t m_virusCnt;
                    bool m_virusCntHasBeenSet;

                    /**
                     * <p>Number of sensitive information entries.</p>
                     */
                    uint64_t m_sensitiveCnt;
                    bool m_sensitiveCntHasBeenSet;

                    /**
                     * <p>Repository instance id.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Image repository name</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Namespace.</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>Whether to authorize.</p>
                     */
                    uint64_t m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                    /**
                     * <p>Image size.</p>
                     */
                    uint64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * <p>Image ID.</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>Repository region</p>
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * <p>Image creation time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_imageCreateTime;
                    bool m_imageCreateTimeHasBeenSet;

                    /**
                     * <p>id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Account name associated with the mirror</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>uin of the associated account of the mirror</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>appid of the account associated with the mirror</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>Number of low-risk vulnerabilities</p>
                     */
                    uint64_t m_lowLevelVulCnt;
                    bool m_lowLevelVulCntHasBeenSet;

                    /**
                     * <p>Medium-risk vulnerability count</p>
                     */
                    uint64_t m_mediumLevelVulCnt;
                    bool m_mediumLevelVulCntHasBeenSet;

                    /**
                     * <p>Number of high-risk vulnerabilities</p>
                     */
                    uint64_t m_highLevelVulCnt;
                    bool m_highLevelVulCntHasBeenSet;

                    /**
                     * <p>Number of critical risk vulnerabilities</p>
                     */
                    uint64_t m_criticalLevelVulCnt;
                    bool m_criticalLevelVulCntHasBeenSet;

                    /**
                     * <p>Number of low-risk trojans</p>
                     */
                    uint64_t m_lowLevelVirusCnt;
                    bool m_lowLevelVirusCntHasBeenSet;

                    /**
                     * <p>Number of medium-risk trojans</p>
                     */
                    uint64_t m_mediumLevelVirusCnt;
                    bool m_mediumLevelVirusCntHasBeenSet;

                    /**
                     * <p>Number of high-risk trojans</p>
                     */
                    uint64_t m_highLevelVirusCnt;
                    bool m_highLevelVirusCntHasBeenSet;

                    /**
                     * <p>Number of severe trojans</p>
                     */
                    uint64_t m_criticalLevelVirusCnt;
                    bool m_criticalLevelVirusCntHasBeenSet;

                    /**
                     * <p>Number of emergency vulnerabilities</p>
                     */
                    uint64_t m_emergencyVulCnt;
                    bool m_emergencyVulCntHasBeenSet;

                    /**
                     * <p>Number of low-risk sensitive data items</p>
                     */
                    uint64_t m_lowLevelSensitiveCnt;
                    bool m_lowLevelSensitiveCntHasBeenSet;

                    /**
                     * <p>Number of medium-risk sensitive data items</p>
                     */
                    uint64_t m_mediumLevelSensitiveCnt;
                    bool m_mediumLevelSensitiveCntHasBeenSet;

                    /**
                     * <p>Number of high-risk sensitive data items</p>
                     */
                    uint64_t m_highLevelSensitiveCnt;
                    bool m_highLevelSensitiveCntHasBeenSet;

                    /**
                     * <p>Number of critical sensitive data items</p>
                     */
                    uint64_t m_criticalLevelSensitiveCnt;
                    bool m_criticalLevelSensitiveCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSETDETAIL_H_
