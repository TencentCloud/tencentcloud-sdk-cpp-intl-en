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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEPROGRESS_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEPROGRESS_H_

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
                * Basic image information
                */
                class ImageProgress : public AbstractModel
                {
                public:
                    ImageProgress();
                    ~ImageProgress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Repository type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegistryType Repository type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置Repository type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _registryType Repository type
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Image repository address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageRepoAddress Image repository address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageRepoAddress() const;

                    /**
                     * 设置Image repository address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageRepoAddress Image repository address
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceName Instance name
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Namespace Namespace
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _namespace Namespace
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Repository name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageName Repository name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Repository name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageName Repository name
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageTag Image tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置Image tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageTag Image tag
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Image scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanStatus Image scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 设置Image scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanStatus Image scanning status
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取CVE scanning progress of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CveProgress CVE scanning progress of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCveProgress() const;

                    /**
                     * 设置CVE scanning progress of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cveProgress CVE scanning progress of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCveProgress(const uint64_t& _cveProgress);

                    /**
                     * 判断参数 CveProgress 是否已赋值
                     * @return CveProgress 是否已赋值
                     * 
                     */
                    bool CveProgressHasBeenSet() const;

                    /**
                     * 获取Sensitive data scanning progress of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskProgress Sensitive data scanning progress of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRiskProgress() const;

                    /**
                     * 设置Sensitive data scanning progress of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _riskProgress Sensitive data scanning progress of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRiskProgress(const uint64_t& _riskProgress);

                    /**
                     * 判断参数 RiskProgress 是否已赋值
                     * @return RiskProgress 是否已赋值
                     * 
                     */
                    bool RiskProgressHasBeenSet() const;

                    /**
                     * 获取Trojan scanning progress of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VirusProgress Trojan scanning progress of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVirusProgress() const;

                    /**
                     * 设置Trojan scanning progress of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _virusProgress Trojan scanning progress of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVirusProgress(const uint64_t& _virusProgress);

                    /**
                     * 判断参数 VirusProgress 是否已赋值
                     * @return VirusProgress 是否已赋值
                     * 
                     */
                    bool VirusProgressHasBeenSet() const;

                private:

                    /**
                     * Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Repository type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * Image repository address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageRepoAddress;
                    bool m_imageRepoAddressHasBeenSet;

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
                     * Image scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * CVE scanning progress of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cveProgress;
                    bool m_cveProgressHasBeenSet;

                    /**
                     * Sensitive data scanning progress of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_riskProgress;
                    bool m_riskProgressHasBeenSet;

                    /**
                     * Trojan scanning progress of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_virusProgress;
                    bool m_virusProgressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEPROGRESS_H_
