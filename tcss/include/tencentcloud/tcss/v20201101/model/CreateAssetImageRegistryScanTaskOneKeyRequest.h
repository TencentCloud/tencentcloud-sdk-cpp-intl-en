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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKONEKEYREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKONEKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateAssetImageRegistryScanTaskOneKey request structure.
                */
                class CreateAssetImageRegistryScanTaskOneKeyRequest : public AbstractModel
                {
                public:
                    CreateAssetImageRegistryScanTaskOneKeyRequest();
                    ~CreateAssetImageRegistryScanTaskOneKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to scan all images
                     * @return All Whether to scan all images
                     * @deprecated
                     */
                    bool GetAll() const;

                    /**
                     * 设置Whether to scan all images
                     * @param _all Whether to scan all images
                     * @deprecated
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * @deprecated
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取List of scanned images
                     * @return Images List of scanned images
                     * 
                     */
                    std::vector<ImageInfo> GetImages() const;

                    /**
                     * 设置List of scanned images
                     * @param _images List of scanned images
                     * 
                     */
                    void SetImages(const std::vector<ImageInfo>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取Array of scan types
                     * @return ScanType Array of scan types
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置Array of scan types
                     * @param _scanType Array of scan types
                     * 
                     */
                    void SetScanType(const std::vector<std::string>& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取List of IDs of scanned images
                     * @return Id List of IDs of scanned images
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 设置List of IDs of scanned images
                     * @param _id List of IDs of scanned images
                     * 
                     */
                    void SetId(const std::vector<uint64_t>& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取List of image IDs excluded from scanning.
                     * @return ExcludeIDs List of image IDs excluded from scanning.
                     * 
                     */
                    std::vector<uint64_t> GetExcludeIDs() const;

                    /**
                     * 设置List of image IDs excluded from scanning.
                     * @param _excludeIDs List of image IDs excluded from scanning.
                     * 
                     */
                    void SetExcludeIDs(const std::vector<uint64_t>& _excludeIDs);

                    /**
                     * 判断参数 ExcludeIDs 是否已赋值
                     * @return ExcludeIDs 是否已赋值
                     * 
                     */
                    bool ExcludeIDsHasBeenSet() const;

                    /**
                     * 获取
                     * @return IsLatest 
                     * 
                     */
                    bool GetIsLatest() const;

                    /**
                     * 设置
                     * @param _isLatest 
                     * 
                     */
                    void SetIsLatest(const bool& _isLatest);

                    /**
                     * 判断参数 IsLatest 是否已赋值
                     * @return IsLatest 是否已赋值
                     * 
                     */
                    bool IsLatestHasBeenSet() const;

                    /**
                     * 获取
                     * @return ScanScope 
                     * 
                     */
                    uint64_t GetScanScope() const;

                    /**
                     * 设置
                     * @param _scanScope 
                     * 
                     */
                    void SetScanScope(const uint64_t& _scanScope);

                    /**
                     * 判断参数 ScanScope 是否已赋值
                     * @return ScanScope 是否已赋值
                     * 
                     */
                    bool ScanScopeHasBeenSet() const;

                    /**
                     * 获取
                     * @return RegistryType 
                     * 
                     */
                    std::vector<std::string> GetRegistryType() const;

                    /**
                     * 设置
                     * @param _registryType 
                     * 
                     */
                    void SetRegistryType(const std::vector<std::string>& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Namespace 
                     * 
                     */
                    std::vector<std::string> GetNamespace() const;

                    /**
                     * 设置
                     * @param _namespace 
                     * 
                     */
                    void SetNamespace(const std::vector<std::string>& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取
                     * @return ContainerRunning 
                     * 
                     */
                    bool GetContainerRunning() const;

                    /**
                     * 设置
                     * @param _containerRunning 
                     * 
                     */
                    void SetContainerRunning(const bool& _containerRunning);

                    /**
                     * 判断参数 ContainerRunning 是否已赋值
                     * @return ContainerRunning 是否已赋值
                     * 
                     */
                    bool ContainerRunningHasBeenSet() const;

                    /**
                     * 获取
                     * @return Timeout 
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置
                     * @param _timeout 
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * Whether to scan all images
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * List of scanned images
                     */
                    std::vector<ImageInfo> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * Array of scan types
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * List of IDs of scanned images
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * List of image IDs excluded from scanning.
                     */
                    std::vector<uint64_t> m_excludeIDs;
                    bool m_excludeIDsHasBeenSet;

                    /**
                     * 
                     */
                    bool m_isLatest;
                    bool m_isLatestHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_scanScope;
                    bool m_scanScopeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 
                     */
                    bool m_containerRunning;
                    bool m_containerRunningHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKONEKEYREQUEST_H_
