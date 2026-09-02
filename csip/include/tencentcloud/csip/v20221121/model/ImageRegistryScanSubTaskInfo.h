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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYSCANSUBTASKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYSCANSUBTASKINFO_H_

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
                * Subtask information of image repository scanning
                */
                class ImageRegistryScanSubTaskInfo : public AbstractModel
                {
                public:
                    ImageRegistryScanSubTaskInfo();
                    ~ImageRegistryScanSubTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task sub-id</p>
                     * @return SubTaskId <p>Task sub-id</p>
                     * 
                     */
                    uint64_t GetSubTaskId() const;

                    /**
                     * 设置<p>Task sub-id</p>
                     * @param _subTaskId <p>Task sub-id</p>
                     * 
                     */
                    void SetSubTaskId(const uint64_t& _subTaskId);

                    /**
                     * 判断参数 SubTaskId 是否已赋值
                     * @return SubTaskId 是否已赋值
                     * 
                     */
                    bool SubTaskIdHasBeenSet() const;

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
                     * 获取<p>Task status</p><p>Enumeration values:</p><ul><li>FINISHED: Scan complete</li><li>SCANNING: Scanning</li><li>CANCELLED: Canceled</li><li>SCAN_EXCEPTION: Scan exception</li></ul>
                     * @return ScanStatus <p>Task status</p><p>Enumeration values:</p><ul><li>FINISHED: Scan complete</li><li>SCANNING: Scanning</li><li>CANCELLED: Canceled</li><li>SCAN_EXCEPTION: Scan exception</li></ul>
                     * 
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 设置<p>Task status</p><p>Enumeration values:</p><ul><li>FINISHED: Scan complete</li><li>SCANNING: Scanning</li><li>CANCELLED: Canceled</li><li>SCAN_EXCEPTION: Scan exception</li></ul>
                     * @param _scanStatus <p>Task status</p><p>Enumeration values:</p><ul><li>FINISHED: Scan complete</li><li>SCANNING: Scanning</li><li>CANCELLED: Canceled</li><li>SCAN_EXCEPTION: Scan exception</li></ul>
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
                     * 获取<p>Failure reason</p>
                     * @return FailedReason <p>Failure reason</p>
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置<p>Failure reason</p>
                     * @param _failedReason <p>Failure reason</p>
                     * 
                     */
                    void SetFailedReason(const std::string& _failedReason);

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                    /**
                     * 获取<p>Solution.</p>
                     * @return Solution <p>Solution.</p>
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置<p>Solution.</p>
                     * @param _solution <p>Solution.</p>
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
                     * 获取<p>Account name of the scheduled task</p>
                     * @return OwnerAccountName <p>Account name of the scheduled task</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>Account name of the scheduled task</p>
                     * @param _ownerAccountName <p>Account name of the scheduled task</p>
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
                     * 获取<p>uin of the account associated with the scheduled task</p>
                     * @return OwnerUin <p>uin of the account associated with the scheduled task</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>uin of the account associated with the scheduled task</p>
                     * @param _ownerUin <p>uin of the account associated with the scheduled task</p>
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
                     * 获取<p>appid of the account associated with the scheduled task</p>
                     * @return OwnerAppId <p>appid of the account associated with the scheduled task</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>appid of the account associated with the scheduled task</p>
                     * @param _ownerAppId <p>appid of the account associated with the scheduled task</p>
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
                     * 获取<p>Whether it is the newest image</p>
                     * @return IsLatestImage <p>Whether it is the newest image</p>
                     * 
                     */
                    bool GetIsLatestImage() const;

                    /**
                     * 设置<p>Whether it is the newest image</p>
                     * @param _isLatestImage <p>Whether it is the newest image</p>
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
                     * 获取<p>Image address</p>
                     * @return ImageRepoAddress <p>Image address</p>
                     * 
                     */
                    std::string GetImageRepoAddress() const;

                    /**
                     * 设置<p>Image address</p>
                     * @param _imageRepoAddress <p>Image address</p>
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
                     * 获取<p>Image repository type</p>
                     * @return RegistryType <p>Image repository type</p>
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置<p>Image repository type</p>
                     * @param _registryType <p>Image repository type</p>
                     * 
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Task sub-id</p>
                     */
                    uint64_t m_subTaskId;
                    bool m_subTaskIdHasBeenSet;

                    /**
                     * <p>Image ID.</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

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
                     * <p>Task status</p><p>Enumeration values:</p><ul><li>FINISHED: Scan complete</li><li>SCANNING: Scanning</li><li>CANCELLED: Canceled</li><li>SCAN_EXCEPTION: Scan exception</li></ul>
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * <p>Failure reason</p>
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * <p>Solution.</p>
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * <p>Account name of the scheduled task</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>uin of the account associated with the scheduled task</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>appid of the account associated with the scheduled task</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>Whether it is the newest image</p>
                     */
                    bool m_isLatestImage;
                    bool m_isLatestImageHasBeenSet;

                    /**
                     * <p>Image address</p>
                     */
                    std::string m_imageRepoAddress;
                    bool m_imageRepoAddressHasBeenSet;

                    /**
                     * <p>Image repository type</p>
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYSCANSUBTASKINFO_H_
