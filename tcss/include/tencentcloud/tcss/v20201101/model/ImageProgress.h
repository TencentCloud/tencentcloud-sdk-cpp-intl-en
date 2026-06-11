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
                     * 获取Image id
                     * @return ImageId Image id
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image id
                     * @param _imageId Image id
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
                     * 获取repository type
                     * @return RegistryType repository type
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置repository type
                     * @param _registryType repository type
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
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
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
                     * 获取repository name
                     * @return ImageName repository name
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置repository name
                     * @param _imageName repository name
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
                     * 获取Image scan status
                     * @return ScanStatus Image scan status
                     * 
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 设置Image scan status
                     * @param _scanStatus Image scan status
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
                     * 获取Mirror cve scan progress
                     * @return CveProgress Mirror cve scan progress
                     * 
                     */
                    uint64_t GetCveProgress() const;

                    /**
                     * 设置Mirror cve scan progress
                     * @param _cveProgress Mirror cve scan progress
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
                     * 获取Mirror sensitivity scan progress
                     * @return RiskProgress Mirror sensitivity scan progress
                     * 
                     */
                    uint64_t GetRiskProgress() const;

                    /**
                     * 设置Mirror sensitivity scan progress
                     * @param _riskProgress Mirror sensitivity scan progress
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
                     * 获取Trojan mirror scan progress
                     * @return VirusProgress Trojan mirror scan progress
                     * 
                     */
                    uint64_t GetVirusProgress() const;

                    /**
                     * 设置Trojan mirror scan progress
                     * @param _virusProgress Trojan mirror scan progress
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
                     * Image id
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * repository type
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * Image repository address
                     */
                    std::string m_imageRepoAddress;
                    bool m_imageRepoAddressHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * repository name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Image tag
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * Image scan status
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * Mirror cve scan progress
                     */
                    uint64_t m_cveProgress;
                    bool m_cveProgressHasBeenSet;

                    /**
                     * Mirror sensitivity scan progress
                     */
                    uint64_t m_riskProgress;
                    bool m_riskProgressHasBeenSet;

                    /**
                     * Trojan mirror scan progress
                     */
                    uint64_t m_virusProgress;
                    bool m_virusProgressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEPROGRESS_H_
